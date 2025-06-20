#include "PulseAudioBackend.h"
#include <QDebug>

PulseAudioBackend::PulseAudioBackend(QObject *parent)
    : QObject(parent)
    , m_mainloop(nullptr)
    , m_mainloopApi(nullptr)
    , m_context(nullptr)
    , m_refreshTimer(new QTimer(this))
    , m_connected(false)
{
    connect(m_refreshTimer, &QTimer::timeout, this, &PulseAudioBackend::onTimerTimeout);
    m_refreshTimer->setInterval(1000); // Refresh every second
}

PulseAudioBackend::~PulseAudioBackend()
{
    cleanup();
}

bool PulseAudioBackend::initialize()
{
    // Create main loop
    m_mainloop = pa_mainloop_new();
    if (!m_mainloop) {
        qCritical() << "Failed to create PulseAudio mainloop";
        return false;
    }

    m_mainloopApi = pa_mainloop_get_api(m_mainloop);

    // Create context
    m_context = pa_context_new(m_mainloopApi, "Open Audio Router");
    if (!m_context) {
        qCritical() << "Failed to create PulseAudio context";
        cleanup();
        return false;
    }

    // Set context state callback
    pa_context_set_state_callback(m_context, contextStateCallback, this);

    // Connect to PulseAudio server
    if (pa_context_connect(m_context, nullptr, PA_CONTEXT_NOFLAGS, nullptr) < 0) {
        qCritical() << "Failed to connect to PulseAudio server";
        cleanup();
        return false;
    }

    // Wait for connection
    int ret;
    pa_context_state_t state;
    while ((state = pa_context_get_state(m_context)) != PA_CONTEXT_READY) {
        if (state == PA_CONTEXT_FAILED || state == PA_CONTEXT_TERMINATED) {
            qCritical() << "PulseAudio connection failed";
            cleanup();
            return false;
        }
        
        if (pa_mainloop_iterate(m_mainloop, 1, &ret) < 0) {
            qCritical() << "PulseAudio mainloop iteration failed";
            cleanup();
            return false;
        }
    }

    // Subscribe to events
    pa_context_set_subscribe_callback(m_context, subscriptionCallback, this);
    pa_operation *op = pa_context_subscribe(m_context, 
        (pa_subscription_mask_t)(PA_SUBSCRIPTION_MASK_SINK | 
                                PA_SUBSCRIPTION_MASK_SOURCE |
                                PA_SUBSCRIPTION_MASK_SINK_INPUT |
                                PA_SUBSCRIPTION_MASK_SOURCE_OUTPUT |
                                PA_SUBSCRIPTION_MASK_SERVER), nullptr, nullptr);
    if (op) {
        pa_operation_unref(op);
    }

    m_connected = true;
    emit connectionStatusChanged(true);

    // Initial refresh
    refreshDevices();
    refreshApplications();

    // Start refresh timer
    m_refreshTimer->start();

    return true;
}

void PulseAudioBackend::cleanup()
{
    m_refreshTimer->stop();

    if (m_context) {
        pa_context_disconnect(m_context);
        pa_context_unref(m_context);
        m_context = nullptr;
    }

    if (m_mainloop) {
        pa_mainloop_free(m_mainloop);
        m_mainloop = nullptr;
    }

    m_mainloopApi = nullptr;
    m_connected = false;

    // Clean up device and application objects
    qDeleteAll(m_devices);
    m_devices.clear();
    qDeleteAll(m_applications);
    m_applications.clear();

    emit connectionStatusChanged(false);
}

void PulseAudioBackend::setDefaultSink(uint32_t deviceIndex)
{
    if (!m_connected) return;

    QString sinkName;
    if (m_devices.contains(deviceIndex)) {
        sinkName = m_devices[deviceIndex]->name();
    }

    if (!sinkName.isEmpty()) {
        pa_operation *op = pa_context_set_default_sink(m_context, sinkName.toUtf8().constData(), nullptr, nullptr);
        if (op) {
            pa_operation_unref(op);
        }
    }
}

void PulseAudioBackend::setDefaultSource(uint32_t deviceIndex)
{
    if (!m_connected) return;

    QString sourceName;
    if (m_devices.contains(deviceIndex)) {
        sourceName = m_devices[deviceIndex]->name();
    }

    if (!sourceName.isEmpty()) {
        pa_operation *op = pa_context_set_default_source(m_context, sourceName.toUtf8().constData(), nullptr, nullptr);
        if (op) {
            pa_operation_unref(op);
        }
    }
}

void PulseAudioBackend::setDeviceVolume(uint32_t deviceIndex, bool isSource, double volume)
{
    if (!m_connected) return;

    if (m_devices.contains(deviceIndex)) {
        AudioDevice *device = m_devices[deviceIndex];
        pa_cvolume cvolume = linearToVolume(volume, 2); // Assume stereo

        pa_operation *op;
        if (isSource) {
            op = pa_context_set_source_volume_by_index(m_context, deviceIndex, &cvolume, nullptr, nullptr);
        } else {
            op = pa_context_set_sink_volume_by_index(m_context, deviceIndex, &cvolume, nullptr, nullptr);
        }

        if (op) {
            pa_operation_unref(op);
        }
    }
}

void PulseAudioBackend::setDeviceMute(uint32_t deviceIndex, bool isSource, bool muted)
{
    if (!m_connected) return;

    pa_operation *op;
    if (isSource) {
        op = pa_context_set_source_mute_by_index(m_context, deviceIndex, muted ? 1 : 0, nullptr, nullptr);
    } else {
        op = pa_context_set_sink_mute_by_index(m_context, deviceIndex, muted ? 1 : 0, nullptr, nullptr);
    }

    if (op) {
        pa_operation_unref(op);
    }
}

void PulseAudioBackend::moveApplicationToDevice(uint32_t clientId, uint32_t deviceIndex, bool isSource)
{
    if (!m_connected) return;

    pa_operation *op;
    if (isSource) {
        // Move source output (input application) to source
        op = pa_context_move_source_output_by_index(m_context, clientId, deviceIndex, nullptr, nullptr);
    } else {
        // Move sink input (output application) to sink
        op = pa_context_move_sink_input_by_index(m_context, clientId, deviceIndex, nullptr, nullptr);
    }

    if (op) {
        pa_operation_unref(op);
    }
}

void PulseAudioBackend::setApplicationVolume(uint32_t clientId, double volume)
{
    if (!m_connected) return;

    if (!m_applications.contains(clientId)) {
        return;
    }

    pa_cvolume cvolume = linearToVolume(volume, 2); // Assume stereo

    pa_operation *op = pa_context_set_sink_input_volume(m_context, clientId, &cvolume, nullptr, nullptr);
    if (op) {
        pa_operation_unref(op);
    }
}

void PulseAudioBackend::setApplicationMute(uint32_t clientId, bool muted)
{
    if (!m_connected) return;

    pa_operation *op = pa_context_set_sink_input_mute(m_context, clientId, muted ? 1 : 0, nullptr, nullptr);
    if (op) {
        pa_operation_unref(op);
    }
}

void PulseAudioBackend::refreshDevices()
{
    if (!m_connected) return;

    pa_operation *op1 = pa_context_get_sink_info_list(m_context, sinkInfoCallback, this);
    if (op1) {
        pa_operation_unref(op1);
    }

    pa_operation *op2 = pa_context_get_source_info_list(m_context, sourceInfoCallback, this);
    if (op2) {
        pa_operation_unref(op2);
    }

    pa_operation *op3 = pa_context_get_server_info(m_context, serverInfoCallback, this);
    if (op3) {
        pa_operation_unref(op3);
    }
}

void PulseAudioBackend::refreshApplications()
{
    if (!m_connected) return;

    pa_operation *op1 = pa_context_get_sink_input_info_list(m_context, sinkInputInfoCallback, this);
    if (op1) {
        pa_operation_unref(op1);
    }

    pa_operation *op2 = pa_context_get_source_output_info_list(m_context, sourceOutputInfoCallback, this);
    if (op2) {
        pa_operation_unref(op2);
    }
}

void PulseAudioBackend::onTimerTimeout()
{
    if (m_connected) {
        // Process pending events
        int ret;
        while (pa_mainloop_iterate(m_mainloop, 0, &ret) > 0) {
            // Process events
        }
    }
}

// Static callback implementations
void PulseAudioBackend::contextStateCallback(pa_context *context, void *userdata)
{
    PulseAudioBackend *backend = static_cast<PulseAudioBackend*>(userdata);
    backend->handleContextStateChange(pa_context_get_state(context));
}

void PulseAudioBackend::sinkInfoCallback(pa_context *context, const pa_sink_info *info, int eol, void *userdata)
{
    if (eol) return;
    PulseAudioBackend *backend = static_cast<PulseAudioBackend*>(userdata);
    backend->handleSinkInfo(info);
}

void PulseAudioBackend::sourceInfoCallback(pa_context *context, const pa_source_info *info, int eol, void *userdata)
{
    if (eol) return;
    PulseAudioBackend *backend = static_cast<PulseAudioBackend*>(userdata);
    backend->handleSourceInfo(info);
}

void PulseAudioBackend::sinkInputInfoCallback(pa_context *context, const pa_sink_input_info *info, int eol, void *userdata)
{
    if (eol) return;
    PulseAudioBackend *backend = static_cast<PulseAudioBackend*>(userdata);
    backend->handleSinkInputInfo(info);
}

void PulseAudioBackend::sourceOutputInfoCallback(pa_context *context, const pa_source_output_info *info, int eol, void *userdata)
{
    if (eol) return;
    PulseAudioBackend *backend = static_cast<PulseAudioBackend*>(userdata);
    backend->handleSourceOutputInfo(info);
}

void PulseAudioBackend::serverInfoCallback(pa_context *context, const pa_server_info *info, void *userdata)
{
    PulseAudioBackend *backend = static_cast<PulseAudioBackend*>(userdata);
    backend->handleServerInfo(info);
}

void PulseAudioBackend::subscriptionCallback(pa_context *context, pa_subscription_event_type_t type, uint32_t index, void *userdata)
{
    PulseAudioBackend *backend = static_cast<PulseAudioBackend*>(userdata);
    backend->handleSubscriptionEvent(type, index);
}

// Helper method implementations
void PulseAudioBackend::handleContextStateChange(pa_context_state_t state)
{
    switch (state) {
        case PA_CONTEXT_READY:
            qDebug() << "PulseAudio context ready";
            break;
        case PA_CONTEXT_FAILED:
        case PA_CONTEXT_TERMINATED:
            qWarning() << "PulseAudio context failed or terminated";
            m_connected = false;
            emit connectionStatusChanged(false);
            break;
        default:
            break;
    }
}

void PulseAudioBackend::handleSinkInfo(const pa_sink_info *info)
{
    AudioDevice *device = m_devices.value(info->index);
    if (!device) {
        device = new AudioDevice(QString::fromUtf8(info->name), 
                                QString::fromUtf8(info->description), 
                                AudioDevice::Output, 
                                info->index, this);
        m_devices[info->index] = device;
        emit deviceAdded(device);
    }

    device->setName(QString::fromUtf8(info->name));
    device->setDescription(QString::fromUtf8(info->description));
    device->setVolume(volumeToLinear(&info->volume));
    device->setIsMuted(info->mute != 0);
    device->setIsDefault(QString::fromUtf8(info->name) == m_defaultSink);

    emit deviceUpdated(device);
}

void PulseAudioBackend::handleSourceInfo(const pa_source_info *info)
{
    // Skip monitor sources
    if (info->monitor_of_sink != PA_INVALID_INDEX) {
        return;
    }

    AudioDevice *device = m_devices.value(info->index);
    if (!device) {
        device = new AudioDevice(QString::fromUtf8(info->name), 
                                QString::fromUtf8(info->description), 
                                AudioDevice::Input, 
                                info->index, this);
        m_devices[info->index] = device;
        emit deviceAdded(device);
    }

    device->setName(QString::fromUtf8(info->name));
    device->setDescription(QString::fromUtf8(info->description));
    device->setVolume(volumeToLinear(&info->volume));
    device->setIsMuted(info->mute != 0);
    device->setIsDefault(QString::fromUtf8(info->name) == m_defaultSource);

    emit deviceUpdated(device);
}

void PulseAudioBackend::handleSinkInputInfo(const pa_sink_input_info *info)
{
    AudioApplication *app = m_applications.value(info->index);
    if (!app) {
        const char *appName = pa_proplist_gets(info->proplist, PA_PROP_APPLICATION_NAME);
        const char *processName = pa_proplist_gets(info->proplist, PA_PROP_APPLICATION_PROCESS_BINARY);
        
        app = new AudioApplication(
            appName ? QString::fromUtf8(appName) : "Unknown Application",
            processName ? QString::fromUtf8(processName) : "unknown",
            info->index, this);
        m_applications[info->index] = app;
        emit applicationAdded(app);
    }

    app->setVolume(volumeToLinear(&info->volume));
    app->setIsMuted(info->mute != 0);
    app->setDeviceIndex(info->sink);

    emit applicationUpdated(app);
}

void PulseAudioBackend::handleSourceOutputInfo(const pa_source_output_info *info)
{
    // Similar to sink input but for input applications
    AudioApplication *app = m_applications.value(info->index);
    if (!app) {
        const char *appName = pa_proplist_gets(info->proplist, PA_PROP_APPLICATION_NAME);
        const char *processName = pa_proplist_gets(info->proplist, PA_PROP_APPLICATION_PROCESS_BINARY);
        
        app = new AudioApplication(
            appName ? QString::fromUtf8(appName) : "Unknown Application",
            processName ? QString::fromUtf8(processName) : "unknown",
            info->index, this);
        m_applications[info->index] = app;
        emit applicationAdded(app);
    }

    app->setVolume(volumeToLinear(&info->volume));
    app->setIsMuted(info->mute != 0);
    app->setDeviceIndex(info->source);

    emit applicationUpdated(app);
}

void PulseAudioBackend::handleServerInfo(const pa_server_info *info)
{
    m_defaultSink = QString::fromUtf8(info->default_sink_name);
    m_defaultSource = QString::fromUtf8(info->default_source_name);

    // Update default status for all devices
    for (auto device : m_devices) {
        if (device->type() == AudioDevice::Output) {
            device->setIsDefault(device->name() == m_defaultSink);
        } else {
            device->setIsDefault(device->name() == m_defaultSource);
        }
    }
}

void PulseAudioBackend::handleSubscriptionEvent(pa_subscription_event_type_t type, uint32_t index)
{
    pa_subscription_event_type_t facility = (pa_subscription_event_type_t)(type & PA_SUBSCRIPTION_EVENT_FACILITY_MASK);
    pa_subscription_event_type_t operation = (pa_subscription_event_type_t)(type & PA_SUBSCRIPTION_EVENT_TYPE_MASK);

    if (operation == PA_SUBSCRIPTION_EVENT_REMOVE) {
        if (facility == PA_SUBSCRIPTION_EVENT_SINK || facility == PA_SUBSCRIPTION_EVENT_SOURCE) {
            if (m_devices.contains(index)) {
                delete m_devices[index];
                m_devices.remove(index);
                emit deviceRemoved(index);
            }
        } else if (facility == PA_SUBSCRIPTION_EVENT_SINK_INPUT || facility == PA_SUBSCRIPTION_EVENT_SOURCE_OUTPUT) {
            if (m_applications.contains(index)) {
                delete m_applications[index];
                m_applications.remove(index);
                emit applicationRemoved(index);
            }
        }
    } else {
        // Refresh the specific item
        if (facility == PA_SUBSCRIPTION_EVENT_SINK) {
            pa_operation *op = pa_context_get_sink_info_by_index(m_context, index, sinkInfoCallback, this);
            if (op) pa_operation_unref(op);
        } else if (facility == PA_SUBSCRIPTION_EVENT_SOURCE) {
            pa_operation *op = pa_context_get_source_info_by_index(m_context, index, sourceInfoCallback, this);
            if (op) pa_operation_unref(op);
        } else if (facility == PA_SUBSCRIPTION_EVENT_SINK_INPUT) {
            pa_operation *op = pa_context_get_sink_input_info(m_context, index, sinkInputInfoCallback, this);
            if (op) pa_operation_unref(op);
        } else if (facility == PA_SUBSCRIPTION_EVENT_SOURCE_OUTPUT) {
            pa_operation *op = pa_context_get_source_output_info(m_context, index, sourceOutputInfoCallback, this);
            if (op) pa_operation_unref(op);
        } else if (facility == PA_SUBSCRIPTION_EVENT_SERVER) {
            pa_operation *op = pa_context_get_server_info(m_context, serverInfoCallback, this);
            if (op) pa_operation_unref(op);
        }
    }
}

double PulseAudioBackend::volumeToLinear(const pa_cvolume *volume)
{
    if (!volume || volume->channels == 0) {
        return 0.0;
    }
    
    pa_volume_t avg = pa_cvolume_avg(volume);
    return (double)avg / (double)PA_VOLUME_NORM;
}

pa_cvolume PulseAudioBackend::linearToVolume(double linear, uint8_t channels)
{
    pa_cvolume volume;
    pa_volume_t paVolume = (pa_volume_t)(linear * PA_VOLUME_NORM);
    pa_cvolume_set(&volume, channels, paVolume);
    return volume;
}

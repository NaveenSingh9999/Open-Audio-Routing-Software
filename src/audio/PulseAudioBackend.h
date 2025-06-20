#pragma once

#include <QObject>
#include <QTimer>
#include <pulse/pulseaudio.h>
#include "utils/AudioDevice.h"
#include "utils/AudioApplication.h"

class PulseAudioBackend : public QObject
{
    Q_OBJECT

public:
    explicit PulseAudioBackend(QObject *parent = nullptr);
    ~PulseAudioBackend();

    bool initialize();
    void cleanup();

    // Device operations
    Q_INVOKABLE void setDefaultSink(uint32_t deviceIndex);
    Q_INVOKABLE void setDefaultSource(uint32_t deviceIndex);
    Q_INVOKABLE void setDeviceVolume(uint32_t deviceIndex, bool isSource, double volume);
    Q_INVOKABLE void setDeviceMute(uint32_t deviceIndex, bool isSource, bool muted);

    // Application operations
    Q_INVOKABLE void moveApplicationToDevice(uint32_t clientId, uint32_t deviceIndex, bool isSource);
    Q_INVOKABLE void setApplicationVolume(uint32_t clientId, double volume);
    Q_INVOKABLE void setApplicationMute(uint32_t clientId, bool muted);

    // Information retrieval
    void refreshDevices();
    void refreshApplications();

signals:
    void deviceAdded(AudioDevice *device);
    void deviceRemoved(uint32_t deviceIndex);
    void deviceUpdated(AudioDevice *device);
    void applicationAdded(AudioApplication *app);
    void applicationRemoved(uint32_t clientId);
    void applicationUpdated(AudioApplication *app);
    void connectionStatusChanged(bool connected);

private slots:
    void onTimerTimeout();

private:
    // PulseAudio callbacks
    static void contextStateCallback(pa_context *context, void *userdata);
    static void sinkInfoCallback(pa_context *context, const pa_sink_info *info, int eol, void *userdata);
    static void sourceInfoCallback(pa_context *context, const pa_source_info *info, int eol, void *userdata);
    static void sinkInputInfoCallback(pa_context *context, const pa_sink_input_info *info, int eol, void *userdata);
    static void sourceOutputInfoCallback(pa_context *context, const pa_source_output_info *info, int eol, void *userdata);
    static void serverInfoCallback(pa_context *context, const pa_server_info *info, void *userdata);
    static void subscriptionCallback(pa_context *context, pa_subscription_event_type_t type, uint32_t index, void *userdata);

    // Helper methods
    void handleContextStateChange(pa_context_state_t state);
    void handleSinkInfo(const pa_sink_info *info);
    void handleSourceInfo(const pa_source_info *info);
    void handleSinkInputInfo(const pa_sink_input_info *info);
    void handleSourceOutputInfo(const pa_source_output_info *info);
    void handleServerInfo(const pa_server_info *info);
    void handleSubscriptionEvent(pa_subscription_event_type_t type, uint32_t index);

    double volumeToLinear(const pa_cvolume *volume);
    pa_cvolume linearToVolume(double linear, uint8_t channels);

    pa_mainloop *m_mainloop;
    pa_mainloop_api *m_mainloopApi;
    pa_context *m_context;
    QTimer *m_refreshTimer;
    bool m_connected;
    QString m_defaultSink;
    QString m_defaultSource;

    QHash<uint32_t, AudioDevice*> m_devices;
    QHash<uint32_t, AudioApplication*> m_applications;
};

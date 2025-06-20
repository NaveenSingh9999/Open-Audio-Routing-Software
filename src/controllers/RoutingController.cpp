#include "RoutingController.h"
#include "audio/PulseAudioBackend.h"
#include <QDebug>

RoutingController::RoutingController(QObject *parent)
    : QObject(parent)
    , m_backend(nullptr)
{
}

void RoutingController::routeApplicationToDevice(AudioApplication *app, AudioDevice *device)
{
    if (!app || !device || !m_backend) {
        return;
    }

    bool isSource = (device->type() == AudioDevice::Input);
    m_backend->moveApplicationToDevice(app->clientId(), device->index(), isSource);

    emit applicationRouted(app, device);
    qDebug() << "Routed application" << app->name() << "to device" << device->description();
}

void RoutingController::setApplicationVolume(AudioApplication *app, double volume)
{
    if (!app || !m_backend) {
        return;
    }

    m_backend->setApplicationVolume(app->clientId(), volume);
}

void RoutingController::setApplicationMute(AudioApplication *app, bool muted)
{
    if (!app || !m_backend) {
        return;
    }

    m_backend->setApplicationMute(app->clientId(), muted);
}

void RoutingController::refreshApplications()
{
    if (m_backend) {
        m_backend->refreshApplications();
    }
}

void RoutingController::setBackend(PulseAudioBackend *backend)
{
    m_backend = backend;
}

#pragma once

#include <QObject>
#include <QQmlEngine>
#include "utils/AudioApplication.h"
#include "utils/AudioDevice.h"

class PulseAudioBackend;

class RoutingController : public QObject
{
    Q_OBJECT

public:
    explicit RoutingController(QObject *parent = nullptr);

    Q_INVOKABLE void routeApplicationToDevice(AudioApplication *app, AudioDevice *device);
    Q_INVOKABLE void setApplicationVolume(AudioApplication *app, double volume);
    Q_INVOKABLE void setApplicationMute(AudioApplication *app, bool muted);
    Q_INVOKABLE void refreshApplications();

    void setBackend(PulseAudioBackend *backend);

signals:
    void applicationRouted(AudioApplication *app, AudioDevice *device);

private:
    PulseAudioBackend *m_backend;
};

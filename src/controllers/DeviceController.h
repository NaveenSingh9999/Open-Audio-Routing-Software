#pragma once

#include <QObject>
#include <QQmlEngine>
#include "utils/AudioDevice.h"

class PulseAudioBackend;

class DeviceController : public QObject
{
    Q_OBJECT

public:
    explicit DeviceController(QObject *parent = nullptr);

    Q_INVOKABLE void setDefaultDevice(AudioDevice *device);
    Q_INVOKABLE void setDeviceVolume(AudioDevice *device, double volume);
    Q_INVOKABLE void setDeviceMute(AudioDevice *device, bool muted);
    Q_INVOKABLE void refreshDevices();

    void setBackend(PulseAudioBackend *backend);

signals:
    void deviceSwitched(AudioDevice *device);

private:
    PulseAudioBackend *m_backend;
};

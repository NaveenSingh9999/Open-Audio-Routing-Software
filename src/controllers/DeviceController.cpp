#include "DeviceController.h"
#include "audio/PulseAudioBackend.h"
#include <QDebug>

DeviceController::DeviceController(QObject *parent)
    : QObject(parent)
    , m_backend(nullptr)
{
}

void DeviceController::setDefaultDevice(AudioDevice *device)
{
    if (!device || !m_backend) {
        return;
    }

    if (device->type() == AudioDevice::Output) {
        m_backend->setDefaultSink(device->index());
    } else {
        m_backend->setDefaultSource(device->index());
    }

    emit deviceSwitched(device);
    qDebug() << "Switched default device to:" << device->description();
}

void DeviceController::setDeviceVolume(AudioDevice *device, double volume)
{
    if (!device || !m_backend) {
        return;
    }

    bool isSource = (device->type() == AudioDevice::Input);
    m_backend->setDeviceVolume(device->index(), isSource, volume);
}

void DeviceController::setDeviceMute(AudioDevice *device, bool muted)
{
    if (!device || !m_backend) {
        return;
    }

    bool isSource = (device->type() == AudioDevice::Input);
    m_backend->setDeviceMute(device->index(), isSource, muted);
}

void DeviceController::refreshDevices()
{
    if (m_backend) {
        m_backend->refreshDevices();
    }
}

void DeviceController::setBackend(PulseAudioBackend *backend)
{
    m_backend = backend;
}

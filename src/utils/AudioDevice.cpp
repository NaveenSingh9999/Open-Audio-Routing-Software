#include "AudioDevice.h"

AudioDevice::AudioDevice(QObject *parent)
    : QObject(parent)
{
}

AudioDevice::AudioDevice(const QString &name, const QString &description, DeviceType type, uint32_t index, QObject *parent)
    : QObject(parent), m_name(name), m_description(description), m_type(type), m_index(index)
{
}

void AudioDevice::setName(const QString &name)
{
    if (m_name != name) {
        m_name = name;
        emit nameChanged();
        emit iconNameChanged();
    }
}

void AudioDevice::setDescription(const QString &description)
{
    if (m_description != description) {
        m_description = description;
        emit descriptionChanged();
    }
}

void AudioDevice::setType(DeviceType type)
{
    if (m_type != type) {
        m_type = type;
        emit typeChanged();
        emit iconNameChanged();
    }
}

void AudioDevice::setIsDefault(bool isDefault)
{
    if (m_isDefault != isDefault) {
        m_isDefault = isDefault;
        emit isDefaultChanged();
    }
}

void AudioDevice::setVolume(double volume)
{
    // Clamp volume between 0.0 and 1.0
    volume = qBound(0.0, volume, 1.0);
    if (qAbs(m_volume - volume) > 0.001) {
        m_volume = volume;
        emit volumeChanged();
    }
}

void AudioDevice::setIsMuted(bool muted)
{
    if (m_isMuted != muted) {
        m_isMuted = muted;
        emit isMutedChanged();
    }
}

void AudioDevice::setIndex(uint32_t index)
{
    if (m_index != index) {
        m_index = index;
        emit indexChanged();
    }
}

QString AudioDevice::iconName() const
{
    QString deviceName = m_name.toLower();
    
    if (m_type == Input) {
        if (deviceName.contains("built-in") || deviceName.contains("internal")) {
            return "microphone-internal";
        } else if (deviceName.contains("usb") || deviceName.contains("blue") || deviceName.contains("yeti")) {
            return "microphone-usb";
        } else if (deviceName.contains("headset") || deviceName.contains("bluetooth")) {
            return "microphone-headset";
        }
        return "microphone";
    } else {
        if (deviceName.contains("built-in") || deviceName.contains("internal")) {
            return "speaker-internal";
        } else if (deviceName.contains("headphone") || deviceName.contains("headset")) {
            return "headphones";
        } else if (deviceName.contains("bluetooth") || deviceName.contains("wireless")) {
            return "speaker-bluetooth";
        } else if (deviceName.contains("usb")) {
            return "speaker-usb";
        } else if (deviceName.contains("hdmi")) {
            return "speaker-hdmi";
        }
        return "speaker";
    }
}

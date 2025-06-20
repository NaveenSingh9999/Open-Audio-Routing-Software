#include "AudioApplication.h"

AudioApplication::AudioApplication(QObject *parent)
    : QObject(parent)
{
}

AudioApplication::AudioApplication(const QString &name, const QString &processName, uint32_t clientId, QObject *parent)
    : QObject(parent), m_name(name), m_processName(processName), m_clientId(clientId)
{
}

void AudioApplication::setName(const QString &name)
{
    if (m_name != name) {
        m_name = name;
        emit nameChanged();
        emit iconNameChanged();
    }
}

void AudioApplication::setProcessName(const QString &processName)
{
    if (m_processName != processName) {
        m_processName = processName;
        emit processNameChanged();
        emit iconNameChanged();
    }
}

void AudioApplication::setClientId(uint32_t clientId)
{
    if (m_clientId != clientId) {
        m_clientId = clientId;
        emit clientIdChanged();
    }
}

void AudioApplication::setVolume(double volume)
{
    volume = qBound(0.0, volume, 1.0);
    if (qAbs(m_volume - volume) > 0.001) {
        m_volume = volume;
        emit volumeChanged();
    }
}

void AudioApplication::setIsMuted(bool muted)
{
    if (m_isMuted != muted) {
        m_isMuted = muted;
        emit isMutedChanged();
    }
}

void AudioApplication::setDeviceIndex(uint32_t deviceIndex)
{
    if (m_deviceIndex != deviceIndex) {
        m_deviceIndex = deviceIndex;
        emit deviceIndexChanged();
    }
}

void AudioApplication::setIsPlaying(bool playing)
{
    if (m_isPlaying != playing) {
        m_isPlaying = playing;
        emit isPlayingChanged();
    }
}

QString AudioApplication::iconName() const
{
    QString appName = m_processName.toLower();
    
    // Common application icons
    if (appName.contains("firefox") || appName.contains("chrome") || appName.contains("chromium") || appName.contains("safari") || appName.contains("edge")) {
        return "web-browser";
    } else if (appName.contains("spotify") || appName.contains("rhythmbox") || appName.contains("audacious") || appName.contains("clementine")) {
        return "music-player";
    } else if (appName.contains("vlc") || appName.contains("totem") || appName.contains("mpv") || appName.contains("kodi")) {
        return "video-player";
    } else if (appName.contains("discord") || appName.contains("slack") || appName.contains("teams") || appName.contains("zoom") || appName.contains("skype")) {
        return "communication";
    } else if (appName.contains("steam") || appName.contains("game")) {
        return "game";
    } else if (appName.contains("pulseaudio") || appName.contains("pipewire")) {
        return "audio-system";
    }
    
    return "application";
}

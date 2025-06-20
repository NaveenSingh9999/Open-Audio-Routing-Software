#include "AudioManager.h"
#include <QDebug>

AudioManager::AudioManager(QObject *parent)
    : QObject(parent)
    , m_backend(nullptr)
    , m_isConnected(false)
{
    m_backend = new PulseAudioBackend(this);
    
    connect(m_backend, &PulseAudioBackend::connectionStatusChanged,
            this, &AudioManager::onConnectionStatusChanged);
    connect(m_backend, &PulseAudioBackend::deviceAdded,
            this, &AudioManager::deviceAdded);
    connect(m_backend, &PulseAudioBackend::deviceRemoved,
            this, &AudioManager::deviceRemoved);
    connect(m_backend, &PulseAudioBackend::deviceUpdated,
            this, &AudioManager::deviceUpdated);
    connect(m_backend, &PulseAudioBackend::applicationAdded,
            this, &AudioManager::applicationAdded);
    connect(m_backend, &PulseAudioBackend::applicationRemoved,
            this, &AudioManager::applicationRemoved);
    connect(m_backend, &PulseAudioBackend::applicationUpdated,
            this, &AudioManager::applicationUpdated);
}

AudioManager::~AudioManager()
{
    if (m_backend) {
        m_backend->cleanup();
    }
}

bool AudioManager::initialize()
{
    if (!m_backend) {
        qCritical() << "No audio backend available";
        return false;
    }

    return m_backend->initialize();
}

void AudioManager::onConnectionStatusChanged(bool connected)
{
    if (m_isConnected != connected) {
        m_isConnected = connected;
        emit connectionChanged();
        
        if (connected) {
            qInfo() << "Audio system connected";
        } else {
            qWarning() << "Audio system disconnected";
        }
    }
}

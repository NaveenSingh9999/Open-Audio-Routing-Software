#pragma once

#include <QObject>
#include <QQmlEngine>
#include "PulseAudioBackend.h"

class AudioManager : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(bool isConnected READ isConnected NOTIFY connectionChanged)

public:
    explicit AudioManager(QObject *parent = nullptr);
    ~AudioManager();

    bool initialize();
    bool isConnected() const { return m_backend && m_isConnected; }

    PulseAudioBackend* backend() const { return m_backend; }

signals:
    void connectionChanged();
    void deviceAdded(AudioDevice *device);
    void deviceRemoved(uint32_t deviceIndex);
    void deviceUpdated(AudioDevice *device);
    void applicationAdded(AudioApplication *app);
    void applicationRemoved(uint32_t clientId);
    void applicationUpdated(AudioApplication *app);

private slots:
    void onConnectionStatusChanged(bool connected);

private:
    PulseAudioBackend *m_backend;
    bool m_isConnected;
};

#pragma once

#include <QObject>
#include <QString>

class AudioApplication : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString processName READ processName WRITE setProcessName NOTIFY processNameChanged)
    Q_PROPERTY(uint32_t clientId READ clientId WRITE setClientId NOTIFY clientIdChanged)
    Q_PROPERTY(double volume READ volume WRITE setVolume NOTIFY volumeChanged)
    Q_PROPERTY(bool isMuted READ isMuted WRITE setIsMuted NOTIFY isMutedChanged)
    Q_PROPERTY(QString iconName READ iconName NOTIFY iconNameChanged)
    Q_PROPERTY(uint32_t deviceIndex READ deviceIndex WRITE setDeviceIndex NOTIFY deviceIndexChanged)
    Q_PROPERTY(bool isPlaying READ isPlaying WRITE setIsPlaying NOTIFY isPlayingChanged)

public:
    explicit AudioApplication(QObject *parent = nullptr);
    AudioApplication(const QString &name, const QString &processName, uint32_t clientId, QObject *parent = nullptr);

    // Getters
    QString name() const { return m_name; }
    QString processName() const { return m_processName; }
    uint32_t clientId() const { return m_clientId; }
    double volume() const { return m_volume; }
    bool isMuted() const { return m_isMuted; }
    QString iconName() const;
    uint32_t deviceIndex() const { return m_deviceIndex; }
    bool isPlaying() const { return m_isPlaying; }

    // Setters
    void setName(const QString &name);
    void setProcessName(const QString &processName);
    void setClientId(uint32_t clientId);
    void setVolume(double volume);
    void setIsMuted(bool muted);
    void setDeviceIndex(uint32_t deviceIndex);
    void setIsPlaying(bool playing);

signals:
    void nameChanged();
    void processNameChanged();
    void clientIdChanged();
    void volumeChanged();
    void isMutedChanged();
    void iconNameChanged();
    void deviceIndexChanged();
    void isPlayingChanged();

private:
    QString m_name;
    QString m_processName;
    uint32_t m_clientId = 0;
    double m_volume = 1.0;
    bool m_isMuted = false;
    uint32_t m_deviceIndex = 0;
    bool m_isPlaying = false;
};

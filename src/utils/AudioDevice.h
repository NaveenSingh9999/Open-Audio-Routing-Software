#pragma once

#include <QObject>
#include <QString>

class AudioDevice : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(DeviceType type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(bool isDefault READ isDefault WRITE setIsDefault NOTIFY isDefaultChanged)
    Q_PROPERTY(double volume READ volume WRITE setVolume NOTIFY volumeChanged)
    Q_PROPERTY(bool isMuted READ isMuted WRITE setIsMuted NOTIFY isMutedChanged)
    Q_PROPERTY(QString iconName READ iconName NOTIFY iconNameChanged)
    Q_PROPERTY(uint32_t index READ index WRITE setIndex NOTIFY indexChanged)

public:
    enum DeviceType {
        Input,
        Output
    };
    Q_ENUM(DeviceType)

    explicit AudioDevice(QObject *parent = nullptr);
    AudioDevice(const QString &name, const QString &description, DeviceType type, uint32_t index, QObject *parent = nullptr);

    // Getters
    QString name() const { return m_name; }
    QString description() const { return m_description; }
    DeviceType type() const { return m_type; }
    bool isDefault() const { return m_isDefault; }
    double volume() const { return m_volume; }
    bool isMuted() const { return m_isMuted; }
    QString iconName() const;
    uint32_t index() const { return m_index; }

    // Setters
    void setName(const QString &name);
    void setDescription(const QString &description);
    void setType(DeviceType type);
    void setIsDefault(bool isDefault);
    void setVolume(double volume);
    void setIsMuted(bool muted);
    void setIndex(uint32_t index);

signals:
    void nameChanged();
    void descriptionChanged();
    void typeChanged();
    void isDefaultChanged();
    void volumeChanged();
    void isMutedChanged();
    void iconNameChanged();
    void indexChanged();

private:
    QString m_name;
    QString m_description;
    DeviceType m_type;
    bool m_isDefault = false;
    double m_volume = 1.0;
    bool m_isMuted = false;
    uint32_t m_index = 0;
};

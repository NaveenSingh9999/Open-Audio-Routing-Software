#pragma once

#include <QAbstractListModel>
#include <QQmlEngine>
#include "utils/AudioDevice.h"

class DeviceListModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(int count READ rowCount NOTIFY countChanged)

public:
    enum Roles {
        DeviceRole = Qt::UserRole + 1,
        NameRole,
        DescriptionRole,
        TypeRole,
        IsDefaultRole,
        VolumeRole,
        IsMutedRole,
        IconNameRole,
        IndexRole
    };

    explicit DeviceListModel(QObject *parent = nullptr);

    // QAbstractListModel interface
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QHash<int, QByteArray> roleNames() const override;

    // Device management
    Q_INVOKABLE void addDevice(AudioDevice *device);
    Q_INVOKABLE void removeDevice(uint32_t deviceIndex);
    Q_INVOKABLE void updateDevice(AudioDevice *device);
    Q_INVOKABLE AudioDevice* getDevice(int index) const;
    Q_INVOKABLE AudioDevice* getDeviceByIndex(uint32_t deviceIndex) const;

    // Filtering
    Q_INVOKABLE QList<AudioDevice*> getInputDevices() const;
    Q_INVOKABLE QList<AudioDevice*> getOutputDevices() const;
    Q_INVOKABLE AudioDevice* getDefaultInputDevice() const;
    Q_INVOKABLE AudioDevice* getDefaultOutputDevice() const;

signals:
    void countChanged();

private:
    QList<AudioDevice*> m_devices;
    QHash<uint32_t, int> m_deviceIndexMap;
};

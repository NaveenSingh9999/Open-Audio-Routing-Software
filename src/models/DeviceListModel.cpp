#include "DeviceListModel.h"

DeviceListModel::DeviceListModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

int DeviceListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return m_devices.size();
}

QVariant DeviceListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || index.row() >= m_devices.size()) {
        return QVariant();
    }

    AudioDevice *device = m_devices[index.row()];
    
    switch (role) {
    case DeviceRole:
        return QVariant::fromValue(device);
    case NameRole:
        return device->name();
    case DescriptionRole:
        return device->description();
    case TypeRole:
        return static_cast<int>(device->type());
    case IsDefaultRole:
        return device->isDefault();
    case VolumeRole:
        return device->volume();
    case IsMutedRole:
        return device->isMuted();
    case IconNameRole:
        return device->iconName();
    case IndexRole:
        return device->index();
    default:
        return QVariant();
    }
}

QHash<int, QByteArray> DeviceListModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[DeviceRole] = "device";
    roles[NameRole] = "name";
    roles[DescriptionRole] = "description";
    roles[TypeRole] = "type";
    roles[IsDefaultRole] = "isDefault";
    roles[VolumeRole] = "volume";
    roles[IsMutedRole] = "isMuted";
    roles[IconNameRole] = "iconName";
    roles[IndexRole] = "index";
    return roles;
}

void DeviceListModel::addDevice(AudioDevice *device)
{
    if (!device) return;

    // Check if device already exists
    if (m_deviceIndexMap.contains(device->index())) {
        updateDevice(device);
        return;
    }

    beginInsertRows(QModelIndex(), m_devices.size(), m_devices.size());
    m_devices.append(device);
    m_deviceIndexMap[device->index()] = m_devices.size() - 1;
    endInsertRows();

    emit countChanged();
}

void DeviceListModel::removeDevice(uint32_t deviceIndex)
{
    if (!m_deviceIndexMap.contains(deviceIndex)) {
        return;
    }

    int row = m_deviceIndexMap[deviceIndex];
    
    beginRemoveRows(QModelIndex(), row, row);
    m_devices.removeAt(row);
    m_deviceIndexMap.remove(deviceIndex);
    
    // Update index map for remaining devices
    for (int i = row; i < m_devices.size(); ++i) {
        m_deviceIndexMap[m_devices[i]->index()] = i;
    }
    
    endRemoveRows();
    emit countChanged();
}

void DeviceListModel::updateDevice(AudioDevice *device)
{
    if (!device || !m_deviceIndexMap.contains(device->index())) {
        return;
    }

    int row = m_deviceIndexMap[device->index()];
    QModelIndex modelIndex = index(row, 0);
    
    emit dataChanged(modelIndex, modelIndex);
}

AudioDevice* DeviceListModel::getDevice(int index) const
{
    if (index < 0 || index >= m_devices.size()) {
        return nullptr;
    }
    return m_devices[index];
}

AudioDevice* DeviceListModel::getDeviceByIndex(uint32_t deviceIndex) const
{
    if (!m_deviceIndexMap.contains(deviceIndex)) {
        return nullptr;
    }
    
    int row = m_deviceIndexMap[deviceIndex];
    return m_devices[row];
}

QList<AudioDevice*> DeviceListModel::getInputDevices() const
{
    QList<AudioDevice*> inputDevices;
    for (AudioDevice *device : m_devices) {
        if (device->type() == AudioDevice::Input) {
            inputDevices.append(device);
        }
    }
    return inputDevices;
}

QList<AudioDevice*> DeviceListModel::getOutputDevices() const
{
    QList<AudioDevice*> outputDevices;
    for (AudioDevice *device : m_devices) {
        if (device->type() == AudioDevice::Output) {
            outputDevices.append(device);
        }
    }
    return outputDevices;
}

AudioDevice* DeviceListModel::getDefaultInputDevice() const
{
    for (AudioDevice *device : m_devices) {
        if (device->type() == AudioDevice::Input && device->isDefault()) {
            return device;
        }
    }
    return nullptr;
}

AudioDevice* DeviceListModel::getDefaultOutputDevice() const
{
    for (AudioDevice *device : m_devices) {
        if (device->type() == AudioDevice::Output && device->isDefault()) {
            return device;
        }
    }
    return nullptr;
}

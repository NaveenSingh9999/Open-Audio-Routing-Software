#include "ApplicationListModel.h"

ApplicationListModel::ApplicationListModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

int ApplicationListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return m_applications.size();
}

QVariant ApplicationListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || index.row() >= m_applications.size()) {
        return QVariant();
    }

    AudioApplication *app = m_applications[index.row()];
    
    switch (role) {
    case ApplicationRole:
        return QVariant::fromValue(app);
    case NameRole:
        return app->name();
    case ProcessNameRole:
        return app->processName();
    case ClientIdRole:
        return app->clientId();
    case VolumeRole:
        return app->volume();
    case IsMutedRole:
        return app->isMuted();
    case IconNameRole:
        return app->iconName();
    case DeviceIndexRole:
        return app->deviceIndex();
    case IsPlayingRole:
        return app->isPlaying();
    default:
        return QVariant();
    }
}

QHash<int, QByteArray> ApplicationListModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[ApplicationRole] = "application";
    roles[NameRole] = "name";
    roles[ProcessNameRole] = "processName";
    roles[ClientIdRole] = "clientId";
    roles[VolumeRole] = "volume";
    roles[IsMutedRole] = "isMuted";
    roles[IconNameRole] = "iconName";
    roles[DeviceIndexRole] = "deviceIndex";
    roles[IsPlayingRole] = "isPlaying";
    return roles;
}

void ApplicationListModel::addApplication(AudioApplication *app)
{
    if (!app) return;

    // Check if application already exists
    if (m_clientIdMap.contains(app->clientId())) {
        updateApplication(app);
        return;
    }

    beginInsertRows(QModelIndex(), m_applications.size(), m_applications.size());
    m_applications.append(app);
    m_clientIdMap[app->clientId()] = m_applications.size() - 1;
    endInsertRows();

    emit countChanged();
}

void ApplicationListModel::removeApplication(uint32_t clientId)
{
    if (!m_clientIdMap.contains(clientId)) {
        return;
    }

    int row = m_clientIdMap[clientId];
    
    beginRemoveRows(QModelIndex(), row, row);
    m_applications.removeAt(row);
    m_clientIdMap.remove(clientId);
    
    // Update index map for remaining applications
    for (int i = row; i < m_applications.size(); ++i) {
        m_clientIdMap[m_applications[i]->clientId()] = i;
    }
    
    endRemoveRows();
    emit countChanged();
}

void ApplicationListModel::updateApplication(AudioApplication *app)
{
    if (!app || !m_clientIdMap.contains(app->clientId())) {
        return;
    }

    int row = m_clientIdMap[app->clientId()];
    QModelIndex modelIndex = index(row, 0);
    
    emit dataChanged(modelIndex, modelIndex);
}

AudioApplication* ApplicationListModel::getApplication(int index) const
{
    if (index < 0 || index >= m_applications.size()) {
        return nullptr;
    }
    return m_applications[index];
}

AudioApplication* ApplicationListModel::getApplicationByClientId(uint32_t clientId) const
{
    if (!m_clientIdMap.contains(clientId)) {
        return nullptr;
    }
    
    int row = m_clientIdMap[clientId];
    return m_applications[row];
}

QList<AudioApplication*> ApplicationListModel::getApplicationsForDevice(uint32_t deviceIndex) const
{
    QList<AudioApplication*> deviceApps;
    for (AudioApplication *app : m_applications) {
        if (app->deviceIndex() == deviceIndex) {
            deviceApps.append(app);
        }
    }
    return deviceApps;
}

QList<AudioApplication*> ApplicationListModel::getPlayingApplications() const
{
    QList<AudioApplication*> playingApps;
    for (AudioApplication *app : m_applications) {
        if (app->isPlaying()) {
            playingApps.append(app);
        }
    }
    return playingApps;
}

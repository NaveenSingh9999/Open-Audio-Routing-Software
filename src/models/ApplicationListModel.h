#pragma once

#include <QAbstractListModel>
#include <QQmlEngine>
#include "utils/AudioApplication.h"

class ApplicationListModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(int count READ rowCount NOTIFY countChanged)

public:
    enum Roles {
        ApplicationRole = Qt::UserRole + 1,
        NameRole,
        ProcessNameRole,
        ClientIdRole,
        VolumeRole,
        IsMutedRole,
        IconNameRole,
        DeviceIndexRole,
        IsPlayingRole
    };

    explicit ApplicationListModel(QObject *parent = nullptr);

    // QAbstractListModel interface
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QHash<int, QByteArray> roleNames() const override;

    // Application management
    Q_INVOKABLE void addApplication(AudioApplication *app);
    Q_INVOKABLE void removeApplication(uint32_t clientId);
    Q_INVOKABLE void updateApplication(AudioApplication *app);
    Q_INVOKABLE AudioApplication* getApplication(int index) const;
    Q_INVOKABLE AudioApplication* getApplicationByClientId(uint32_t clientId) const;

    // Filtering
    Q_INVOKABLE QList<AudioApplication*> getApplicationsForDevice(uint32_t deviceIndex) const;
    Q_INVOKABLE QList<AudioApplication*> getPlayingApplications() const;

signals:
    void countChanged();

private:
    QList<AudioApplication*> m_applications;
    QHash<uint32_t, int> m_clientIdMap;
};

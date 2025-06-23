#pragma once

#include <QObject>
#include <QQmlEngine>
#include "audio/AudioManager.h"
#include "models/DeviceListModel.h"
#include "models/ApplicationListModel.h"

class MainController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool isInitialized READ isInitialized NOTIFY initializedChanged)
    Q_PROPERTY(QString statusMessage READ statusMessage NOTIFY statusMessageChanged)

public:
    explicit MainController(QObject *parent = nullptr);
    ~MainController();

    bool initialize();
    bool isInitialized() const { return m_initialized; }
    QString statusMessage() const { return m_statusMessage; }

    AudioManager* audioManager() const { return m_audioManager; }
    DeviceListModel* deviceModel() const { return m_deviceModel; }
    ApplicationListModel* applicationModel() const { return m_applicationModel; }

signals:
    void initializedChanged();
    void statusMessageChanged();

private slots:
    void onDeviceAdded(AudioDevice *device);
    void onDeviceRemoved(uint32_t deviceIndex);
    void onDeviceUpdated(AudioDevice *device);
    void onApplicationAdded(AudioApplication *app);
    void onApplicationRemoved(uint32_t clientId);
    void onApplicationUpdated(AudioApplication *app);
    void onConnectionChanged();

private:
    void setStatusMessage(const QString &message);

    AudioManager *m_audioManager;
    DeviceListModel *m_deviceModel;
    ApplicationListModel *m_applicationModel;
    bool m_initialized;
    QString m_statusMessage;
};

#include "MainController.h"
#include <QDebug>

MainController::MainController(QObject *parent)
    : QObject(parent)
    , m_audioManager(nullptr)
    , m_deviceModel(nullptr)
    , m_applicationModel(nullptr)
    , m_initialized(false)
    , m_statusMessage("Initializing...")
{
    m_audioManager = new AudioManager(this);
    m_deviceModel = new DeviceListModel(this);
    m_applicationModel = new ApplicationListModel(this);

    // Connect audio manager signals
    connect(m_audioManager, &AudioManager::connectionChanged,
            this, &MainController::onConnectionChanged);
    connect(m_audioManager, &AudioManager::deviceAdded,
            this, &MainController::onDeviceAdded);
    connect(m_audioManager, &AudioManager::deviceRemoved,
            this, &MainController::onDeviceRemoved);
    connect(m_audioManager, &AudioManager::deviceUpdated,
            this, &MainController::onDeviceUpdated);
    connect(m_audioManager, &AudioManager::applicationAdded,
            this, &MainController::onApplicationAdded);
    connect(m_audioManager, &AudioManager::applicationRemoved,
            this, &MainController::onApplicationRemoved);
    connect(m_audioManager, &AudioManager::applicationUpdated,
            this, &MainController::onApplicationUpdated);
}

MainController::~MainController()
{
}

bool MainController::initialize()
{
    setStatusMessage("Connecting to audio system...");
    
    if (!m_audioManager->initialize()) {
        setStatusMessage("Failed to connect to audio system");
        return false;
    }

    m_initialized = true;
    emit initializedChanged();
    
    setStatusMessage("Audio system connected");
    return true;
}

void MainController::onDeviceAdded(AudioDevice *device)
{
    if (device) {
        m_deviceModel->addDevice(device);
        qDebug() << "Device added:" << device->description();
    }
}

void MainController::onDeviceRemoved(uint32_t deviceIndex)
{
    m_deviceModel->removeDevice(deviceIndex);
    qDebug() << "Device removed:" << deviceIndex;
}

void MainController::onDeviceUpdated(AudioDevice *device)
{
    if (device) {
        m_deviceModel->updateDevice(device);
    }
}

void MainController::onApplicationAdded(AudioApplication *app)
{
    if (app) {
        m_applicationModel->addApplication(app);
        qDebug() << "Application added:" << app->name();
    }
}

void MainController::onApplicationRemoved(uint32_t clientId)
{
    m_applicationModel->removeApplication(clientId);
    qDebug() << "Application removed:" << clientId;
}

void MainController::onApplicationUpdated(AudioApplication *app)
{
    if (app) {
        m_applicationModel->updateApplication(app);
    }
}

void MainController::onConnectionChanged()
{
    if (m_audioManager->isConnected()) {
        setStatusMessage("Audio system connected");
    } else {
        setStatusMessage("Audio system disconnected");
    }
}

void MainController::setStatusMessage(const QString &message)
{
    if (m_statusMessage != message) {
        m_statusMessage = message;
        emit statusMessageChanged();
        qInfo() << "Status:" << message;
    }
}

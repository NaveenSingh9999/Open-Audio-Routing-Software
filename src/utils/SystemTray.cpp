#include "SystemTray.h"
#include <QApplication>
#include <QDebug>

SystemTray::SystemTray(QObject *parent)
    : QObject(parent)
    , m_trayIcon(nullptr)
    , m_contextMenu(nullptr)
    , m_quickDeviceMenu(nullptr)
    , m_showAction(nullptr)
    , m_quitAction(nullptr)
    , m_visible(false)
{
    createTrayIcon();
    createContextMenu();
}

SystemTray::~SystemTray()
{
    if (m_trayIcon) {
        m_trayIcon->hide();
    }
}

bool SystemTray::isVisible() const
{
    return m_visible;
}

void SystemTray::setVisible(bool visible)
{
    if (m_visible != visible) {
        m_visible = visible;
        
        if (m_trayIcon) {
            if (visible) {
                m_trayIcon->show();
            } else {
                m_trayIcon->hide();
            }
        }
        
        emit visibilityChanged();
    }
}

void SystemTray::showMessage(const QString &title, const QString &message)
{
    if (m_trayIcon && m_trayIcon->isVisible()) {
        m_trayIcon->showMessage(title, message, QSystemTrayIcon::Information, 3000);
    }
}

void SystemTray::updateQuickDeviceMenu()
{
    if (!m_quickDeviceMenu) {
        return;
    }
    
    // Clear existing actions except the separator
    QList<QAction*> actions = m_quickDeviceMenu->actions();
    for (QAction *action : actions) {
        if (action->isSeparator()) {
            continue;
        }
        m_quickDeviceMenu->removeAction(action);
        action->deleteLater();
    }
    
    // TODO: Get device list from DeviceController
    // For now, add placeholder actions
    QAction *inputHeader = m_quickDeviceMenu->addAction("Input Devices");
    inputHeader->setEnabled(false);
    
    QAction *builtInMic = m_quickDeviceMenu->addAction("🎤 Built-in Microphone");
    builtInMic->setCheckable(true);
    builtInMic->setChecked(true);
    connect(builtInMic, &QAction::triggered, [this]() {
        emit deviceSwitchRequested("Built-in Microphone");
    });
    
    QAction *usbMic = m_quickDeviceMenu->addAction("🎙️ USB Microphone");
    usbMic->setCheckable(true);
    connect(usbMic, &QAction::triggered, [this]() {
        emit deviceSwitchRequested("USB Microphone");
    });
    
    m_quickDeviceMenu->addSeparator();
    
    QAction *outputHeader = m_quickDeviceMenu->addAction("Output Devices");
    outputHeader->setEnabled(false);
    
    QAction *speakers = m_quickDeviceMenu->addAction("🔊 Speakers");
    speakers->setCheckable(true);
    speakers->setChecked(true);
    connect(speakers, &QAction::triggered, [this]() {
        emit deviceSwitchRequested("Speakers");
    });
    
    QAction *headphones = m_quickDeviceMenu->addAction("🎧 Headphones");
    headphones->setCheckable(true);
    connect(headphones, &QAction::triggered, [this]() {
        emit deviceSwitchRequested("Headphones");
    });
    
    QAction *bluetooth = m_quickDeviceMenu->addAction("📶 Bluetooth Device");
    bluetooth->setCheckable(true);
    connect(bluetooth, &QAction::triggered, [this]() {
        emit deviceSwitchRequested("Bluetooth Device");
    });
}

void SystemTray::onTrayIconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason) {
    case QSystemTrayIcon::Trigger:
    case QSystemTrayIcon::DoubleClick:
        emit showMainWindow();
        break;
    case QSystemTrayIcon::MiddleClick:
        // Middle click could show quick device menu or toggle mute
        updateQuickDeviceMenu();
        break;
    default:
        break;
    }
}

void SystemTray::onShowMainWindow()
{
    emit showMainWindow();
}

void SystemTray::onQuitApplication()
{
    QApplication::quit();
}

void SystemTray::createTrayIcon()
{
    if (!QSystemTrayIcon::isSystemTrayAvailable()) {
        qWarning() << "System tray is not available";
        return;
    }
    
    m_trayIcon = new QSystemTrayIcon(this);
    
    // Set icon - for now use a default, later replace with custom icon
    m_trayIcon->setIcon(QIcon::fromTheme("audio-volume-high", 
                                       QIcon(":/icons/app-icon.svg")));
    
    m_trayIcon->setToolTip("Open Audio Router\nClick to open main window");
    
    connect(m_trayIcon, &QSystemTrayIcon::activated,
            this, &SystemTray::onTrayIconActivated);
    
    connect(m_trayIcon, &QSystemTrayIcon::messageClicked,
            this, &SystemTray::onShowMainWindow);
}

void SystemTray::createContextMenu()
{
    if (!m_trayIcon) {
        return;
    }
    
    m_contextMenu = new QMenu();
    
    // Quick device switching submenu
    m_quickDeviceMenu = new QMenu("Switch Device", m_contextMenu);
    m_quickDeviceMenu->setIcon(QIcon::fromTheme("audio-volume-high"));
    updateQuickDeviceMenu();
    
    m_contextMenu->addMenu(m_quickDeviceMenu);
    m_contextMenu->addSeparator();
    
    // Show main window action
    m_showAction = m_contextMenu->addAction("Open Audio Router");
    m_showAction->setIcon(QIcon::fromTheme("preferences-desktop-sound"));
    connect(m_showAction, &QAction::triggered, this, &SystemTray::onShowMainWindow);
    
    m_contextMenu->addSeparator();
    
    // Quit action
    m_quitAction = m_contextMenu->addAction("Quit");
    m_quitAction->setIcon(QIcon::fromTheme("application-exit"));
    connect(m_quitAction, &QAction::triggered, this, &SystemTray::onQuitApplication);
    
    m_trayIcon->setContextMenu(m_contextMenu);
}

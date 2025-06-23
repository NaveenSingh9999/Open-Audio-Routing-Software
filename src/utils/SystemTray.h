#pragma once

#include <QObject>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>
#include <QQmlEngine>

class SystemTray : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool isVisible READ isVisible WRITE setVisible NOTIFY visibilityChanged)

public:
    explicit SystemTray(QObject *parent = nullptr);
    ~SystemTray();

    bool isVisible() const;
    void setVisible(bool visible);

    Q_INVOKABLE void showMessage(const QString &title, const QString &message);
    Q_INVOKABLE void updateQuickDeviceMenu();

signals:
    void visibilityChanged();
    void showMainWindow();
    void deviceSwitchRequested(const QString &deviceName);

private slots:
    void onTrayIconActivated(QSystemTrayIcon::ActivationReason reason);
    void onShowMainWindow();
    void onQuitApplication();

private:
    void createTrayIcon();
    void createContextMenu();

    QSystemTrayIcon *m_trayIcon;
    QMenu *m_contextMenu;
    QMenu *m_quickDeviceMenu;
    QAction *m_showAction;
    QAction *m_quitAction;
    bool m_visible;
};

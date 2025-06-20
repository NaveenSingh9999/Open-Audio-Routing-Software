#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QIcon>
#include <QSystemTrayIcon>

#include "controllers/MainController.h"
#include "controllers/DeviceController.h"
#include "controllers/RoutingController.h"
#include "controllers/ProfileController.h"
#include "models/DeviceListModel.h"
#include "models/ApplicationListModel.h"
#include "utils/SystemTray.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    
    app.setApplicationName("Open Audio Router");
    app.setApplicationVersion("1.0.0");
    app.setOrganizationName("Open Audio Router Project");
    app.setWindowIcon(QIcon(":/icons/app-icon.svg"));

    // Register QML types
    qmlRegisterType<DeviceListModel>("OpenAudioRouter", 1, 0, "DeviceListModel");
    qmlRegisterType<ApplicationListModel>("OpenAudioRouter", 1, 0, "ApplicationListModel");
    qmlRegisterType<DeviceController>("OpenAudioRouter", 1, 0, "DeviceController");
    qmlRegisterType<RoutingController>("OpenAudioRouter", 1, 0, "RoutingController");
    qmlRegisterType<ProfileController>("OpenAudioRouter", 1, 0, "ProfileController");

    // Create controllers
    MainController mainController;
    DeviceController deviceController;
    RoutingController routingController;
    ProfileController profileController;
    
    // Create models
    DeviceListModel deviceModel;
    ApplicationListModel appModel;
    
    // Create system tray
    SystemTray systemTray;
    
    // Set up QML engine
    QQmlApplicationEngine engine;
    
    // Expose controllers and models to QML
    engine.rootContext()->setContextProperty("mainController", &mainController);
    engine.rootContext()->setContextProperty("deviceController", &deviceController);
    engine.rootContext()->setContextProperty("routingController", &routingController);
    engine.rootContext()->setContextProperty("profileController", &profileController);
    engine.rootContext()->setContextProperty("deviceModel", &deviceModel);
    engine.rootContext()->setContextProperty("applicationModel", &appModel);
    engine.rootContext()->setContextProperty("systemTray", &systemTray);
    
    // Load main QML file
    const QUrl url(u"qrc:/OpenAudioRouter/qml/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
                         if (!obj && url == objUrl)
                             QCoreApplication::exit(-1);
                     }, Qt::QueuedConnection);
    
    engine.load(url);

    // Initialize audio system
    mainController.initialize();
    
    return app.exec();
}

#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QQmlContext>
#include "Controller/controller.h"
#include <Init.h>
#include <ServiceAdapter.h>
int main(int argc, char** argv){
    QGuiApplication app(argc,argv);
    DBusNavtive::initialize();
    QQmlApplicationEngine engine;
    Controller controller;
    new ServiceAdapter(&controller);
    QDBusConnection::sessionBus().registerService("controller.service");
    QDBusConnection::sessionBus().registerObject("/controller",&controller);
    engine.rootContext()->setContextProperty("controller",QVariant::fromValue(&controller));
    engine.load(QUrl("qrc:/main.qml"));
    return app.exec();
}
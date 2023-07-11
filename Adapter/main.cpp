#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QQmlContext>
#include "Controller/controller.h"
#include <Init.h>
#include "ServiceProvider/ServiceProvider.h"
int main(int argc, char** argv){
    QGuiApplication app(argc,argv);
    DBusNavtive::initialize();
    QQmlApplicationEngine engine;
    Controller& controller = Controller::getInstance();
    ServiceProvider::getInstance();
    engine.rootContext()->setContextProperty("controller",QVariant::fromValue(&controller));
    engine.load(QUrl("qrc:/mainSource.qml"));
    return app.exec();
}
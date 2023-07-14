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
    #ifdef CMAKE
    engine.load(QUrl("qrc:/HMI/main.qml"));
    #else
    engine.load(QUrl("qrc:/mainSource.qml"));
    #endif
    return app.exec();
}
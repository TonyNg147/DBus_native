#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "Interfaces/Consumers.h"
#include <Init.h>
int main(int argc, char** argv){
    QGuiApplication app(argc,argv);
    DBusNavtive::initialize();
    QQmlApplicationEngine engine;
    #ifdef CMAKE
    engine.load(QUrl("qrc:/HMI/main.qml"));
    #else
    engine.load(QUrl("qrc:/main.qml"));
    #endif
    Consumer consumer;
    engine.rootContext()->setContextProperty("consumer",QVariant::fromValue(&consumer));
    return app.exec();
};
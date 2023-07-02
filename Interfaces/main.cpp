#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "Interfaces/Consumers.h"
#include <Init.h>
int main(int argc, char** argv){
    QGuiApplication app(argc,argv);
    DBusNavtive::initialize();
    QQmlApplicationEngine engine;
    engine.load(QUrl("qrc:/main.qml"));
    Consumer consumer;
    engine.rootContext()->setContextProperty("consumer",QVariant::fromValue(&consumer));
    return app.exec();
};
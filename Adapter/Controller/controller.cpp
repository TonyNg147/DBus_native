#include "controller.h"
#include <QDebug>
#include <LogStreamer/LogStreamer.h>
Controller& Controller::getInstance(){
    static Controller instance;
    return instance;
}
Controller::Controller(QObject* parent)
    :QObject{parent}
{

};

void Controller::changeStatus(const bool& status){
    if (status != m_status){
        m_status = status;
        emit statusChanged();
    }
};

void Controller::sendArg(const DataTransfer& dataTransfer){
    // To take apart the data sent from Consumer
    qInfo()<<"Received data in Provider";
    qWarning()<<dataTransfer.grade;
    qWarning()<<dataTransfer.name;
}

void Controller::sendE(const METHOD_RESULT& res){
    // To take apart the customized enum type sent from consumer
    qWarning()<<"Res is: "<<(int)res;
}
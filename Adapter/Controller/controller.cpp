#include "controller.h"
#include <QDebug>
Controller::Controller(QObject* parent)
    :QObject{parent}
{

};

void Controller::changeStatus(const bool& status){
    qWarning()<<"Change status here";
    if (status != m_status){
        m_status = status;
        emit statusChanged();
    }
};

void Controller::sendArg(const DataTransfer& dataTransfer){
    qWarning()<<"Data received";
    qWarning()<<dataTransfer.grade;
    qWarning()<<dataTransfer.name;
}

void Controller::sendE(const METHOD_RESULT& res){
    qWarning()<<"Res is: "<<(int)res;
}
#include "Consumers.h"

Consumer::Consumer(QObject* parent)
    :QObject(parent)
{   
    mService = new ControllerInterface("controller.service","/controller",QDBusConnection::sessionBus());
}
void Consumer::modify(const bool& status){
    DataTransfer dataTransfer{6,"Nguyen"};
    qWarning()<<"Send data: "<<dataTransfer.grade;
    qWarning()<<"Send data: "<<dataTransfer.name;
    mService->changeStatus(status);
    mService->sendArg(dataTransfer);
    mService->sendE(METHOD_RESULT::INVALID);
    mService->sendE(METHOD_RESULT::SUCCESS);
}
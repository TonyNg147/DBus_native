#include "Consumers.h"

Consumer::Consumer(QObject* parent)
    :QObject(parent)
{   
    mService = &ControllerInterface::getInstance();
}
void Consumer::modify(const bool& status){
    qInfo()<<"Send data from consumer";
    qWarning()<<m_dataTransfer.grade;
    qWarning()<<m_dataTransfer.name;
    qWarning()<<"Res is: "<<(int)METHOD_RESULT::SUCCESS;
    mService->changeStatus(status);
    mService->sendArg(m_dataTransfer);
    mService->sendE(METHOD_RESULT::SUCCESS);
}
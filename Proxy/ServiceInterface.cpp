#include "ServiceInterface.h"
ControllerInterface::ControllerInterface(const QString& service, 
                    const QString& object,
                    const QDBusConnection& connection,
                    QObject* parent )
    : QDBusAbstractInterface(service,object,"controller.service",connection,parent)
{

}
ControllerInterface::~ControllerInterface(){

}

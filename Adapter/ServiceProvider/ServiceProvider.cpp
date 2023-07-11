#include "ServiceProvider.h"
#include "../Controller/controller.h"
ServiceProvider& ServiceProvider::getInstance(){
    static ServiceProvider instance;
    return instance;
}
ServiceProvider::ServiceProvider()
{
    m_serviceAdapter = new ServiceAdapter(&Controller::getInstance());
    QDBusConnection::sessionBus().registerService("controller.service");
    QDBusConnection::sessionBus().registerObject("/controller",&Controller::getInstance());
}

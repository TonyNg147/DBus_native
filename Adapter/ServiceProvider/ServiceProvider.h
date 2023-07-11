#ifndef SERVICE_PROVIDER_H
#define SERVICE_PROVIDER_H
#include <ServiceAdapter.h>
class ServiceProvider{
    private:
        ServiceProvider();
    public:
        static ServiceProvider& getInstance();
    private:
        ServiceAdapter* m_serviceAdapter = nullptr;
};
#endif //SERVICE_PROVIDER_H
#ifndef CONSUMERS_H
#define CONSUMERS_H
#include <QObject>
#include <ServiceInterface.h>
class Consumer: public QObject{
    Q_OBJECT
    public:
        Consumer(QObject* parent = nullptr);
    public slots:
        void modify(const bool& status);
    private:
        ControllerInterface *mService = nullptr; 
        DataTransfer m_dataTransfer{6,"Nguyen"};
};
#endif //CONSUMERS_H
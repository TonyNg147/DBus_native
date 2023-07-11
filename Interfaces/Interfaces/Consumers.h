#ifndef CONSUMERS_H
#define CONSUMERS_H
#include <QObject>
#include <ServiceInterface.h>
class Consumer: public QObject{
    Q_OBJECT
    public:
        Consumer(QObject* parent = nullptr);
    public slots:
        /**
         * @brief Modify the status in Controller's application
         */
        void modify(const bool& status);
    private:
        /**
         * @brief The interface reference
         * 
         */
        ControllerInterface *mService = nullptr; 
        /**
         * @brief Data to be transferred through D-Bus
         * 
         */
        DataTransfer m_dataTransfer{6,"Nguyen"};
};
#endif //CONSUMERS_H
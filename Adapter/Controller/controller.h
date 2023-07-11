#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QObject>
#include <Data.h>
class Controller: public QObject{
    Q_OBJECT
    /**
     * @brief The controller's status (ON or OFF)
     * 
     * @param statusChanged 
     */
    Q_PROPERTY(bool status READ status NOTIFY statusChanged)
    Controller(QObject* parent = nullptr);
    public:
        static Controller& getInstance();
        inline bool status() const {return m_status;}
    signals:
        void statusChanged();
        void nameChanged();
    public slots:
        void changeStatus(const bool& status);
        /**
         * @brief To demonstrate transferring customized data through D-Bus
         * 
         * @param dataTransfer 
         */
        void sendArg(const DataTransfer& dataTransfer);
        /**
         * @brief To demonstrate transferring customized Enum type through D-Bus
         * 
         * @param dataTransfer 
         */
        void sendE(const METHOD_RESULT& res);
    private:
        bool m_status = false;
};
#endif
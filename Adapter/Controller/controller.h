#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QObject>
#include <Data.h>
class Controller: public QObject{
    Q_OBJECT
    Q_PROPERTY(bool status READ status NOTIFY statusChanged)
    Q_PROPERTY(DataTransfer dataTransfer READ dataTransfer)
    Q_CLASSINFO("D-Bus Interface","controller.service")
    public:
        Controller(QObject* parent = nullptr);
        inline const bool status() const {return m_status;}
        QString readName() const {return m_name;}
        void setName(QString name){
            if (m_name != name){
                m_name = name;
                emit nameChanged();
            }
        }
        DataTransfer dataTransfer() {return m_DataTransfer;}
    public slots:
        int modifyName(const QString& val){

        }
    signals:
        void statusChanged();
        void nameChanged();
    public slots:
        void changeStatus(const bool& status);
        void sendArg(const DataTransfer& dataTransfer);
        void sendE(const METHOD_RESULT& res);
    private:
        bool m_status = false;
        QString m_name;
        DataTransfer m_DataTransfer{10,"Nguyen"};
};
#endif
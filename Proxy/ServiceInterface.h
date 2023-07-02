#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "Data.h"

class ControllerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
    Q_PROPERTY(bool status READ status)
    public:
        ControllerInterface(const QString& service, 
                            const QString& object,
                            const QDBusConnection& connection,
                            QObject* parent = nullptr);
        ~ControllerInterface();
        inline bool status() const {
            return qvariant_cast<bool>(property("status"));
        }
    public slots:
        inline QDBusPendingReply<> changeStatus(bool status){
            QList<QVariant> argumentList;
            argumentList<< QVariant::fromValue(status);
            return asyncCallWithArgumentList(QStringLiteral("changeStatus"),argumentList);
        }
        inline QDBusPendingReply<> sendArg(DataTransfer arg){
            QList<QVariant> argumentList;
            argumentList<< QVariant::fromValue(arg);
            return asyncCallWithArgumentList(QStringLiteral("sendArg"),argumentList);
        }
        inline QDBusPendingReply<> sendE(METHOD_RESULT arg){
            QList<QVariant> argumentList;
            argumentList<< QVariant::fromValue(arg);
            return asyncCallWithArgumentList(QStringLiteral("sendE"),argumentList);
        }
    signals:
        void statusChanged();
};
#ifndef DATA_H
#define DATA_H
#include <QString>
#include <QDBusArgument>
#include <QDBusMetaType>
#include <QMetaType>
struct DataTransfer{
    int grade;
    QString name;
};
enum class METHOD_RESULT{
    INVALID=-1,
    SUCCESS,
    FAILURE,
};
Q_DECLARE_METATYPE(DataTransfer)
Q_DECLARE_METATYPE(METHOD_RESULT)
QDBusArgument &operator<<(QDBusArgument &argument, const DataTransfer &myStruct);
const QDBusArgument &operator>>(const QDBusArgument &argument, DataTransfer &myStruct);

QDBusArgument &operator<<(QDBusArgument &argument, const METHOD_RESULT &res);
const QDBusArgument &operator>>(const QDBusArgument &argument, METHOD_RESULT &res);

#endif// DATA_H
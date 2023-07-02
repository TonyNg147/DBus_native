#include "Init.h"



 QDBusArgument &operator<<(QDBusArgument &argument, const DataTransfer &myStruct){
    argument.beginStructure();
    argument << myStruct.grade << myStruct.name;
    argument.endStructure();
    return argument;
}
const QDBusArgument &operator>>(const QDBusArgument &argument, DataTransfer &myStruct){
    argument.beginStructure();
    argument>> myStruct.grade >> myStruct.name;
    argument.endStructure();
    return argument;
}

QDBusArgument &operator<<(QDBusArgument &argument, const METHOD_RESULT &res){
    argument.beginStructure();
    argument<<static_cast<int>(res);
    argument.endStructure();
    return argument;
}
const QDBusArgument &operator>>(const QDBusArgument &argument, METHOD_RESULT &res){
    int resValue = -1;
    argument.beginStructure();
    argument>>resValue;
    argument.endStructure();
    if (resValue != static_cast<int>(METHOD_RESULT::SUCCESS) && resValue != static_cast<int>(METHOD_RESULT::FAILURE)){
        res = METHOD_RESULT::INVALID;
    }else{
        res = static_cast<METHOD_RESULT>(resValue);
    }
    return argument;
}

namespace DBusNavtive{
    void initialize(){
        qDBusRegisterMetaType<DataTransfer>();
        qDBusRegisterMetaType<METHOD_RESULT>();
    }
}


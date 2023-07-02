#include "ServiceAdapter.h"
#include <QtCore/QMetaObject>

        ServiceAdapter::ServiceAdapter(QObject* parent)
            :QDBusAbstractAdaptor(parent)
        {
            setAutoRelaySignals(true);
        }
        ServiceAdapter::~ServiceAdapter(){
            
        }

        void ServiceAdapter::changeStatus(bool status){
            QMetaObject::invokeMethod(parent(),"changeStatus",Q_ARG(bool,status));
        }

        void ServiceAdapter::sendArg(DataTransfer arg){
            QMetaObject::invokeMethod(parent(),"sendArg",Q_ARG(DataTransfer,arg));
        }

        void ServiceAdapter::sendE(METHOD_RESULT res){
            QMetaObject::invokeMethod(parent(),"sendE",Q_ARG(METHOD_RESULT,res));
        }


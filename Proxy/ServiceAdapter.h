#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "Data.h"
class ServiceAdapter: public QDBusAbstractAdaptor
{   
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface","controller.service")
    Q_CLASSINFO("D-Bus Introspection", ""
                                        " <interface name=\"controller.service\">                 \n"
                                        "     <property name=\"status\" access=\"read\" type=\"b\">   \n"  
                                        "     <method name=\"changeStatus\">                      \n"  
                                        "         <arg name=\"status\" type=\"b\" direction=\"in\">   \n"       
                                        "     </method>                                         \n"  
                                        "     <signal name=\"statusChanged\">                     \n"
                                        " <method name=\"sendArg\">                                                              \n"                                                                                      
                                        "     <arg type=\"is\" direction=\"out\">                                               \n"                                   
                                        "     <annotation name=\"org.qtproject.QtDBus.QtTypeName.Out0\" value=\"DataTransfer\"> \n"                                                                                 
                                        " </method>                                                                             \n"     
                                        " <method name=\"sendE\">                                                                                \n "
                                        "     <arg name=\"res\" type=\"(i)\" direction=\"out\">                                   \n "
                                        "     <annotation name=\"org.qtproject.QtDBus.QtTypeName.Out0\" value=\"METHOD_RESULT\">  \n "  
                                        " </method>                                                                               \n "
                                        " </interface>                                          \n"
                                       ""
               )
            Q_PROPERTY(bool status READ status)
    public:
        ServiceAdapter(QObject* parent);
        ~ServiceAdapter();

        inline bool status() const{
            return qvariant_cast<bool>(parent()->property("status"));
        }

    public slots:
        void changeStatus(bool status);
        void sendArg(DataTransfer);
        void sendE(METHOD_RESULT res);
    signals:
        void statusChanged();

};  

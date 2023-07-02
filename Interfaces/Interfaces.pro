QT+= quick dbus
TEMPLATE = app 
DBUS_INTERFACES+= controller.xml
INCLUDEPATH+= $$PWD/../Proxy
LIBS+= -L$$OUT_PWD/../../Proxy/build -lProxy
SOURCES+=\
         main.cpp \
         Interfaces/Consumers.cpp 
HEADERS+= \
         Interfaces/Consumers.h 
RESOURCES+= DataHMI.qrc
           

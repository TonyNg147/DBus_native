QT+= quick dbus
TEMPLATE = app 
TARGET=Interface
DESTDIR=$$OUT_PWD/../Delivery
INCLUDEPATH+= $$PWD/../Utils/Proxy 
LIBS+= -L$$OUT_PWD/../Delivery/libraries \
       -lProxy \
       -lLogger 
SOURCES+=\
         main.cpp \
         Interfaces/Consumers.cpp 
HEADERS+= \
         Interfaces/Consumers.h 
RESOURCES+= DataHMI.qrc
           

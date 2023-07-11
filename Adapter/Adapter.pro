TEMPLATE = app
QT+= quick dbus
TARGET=Adapter
DESTDIR=$$OUT_PWD/../Delivery
INCLUDEPATH+= $$PWD/../Utils/Proxy \
              $$PWD/../Utils/Logger
LIBS+= -L$$OUT_PWD/../Delivery/libraries \
       -lProxy \
       -lLogger
SOURCES+= \
         main.cpp \
         Controller/controller.cpp \
         ServiceProvider/ServiceProvider.cpp 
HEADERS+= \
        Controller/controller.h \
        ServiceProvider/ServiceProvider.h
RESOURCES+= \
           DataHMI.qrc
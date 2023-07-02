TEMPLATE = app
QT+= quick dbus
DBUS_ADAPTORS+= controller.xml
INCLUDEPATH+= $$PWD/../Proxy
LIBS+= -L$$OUT_PWD/../../Proxy/build -lProxy
SOURCES+= \
         main.cpp \
         Controller/controller.cpp
HEADERS+= \
        Controller/controller.h
RESOURCES+= \
           DataHMI.qrc
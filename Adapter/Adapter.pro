# The template of the project
TEMPLATE = app
# Module which be used in the project
QT+= quick dbus
# Specify the target's name
TARGET=Adapter
# Specify the target's destination
DESTDIR=$$OUT_PWD/../Delivery
# Make those files and folders visible in the project
INCLUDEPATH+= $$PWD/../Utils/Proxy \
              $$PWD/../Utils/Logger
# The dependent libraries and where to find them
LIBS+= -L$$OUT_PWD/../Delivery/libraries \
       -lProxy \
       -lLogger
# Sources
SOURCES+= \
         main.cpp \
         Controller/controller.cpp \
         ServiceProvider/ServiceProvider.cpp 
# Headers to generate MOC files
HEADERS+= \
        Controller/controller.h \
        ServiceProvider/ServiceProvider.h
RESOURCES+= \
           DataHMI.qrc
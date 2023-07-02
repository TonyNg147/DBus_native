TEMPLATE = lib
QT+=dbus core
SOURCES+= \
        ServiceInterface.cpp \
        ServiceAdapter.cpp \
        Init.cpp
HEADERS+=\
        ServiceInterface.h \
        ServiceAdapter.h \
        Data.h \
        Init.h
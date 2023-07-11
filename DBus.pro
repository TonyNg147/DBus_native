TEMPLATE=subdirs
SUBDIRS+= \
        Adapter \
        Interfaces \
        Utils 

Adapter.depends = Utils
Interfaces.depends = Utils
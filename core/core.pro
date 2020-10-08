TEMPLATE = lib
QT += qml multimedia network websockets

include(defines.pri)
include(../harbour-sailfin.pri)

SOURCES += \
    src/credentialmanager.cpp \
    src/jellyfin.cpp \
    src/jellyfinapiclient.cpp \
    src/jellyfinapimodel.cpp \
    src/jellyfindeviceprofile.cpp \
    src/jellyfinitem.cpp \
    src/jellyfinplaybackmanager.cpp \
    src/jellyfinwebsocket.cpp \
    src/serverdiscoverymodel.cpp

HEADERS += \
    include/credentialmanager.h \
    include/jellyfin.h \
    include/jellyfinapiclient.h \
    include/jellyfinapimodel.h \
    include/jellyfindeviceprofile.h \
    include/jellyfinitem.h \
    include/jellyfinplaybackmanager.h \
    include/jellyfinwebsocket.h \
    include/serverdiscoverymodel.h

VERSION = $$SAILFIN_VERSION

TARGET = jellyfin-qt
DESTDIR = lib

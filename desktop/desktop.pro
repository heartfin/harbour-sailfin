TEMPLATE = app

SOURCES += \
    src/main.cpp

include(../harbour-sailfin.pri)

# Include our library

LIBS += -L$$OUT_PWD/../core/lib -ljellyfin-qt
core.files += ../core/lib
core.path = /usr/share/$${TARGET}

INSTALLS += core

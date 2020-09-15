# NOTICE:
#
# Application name defined in TARGET has a corresponding QML filename.
# If name defined in TARGET is changed, the following needs to be done
# to match new name:
#   - corresponding QML filename must be changed
#   - desktop icon filename must be changed
#   - desktop filename must be changed
#   - icon definition filename in desktop file must be changed
#   - translation filenames have to be changed

# The name of your application
TARGET = harbour-sailfin


CONFIG += sailfishapp c++11

SOURCES += \
    src/credentialmanager.cpp \
    src/harbour-sailfin.cpp \
    src/jellyfinapiclient.cpp \
    src/jellyfinapimodel.cpp \
    src/serverdiscoverymodel.cpp

DISTFILES += \
    qml/components/GlassyBackground.qml \
    qml/components/LibraryItemDelegate.qml \
    qml/components/MoreSection.qml \
    qml/components/PlainLabel.qml \
    qml/components/RemoteImage.qml \
    qml/components/UserGridDelegate.qml \
    qml/cover/CoverPage.qml \
    qml/pages/AddServerConnectingPage.qml \
    qml/pages/DetailBasePage.qml \
    qml/pages/LegalPage.qml \
    qml/pages/LoginDialog.qml \
    qml/pages/MainPage.qml \
    qml/pages/SecondPages.qml \
    qml/harbour-sailfin.qml

SAILFISHAPP_ICONS = 86x86 108x108 128x128 172x172

# to disable building translations every time, comment out the
# following CONFIG line
CONFIG += sailfishapp_i18n

# German translation is enabled as an example. If you aren't
# planning to localize your app, remember to comment out the
# following TRANSLATIONS line. And also do not forget to
# modify the localized app name in the the .desktop file.
# TRANSLATIONS += \

 HEADERS += \
    src/credentialmanager.h \
    src/jellyfinapiclient.h \
    src/jellyfinapimodel.h \
    src/serverdiscoverymodel.h

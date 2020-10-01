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

QT += multimedia

CONFIG += sailfishapp c++11

# Help, something keeps eating my quotes and backslashes

!defined(SAILFIN_VERSION, var) {
    SAILFIN_VERSION = "(UNKNOWN VERSION)"
}

DEFINES += "SAILFIN_VERSION=\"\\\"$$SAILFIN_VERSION\\\"\""

SOURCES += \
    src/credentialmanager.cpp \
    src/harbour-sailfin.cpp \
    src/jellyfinapiclient.cpp \
    src/jellyfinapimodel.cpp \
    src/jellyfindeviceprofile.cpp \
    src/jellyfinmediasource.cpp \
    src/serverdiscoverymodel.cpp

DISTFILES += \
    qml/Constants.qml \
    qml/Utils.js \
    qml/components/GlassyBackground.qml \
    qml/components/IconListItem.qml \
    qml/components/LibraryItemDelegate.qml \
    qml/components/MoreSection.qml \
    qml/components/PlainLabel.qml \
    qml/components/PlayToolbar.qml \
    qml/components/RemoteImage.qml \
    qml/components/Shim.qml \
    qml/components/UserGridDelegate.qml \
    qml/components/VideoPlayer.qml \
    qml/components/VideoTrackSelector.qml \
    qml/components/itemdetails/SeasonDetails.qml \
    qml/components/videoplayer/VideoError.qml \
    qml/components/videoplayer/VideoHud.qml \
    qml/cover/CoverPage.qml \
    qml/cover/PosterCover.qml \
    qml/cover/VideoCover.qml \
    qml/pages/LegalPage.qml \
    qml/pages/MainPage.qml \
    qml/pages/AboutPage.qml \
    qml/harbour-sailfin.qml \
    qml/pages/SettingsPage.qml \
    qml/pages/VideoPage.qml \
    qml/pages/itemdetails/BaseDetailPage.qml \
    qml/pages/itemdetails/CollectionPage.qml \
    qml/pages/itemdetails/EpisodePage.qml \
    qml/pages/itemdetails/FilmPage.qml \
    qml/pages/itemdetails/MusicAlbumPage.qml \
    qml/pages/itemdetails/SeasonPage.qml \
    qml/pages/itemdetails/SeriesPage.qml \
    qml/pages/itemdetails/UnsupportedPage.qml \
    qml/pages/itemdetails/VideoPage.qml \
    qml/pages/setup/AddServerConnectingPage.qml \
    qml/pages/setup/LoginDialog.qml \
    qml/qmldir

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
    src/jellyfindeviceprofile.h \
    src/jellyfinmediasource.h \
    src/serverdiscoverymodel.h

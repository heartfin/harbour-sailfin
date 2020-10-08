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

#INCLUDEPATH += ../core/include
#DEPENDPATH += ../core
#LIBS += -Lcore -lcore
include(../core/defines.pri)
include(../harbour-sailfin.pri)

# include our shared library and install it

LIBS += -L$$OUT_PWD/../core/lib -ljellyfin-qt
core.files += ../core/lib
core.path = /usr/share/$${TARGET}

INSTALLS += core

# Other configuration

CONFIG += sailfishapp # c++17

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

SOURCES += \
    src/harbour-sailfin.cpp

SAILFISHAPP_ICONS = 86x86 108x108 128x128 172x172

# to disable building translations every time, comment out the
# following CONFIG line
CONFIG += sailfishapp_i18n

find_package(Qt5 COMPONENTS Gui Qml Quick)
set(sailfin_SOURCES
	src/main.cpp)

set(sailfin_QML_SOURCES
	qml/Constants.qml
	qml/Utils.js
	qml/components/GlassyBackground.qml
	qml/components/IconListItem.qml
	qml/components/LibraryItemDelegate.qml
	qml/components/MoreSection.qml
	qml/components/PlainLabel.qml
	qml/components/PlayToolbar.qml
	qml/components/RemoteImage.qml
	qml/components/Shim.qml
	qml/components/UserGridDelegate.qml
	qml/components/VideoPlayer.qml
	qml/components/VideoTrackSelector.qml
	qml/components/itemdetails/SeasonDetails.qml
	qml/components/videoplayer/VideoError.qml
	qml/components/videoplayer/VideoHud.qml
	qml/cover/CoverPage.qml
	qml/cover/PosterCover.qml
	qml/cover/VideoCover.qml
	qml/pages/LegalPage.qml
	qml/pages/MainPage.qml
	qml/pages/AboutPage.qml
	qml/harbour-sailfin.qml
	qml/pages/SettingsPage.qml
	qml/pages/VideoPage.qml
	qml/pages/itemdetails/BaseDetailPage.qml
	qml/pages/itemdetails/CollectionPage.qml
	qml/pages/itemdetails/EpisodePage.qml
	qml/pages/itemdetails/FilmPage.qml
	qml/pages/itemdetails/MusicAlbumPage.qml
	qml/pages/itemdetails/SeasonPage.qml
	qml/pages/itemdetails/SeriesPage.qml
	qml/pages/itemdetails/UnsupportedPage.qml
	qml/pages/itemdetails/VideoPage.qml
	qml/pages/setup/AddServerConnectingPage.qml
	qml/pages/setup/LoginDialog.qml
	qml/qmldir)

add_custom_target(harbour-sailfin-qml ${sailfin_QML_SOURCES})

add_executable(sailfin ${sailfin_SOURCES})
target_link_libraries(sailfin PUBLIC Qt5::Gui Qt5::Qml Qt5::Quick jellyfin-qt)

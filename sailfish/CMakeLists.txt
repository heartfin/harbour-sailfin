project(harbour-sailfin-sailfish)

# find_library(SAILFISH sailfishapp 1.0 REQUIRED)
include(ExternalProject)
# FIXME: don't hardcode /home/deploy/installroot/
set(DEPLOY_ROOT /home/deploy/installroot/)
ExternalProject_Add(BlurhashQt
	# PREFIX ${CMAKE_CURRENT_BINARY_DIR}/lib/blurhash-qt
	GIT_REPOSITORY https://github.com/HenkKalkwater/BlurhashQt.git
	GIT_TAG 61ae7f0feca6ab67da1bfdbcb222bbd12e8f7e07

	CMAKE_ARGS -DBUILD_SHARED_LIBS:BOOL=ON -DENABLE_EXPORT=OFF -DQML_PLUGIN_PATH=${PROJECT_BINARY_DIR}/plugins/)

find_package(Qt5 COMPONENTS Gui Qml Quick LinguistTools)
find_package(SailfishApp 1.0 REQUIRED)

set(harbour-sailfin_SOURCES
	src/harbour-sailfin.cpp)

set(sailfin_QML_SOURCES
	qml/Constants.qml
	qml/Utils.js
	qml/components/music/NarrowAlbumCover.qml
	qml/components/music/WideAlbumCover.qml
	qml/components/music/SongDelegate.qml
	qml/components/videoplayer/VideoError.qml
	qml/components/videoplayer/VideoHud.qml
	qml/components/ContributorsSection.qml
	qml/components/IconListItem.qml
	qml/components/ItemChildrenShowcase.qml
	qml/components/JItem.qml
	qml/components/LibraryItemDelegate.qml
	qml/components/MoreSection.qml
	qml/components/PlainLabel.qml
	qml/components/PlaybackBar.qml
	qml/components/PlayQueue.qml
	qml/components/PlayToolbar.qml
	qml/components/RemoteImage.qml
	qml/components/Shim.qml
	qml/components/UserGridDelegate.qml
	qml/components/VideoPlayer.qml
	qml/components/VideoTrackSelector.qml
	qml/cover/CollectionPage.qml
	qml/cover/PosterCover.qml
	qml/cover/NowPlayingCover.qml
	qml/pages/LegalPage.qml
	qml/pages/MainPage.qml
	qml/pages/AboutPage.qml
	qml/harbour-sailfin.qml
	qml/pages/ConnectingPage.qml
	qml/pages/ControllableDevicesPage.qml
	qml/pages/QuickConnectDialog.qml
	qml/pages/SettingsPage.qml
	qml/pages/VideoPage.qml
	qml/pages/itemdetails/BaseDetailPage.qml
	qml/pages/itemdetails/CollectionPage.qml
	qml/pages/itemdetails/EpisodePage.qml
	qml/pages/itemdetails/FilmPage.qml
    qml/pages/itemdetails/LiveTvChannelPage.qml
    qml/pages/itemdetails/LiveTvChannelsPage.qml
    qml/pages/itemdetails/MusicAlbumPage.qml
	qml/pages/itemdetails/MusicArtistPage.qml
	qml/pages/itemdetails/MusicLibraryPage.qml
    qml/pages/itemdetails/PhotoPage.qml
	qml/pages/itemdetails/SeasonPage.qml
	qml/pages/itemdetails/SeriesPage.qml
	qml/pages/itemdetails/UnsupportedPage.qml
	qml/pages/itemdetails/VideoPage.qml
	qml/pages/settings/DebugPage.qml
	qml/pages/settings/StreamingPage.qml
	qml/pages/setup/AddServerConnectingPage.qml
	qml/pages/setup/AddServerPage.qml
	qml/pages/setup/LoginDialog.qml
	qml/qmldir)
	
set(TRANSLATION_SOURCE_FILES
        ${harbour-sailfin_SOURCES}
        ${sailfin_QML_SOURCES}
        )

set(TRANSLATION_TS_FILES
        translations/harbour-sailfin.ts
        translations/harbour-sailfin-de.ts
        translations/harbour-sailfin-ru.ts
       )

qt5_create_translation(TRANSLATION_QM_FILES
       ${TRANSLATION_SOURCE_FILES}
       ${TRANSLATION_TS_FILES})
add_custom_target(translations ALL DEPENDS ${TRANSLATION_QM_FILES})

add_executable(harbour-sailfin ${harbour-sailfin_SOURCES} ${sailfin_QML_SOURCES})
target_link_libraries(harbour-sailfin PRIVATE Qt5::Gui Qt5::Qml Qt5::Quick SailfishApp::SailfishApp 
	# Note: this may break when the compiler changes. -rdynamic and -pie seem to be needed for the 
	# invoker/booster to work
	JellyfinQt "-Wl,-rpath,${CMAKE_INSTALL_LIBDIR} -rdynamic -pie")
target_compile_definitions(harbour-sailfin
	PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)

install(TARGETS harbour-sailfin
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

install(DIRECTORY ${PROJECT_BINARY_DIR}/plugins/
	DESTINATION share/harbour-sailfin/)
install(DIRECTORY qml
	DESTINATION share/harbour-sailfin
)
install(FILES ${TRANSLATION_QM_FILES}
        DESTINATION share/harbour-sailfin/translations
)
install(FILES harbour-sailfin.desktop
	DESTINATION share/applications
)
install(FILES icons/86x86/harbour-sailfin.png
	DESTINATION share/icons/hicolor/86x86/apps
)
install(FILES icons/108x108/harbour-sailfin.png
	DESTINATION share/icons/hicolor/108x108/apps )
install(FILES icons/128x128/harbour-sailfin.png
	DESTINATION share/icons/hicolor/128x128/apps
)
install(FILES icons/172x172/harbour-sailfin.png
	DESTINATION share/icons/hicolor/172x172/apps )

# Tell Qt Creator where the application executable(s) would be located on the
# device.
#
# It is not necessary to list other deployables than executables (runtime
# targets) here. The deployment process of Sailfish OS projects is opaque to
# Qt Creator and the information contained in QtCreatorDeployment.txt is only
# used to locate the executable associated with the active run configuration
# on the device in order to run it.
#
# Search the Qt Creator Manual to learn about the QtCreatorDeployment.txt file
# format.
file(WRITE "${CMAKE_BINARY_DIR}/QtCreatorDeployment.txt"
        "${CMAKE_INSTALL_PREFIX}\n${CMAKE_BINARY_DIR}/sailfish/harbour-sailfin:bin")

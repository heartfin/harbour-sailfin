project(jellyfin-qt VERSION 0.1.0)
find_package(Qt5 5.6 COMPONENTS Multimedia Network Qml WebSockets REQUIRED)
include(GNUInstallDirs)

set(jellyfin-qt_SOURCES
	src/credentialmanager.cpp
	src/jellyfin.cpp
	src/jellyfinapiclient.cpp
	src/jellyfinapimodel.cpp
	src/jellyfindeviceprofile.cpp
	src/jellyfinitem.cpp
	src/jellyfinplaybackmanager.cpp
	src/jellyfinwebsocket.cpp
	src/jsonhelper.cpp
	src/serverdiscoverymodel.cpp)

set(jellyfin-qt_HEADERS
	include/JellyfinQt/credentialmanager.h 
	include/JellyfinQt/jellyfin.h 
	include/JellyfinQt/jellyfinapiclient.h 
	include/JellyfinQt/jellyfinapimodel.h 
	include/JellyfinQt/jellyfindeviceprofile.h 
	include/JellyfinQt/jellyfinitem.h 
	include/JellyfinQt/jellyfinplaybackmanager.h 
	include/JellyfinQt/jellyfinwebsocket.h 
	include/JellyfinQt/jsonhelper.h
	include/JellyfinQt/serverdiscoverymodel.h)

add_definitions(-DSAILFIN_VERSION=\"${SAILFIN_VERSION}\")
add_library(jellyfin-qt ${jellyfin-qt_SOURCES} ${jellyfin-qt_HEADERS})
target_include_directories(jellyfin-qt 
	PUBLIC "include"
)
target_link_libraries(jellyfin-qt PUBLIC Qt5::Core Qt5::Multimedia Qt5::Network Qt5::Qml Qt5::WebSockets)
set_target_properties(jellyfin-qt PROPERTIES CXX_VISIBILITY_PRESET default)
install(TARGETS jellyfin-qt 
	LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
	ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
	INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
	RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}")

export(TARGETS jellyfin-qt FILE JellyfinQtConfig.cmake)

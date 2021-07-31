project(jellyfin-qt VERSION 0.1.0)
find_package(Qt5 5.6 COMPONENTS Multimedia Network Qml WebSockets REQUIRED)
include(GNUInstallDirs)
include(GeneratedSources.cmake)

set(JellyfinQt_SOURCES
        # src/DTO/dto.cpp
        src/model/deviceprofile.cpp
        src/model/item.cpp
        src/model/playlist.cpp
        src/model/shuffle.cpp

        src/support/jsonconv.cpp
        src/support/loader.cpp
        src/support/parseexception.cpp
        src/viewmodel/item.cpp
        src/viewmodel/itemmodel.cpp
        src/viewmodel/loader.cpp
        src/viewmodel/modelstatus.cpp
        src/viewmodel/playbackmanager.cpp
        src/viewmodel/playlist.cpp
        src/apiclient.cpp
        src/apimodel.cpp
        src/credentialmanager.cpp
        src/eventbus.cpp
        src/jellyfin.cpp
        src/jsonhelper.cpp
        src/serverdiscoverymodel.cpp
        src/websocket.cpp)

list(APPEND JellyfinQt_SOURCES ${openapi_SOURCES})

set(JellyfinQt_HEADERS
        include/JellyfinQt/model/deviceprofile.h
        include/JellyfinQt/model/item.h
        include/JellyfinQt/model/playlist.h
        include/JellyfinQt/model/shuffle.h
        include/JellyfinQt/support/jsonconv.h
        include/JellyfinQt/support/jsonconvimpl.h
        include/JellyfinQt/support/loader.h
        include/JellyfinQt/support/parseexception.h
        include/JellyfinQt/viewmodel/item.h
        include/JellyfinQt/viewmodel/itemmodel.h
        include/JellyfinQt/viewmodel/loader.h
        include/JellyfinQt/viewmodel/modelstatus.h
        include/JellyfinQt/viewmodel/propertyhelper.h
        include/JellyfinQt/viewmodel/playbackmanager.h
        include/JellyfinQt/viewmodel/playlist.h
        include/JellyfinQt/apiclient.h
        include/JellyfinQt/apimodel.h
        include/JellyfinQt/credentialmanager.h
        include/JellyfinQt/eventbus.h
        include/JellyfinQt/jellyfin.h
        include/JellyfinQt/jsonhelper.h
        include/JellyfinQt/serverdiscoverymodel.h
        include/JellyfinQt/websocket.h)
        
list(APPEND JellyfinQt_HEADERS ${openapi_HEADERS})

add_definitions(-DSAILFIN_VERSION=\"${SAILFIN_VERSION}\")

if (PLATFORM_SAILFISHOS)
    add_definitions(-DPLATFORM_SAILFISHOS=1)
endif()

add_library(JellyfinQt ${JellyfinQt_SOURCES} ${JellyfinQt_HEADERS})

if(${CMAKE_VERSION} VERSION_GREATER "3.16.0") 
    if(BUILD_PRECOMPILED_HEADERS)
        target_precompile_headers(JellyfinQt PRIVATE ${JellyfinQt_HEADERS})
    endif()
endif()

target_include_directories(JellyfinQt PUBLIC "include")
target_link_libraries(JellyfinQt PUBLIC Qt5::Core Qt5::Multimedia Qt5::Network Qt5::Qml Qt5::WebSockets)
set_target_properties(JellyfinQt PROPERTIES CXX_VISIBILITY_PRESET default)
install(TARGETS JellyfinQt
	LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
	ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
	INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
	RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}")

export(TARGETS JellyfinQt FILE JellyfinQtConfig.cmake)

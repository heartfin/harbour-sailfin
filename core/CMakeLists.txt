project(jellyfin-qt VERSION 0.1.0)
include(GNUInstallDirs)
include(FetchContent)

################################################################################
# Libraries                                                                    #
################################################################################

find_package(Qt5 5.6 COMPONENTS Multimedia Network Qml WebSockets REQUIRED)

find_package(Boost REQUIRED)

find_package(Zug)
if(NOT Zug_FOUND)
    message(STATUS "Using zug from FetchContent")
    set(zug_BUILD_TESTS OFF)
    set(zug_BUILD_EXAMPLES OFF)
    set(zug_BUILD_DOCS OFF)
    FetchContent_Declare(zug
        GIT_REPOSITORY https://github.com/arximboldi/zug
        GIT_TAG 266cc7fcc01f546c4fd0dabf3a26c71ddc7f3e7d)
    FetchContent_MakeAvailable(zug)
endif()

find_package(Immer)
if(NOT Immer_FOUND)
    message(STATUS "Immer not installed; Retrieving Immer with FetchContent")
    set(immer_BUILD_TESTS OFF)
    set(immer_BUILD_EXAMPLES OFF)
    set(immer_BUILD_DOCS OFF)
    set(immer_BUILD_EXTRAS OFF)
    FetchContent_Declare(immer
        GIT_REPOSITORY https://github.com/arximboldi/immer
        GIT_TAG 800ddb04e528a3e83e69e8021d7e872e7c34cbcd)
    FetchContent_MakeAvailable(immer)
endif()

find_package(Lager)
if(NOT Lager_FOUND)
    message(STATUS "Lager not installed; Retrieving lager with FetchContent")
    set(lager_BUILD_TESTS OFF)
    set(lager_BUILD_EXAMPLES OFF)
    set(lager_BUILD_DOCS OFF)
    set(lager_EMBED_RESOURCES_PATH OFF)
    FetchContent_Declare(lager
        GIT_REPOSITORY  https://github.com/arximboldi/lager
        GIT_TAG         71eca6b0ebbccf3e0e54324b6967f047e49ba92d)
    FetchContent_MakeAvailable(lager)
endif()

find_package(cereal)
if(NOT cereal_FOUND)
    set(JUST_INSTALL_CEREAL ON)
    FetchContent_Declare(cereal
        GIT_REPOSITORY https://github.com/USCiLab/cereal
        GIT_TAG v1.3.0)
    FetchContent_MakeAvailable(cereal)
endif()

################################################################################
# TARGETS                                                                      #
################################################################################

# Includes the automatically generated files.
include(GeneratedSources.cmake)

set(jellyfin-qt_SOURCES
        # src/DTO/dto.cpp
        src/library/reducer.cpp
        src/model/item.cpp
        src/support/jsonconv.cpp
        src/support/loader.cpp
        src/apiclient.cpp
        src/apimodel.cpp
        src/credentialmanager.cpp
        src/deviceprofile.cpp
        src/jellyfin.cpp
        src/jsonhelper.cpp
        src/playbackmanager.cpp
        src/remotedata.cpp
        src/serverdiscoverymodel.cpp
        src/websocket.cpp)

list(APPEND jellyfin-qt_SOURCES ${openapi_SOURCES})

set(jellyfin-qt_HEADERS
        # include/JellyfinQt/DTO/dto.h
        include/JellyfinQt/network/actions.h
        include/JellyfinQt/network/networkrequest.h
        include/JellyfinQt/network/reducer.h
        include/JellyfinQt/network/store.h
        include/JellyfinQt/library/actions.h
        include/JellyfinQt/library/reducer.h
        include/JellyfinQt/library/store.h
        include/JellyfinQt/model/item.h
        include/JellyfinQt/support/jsonconv.h
        include/JellyfinQt/support/loader.h
        include/JellyfinQt/apiclient.h
        include/JellyfinQt/apimodel.h
        include/JellyfinQt/credentialmanager.h
        include/JellyfinQt/deviceprofile.h
        include/JellyfinQt/jellyfin.h
        include/JellyfinQt/jsonhelper.h
        include/JellyfinQt/playbackmanager.h
        include/JellyfinQt/remotedata.h
        include/JellyfinQt/serverdiscoverymodel.h
        include/JellyfinQt/websocket.h)
        
list(APPEND jellyfin-qt_HEADERS ${openapi_HEADERS})

add_definitions(-DSAILFIN_VERSION=\"${SAILFIN_VERSION}\")
if (PLATFORM_SAILFISHOS)
    add_definitions(-DPLATFORM_SAILFISHOS=1)
endif()

add_library(JellyfinQt ${jellyfin-qt_SOURCES} ${jellyfin-qt_HEADERS})

if(${CMAKE_VERSION} VERSION_GREATER "3.16.0") 
    target_precompile_headers(JellyfinQt PRIVATE ${jellyfin-qt_HEADERS})
endif()

target_include_directories(JellyfinQt
        PUBLIC "include" "generated/include"
)
target_link_libraries(JellyfinQt
    PUBLIC Qt5::Core Qt5::Multimedia Qt5::Network Qt5::Qml Qt5::WebSockets)

target_link_libraries_system(JellyfinQt
    PUBLIC
        cereal
        zug
        immer
        lager)

set_target_properties(JellyfinQt PROPERTIES CXX_VISIBILITY_PRESET default)
install(TARGETS JellyfinQt
	LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
	ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
	INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
	RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}")

install(TARGETS JellyfinQt EXPORT JellyfinQtTargets)
# export(TARGETS jellyfin-qt lager immer cereal FILE JellyfinQtConfig.cmake)

cmake_minimum_required(VERSION 3.11)
project(harbour-sailfin)
set (CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
set(CMAKE_AUTOMOC ON)
cmake_policy(SET CMP0048 NEW)

# Options
option(PLATFORM_SAILFISHOS "Build SailfishOS version of application")
option(PLATFORM_QTQUICK "Build QtQuick version of application")

if(PLATFORM_SAILFISHOS)
	# Hardcode this less?
	set(CMAKE_INSTALL_LIBDIR "${CMAKE_INSTALL_PREFIX}/share/harbour-sailfin/lib")
endif()

add_subdirectory(core)
if(PLATFORM_SAILFISHOS)
	add_subdirectory(sailfish)
elseif(PLATFORM_QTQUICK)
	add_subdirectory(qtquick)
endif()

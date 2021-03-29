cmake_minimum_required(VERSION 3.11)
project(harbour-sailfin)
set (CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
set(CMAKE_AUTOMOC ON)
cmake_policy(SET CMP0048 NEW)
set(CMAKE_CXX_STANDARD 17)

# Options
option(PLATFORM_SAILFISHOS "Build SailfishOS version of application" OFF)
option(PLATFORM_QTQUICK "Build QtQuick version of application" ON)
option(BUILD_PRECOMPILED_HEADERS "Build with precompiled headers for faster compile times when doing a full rebuild, at the cost of slower incremental builds whenever a header file is changed" OFF)

if (NOT SAILFIN_VERSION)
    set(SAILFIN_VERSION "1.0.0")
endif()

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

include(FeatureSummary)
feature_summary(WHAT ALL INCLUDE_QUIET_PACKAGES FATAL_ON_MISSING_REQUIRED_PACKAGES)

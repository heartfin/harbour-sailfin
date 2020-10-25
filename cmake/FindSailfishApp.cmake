# - Try to find libsailfishapp
# Once done this will define
#  SailfishApp_FOUND - System has libsailfishapp
#  SailfishApp_INCLUDE_DIRS - The libsailfishapp include directories
#  SailfishApp_LIBRARIES - The libraries needed to use libsailfishapp
#  SailfishApp_DEFINITIONS - Compiler switches required for using libsailfishapp

find_package(PkgConfig)
pkg_check_modules(PC_SailfishApp QUIET sailfishapp)
set(SailfishApp_DEFINITIONS ${PC_SailfishApp_CFLAGS_OTHER})

find_path(SailfishApp_INCLUDE_DIR sailfishapp.h
	HINTS ${PC_SailfishApp_INCLUDEDIR} ${PC_SailfishApp_INCLUDE_DIRS}
	PATH_SUFFIXES sailfishapp )

find_library(SailfishApp_LIBRARY NAMES sailfishapp libsailfishapp
	HINTS ${PC_SailfishApp_LIBDIR} ${PC_SailfishApp_LIBRARY_DIRS} )

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set LIBSailfishApp_FOUND to TRUE
# if all listed variables are TRUE
set(SailfishApp_VERSION ${PC_SAILFISHAPP_VERSION})
find_package_handle_standard_args(SailfishApp 
	FOUND_VAR SailfishApp_FOUND
	REQUIRED_VARS
		SailfishApp_LIBRARY 
		SailfishApp_INCLUDE_DIR
	VERSION_VAR SailfishApp_VERSION)

if(SailfishApp_FOUND AND NOT TARGET Foo::Foo)
  add_library(SailfishApp::SailfishApp UNKNOWN IMPORTED)
  set_target_properties(SailfishApp::SailfishApp PROPERTIES
    IMPORTED_LOCATION "${SailfishApp_LIBRARY}"
    INTERFACE_COMPILE_OPTIONS "${PC_SailfishApp_CFLAGS_OTHER}"
    INTERFACE_INCLUDE_DIRECTORIES "${SailfishApp_INCLUDE_DIR}"
  )
endif()

mark_as_advanced(SailfishApp_INCLUDE_DIR SailfishApp_LIBRARY )

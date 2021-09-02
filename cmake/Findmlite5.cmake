# - Try to find mlite5
# Once done this will define
#  mlite5_FOUND - System has mlite5
#  mlite5_INCLUDE_DIRS - The mlite5 include directories
#  mlite5_LIBRARIES - The libraries needed to use mlite5
#  mlite5_DEFINITIONS - Compiler switches required for using mlite5

find_package(PkgConfig)
pkg_check_modules(PC_mlite5 QUIET mlite5)
set(mlite5_DEFINITIONS ${PC_mlite5_CFLAGS_OTHER})

find_path(mlite5_INCLUDE_DIR mlite-global.h
    HINTS ${PC_mlite5_INCLUDEDIR} ${PC_mlite5_INCLUDE_DIRS}
    PATH_SUFFIXES sailfishapp )

find_library(mlite5_LIBRARY NAMES mlite5 mlite libmlite libmlite5
    HINTS ${PC_mlite5_LIBDIR} ${PC_mlite5_LIBRARY_DIRS} )

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set LIBmlite5_FOUND to TRUE
# if all listed variables are TRUE
set(mlite5_VERSION ${PC_mlite5_VERSION})
find_package_handle_standard_args(mlite5
    FOUND_VAR mlite5_FOUND
    REQUIRED_VARS
        mlite5_LIBRARY
        mlite5_INCLUDE_DIR
    VERSION_VAR mlite5_VERSION)

if(mlite5_FOUND AND NOT TARGET Foo::Foo)
  add_library(mlite5::mlite5 UNKNOWN IMPORTED)
  set_target_properties(mlite5::mlite5 PROPERTIES
    IMPORTED_LOCATION "${mlite5_LIBRARY}"
    INTERFACE_COMPILE_OPTIONS "${PC_mlite5_CFLAGS_OTHER}"
    INTERFACE_INCLUDE_DIRECTORIES "${mlite5_INCLUDE_DIR}"
  )
endif()

mark_as_advanced(mlite5_INCLUDE_DIR mlite5_LIBRARY )

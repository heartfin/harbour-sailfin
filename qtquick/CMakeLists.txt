find_package(Qt5 COMPONENTS Gui Qml Quick)
set(sailfin_SOURCES
	src/main.cpp)

add_executable(sailfin ${sailfin_SOURCES})
target_link_libraries(sailfin PUBLIC Qt5::Gui Qt5::Qml Qt5::Quick jellyfin-qt)

install(TARGETS harbour-sailfin
    RUNTIME DESTINATION bin
)

install(DIRECTORY translations
    DESTINATION share/harbour-sailfin
    FILES_MATCHING PATTERN "*.qm"
)

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
	"${CMAKE_INSTALL_PREFIX}
	${CMAKE_BINARY_DIR}/harbour-sailfin:bin
")

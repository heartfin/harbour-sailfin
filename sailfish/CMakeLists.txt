project(harbour-sailfin-sailfish)

# find_library(SAILFISH sailfishapp 1.0 REQUIRED)
find_package(Qt5 COMPONENTS Gui Qml Quick)
find_package(SailfishApp 1.0 REQUIRED)

set(harbour-sailfin_SOURCES
	src/harbour-sailfin.cpp)

add_executable(harbour-sailfin ${harbour-sailfin_SOURCES})
target_link_libraries(harbour-sailfin PRIVATE Qt5::Gui Qt5::Qml Qt5::Quick SailfishApp::SailfishApp jellyfin-qt)

install(TARGETS harbour-sailfin
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

install(DIRECTORY qml
    DESTINATION share/harbour-sailfin
)
install(DIRECTORY translations
    DESTINATION share/harbour-sailfin
    FILES_MATCHING PATTERN "*.qm"
)
install(FILES harbour-sailfin.desktop
    DESTINATION share/applications
)
install(FILES icons/86x86/harbour-sailfin.png
    DESTINATION share/icons/hicolor/86x86/apps
)
install(FILES icons/108x108/harbour-sailfin.png
    DESTINATION share/icons/hicolor/108x108/apps
)
install(FILES icons/128x128/harbour-sailfin.png
    DESTINATION share/icons/hicolor/128x128/apps
)
install(FILES icons/172x172/harbour-sailfin.png
    DESTINATION share/icons/hicolor/172x172/apps
)

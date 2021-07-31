include(CMakeParseArguments)

### Finds where to qmlplugindump binary is installed
### Requires that 'qmake' directory is in PATH
function(FindQmlPluginDump)
    execute_process(
        COMMAND qmake -query QT_INSTALL_BINS
        OUTPUT_VARIABLE QT_BIN_DIR
        OUTPUT_STRIP_TRAILING_WHITESPACE
    )
    set(QMLPLUGINDUMP_BIN ${QT_BIN_DIR}/qmlplugindump PARENT_SCOPE)
endfunction()

### Sets QT_INSTALL_QML to the directory where QML Plugins should be installed
function(FindQtInstallQml)
    execute_process(
        COMMAND qmake -query QT_INSTALL_QML
        OUTPUT_VARIABLE PROC_RESULT
        OUTPUT_STRIP_TRAILING_WHITESPACE
    )
    set(QT_INSTALL_QML ${PROC_RESULT} PARENT_SCOPE)
endfunction()

function(add_qmlplugin TARGET)
    set(options NO_AUTORCC NO_AUTOMOC)
    set(oneValueArgs URI VERSION BINARY_DIR)
    set(multiValueArgs SOURCES QMLFILES)
    cmake_parse_arguments(QMLPLUGIN "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

    ### At least TARGET, URI and VERSION must be specified
    if(NOT QMLPLUGIN_URI OR NOT QMLPLUGIN_VERSION)
        message(WARNING "TARGET, URI and VERSION must be set, no files generated")
        return()
    endif()

    ### Depending on project hierarchy, one might want to specify a custom binary dir
    if(NOT QMLPLUGIN_BINARY_DIR)
        set(QMLPLUGIN_BINARY_DIR ${CMAKE_BINARY_DIR})
    endif()

    ### Source files
    add_library(${TARGET} SHARED
        ${QMLPLUGIN_SOURCES}
    )

    ### QML files, just to make them visible in the editor
    add_custom_target("${TARGET}-qmlfiles" SOURCES ${QMLPLUGIN_QMLFILES})

    ### No AutoMOC or AutoRCC
    if(QMLPLUGIN_NO_AUTORCC)
        set_target_properties(${TARGET} PROPERTIES AUTOMOC OFF)
    else()
        set_target_properties(${TARGET} PROPERTIES AUTOMOC ON)
    endif()
    if(QMLPLUGIN_NO_AUTOMOC)
        set_target_properties(${TARGET} PROPERTIES AUTOMOC OFF)
    else()
        set_target_properties(${TARGET} PROPERTIES AUTOMOC ON)
    endif()

    ### Find location of qmlplugindump (stored in QMLPLUGINDUMP_BIN)
    FindQmlPluginDump()
    ### Find where to install QML Plugins (stored in QT_INSTALL_QML)
    FindQtInstallQml()

    set(COPY_QMLDIR_COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_LIST_DIR}/qmldir $<TARGET_FILE_DIR:${TARGET}>/qmldir)
    set(COPY_QMLFILES_COMMAND ${CMAKE_COMMAND} -E copy ${QMLPLUGIN_QMLFILES} $<TARGET_FILE_DIR:${TARGET}>)
    set(GENERATE_QMLTYPES_COMMAND ${QMLPLUGINDUMP_BIN} -nonrelocatable ${QMLPLUGIN_URI} ${QMLPLUGIN_VERSION} ${QMLPLUGIN_BINARY_DIR} > ${CMAKE_CURRENT_BINARY_DIR}/plugin.qmltypes)

    ### Copy qmldir from project source to binary dir
    add_custom_command(
        TARGET ${TARGET}
        POST_BUILD
        COMMAND ${COPY_QMLDIR_COMMAND}
        COMMENT "Copying qmldir to binary directory"
    )

    ### Copy QML-files from project source to binary dir
    if(QMLPLUGIN_QMLFILES)
        add_custom_command(
            TARGET ${TARGET}
            POST_BUILD
            COMMAND ${COPY_QMLFILES_COMMAND}
            COMMENT "Copying QML files to binary directory"
        )
    endif()

    ### Create command to generate plugin.qmltypes after build
    add_custom_command(
        TARGET ${TARGET}
        POST_BUILD
        COMMAND ${GENERATE_QMLTYPES_COMMAND}
        COMMENT "Generating plugin.qmltypes"
    )

    string(REPLACE "." "/" QMLPLUGIN_INSTALL_URI ${QMLPLUGIN_URI})

    ### Install library
    install(TARGETS ${TARGET}
        DESTINATION ${QT_INSTALL_QML}/${QMLPLUGIN_INSTALL_URI}
    )

    ### Install aditional files
    install(FILES
        ${CMAKE_CURRENT_BINARY_DIR}/qmldir
        ${CMAKE_CURRENT_BINARY_DIR}/plugin.qmltypes
        ${QMLPLUGIN_QMLFILES}
        DESTINATION ${QT_INSTALL_QML}/${QMLPLUGIN_INSTALL_URI}
    )
endfunction()

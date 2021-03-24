import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

import nl.netsoj.chris.Jellyfin 1.0 as J

import "components"
import ".."
import "."

ApplicationWindow {
    id: appWindow
    width: 600
    height: 600
    visible: true
    property int _oldDepth: 0

    background: Background {
        id: background
        anchors.fill: parent
    }

    StackView {
        id: pageStack
        anchors.fill: parent
        onDepthChanged: {
            if (depth >= _oldDepth) {
                background.enter();
            } else {
                background.exit();
            }
            _oldDepth = depth
        }
        initialItem: Qt.resolvedUrl("pages/MainPage.qml")
        Keys.onEscapePressed: pop()
    }

    Connections {
        target: ApiClient
        onSetupRequired: pageStack.replace(Qt.resolvedUrl("pages/setup/ServerSelectPage.qml"));
    }

    Component.onCompleted: {
        ApiClient.restoreSavedSession()
    }
}

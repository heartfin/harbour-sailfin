import QtQuick 2.12
import QtQuick.Controls 2.12
import QtGraphicalEffects 1.12
import QtQuick.Window 2.12

import nl.netsoj.chris.Jellyfin 1.0

import "components"
import "../SailfinStyle"

ApplicationWindow {
    width: 600
    height: 600
    visible: true

    background: Background {
        anchors.fill: parent
    }

    StackView {
        id: pageStack
        anchors.fill: parent
    }

    Connections {
        target: ApiClient
        onSetupRequired: pageStack.push(Qt.resolvedUrl("pages/setup/ServerSelectPage.qml"));
    }

    Component.onCompleted: {
        ApiClient.restoreSavedSession()
    }
}

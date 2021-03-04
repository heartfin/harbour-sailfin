import QtQuick 2.12
import QtQuick.Controls 2.12

import nl.netsoj.chris.Jellyfin 1.0

import "../../../SailfinStyle"

Page {
    header: ToolBar {
        Label {
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: SailfinStyle.fontSizeLarge
            text: qsTr("Select a server")
        }
    }
    BusyIndicator {
        anchors.centerIn: parent
    }

    ServerDiscoveryModel {
        id: discoveryModel
    }

}

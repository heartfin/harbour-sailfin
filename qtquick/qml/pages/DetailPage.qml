import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../components"
import "../.."

Page {
    property bool _modelsLoaded: false
    property StackView stackView: StackView.view
    property string itemId
    property alias jellyfinItem: jellyfinItem.data
    header: ToolBar {
        Label {
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: SailfinStyle.fontSizeLarge
            text: jellyfinItem.name
        }
    }

    MouseArea {
        anchors.fill: parent
        onClicked: stackView.pop()
    }
    J.ItemLoader {
        id: jellyfinItem
        jellyfinId: itemId
        apiClient: ApiClient
    }

    Image {
        anchors.centerIn: parent
        source: ApiClient.baseUrl + "/Items/" + itemId + "/Images/Primary?tag=" + jellyfinItem.tag
    }
}

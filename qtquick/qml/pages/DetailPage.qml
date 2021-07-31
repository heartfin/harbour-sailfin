import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../components"
import "../.."
import ".."

Page {
    id: detailPage
    property bool _modelsLoaded: false
    property StackView stackView: StackView.view
    property string itemId
    property alias jellyfinItem: jellyfinItemLoader.data
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
        id: jellyfinItemLoader
        itemId: detailPage.itemId
        apiClient: ApiClient
    }

    Image {
        anchors.top: parent.top
        width: parent.width
        height: parent.height / 3
        source: ApiClient.baseUrl + "/Items/" + itemId + "/Images/Primary?tag=" + jellyfinItem.tag
    }
    J.ItemModel {
        id: tracks
        loader: J.UserItemsLoader {
            apiClient: ApiClient
            parentId: detailPage.itemId
        }
    }

    ListView {
        width: parent.width
        height: parent.height / 3 * 2
        anchors.bottom: parent.bottom
        model: tracks
        delegate: ItemDelegate {
            icon.source: ApiClient.baseUrl + "/Items/" + model.jellyfinId + "/Images/Primary?tag=" + model.tag
            text: model.name
            width: ListView.view.width
            onClicked: playbackManager.playItemInList(tracks, model.index)
        }
    }
}

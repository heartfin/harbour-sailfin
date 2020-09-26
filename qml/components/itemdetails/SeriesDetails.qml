import QtQuick 2.6
import Sailfish.Silica 1.0
import nl.netsoj.chris.Jellyfin 1.0

import "../"
import "../../Utils.js" as Utils

Column {
    property var itemData

    PlainLabel {
        id: overviewText
        text: itemData.Overview
        font.pixelSize: Theme.fontSizeSmall
        color: Theme.secondaryHighlightColor
    }

    SectionHeader {
        //: Seasons of a (TV) show
        text: qsTr("Seasons")
    }

    ShowSeasonsModel {
        id: showSeasonsModel
        apiClient: ApiClient
        show: itemData.Id
    }

    SilicaListView {
        model: showSeasonsModel
        clip: true
        width: parent.width
        height: Screen.width / 2
        orientation: ListView.Horizontal
        spacing: Theme.paddingLarge
        leftMargin: Theme.horizontalPageMargin
        rightMargin: Theme.horizontalPageMargin
        delegate: LibraryItemDelegate {
            poster: Utils.itemModelImageUrl(ApiClient.baseUrl, model.id, model.imageTags["Primary"], "Primary", {"maxHeight": height})
            title: model.name
            onClicked: pageStack.push(Qt.resolvedUrl("../../pages/DetailPage.qml"), {"itemId": model.id})
        }
    }

    onItemDataChanged: {
        showSeasonsModel.show = itemData.Id
        showSeasonsModel.reload()
    }
}

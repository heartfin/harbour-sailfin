import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

SilicaListView {
    id: root
    model: query.length ? searchModel : 0
    property alias query: searchModel.searchTerm
    delegate: ListItem {
        width: parent.width
        height: Theme.itemSizeLarge
        Label {
            anchors.centerIn: parent
            width: parent.width
            text: model.name
        }
    }
    add: Transition {
        NumberAnimation { property: "scale"; from: 0.0001; to: 1.0; }
        FadeAnimation { from: 0.0; to: 1.0; }
    }

    move: Transition {
        NumberAnimation {
            properties: "x,y"
        }
    }

    remove: Transition {
        NumberAnimation { property: "scale"; from: 1.0; to: 0.0001; }
        FadeAnimation { from: 1.0; to: 0.0; }
    }

    SearchModel {
        id: searchModel
        apiClient: ApiClient
        recursive: true
    }
}

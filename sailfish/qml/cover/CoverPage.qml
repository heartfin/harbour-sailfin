/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/
import QtQuick 2.0
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../components"
import "../Utils.js" as Utils

CoverBackground {
    id: cover
    Label {
        id: label
        anchors.centerIn: parent
        text: qsTr("Sailfin")
    }
    property int rowCount: 8

    UserItemModel {
        id: randomItems1
        apiClient: ApiClient
        limit: cover.rowCount
        imageTypes: ["Primary"]
        sortBy: ["IsFavoriteOrLiked", "Random"]
        recursive: true
        parentId: appWindow.collectionId
        Component.onCompleted: reload()
    }

    UserItemModel {
        id: randomItems2
        apiClient: ApiClient
        limit: cover.rowCount
        imageTypes: ["Primary"]
        sortBy: ["IsFavoriteOrLiked", "Random"]
        recursive: true
        parentId: appWindow.collectionId
        Component.onCompleted: reload()
    }

    Row {
        id: row1
        property bool movingRight: true
        property int moveCount: 0
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.right: parent.right
        transform: [
            Translate {
                x: -row1.height// + (row1.width - row1.height) / 2;
            },
            Translate {
                id: row1Translate;
                Behavior on x { NumberAnimation { duration: 500; easing.type: Easing.InOutQuad }}
            }
        ]
        height: parent.height / 2
        width: parent.width
        Repeater {
            model: randomItems1
            RemoteImage {
                clip: true
                height: row1.height
                width: height
                source: model.id ? Utils.itemModelImageUrl(ApiClient.baseUrl, model.id, model.imageTags.primary, "Primary", {"maxHeight": row1.height})
                                 : ""
                fillMode: Image.PreserveAspectCrop
            }
        }

        function move() {
            if (movingRight) {
                row1Translate.x -= row1.height
                moveCount++;
            } else {
                row1Translate.x += row1.height
                moveCount--;
            }
            if (moveCount == 0) movingRight = true;
            if (moveCount == rowCount - 3) movingRight = false;
        }
    }

    Row {
        id: row2
        property bool movingRight: false
        property int moveCount: rowCount - 3
        anchors.bottom: parent.bottom

        anchors.left: parent.left
        anchors.right: parent.right
        transform: [
            Translate {
                x: -row2.height * (rowCount - 2) + (row2.width - row2.height);
            },
            Translate {
                id: row2Translate;
                Behavior on x { NumberAnimation { duration: 500; easing.type: Easing.InOutQuad }}
            }
        ]
        height: parent.height / 2
        width: parent.width
        Repeater {
            model: randomItems2
            RemoteImage {
                clip: true
                height: row2.height
                width: height
                source: Utils.itemModelImageUrl(ApiClient.baseUrl, model.id, model.imageTags.primary, "Primary", {"maxHeight": row1.height})
                fillMode: Image.PreserveAspectCrop
            }
        }

        function move() {
            if (movingRight) {
                row2Translate.x -= row1.height
                moveCount++;
            } else {
                row2Translate.x += row1.height
                moveCount--;
            }
            if (moveCount == 0) movingRight = true;
            if (moveCount == rowCount - 3) movingRight = false;
        }
    }

    Connections {
        target: appWindow
        onCollectionIdChanged: {
            randomItems1.parentId = collectionId
            randomItems2.parentId = collectionId
            randomItems1.reload()
            randomItems2.reload()
        }
    }

    Timer {
        property bool odd: false
        running: true
        interval: 5000
        repeat: true
        onTriggered: {
            if (odd) {
                row1.move()
            } else {
                row2.move()
            }
            odd = !odd
        }
    }

}

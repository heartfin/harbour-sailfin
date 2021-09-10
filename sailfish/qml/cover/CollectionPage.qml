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

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../components"
import "../Utils.js" as Utils

CoverBackground {
    id: cover
    readonly property int rowCount: 8
    readonly property real rowOffset: ((rowCount - 1) * 0.5)
    readonly property real rowHeight: height / 2
    readonly property real bottomOffset: width - rowHeight
    readonly property bool onMainScreen: appWindow.itemData === null
    readonly property string itemId: appWindow.pageStack.currentPage.itemId
    readonly property bool hasParent: !appWindow.itemData !== null && appWindow.itemData.jellyfinId.length !== 0

    J.ItemModel {
        id: randomItems
        loader: J.UserItemsLoader {
            id: randomItemsLoader
            apiClient: appWindow.apiClient
            limit: cover.rowCount * 2 - 2
            imageTypes: [J.ImageType.Primary]
            sortBy: "IsFavoriteOrLiked,Random"
            recursive: true
            parentId: itemId
            autoReload:  false
            onParentIdChanged: {
                reload()
            }
        }
    }
    PathView {
        id: pathView
        model: randomItems
        visible: count === randomItemsLoader.limit
        path: Path {
            startX: -rowHeight * rowOffset
            startY: rowHeight * 0.5

            PathLine {
                x: rowHeight * rowOffset
                y: rowHeight * 0.5
            }
            PathPercent {
                value: 0.5
            }
            PathLine {
                x: rowHeight * rowOffset + bottomOffset
                y: rowHeight * 1.5
            }
            PathPercent {
                value: 0.5
            }
            PathLine {
                x: -rowHeight * rowOffset + bottomOffset
                y: rowHeight * 1.5
            }
            PathPercent {
                value: 1
            }
            PathLine {
                x: -rowHeight * rowOffset
                y: rowHeight * 0.5
            }
            PathPercent {
                value: 1
            }
        }
        delegate: RemoteImage {
                height: rowHeight
                width: height
                source: model.jellyfinId
                            ? Utils.itemModelImageUrl(appWindow.apiClient.baseUrl, model.jellyfinId, model.imageTags["Primary"], "Primary", {"maxHeight": rowHeight})
                            : ""
                blurhash: model.jellyfinId
                            ? model.imageBlurHashes["Primary"][model.imageTags["Primary"]]
                            : ""
                fillMode: Image.PreserveAspectCrop
            }
    }

    /*Rectangle {
        anchors.fill: parent
        color: Theme.rgba(Theme.overlayBackgroundColor, Theme.opacityHigh)
    }*/

    Column {
        anchors.centerIn: parent
        width: parent.width
        opacity: randomItemsLoader.status === J.ModelStatus.Ready && pathView.visible ? 0.0 : 1.0
        Behavior on opacity {
            NumberAnimation {}
        }
        Image {
            anchors.horizontalCenter: parent.horizontalCenter
            source: Qt.resolvedUrl("../icon.png")
            width: parent.width / 3
            height: width
        }

        Label {
            anchors.horizontalCenter: parent.horizontalCenter
            text: qsTr("Sailfin")
            font.bold: true
        }
    }

    Connections {
        target: appWindow.pageStack
        onCurrentPageChanged: {
            console.log("Reloading cover collection")
        }
    }


    Component.onCompleted: randomItems.reload()

    Timer {
        running: true
        interval: 10000
        repeat: true
        onTriggered: {
            pathView.incrementCurrentIndex()
        }
    }

}

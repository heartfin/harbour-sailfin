/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2022 Chris Josten

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
import QtQuick 2.6
import QtQuick.Layouts 1.1
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../../components"
import "../.."

BaseDetailPage {
    id: albumPage
    readonly property int _maxItems: 12

    J.ItemModel {
        id: albumsModel
        loader: J.UserItemsLoader {
            apiClient: appWindow.apiClient
            sortBy: "PremiereDate,ProductionYear,SortName"
            sortOrder: "Descending"
            fields: [J.ItemFields.ItemCounts, J.ItemFields.PrimaryImageAspectRatio]
            includeItemTypes: ["MusicAlbum"]
            albumArtistIds: itemData.jellyfinId
            recursive: true
            autoReload: itemData.jellyfinId.length > 0
            limit: _maxItems
        }
    }

    Component {
        id: fullAlbumsModelComponent
        J.UserItemsLoader {
            apiClient: appWindow.apiClient
            sortBy: "PremiereDate,ProductionYear,SortName"
            sortOrder: "Descending"
            fields: [J.ItemFields.ItemCounts, J.ItemFields.PrimaryImageAspectRatio]
            includeItemTypes: ["MusicAlbum"]
            albumArtistIds: itemData.jellyfinId
            recursive: true
            autoReload: false
        }
    }

    J.ItemModel {
        id: appearsOnModel
        loader: J.UserItemsLoader {
            apiClient: appWindow.apiClient
            sortBy: "PremiereDate,ProductionYear,SortName"
            sortOrder: "Descending"
            fields: [J.ItemFields.ItemCounts, J.ItemFields.PrimaryImageAspectRatio]
            includeItemTypes: ["MusicAlbum"]
            contributingArtistIds: itemData.jellyfinId
            recursive: true
            autoReload: itemData.jellyfinId.length > 0
            limit: _maxItems
        }
    }
    Component {
        id: fullAppearsOnModelComponent
        J.UserItemsLoader {
            apiClient: appWindow.apiClient
            sortBy: "PremiereDate,ProductionYear,SortName"
            sortOrder: "Descending"
            fields: [J.ItemFields.ItemCounts, J.ItemFields.PrimaryImageAspectRatio]
            includeItemTypes: ["MusicAlbum"]
            contributingArtistIds: itemData.jellyfinId
            recursive: true
            autoReload: false
        }
    }


    SilicaFlickable {
        anchors.fill: parent
        contentHeight: content.height

        Column {
            id: content
            width: parent.width

            Item {
                id: header
                width: parent.width
                height: backdrop.height + title.height

                RemoteImage {
                    id: backdrop
                    anchors {
                        top: parent.top
                        left: parent.left
                        right: parent.right
                    }
                    height: width / 16 * 9
                    fillMode: Image.PreserveAspectCrop
                    source: Utils.itemBackdropUrl(apiClient.baseUrl, itemData, 0, {"maxWidth": parent.width})
                    blurhash: itemData.imageBlurHashes["Backdrop"][itemData.backdropImageTags[0]]
                }

                Shim {
                    anchors {
                        top: parent.top
                        left: parent.left
                        right: parent.right
                    }
                    height: Theme.itemSizeHuge
                    upsideDown: true
                    shimOpacity: Theme.opacityOverlay
                }

                RemoteImage {
                    id: artistImage
                    anchors {
                        right: parent.right
                        rightMargin: Theme.horizontalPageMargin
                        bottom: title.bottom
                    }
                    source: Utils.itemImageUrl(apiClient.baseUrl, itemData, "Primary", {"maxWidth": parent.width})
                    blurhash: itemData.imageBlurHashes["Primary"][itemData.imageTags["Primary"]]
                    width: Constants.libraryDelegateWidth
                    height: width / itemData.primaryImageAspectRatio
                    fallbackColor: Utils.colorFromString(itemData.name)
                }

                PageHeader {
                    id: title
                    title: itemData.name
                    description: qsTr("%1 songs | %2 albums")
                        .arg(itemData.songCount)
                        .arg(itemData.albumCount)
                    anchors {
                        top: backdrop.bottom
                        left: parent.left
                        right: artistImage.left
                    }
                }
            }
            // Spacer
            Item { height: Theme.paddingLarge; width: 1; visible: !aboutBackground.visible }
            BackgroundItem {
                property bool _expanded: false
                id: aboutBackground
                anchors {
                    left: parent.left
                    right: parent.right
                }
                height: about.height + Theme.paddingLarge
                clip: true
                onClicked: aboutBackground._expanded = !aboutBackground._expanded
                visible: aboutLabel.text.length > 0
                //Behavior on height { SmoothedAnimation { duration: 300; } }

                Item {
                    id: about
                    anchors {
                        left: parent.left
                        leftMargin: Theme.horizontalPageMargin
                        right: parent.right
                        rightMargin: Theme.horizontalPageMargin
                    }
                    height: aboutLabel.height
                    Label {
                        id: aboutLabel
                        anchors {
                            left: parent.left
                            right: parent.right
                        }
                        topPadding: Theme.paddingLarge
                        bottomPadding: Theme.paddingLarge
                        color: aboutBackground.highlighted ? Theme.highlightColor : Theme.primaryColor
                        text: itemData.overview
                        wrapMode: Text.WordWrap
                        height: aboutBackground._expanded ? implicitHeight : Math.min(font.pixelSize * lineHeight * 8, implicitHeight)
                        Behavior on height { SmoothedAnimation { id: expandAnimation; duration: 300; } }
                        textFormat: Text.PlainText
                    }
                    OpacityRampEffect {
                        enabled: !aboutBackground._expanded || expandAnimation.running
                        offset: aboutBackground._expanded ? 1.0 : 0.5
                        sourceItem: aboutLabel
                        direction: OpacityRamp.TopToBottom
                    }
                }
                HighlightImage {
                    anchors {
                        right: parent.right
                        rightMargin: Theme.horizontalPageMargin
                        bottom: parent.bottom
                        bottomMargin: Theme.paddingMedium
                    }

                    source: "image://theme/icon-lock-more"
                }
            }

            MoreSection {
                text: qsTr("Discography")
                visible: albumRepeater.count > 0
                onHeaderClicked: pageStack.push(Qt.resolvedUrl("CollectionPage.qml"), {
                                                    "loader": fullAlbumsModelComponent.createObject(albumPage),
                                                    "allowSort": false,
                                                    //: Page title for the page with an overview of all albums, eps and singles by a specific artist
                                                    "pageTitle": qsTr("Discography of %1").arg(itemData.name)
                                                })
            }
            GridLayout {
                width: parent.width
                columns: 3
                columnSpacing: 0
                rowSpacing: 0
                anchors {
                    left: parent.left
                    right: parent.right
                }
                Repeater {
                    id: albumRepeater
                    model: albumsModel

                    LibraryItemDelegate {
                        readonly property int _multiplier: index === 0 ? 2 : 1
                        poster: Utils.itemModelImageUrl(appWindow.apiClient.baseUrl, model.jellyfinId, model.imageTags["Primary"], "Primary", {"height": height})
                        blurhash: model.imageBlurHashes["Primary"][model.imageTags["Primary"]]
                        title: model.name
                        Layout.preferredWidth: Constants.libraryDelegateWidth * _multiplier
                        Layout.preferredHeight: Constants.libraryDelegateHeight * _multiplier
                        Layout.rowSpan: _multiplier
                        Layout.columnSpan: _multiplier
                        onClicked:  appWindow.navigateToItem(model.jellyfinId, model.mediaType, model.type, model.isFolder)
                    }
                }
            }
            MoreSection {
                text: qsTr("Appears on")
                visible: appearsOnRepeater.count > 0
                onHeaderClicked: pageStack.push(Qt.resolvedUrl("CollectionPage.qml"), {
                                                    "loader": fullAppearsOnModelComponent.createObject(albumPage),
                                                    "allowSort": false,
                                                    //: Page title for the page with an overview of all albums a specific artist appears on
                                                    "pageTitle": qsTr("%1 appears on").arg(itemData.name)
                                                })
            }
            GridLayout {
                width: parent.width
                columns: 3
                columnSpacing: 0
                rowSpacing: 0
                anchors {
                    left: parent.left
                    right: parent.right
                }
                Repeater {
                    id: appearsOnRepeater
                    model: appearsOnModel

                    LibraryItemDelegate {
                        readonly property int _multiplier: 1
                        poster: Utils.itemModelImageUrl(appWindow.apiClient.baseUrl, model.jellyfinId, model.imageTags["Primary"], "Primary", {"height": height})
                        blurhash: model.imageBlurHashes["Primary"][model.imageTags["Primary"]]
                        title: model.name
                        Layout.alignment: Qt.AlignLeft | Qt.AlignTop
                        Layout.preferredWidth: Constants.libraryDelegateWidth * _multiplier
                        Layout.preferredHeight: Constants.libraryDelegateHeight * _multiplier
                        Layout.fillWidth: false
                        Layout.fillHeight: false
                        onClicked:  appWindow.navigateToItem(model.jellyfinId, model.mediaType, model.type, model.isFolder)
                    }
                }
            }
        }
    }
}

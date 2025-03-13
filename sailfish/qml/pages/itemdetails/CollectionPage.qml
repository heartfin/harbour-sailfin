/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020-2024 Chris Josten

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
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../.."
import "../../components"

BaseDetailPage {
    id: pageRoot

    property bool _collectionModelLoaded: false
    property bool allowSort: true
    property var modelStatus: collectionModel.loader.modelStatus
    property string pageTitle: itemData.name
    property alias loader: collectionModel.loader

    J.ItemModel {
        id: collectionModel
        loader: J.UserItemsLoader {
            id: collectionLoader
            apiClient: appWindow.apiClient
            parentId: itemData.jellyfinId
            sortBy: [ J.SortBy.SortName ]
            autoReload: itemData.jellyfinId.length > 0 && (pageRoot.status == PageStatus.Active || _collectionModelLoaded)
        }
    }

    Binding {
        target: collectionModel.loader
        property: "autoReload"
        value: (pageRoot.status == PageStatus.Active || pageRoot._collectionModelLoaded)
    }

    Connections {
        target: collectionModel.loader
        onStatusChanged: {
            if (status === J.ModelStatus.Ready) {
                _collectionModelLoaded = true
            }
        }
    }

    SilicaGridView {
        id: gridView
        anchors.fill: parent
        model: collectionModel
        cellWidth: gridCellSize
        cellHeight: Utils.usePortraitCover(itemData.collectionType) ? gridCellSize * Constants.libraryDelegatePosterRatio
                                                                    : gridCellSize
        visible: itemData.status !== J.LoaderBase.Error

        header: PageHeader {
            title: pageTitle || qsTr("Loading")
        }
        PullDownMenu {
            id: downMenu
            visible: pageRoot.allowSort
            MenuItem {
                //: Pulley menu item: navigate to application settings page
                text: qsTr("Settings")
                onClicked: pageStack.push(Qt.resolvedUrl("../SettingsPage.qml"))
            }
            MenuItem {
                //: Pulley menu item: shows controllable device page
                text: qsTr("Remote control")
                onClicked: pageStack.push(Qt.resolvedUrl("../ControllableDevicesPage.qml"))
            }
            MenuItem {
                id: sortMenuItem
                //: Menu item for selecting the sort order of a collection
                text: qsTr("Sort by")
                onClicked: pageStack.push(sortPageComponent)
            }
            busy: modelStatus === J.ModelStatus.Loading
        }
        add: Transition {
            id: trans
            SequentialAnimation {

                PropertyAction {
                    property: "opacity"; value: 0 }
                PauseAnimation { duration: trans.ViewTransition.index * 3;}
                NumberAnimation { properties: "opacity"; from: 0; to: 1.0; }
            } // properties: "opacity"; from: 0; to: 1.0; }
        }
        delegate: GridItem {
            RemoteImage {
                id: itemImage
                anchors.fill: parent
                source: Utils.itemModelImageUrl(apiClient.baseUrl, model.jellyfinId, model.imageTags.Primary, "Primary", {"maxWidth": width})
                blurhash: model.imageBlurHashes.Primary !== undefined ? model.imageBlurHashes.Primary[model.imageTags.Primary] : undefined
                fallbackColor: Utils.colorFromString(model.name)
                fillMode: Image.PreserveAspectCrop
                clip: true
            }
            Shim {
                anchors {
                    left: parent.left
                    bottom: parent.bottom
                    right: parent.right
                }
                height: itemName.height + Theme.paddingMedium * 2
                visible: itemImage.status !== Image.Null
            }
            Label {
                id: itemName
                anchors {
                    left: parent.left
                    leftMargin: Theme.paddingMedium
                    right: parent.right
                    rightMargin: Theme.paddingMedium
                    bottom: parent.bottom
                    bottomMargin: Theme.paddingSmall
                }
                text: model.name
                truncationMode: TruncationMode.Fade
                horizontalAlignment: Text.AlignLeft
                font.pixelSize: Theme.fontSizeSmall
            }
            onClicked: appWindow.navigateToItem(model.jellyfinId, model.mediaType, model.type, model.isFolder);
        }

        ViewPlaceholder {
            enabled: gridView.count == 0 && !pageRoot._loading && collectionModel.status === J.ModelStatus.Ready
            text: qsTr("Empty collection")
            hintText: qsTr("Add some items to this collection!")
        }

        VerticalScrollDecorator {}
    }

    // The page for selecting a sort order

    Component {
        id: sortPageComponent

        Page {
            id: sortPage
            readonly property var sortMap: {
                "SortName": [J.SortBy.SortName],
                "PlayCount": [J.SortBy.PlayCount],
                "DateCreated": [J.SortBy.DateCreated]
            };

            ListModel {
                id: sortOptions
                ListElement { name: qsTr("Name"); value: "SortName"; }
                ListElement { name: qsTr("Play count"); value: "PlayCount"; }
                ListElement { name: qsTr("Date added"); value: "DateCreated"; }
            }

            SilicaListView {
                anchors.fill: parent
                model: sortOptions
                header: PageHeader {
                    title: qsTr("Sort by")
                }
                delegate: ListItem {
                    Label {
                        anchors {
                            left: parent.left
                            leftMargin: Theme.horizontalPageMargin
                            right: parent.right
                            rightMargin: Theme.horizontalPageMargin
                            verticalCenter: parent.verticalCenter
                        }
                        text: model.name
                    }
                    menu: ContextMenu {
                        MenuItem {
                            //: Sort order
                            text: qsTr("Ascending")
                            onClicked: apply(model.value, J.SortOrder.Ascending)
                        }
                        MenuItem {
                            //: Sort order
                            text: qsTr("Descending")
                            onClicked: apply(model.value, J.SortOrder.Descending)
                        }
                    }
                    onClicked: openMenu()

                    function apply(field, order) {
                        collectionModel.loader.sortBy = sortMap[field];
                        collectionModel.loader.sortOrder = [order];
                        collectionModel.loader.reload()
                        pageStack.pop()
                    }
                }
            }
        }
    }

}

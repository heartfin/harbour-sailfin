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
import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../.."
import "../../components"

BaseDetailPage {
    id: pageRoot

    UserItemModel {
        id: collectionModel
        apiClient: ApiClient
        parentId: itemData.Id || ""
        sortBy: ["SortName"]
        onParentIdChanged: reload()
    }

    SilicaGridView {
        id: gridView
        anchors.fill: parent
        model: collectionModel
        cellWidth: Constants.libraryDelegateWidth
        cellHeight: Utils.usePortraitCover(itemData.CollectionType) ? Constants.libraryDelegatePosterHeight
                                                                    : Constants.libraryDelegateHeight
        header: PageHeader {
            title: itemData.Name || qsTr("Loading")
        }
        PullDownMenu {
            id: downMenu
            MenuItem {
                //: Menu item for selecting the sort order of a collection
                text: qsTr("Sort by")
                onClicked: pageStack.push(sortPageComponent)
            }
            busy: collectionModel.status == ApiModel.Loading
        }
        delegate: GridItem {
            RemoteImage {
                id: itemImage
                anchors.fill: parent
                source: Utils.itemModelImageUrl(ApiClient.baseUrl, model.id, model.imageTags["Primary"], "Primary", {"maxWidth": width})
                fillMode: Image.PreserveAspectCrop
                clip: true
            }
            Rectangle {
                anchors {
                    left: parent.left
                    bottom: parent.bottom
                    right: parent.right
                }
                height: itemName.height + Theme.paddingSmall * 2
                gradient: Gradient {
                    GradientStop { position: 0.0; color: "transparent" }
                    GradientStop { position: 1.0; color: Theme.highlightDimmerColor }
                }
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
            onClicked: {
                switch(model.type) {
                case "Folder":
                    pageStack.push(Qt.resolvedUrl("CollectionPage.qml"), {"itemId": model.id})
                    break;
                default:
                    pageStack.push(Utils.getPageUrl(model.type), {"itemId": model.id})
                }
            }
        }

        ViewPlaceholder {
            enabled: gridView.count == 0 && !pageRoot._loading
            text: qsTr("Empty collection")
            hintText: qsTr("Add some items to this collection!")
        }

        VerticalScrollDecorator {}
    }

    Component {
        id: sortPageComponent
        Page {
            id: sortPage

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
                    onClicked: {
                        collectionModel.sortBy = [model.value]
                        collectionModel.reload()
                        pageStack.pop()
                    }
                }
            }
        }
    }

}

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
import "../"
import "../Utils.js" as Utils

/**
 * Main page, which simply shows some content of every library, as well as next items.
 */
Page {
    property bool _modelsLoaded: false

    id: page
    allowedOrientations: Orientation.All

    SilicaFlickable {
        anchors.fill: parent

        // PullDownMenu and PushUpMenu must be declared in SilicaFlickable, SilicaListView or SilicaGridView
        PullDownMenu {
            MenuItem {
                text: qsTr("Settings")
                onClicked: pageStack.push(Qt.resolvedUrl("SettingsPage.qml"))
            }
            MenuItem {
                text: qsTr("Refresh")
                onClicked: loadModels(true)
            }
            busy: mediaLibraryModel.status == ApiModel.Loading
        }

        // Tell SilicaFlickable the height of its content.
        contentHeight: column.height

        // Place our content in a Column.  The PageHeader is always placed at the top
        // of the page, followed by our content.
        Column {
            id: column

            width: page.width
            //spacing: Theme.paddingLarge
            UserViewModel {
                id: mediaLibraryModel2
                apiClient: ApiClient
            }

            MoreSection {
                text: qsTr("Resume watching")
                clickable: false
                busy: userResumeModel.status == ApiModel.Loading
                Loader {
                    width: parent.width
                    sourceComponent: carrouselView
                    property alias itemModel: userResumeModel
                    property string collectionType: "series"

                    UserItemResumeModel {
                        id: userResumeModel
                        apiClient: ApiClient
                        limit: 12
                        recursive: true
                    }
                }
            }
            MoreSection {
                text: qsTr("Next up")
                clickable: false
            }

            UserViewModel {
                id: mediaLibraryModel
                apiClient: ApiClient
            }
            Repeater {
                model: mediaLibraryModel
                MoreSection {
                    text: model.name
                    busy: userItemModel.status != ApiModel.Ready

                    onHeaderClicked: pageStack.push(Qt.resolvedUrl("itemdetails/CollectionPage.qml"), {"itemId": model.id})
                    Loader {
                        width: parent.width
                        sourceComponent: carrouselView
                        property alias itemModel: userItemModel
                        property string collectionType: model.collectionType || ""

                        UserItemLatestModel {
                            id: userItemModel
                            apiClient: ApiClient
                            parentId: model.id
                            limit: 12
                        }
                        Connections {
                            target: mediaLibraryModel
                            onStatusChanged: {
                                console.log("MediaLibraryModel status " + status)
                                if (status == ApiModel.Ready) {
                                    userItemModel.reload()
                                }
                            }
                        }
                    }
                }
            }
            Column {
                width: parent.width
                visible: mediaLibraryModel.status == ApiModel.Error
                PageHeader {
                    title: qsTr("Network error")
                    //clickable: false
                }

                PlainLabel {
                    text: qsTr("An error has occurred. Please try again.")
                }
                Item { width: 1; height: Theme.paddingLarge }
                Button {
                    text: qsTr("Retry")
                    anchors.horizontalCenter: parent.horizontalCenter
                    onClicked: loadModels(true)
                }
                Item { width: 1; height: Theme.paddingLarge }
            }
        }
    }

    onStatusChanged: {
        if (status == PageStatus.Active) {
            appWindow.itemData = null
            loadModels(false)
        }
    }

    Connections {
        target: ApiClient
        onAuthenticatedChanged: loadModels(false)
    }


    /**
     * Loads models if not laoded. Set force to true to reload models
     * even if loaded.
     */
    function loadModels(force) {
        if (force || (ApiClient.authenticated && !_modelsLoaded)) {
            _modelsLoaded = true;
            mediaLibraryModel.reload()
            userResumeModel.reload()
        }
    }

    Component {
        id: carrouselView
        SilicaListView {
            id: list
            clip: true
            height: {
                if (count > 0) {
                    if (["tvshows", "movies"].indexOf(collectionType) == -1) {
                        Constants.libraryDelegateHeight
                    } else {
                        Constants.libraryDelegatePosterHeight
                    }
                } else {
                    0
                }
            }
            Behavior on height {
                NumberAnimation { duration: 300 }
            }
            model: itemModel
            width: parent.width
            orientation: ListView.Horizontal
            leftMargin: Theme.horizontalPageMargin
            rightMargin: Theme.horizontalPageMargin
            spacing: Theme.paddingLarge
            delegate: LibraryItemDelegate {
                property string id: model.id
                title: model.name
                poster: Utils.itemModelImageUrl(ApiClient.baseUrl, model.id, model.imageTags["Primary"], "Primary", {"maxHeight": height})
                /*model.imageTags["Primary"] ? ApiClient.baseUrl + "/Items/" + model.id
                                                     + "/Images/Primary?maxHeight=" + height + "&tag=" + model.imageTags["Primary"]
                                                   : ""*/
                landscape: !Utils.usePortraitCover(collectionType)
                progress: (typeof model.userData !== "undefined") ? model.userData.PlayedPercentage / 100 : 0.0

                onClicked: {
                    pageStack.push(Utils.getPageUrl(model.mediaType, model.type), {"itemId": model.id})
                }
            }
        }
    }
}

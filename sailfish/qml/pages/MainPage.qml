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
import "../components/search"
import "../"
import "../Utils.js" as Utils

/**
 * Main page, which simply shows some content of every library, as well as next items.
 */
Page {
    /// True if the models on this page already have been loaded and don't necessarily need a refresh
    property bool _modelsLoaded: false

    id: page
    allowedOrientations: Orientation.All

    SilicaFlickable {
        id: mainView
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
        contentHeight: column.visible ? column.height : errorColumn.height

        // Place our content in a Column.  The PageHeader is always placed at the top
        // of the page, followed by our content.
        Column {
            id: column
            visible: mediaLibraryModel.status != ApiModel.Error

            width: page.width
            //spacing: Theme.paddingLarge
            UserViewModel {
                id: mediaLibraryModel2
                apiClient: ApiClient
            }
            Item {
                id: searchBoxPlaceholder
                width: parent.width
                height: searchBox.height

                SearchField {
                    id: searchBox
                    width: parent.width
                    placeholderText: qsTr("Search")
                }
            }

            Label {
                text: "%1 results".arg(searchView.count)
            }

            Column {
                id: homeView
                width: parent.width
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
                    busy: showNextUpModel.status == ApiModel.Loading

                    Loader {
                        width: parent.width
                        sourceComponent: carrouselView
                        property alias itemModel: showNextUpModel
                        property string collectionType: "series"

                        ShowNextUpModel {
                            id: showNextUpModel
                            apiClient: ApiClient
                            limit: 12
                        }
                    }
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
            }
        }

        Column {
            id: errorColumn
            width: parent.width
            visible: mediaLibraryModel.status == ApiModel.Error
            PageHeader {
                title: qsTr("Network error")
            }

            Item {
                width: 1
                height: page.height / 3
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

    SearchResults {
        id: searchView
        anchors.fill: parent
        header: Item {
            width: parent.width
            height: searchBox.height
        }
        query: searchBox.text
        visible: false
        opacity: 0
    }

    states: [
        State {
            name: "search"
            when: searchBox.text.length
            PropertyChanges {
                target: searchView
                visible: true
                opacity: 1
            }
            PropertyChanges {
                target: mainView
                opacity: 0
                visible: false
            }
            ParentChange {
                target: searchBox
                parent: searchView.headerItem
            }
            StateChangeScript {
                script: searchBox.forceActiveFocus()
            }
        }
    ]

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
     * Loads models if not loaded. Set force to true to reload models
     * even if loaded.
     */
    function loadModels(force) {
        if (force || (ApiClient.authenticated && !_modelsLoaded)) {
            _modelsLoaded = true;
            mediaLibraryModel.reload()
            userResumeModel.reload()
            showNextUpModel.reload()
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
                poster: Utils.itemModelImageUrl(ApiClient.baseUrl, model.id, model.imageTags["primary"], "Primary", {"maxHeight": height})
                blurhash: model.imageBlurHashes["primary"][model.imageTags["primary"]]
                landscape: !Utils.usePortraitCover(collectionType)
                progress: (typeof model.userData !== "undefined") ? model.userData.playedPercentage / 100 : 0.0

                onClicked: {
                    pageStack.push(Utils.getPageUrl(model.mediaType, model.type), {"itemId": model.id})
                }
            }
        }
    }
}

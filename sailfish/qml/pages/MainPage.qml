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
import "../"

/**
 * Main page, which simply shows some content of every library, as well as next items.
 */
Page {
    /// True if the models on this page already have been loaded and don't necessarily need a refresh
    property bool _modelsLoaded: false
    // Only for cover page
    readonly property string itemId: ""

    id: mainPage
    allowedOrientations: Orientation.All

    // This component is reused both in the normal state and error state
    Component {
        id: commonPullDownMenu
        PullDownMenu {
            MenuItem {
                //: Pulley menu item: navigate to application settings page
                text: qsTr("Settings")
                onClicked: pageStack.push(Qt.resolvedUrl("SettingsPage.qml"))
            }
            MenuItem {
                //: Pulley menu item: reload items on page
                text: qsTr("Reload")
                onClicked: loadModels(true)
            }
            busy: mediaLibraryLoader.status === J.ModelStatus.Loading
        }
    }

    SilicaFlickable {
        id: flickable
        anchors.fill: parent

        // PullDownMenu and PushUpMenu must be declared in SilicaFlickable, SilicaListView or SilicaGridView
        Loader { sourceComponent: commonPullDownMenu; }

        // Tell SilicaFlickable the height of its content.
        contentHeight: column.height + Theme.paddingMedium

        // Place our content in a Column.  The PageHeader is always placed at the top
        // of the page, followed by our content.
        Column {
            id: column
            width: mainPage.width

            J.ItemModel {
                id: mediaLibraryModel
                loader: J.UsersViewsLoader {
                    id: mediaLibraryLoader
                    apiClient: appWindow.apiClient
                }
            }

            MoreSection {
                //- Section header for films and TV shows that an user hasn't completed yet.
                text: qsTr("Resume watching")
                clickable: false
                busy: userResumeLoader.status === J.ModelStatus.Loading
                Loader {
                    width: parent.width
                    sourceComponent: carrouselView
                    property alias itemModel: userResumeModel
                    property string collectionType: "series"

                    J.ItemModel {
                        id: userResumeModel
                        loader: J.ResumeItemsLoader {
                            id: userResumeLoader
                            apiClient: appWindow.apiClient
                            limit: 12
                            //recursive: true
                        }
                    }
                }
            }
            MoreSection {
                //- Section header for next episodes in a TV show that an user was watching.
                text: qsTr("Next up")
                clickable: false
                busy: showNextUpLoader.status === J.ModelStatus.Loading

                Loader {
                    width: parent.width
                    sourceComponent: carrouselView
                    property alias itemModel: showNextUpModel
                    property string collectionType: "series"

                    J.ItemModel {
                        id: showNextUpModel
                        loader: J.NextUpLoader {
                            id: showNextUpLoader
                            apiClient: appWindow.apiClient
                            enableUserData: true
                        }
                    }
                }
            }
            Repeater {
                model: mediaLibraryModel
                MoreSection {
                    text: model.name
                    busy: userItemModel.status !== J.UsersViewsLoader.Ready
                    onHeaderClicked: appWindow.navigateToItem(model.jellyfinId, model.mediaType, model.type, model.isFolder);
                    Loader {
                        width: parent.width
                        sourceComponent: carrouselView
                        property alias itemModel: userItemModel
                        property string collectionType: model.collectionType || ""

                        J.ItemModel {
                            id: userItemModel
                            loader: J.LatestMediaLoader {
                                apiClient: appWindow.apiClient
                                parentId: jellyfinId
                            }
                        }
                        Connections {
                            target: mediaLibraryLoader
                            onReady: userItemModel.reload()
                        }
                    }
                }
            }
        }
    }
    SilicaFlickable {
        id: errorFlickable
        anchors.fill: parent
        visible: false
        opacity: 0

        Loader { sourceComponent: commonPullDownMenu; }

        ViewPlaceholder {
            enabled: true
            //- ViewPlaceholder text for when a network error has occurred and no contents could be loaded
            text: qsTr("Network error")
            //- ViewPlaceholder hint text for when a network error has occurred and no contents could be loaded.
            //- The user can reload the page by using the pulley, which this text should hint at.
            hintText: qsTr("Pull down to retry again")
        }
    }

    onStatusChanged: {
        if (status == PageStatus.Active) {
            appWindow.itemData = null
            //appWindow.navigateToItem("14b92f36bfc877ae741079fef49a3d80", "MusicArtist", "MusicArtist", true)
        }
    }

    Connections {
        target: appWindow.apiClient
        onAuthenticatedChanged: loadModels(false)
    }


    /**
     * Loads models if not laoded. Set force to true to reload models
     * even if loaded.
     */
    function loadModels(force) {
        if (force || (appWindow.apiClient.authenticated && !_modelsLoaded)) {
            _modelsLoaded = true;
            mediaLibraryModel.reload()
            userResumeModel.reload()
            showNextUpModel.reload()
        }
    }

    Component {
        id: carrouselView
        SilicaListView {
            property bool isPortrait: Utils.usePortraitCover(collectionType)
            id: list
            clip: true
            height: {
                if (count > 0) {
                    if (isPortrait) {
                        Constants.libraryDelegatePosterHeight
                    } else {
                        Constants.libraryDelegateHeight
                    }
                } else {
                    0
                }
            }
            Behavior on height {
                NumberAnimation { easing.type: Easing.OutQuad; duration: 300 }
            }
            model: itemModel
            width: parent.width
            orientation: ListView.Horizontal
            leftMargin: Theme.horizontalPageMargin
            rightMargin: Theme.horizontalPageMargin
            spacing: Theme.paddingLarge
            delegate: LibraryItemDelegate {
                property string id: model.jellyfinId
                title: model.name
                poster: Utils.itemModelImageUrl(appWindow.apiClient.baseUrl, model.jellyfinId, model.imageTags["Primary"], "Primary", {"height": height})
                Binding on blurhash {
                    when: poster !== ""
                    value: model.imageBlurHashes["Primary"][model.imageTags["Primary"]]
                }
                landscape: !isPortrait
                progress: (typeof model.userDataPlayedProgress !== 0.0) ? model.userDataPlayedPercentage / 100 : 0.0

                onClicked: {
                    appWindow.navigateToItem(model.jellyfinId, model.mediaType, model.type, model.isFolder);
                }
            }
        }
    }

    state: "default"
    states: [
        State {
            name: "default"
            when: mediaLibraryLoader.status !== J.UsersViewsLoader.Error
        },
        State {
            name: "error"
            when: mediaLibraryLoader.status === J.UsersViewsLoader.Error

            PropertyChanges {
                target: errorFlickable
                visible: true
                opacity: 1
            }

            PropertyChanges {
                target: flickable
                opacity: 0
                visible: false
            }
        }
    ]

    transitions: [
        Transition {
            from: "default"
            to: "error"
            SequentialAnimation {
                PropertyAction { target: errorFlickable; property: "visible"; value: true }
                FadeAnimation {}
                PropertyAction { target: flickable; property: "visible"; value: false }
            }
        },
        Transition {
            from: "error"
            to: "default"
            SequentialAnimation {
                PropertyAction { target: flickable; property: "visible"; value: true }
                FadeAnimation {}
                PropertyAction { target: errorFlickable; property: "visible"; value: false }
            }
        }
    ]
}

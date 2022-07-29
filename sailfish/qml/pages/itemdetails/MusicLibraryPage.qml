import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../../components"
import "../.."

BaseDetailPage {
    id: musicLibraryPage
    property bool _firstTimeLoaded: false

    onStatusChanged: {
        if (status == PageStatus.Active) {
            _firstTimeLoaded = true
        }
    }

    SilicaFlickable {
        anchors.fill: parent
        contentHeight: content.height
        Component {
            id: latestMediaLoaderComponent
            J.LatestMediaLoader {
                apiClient: appWindow.apiClient
                parentId: itemData.jellyfinId
                includeItemTypes: "Audio"
                autoReload: false
            }
        }

        Component {
            id: albumArtistLoaderComponent
            J.AlbumArtistLoader {
                apiClient: appWindow.apiClient
                parentId: itemData.jellyfinId
                autoReload: false
            }
        }
        Component {
            id: albumLoaderComponent
            J.UserItemsLoader {
                apiClient: appWindow.apiClient
                parentId: itemData.jellyfinId
                includeItemTypes: "MusicAlbum"
                recursive: true
                sortBy: "SortName"
                autoReload: false
            }
        }
        Component {
            id: playlistLoaderComponent
            J.UserItemsLoader {
                apiClient: appWindow.apiClient
                parentId: itemData.jellyfinId
                includeItemTypes: "Playlist"
                recursive: true
                sortBy: "SortName"
                autoReload: false
            }
        }

        Column {
            id: content
            width: parent.width

            PageHeader {
                title: itemData.name
            }

            ItemChildrenShowcase {
                //: Header on music library: Recently added music albums
                text: qsTr("Recently added")
                //collapseWhenEmpty: false
                extraBusy: !_firstTimeLoaded
                loader: J.LatestMediaLoader {
                    apiClient: appWindow.apiClient
                    parentId: itemData.jellyfinId
                    autoReload: _firstTimeLoaded && itemData.jellyfinId.length > 0
                    includeItemTypes: "Audio"
                    limit: 12
                }
                onHeaderClicked: pageStack.push(Qt.resolvedUrl("CollectionPage.qml"), {
                                                                   "loader": latestMediaLoaderComponent.createObject(musicLibraryPage),
                                                                    //: Page title for the list of all albums within the music library
                                                                    "pageTitle": qsTr("Latest media"),
                                                                    "allowSort": false
                                                               })

            }

            ItemChildrenShowcase {
                text: qsTr("Albums")
                //collapseWhenEmpty: false
                extraBusy: !_firstTimeLoaded
                loader: J.UserItemsLoader {
                    apiClient: appWindow.apiClient
                    parentId: itemData.jellyfinId
                    includeItemTypes: "MusicAlbum"
                    autoReload: _firstTimeLoaded && itemData.jellyfinId.length > 0
                    sortBy: "Random"
                    recursive: true
                    limit: 12
                }
                onHeaderClicked: pageStack.push(Qt.resolvedUrl("CollectionPage.qml"), {
                                                                   "loader": albumLoaderComponent.createObject(musicLibraryPage),
                                                                    //: Page title for the list of all albums within the music library
                                                                    "pageTitle": qsTr("Albums")
                                                               })
            }

            ItemChildrenShowcase {
                text: qsTr("Playlists")
                //collapseWhenEmpty: false
                extraBusy: !_firstTimeLoaded
                loader: J.UserItemsLoader {
                    apiClient: appWindow.apiClient
                    parentId: itemData.jellyfinId
                    includeItemTypes: "Playlist"
                    autoReload: _firstTimeLoaded && itemData.jellyfinId.length > 0
                    sortBy: "Random"
                    recursive: true
                    limit: 12
                }
                onHeaderClicked: pageStack.push(Qt.resolvedUrl("CollectionPage.qml"), {
                                                                   "loader": playlistLoaderComponent.createObject(musicLibraryPage),
                                                                    //: Page title for the list of all playlists within the music library
                                                                    "pageTitle": qsTr("Playlists")
                                                               })
            }

            ItemChildrenShowcase {
                //: Header for music artists
                text: qsTr("Artists")
                //collapseWhenEmpty: false
                extraBusy: !_firstTimeLoaded
                loader: J.AlbumArtistLoader {
                    apiClient: appWindow.apiClient
                    parentId: itemData.jellyfinId
                    autoReload: _firstTimeLoaded && itemData.jellyfinId.length > 0
                    limit: 12
                }
                onHeaderClicked: pageStack.push(Qt.resolvedUrl("CollectionPage.qml"), {
                                                                   "loader": albumArtistLoaderComponent.createObject(musicLibraryPage),
                                                                   "allowSort": false,
                                                                    //: Page title for the list of all artists within the music library
                                                                    "pageTitle": qsTr("Artists")
                                                               })
            }
        }
    }
}

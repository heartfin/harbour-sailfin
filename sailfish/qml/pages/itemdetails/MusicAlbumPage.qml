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
import QtQuick.Layouts 1.1

import nl.netsoj.chris.Jellyfin 1.0

import "../../components"
import "../../components/music"
import "../.."

BaseDetailPage {
    id: albumPageRoot
    readonly property int _songIndexWidth: 100
    property string _albumArtistText: itemData.albumArtist
    width: 800 * Theme.pixelRatio

    readonly property bool _twoColumns: albumPageRoot.width / Theme.pixelRatio >= 800

    UserItemModel {
        id: collectionModel
        apiClient: ApiClient
        sortBy: ["SortName"]
        fields: ["ItemCounts","PrimaryImageAspectRatio","BasicSyncInfo","CanDelete","MediaSourceCount"]
        parentId: itemData.jellyfinId
        onParentIdChanged: reload()
    }
    RowLayout {
        anchors.fill: parent

        Item {height: 1; width: Theme.horizontalPageMargin; visible: wideAlbumCover.visible; }
        Loader {
            id: wideAlbumCover
            visible: _twoColumns
            Layout.minimumWidth: 1000 / Theme.pixelRatio
            Layout.fillHeight: true
            source: visible
                    ? "../../components/music/WideAlbumCover.qml" : ""
            onLoaded: bindAlbum(item)
        }
        Item {height: 1; width: Theme.horizontalPageMargin; visible: wideAlbumCover.visible; }
        SilicaListView {
            id: list
            Layout.fillHeight: true
            Layout.fillWidth: true
            model: collectionModel
            header: Loader {
                width: parent.width
                source: "../../components/music/NarrowAlbumCover.qml"
                onLoaded: bindAlbum(item)
            }
            section {
                property: "parentIndexNumber"
                delegate: SectionHeader {
                    text: qsTr("Disc %1").arg(section)
                }
            }
            delegate: SongDelegate {
                id: songDelegate
                name: model.name
                artists: model.artists
                duration: model.runTimeTicks
                indexNumber: model.indexNumber
                onClicked: window.playbackManager.item = Qt.createQmlObject("import nl.netsoj.chris.Jellyfin 1.0;"
                    + "JellyfinItem { jellyfinId: \"" + model.id + "\"; apiClient: ApiClient; }", songDelegate, "nonexistent.qml");
            }

            VerticalScrollDecorator {}
        }
    }

    Connections {
        target: itemData
        onAlbumArtistsChanged: {
            console.log(itemData.albumArtists)
            _albumArtistText = ""
            for (var i = 0; i < itemData.albumArtists.length; i++) {
                _albumArtistText += itemData.albumArtists[i]["name"]
            }
        }
    }

    function bindAlbum(item) {
        item.albumArt = Qt.binding(function(){ return Utils.itemImageUrl(ApiClient.baseUrl, itemData, "Primary", {"maxWidth": parent.width})})
        item.name = Qt.binding(function(){ return itemData.name})
        item.releaseYear = Qt.binding(function() { return itemData.productionYear})
        item.albumArtist = Qt.binding(function() { return _albumArtistText})
        item.duration = Qt.binding(function() { return itemData.runTimeTicks})
        item.songCount = Qt.binding(function() { return itemData.childCount})
        item.listview = Qt.binding(function() { return list})
        item.blurhash = Qt.binding(function() { return itemData.imageBlurHashes["Primary"][itemData.imageTags["Primary"]]; })
        item.twoColumns = Qt.binding(function() { return _twoColumns })
    }
}

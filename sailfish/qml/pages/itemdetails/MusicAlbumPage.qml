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

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../../components"
import "../../components/music"
import "../.."

BaseDetailPage {
    id: albumPageRoot
    readonly property int _songIndexWidth: 100
    width: 800 * Theme.pixelRatio

    property bool _collectionModelLoaded: false
    readonly property bool _twoColumns: albumPageRoot.width / Theme.pixelRatio >= 800

    J.ItemModel {
        id: collectionModel
        loader: J.UserItemsLoader {
            apiClient: appWindow.apiClient
            sortBy: itemData.type === "MusicAlbum" ? "ParentIndexNumber,IndexNumber,SortName" : undefined
            fields: [J.ItemFields.ItemCounts, J.ItemFields.PrimaryImageAspectRatio]
            parentId: itemData.jellyfinId
            autoReload: itemData.jellyfinId.length > 0
            //onParentIdChanged: if (parentId.length > 0) reload()
        }
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
                property: itemData.type === "MusicAlbum" ? "parentIndexNumber" : undefined
                delegate: SectionHeader {
                    text: qsTr("Disc %1").arg(section)
                }
            }
            delegate: SongDelegate {
                id: songDelegate
                name: model.name
                artists: model.artists
                duration: model.runTimeTicks
                indexNumber: itemData.type === "MusicAlbum" ?  model.indexNumber : index + 1
                onClicked: window.playbackManager.playItemInList(collectionModel, model.index)
            }

            VerticalScrollDecorator {}
        }
    }

    function bindAlbum(item) {
        item.albumArt = Qt.binding(function(){ return Utils.itemImageUrl(apiClient.baseUrl, itemData, "Primary", {"maxWidth": parent.width})})
        item.name = Qt.binding(function(){ return itemData.name})
        item.releaseYear = Qt.binding(function() { return itemData.productionYear})
        item.albumArtist = Qt.binding(function() { return itemData.albumArtist})
        item.duration = Qt.binding(function() { return itemData.runTimeTicks})
        item.songCount = Qt.binding(function() { return itemData.childCount})
        item.listview = Qt.binding(function() { return list})
        item.aspectRatio = Qt.binding(function() { return itemData.primaryImageAspectRatio})
        item.blurhash = Qt.binding(function() { return itemData.imageBlurHashes["Primary"][itemData.imageTags["Primary"]]; })
        item.twoColumns = Qt.binding(function() { return _twoColumns })
        item.type = Qt.binding(function() { return itemData.type})
    }
}

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
    readonly property string _description: {
        if (itemData.type === "MusicAlbum") {
            //: Short description of the album: %1 -> album artist, %2 -> amount of songs, %3 -> duration, %4 -> release year
            qsTr("%1\n%2 songs | %3 | %4")
                .arg(itemData.albumArtist)
                .arg(itemData.childCount)
                .arg(Utils.ticksToText(itemData.runTimeTicks))
                //: Unknown album release year
                .arg(itemData.productionYear >= 0 ? itemData.productionYear : qsTr("Unknown year"))
        } else {
            qsTr("Playlist\n%1 songs | %2")
                .arg(itemData.childCount)
                .arg(Utils.ticksToText(itemData.runTimeTicks))
        }
    }

    J.ItemModel {
        id: collectionModel
        loader: J.UserItemsLoader {
            apiClient: appWindow.apiClient
            sortBy: itemData.type === "MusicAlbum" ? "ParentIndexNumber,IndexNumber,SortName" : ""
            fields: [J.ItemFields.ItemCounts, J.ItemFields.PrimaryImageAspectRatio]
            parentId: itemData.jellyfinId
            autoReload: itemData.jellyfinId.length > 0
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
                property: itemData.type === "MusicAlbum" ? "parentIndexNumber" : ""
                delegate: SectionHeader {
                    text: qsTr("Disc %1").arg(section)
                }
            }
            delegate: SongDelegate {
                id: songDelegate
                name: model.name
                artists: model.artistItems
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
        item.listview = Qt.binding(function() { return list})
        item.aspectRatio = Qt.binding(function() { return itemData.primaryImageAspectRatio})
        item.blurhash = Qt.binding(function() { return itemData.imageBlurHashes["Primary"][itemData.imageTags["Primary"]]; })
        item.twoColumns = Qt.binding(function() { return _twoColumns })
        item.description = Qt.binding(function() { return _description })
    }
}

/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021 Chris Josten

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
import QtMultimedia 5.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../"

/**
 *
 * +---+--------------------------------------+
 * |\   /|                              +---+ |
 * | \ / |   Media title                |   | |
 * |  X  |                              | ⏸︎| |
 * | / \ |   Artist 1, artist 2         |   | |
 * |/   \|                              +---+ |
 * +-----+------------------------------------+
 */
DockedPanel {
    height: content.height
    width: parent.width
    property PlaybackManager manager

    RowLayout {
        id: content
        width: parent.width
        height: Theme.itemSizeLarge
        RemoteImage {
            Layout.fillHeight: true
            Layout.preferredWidth: content.height
            blurhash: manager.item.imageBlurHashes["Primary"][manager.item.imageTags["Primary"]]
            source: Utils.itemImageUrl(ApiClient.baseUrl, manager.item, "Primary", {"maxWidth": parent.width})
            fillMode: Image.PreserveAspectCrop
        }
        Item { height: 1; Layout.preferredWidth: Theme.paddingMedium; } // Padding
        Column {
            Layout.fillWidth: true
            Layout.alignment: Qt.AlignVCenter | Qt.AlignLeft
            Layout.minimumWidth: 10 * Theme.pixelRatio
            Label {
                text: manager.item == null ? qsTr("No media selected") : manager.item.name
                width: parent.width
                font.pixelSize: Theme.fontSizeMedium
                truncationMode: TruncationMode.Fade
            }
            Label {
                text: {
                    if (manager.item == null) return qsTr("Play some media!")
                    console.log(manager.item.type)
                    switch(manager.item.type) {
                    case "Audio":
                        return manager.item.artists.join(", ")
                    }
                }
                width: parent.width
                font.pixelSize: Theme.fontSizeSmall
                truncationMode: TruncationMode.Fade
                color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
            }
        }

        Item { height: 1; Layout.preferredWidth: Theme.paddingMedium; } // Padding
        IconButton {
            id: playButton
            Layout.preferredHeight: Theme.iconSizeMedium
            Layout.preferredWidth: Theme.iconSizeMedium
            icon.source: appWindow.mediaPlayer.playbackState === MediaPlayer.PlayingState
                         ? "image://theme/icon-m-pause" : "image://theme/icon-m-play"
            onClicked: appWindow.mediaPlayer.playbackState === MediaPlayer.PlayingState
                ? appWindow.mediaPlayer.pause()
                : appWindow.mediaPlayer.play()
        }
        Item { height: 1; Layout.preferredWidth: Theme.paddingMedium; } // Padding
    }

    ProgressBar {
        anchors.verticalCenter: parent.top
        width: parent.width
        leftMargin: Theme.itemSizeLarge
        rightMargin: 0
        minimumValue: 0
        value: appWindow.mediaPlayer.position
        maximumValue: appWindow.mediaPlayer.duration
        indeterminate: [MediaPlayer.Loading, MediaPlayer.Buffering].indexOf(appWindow.mediaPlayer.status) >= 0
    }
}

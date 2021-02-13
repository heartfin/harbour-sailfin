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

Column {
    property alias imageSource : playImage.source
    property real imageAspectRatio: 1.0
    property real playProgress: 0.0
    property bool favourited: false
    property alias imageBlurhash: playImage.blurhash
    signal playPressed(bool resume)
    spacing: Theme.paddingLarge

    BackgroundItem {
        width: parent.width
        height: width / imageAspectRatio
        RemoteImage {
            id: playImage
            anchors.fill: parent
            fillMode: Image.PreserveAspectCrop
            clip: true
        }
        Rectangle {
            anchors.fill: parent
            color: Theme.rgba(Theme.overlayBackgroundColor, Theme.opacityLow)
        }
        Icon {
            id: playButton
            source: "image://theme/icon-l-play"
            anchors.centerIn: parent
            highlighted: parent.highlighted
        }
        Rectangle {
            anchors {
                left: parent.left
                bottom: parent.bottom
            }
            height: Theme.paddingMedium
            color: Theme.highlightColor
            width: parent.width * playProgress
        }
        onClicked: playPressed(true)
    }
    Row {
        anchors {
            //left: parent.left
            right: parent.right
            leftMargin: Theme.horizontalPageMargin
            rightMargin: Theme.horizontalPageMargin
        }
        spacing: Theme.paddingMedium
        IconButton {
            id: playFromBeginning
            icon.source: "image://theme/icon-m-backup"
            visible: playProgress > 0
            onClicked: playPressed(false)
        }
        IconButton {
            id: favouriteButton
            icon.source: favourited ? "image://theme/icon-m-favorite-selected"
                                    : "image://theme/icon-m-favorite"
        }

    }
}

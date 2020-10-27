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

import "../.."

ListItem {
    id: songDelegateRoot
    property var artists: []
    property real duration
    property string name
    property int indexNumber

    contentHeight: songName.height + songArtists.height + 2 * Theme.paddingMedium
    width: parent.width

    TextMetrics {
        id: indexMetrics
        text: "99"
        font.pixelSize: Theme.fontSizeLarge
    }

    Label {
        id: songIndex
        anchors {
            top: parent.top
            topMargin: Theme.paddingMedium
            left: parent.left
            leftMargin: Theme.horizontalPageMargin
        }
        text: indexNumber
        horizontalAlignment: Text.AlignRight
        font.pixelSize: Theme.fontSizeExtraLarge
        width: indexMetrics.width
    }

    Label {
        id: songName
        anchors {
            left: songIndex.right
            leftMargin: Theme.paddingLarge
            top: parent.top
            topMargin: Theme.paddingMedium
            right: duration.left
            rightMargin: Theme.paddingLarge
        }
        text: name
        font.pixelSize: Theme.fontSizeMedium
        truncationMode: TruncationMode.Fade
    }
    Label {
        id: songArtists
        anchors {
            top: songName.bottom
            left: songIndex.right
            leftMargin: Theme.paddingLarge
            right: parent.right
            rightMargin: Theme.horizontalPageMargin
        }
        text: artists.join(", ")
        font.pixelSize: Theme.fontSizeSmall
        truncationMode: TruncationMode.Fade
        color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
    }

    Label {
        id: duration
        anchors {
            right: parent.right
            rightMargin: Theme.horizontalPageMargin
            baseline: songName.baseline
        }
        width: contentWidth
        text: Utils.ticksToText(songDelegateRoot.duration)
        font.pixelSize: Theme.fontSizeSmall
        color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
    }
}

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

import ".."

/**
 * Delegate for displaying an item in the library.
 */
BackgroundItem {
    id: root
    property alias poster: posterImage.source
    property alias title: titleText.text
    property bool landscape: false
    property real progress: 0.0

    width: Constants.libraryDelegateWidth
    height: landscape ? Constants.libraryDelegateHeight : Constants.libraryDelegatePosterHeight

    RemoteImage {
        id: posterImage
        clip: true
        anchors {
            left: parent.left
            top: parent.top
            right: parent.right
            bottom: parent.bottom
        }
        fillMode: Image.PreserveAspectCrop
        fallbackColor: Utils.colorFromString(title)
    }

    /*Rectangle {
        anchors.fill: posterImage
        color: Theme.rgba(Theme.highlightBackgroundColor, Theme.highlightBackgroundOpacity)
        visible: root.highlighted
    }*/

    Shim {
        anchors {
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }
        height: titleText.height * 1.5 + Theme.paddingSmall * 2

    }

    Label {
        id: titleText
        anchors {
            left: parent.left
            bottom: parent.bottom
            right: parent.right
            leftMargin: Theme.paddingMedium
            rightMargin: Theme.paddingMedium
            bottomMargin: Theme.paddingSmall
        }
        truncationMode: TruncationMode.Fade
        horizontalAlignment: Text.AlignLeft
    }

    Rectangle {
        id: progress
        anchors {
            left: parent.left
            bottom: parent.bottom
        }
        height: Theme.paddingSmall
        color: Theme.highlightColor
        width: root.progress * parent.width
    }
}

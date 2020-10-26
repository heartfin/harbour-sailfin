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

/**
 * An image for "remote" images (loaded over e.g. http), with a spinner and a fallback image
 */
SilicaItem {
    property string fallbackImage
    property bool usingFallbackImage
    property color fallbackColor: Theme.highlightColor

    property alias source: realImage.source
    property alias sourceSize: realImage.sourceSize
    property alias fillMode: realImage.fillMode
    implicitHeight: realImage.implicitHeight
    implicitWidth: realImage.implicitWidth

    Image {
        id: realImage
        anchors.fill: parent
        asynchronous: true
    }
	
    Rectangle {
        id: fallbackBackground
        anchors.fill: parent
        gradient: Gradient {
            GradientStop { position: 0.0; color: fallbackColor; }
            GradientStop { position: 1.0; color: Theme.highlightDimmerFromColor(fallbackColor, Theme.colorScheme); }
        }
        visible: realImage.status === Image.Error || realImage.status === Image.Null || realImage.status === Image.Loading
    }

    Rectangle {
        id: highlightOverlay
        anchors.fill: parent
        color: Theme.rgba(Theme.highlightColor, Theme.opacityOverlay)
        visible: parent.highlighted
    }

    BusyIndicator {
        anchors.centerIn: parent
        running: realImage.status === Image.Loading
    }

    HighlightImage {
		id: fallbackImageItem
		anchors.centerIn: parent
        visible: realImage.status === Image.Error || realImage.status === Image.Null
		source: fallbackImage ? fallbackImage : "image://theme/icon-m-question"
	}
}

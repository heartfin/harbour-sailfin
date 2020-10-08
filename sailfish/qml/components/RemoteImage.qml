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
HighlightImage {
	property string fallbackImage
	property bool usingFallbackImage
    property color fallbackColor: Theme.highlightColor
    asynchronous: true
	
    Rectangle {
        id: fallbackBackground
        anchors.fill: parent
        gradient: Gradient {
            GradientStop { position: 0.0; color: fallbackColor; }
            GradientStop { position: 1.0; color: Theme.highlightDimmerFromColor(fallbackColor, Theme.colorScheme); }
        }
        visible: parent.status == Image.Error || parent.status == Image.Null || parent.status == Image.Loading
    }

    BusyIndicator {
        anchors.centerIn: parent
        running: parent.status == Image.Loading
    }

    HighlightImage {
		id: fallbackImageItem
		anchors.centerIn: parent
        visible: parent.status == Image.Error || parent.status == Image.Null
		source: fallbackImage ? fallbackImage : "image://theme/icon-m-question"
	}
}

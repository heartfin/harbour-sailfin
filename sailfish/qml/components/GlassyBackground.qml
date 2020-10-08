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

/*
File taken and adapted from hutspot. Licensed under the MIT license.
Copyright (c) 2019 sailfish-spotify contributors
View ../licenses/MIT.txt for the full license.
*/
import QtQuick 2.6
import Sailfish.Silica 1.0
import QtGraphicalEffects 1.0

/**
 * A silica-like background for displaying backdrops.
 */
Rectangle {
    property alias source: backgroundImage.source
    property alias sourceSize: backgroundImage.sourceSize
    property real dimmedOpacity: Theme.opacityFaint
    readonly property alias status: backgroundImage.status
    color: Theme.colorScheme == Theme.DarkOnLight ? "#fff" : "#000"
    z: -1
    opacity: status == Image.Ready ? 1.0 : 0.0
    Behavior on opacity { FadeAnimator {} }

    Image {
        id: backgroundImage
        cache: true
        smooth: false
        asynchronous: true
        fillMode: Image.PreserveAspectCrop
        anchors.fill: parent
        visible: false
    }

    FastBlur {
        cached: true
        anchors.fill: backgroundImage
        source: backgroundImage
        opacity: dimmedOpacity
        radius: 100
    }

    Image {
        anchors.fill: parent
        fillMode:  Image.Tile
        source: "image://theme/graphic-shader-texture"
        opacity: 0.1
        visible: parent.visible
    }

    function clear() {
        //source = ""
    }
}

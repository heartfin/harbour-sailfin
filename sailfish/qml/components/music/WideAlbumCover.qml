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
import "../.."

/**
 * Album details for "wide" devices such as tablets and phones in landscape mode.
 */

Column {
    id: wideAlbumCover
    property ListView listview
    property alias albumArt: albumArt.source
    property string name
    property alias blurhash : albumArt.blurhash
    property bool twoColumns: true
    property real aspectRatio
    property string description

    Item { width:1; height: Theme.paddingLarge }

    RemoteImage {
        id: albumArt
        width: parent.width
        height: width
        fillMode: Image.PreserveAspectFit
    }
    PageHeader {
        id: albumHeader
        leftMargin: 0
        rightMargin: 0
        title: name
        description: wideAlbumCover.description
    }
}

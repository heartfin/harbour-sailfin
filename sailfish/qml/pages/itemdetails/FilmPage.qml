/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020-2024 Chris Josten

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

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../../components"
import "../.."

VideoPage {
    subtitle: qsTr("Released: %1 — Run time: %2").arg(itemData.productionYear).arg(Utils.ticksToText(itemData.runTimeTicks))
    imageSource: Utils.itemBackdropUrl(apiClient.baseUrl, itemData, 0, {"maxWidth": parent.width})
    imageBlurhash: itemData.imageBlurHashes["Backdrop"][itemData.backdropImageTags[0]]

    SectionHeader {
        text: qsTr("Overview")
    }

    PlainLabel {
        id: overviewText
        text: itemData.overview
        font.pixelSize: Theme.fontSizeSmall
        color: Theme.secondaryHighlightColor
    }
}

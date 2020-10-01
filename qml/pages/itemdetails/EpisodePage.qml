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
import nl.netsoj.chris.Jellyfin 1.0

import "../../components"
import "../../"

VideoPage {
    subtitle: {
        if (typeof itemData.IndexNumberEnd !== "undefined") {
            qsTr("Episode %1–%2 | %3").arg(itemData.IndexNumber)
            .arg(itemData.IndexNumberEnd)
            .arg(itemData.SeasonName)
        } else {
            qsTr("Episode %1 | %2").arg(itemData.IndexNumber).arg(itemData.SeasonName)
        }
    }

    SectionHeader {
        text: qsTr("Overview")
    }

    PlainLabel {
        id: overviewText
        text: itemData.Overview || qsTr("No overview available")
        font.pixelSize: Theme.fontSizeSmall
        color: Theme.secondaryHighlightColor
    }
}

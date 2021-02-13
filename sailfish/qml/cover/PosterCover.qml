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

import "../components"
import ".."

CoverBackground {
    property JellyfinItem mData: appWindow.itemData
    RemoteImage {
        anchors.fill: parent
        source: mData == null ? "" : Utils.itemImageUrl(ApiClient.baseUrl, mData, "Primary", {"maxWidth": parent.width})
        fillMode: Image.PreserveAspectCrop
        onSourceChanged: console.log(source)
    }

    Shim {
        // Movies usually show their name on the poster,
        // so showing it here as well is a bit double
        visible: mData.type !== "Movie"
        anchors {
            left: parent.left
            right: parent.right
            top: parent.top
        }
        upsideDown: true
        height: parent.height / 2

        Rectangle {
            anchors {
                top: parent.top
                left: parent.left
            }
            width: itemData.userData.playedPercentage / 100 * parent.width
            height: Theme.paddingSmall
            color: Theme.highlightColor
        }

        Column {
            id: infoColumn
            anchors {
                top: parent.top
                left: parent.left
                right: parent.right
            }
            anchors.margins: Theme.paddingMedium
            Label {
                id: itemName
                anchors {
                    left: parent.left
                    right: parent.right
                }
                color: Theme.primaryColor
                text: mData.name
                truncationMode: TruncationMode.Fade
            }
            Label {
                visible: typeof mData.runTimeTicks !== "undefined"
                color: Theme.secondaryColor
                text: Utils.ticksToText(mData.runTimeTicks)
            }
        }
    }

}

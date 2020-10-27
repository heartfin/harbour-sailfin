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
 * Album details for "narrow" devices such as phones in portrait mode.
 */
Item {
    property ListView listview
    property real releaseYear
    property alias albumArt: albumArt.source
    property string albumArtist
    property real duration
    property int songCount
    property string name


    property string stateIfArt: "largeArt"
    property alias _albumArt: albumArt
    id: listHeader
    width: parent.width
    //spacing: Theme.paddingLarge
    state: _albumArt.source != "" ? stateIfArt : "noArt"
    MouseArea {
        anchors.fill: parent
        onClicked: {
            if (listHeader.stateIfArt == "largeArt") {
                listHeader.stateIfArt = "details"
            } else {
                listHeader.stateIfArt = "largeArt"
            }
        }
    }
    RemoteImage {
        id: albumArt
        anchors {
            top: parent.top
            right: parent.right
        }
        sourceSize.width: listHeader.width
        sourceSize.height: listHeader.width
        fillMode: Image.PreserveAspectFit
        opacity: 1
        clip: true
    }
    PageHeader {
        id: albumHeader
        width: parent.width - Theme.horizontalPageMargin - height
        title: name
        //: Short description of the album: %1 -> album artist, %2 -> amount of songs, %3 -> duration, %4 -> release year
        description: qsTr("%1\n%2 songs | %3 | %4")
            .arg(albumArtist)
            .arg(songCount)
            .arg(Utils.ticksToText(duration))
            //: Unknown album release year
            .arg(releaseYear >= 0 ? releaseYear : qsTr("Unknown year"))
    }

    states: [
        State {
            name: "largeArt"
            PropertyChanges {
                target: _albumArt
                width: parent.width
                height: width
            }
            PropertyChanges {
                target: listHeader
                height: width
            }
            PropertyChanges {
                target: albumHeader
                opacity: 0
            }
            PropertyChanges {
                target: listview
                contentY: -listview.width
            }
            AnchorChanges {
                target: albumHeader
                anchors.left: undefined
                anchors.right: _albumArt.left
            }
        },
        State {
            name: "details"
            PropertyChanges {
                target: _albumArt
                width: height
                height: albumHeader.height
            }
            PropertyChanges {
                target: listHeader
                height: albumHeader.height
            }
            PropertyChanges {
                target: albumHeader
                opacity: 1
            }
            PropertyChanges {
                target: listview
                contentY: -albumHeader.height
            }
            AnchorChanges {
                target: albumHeader
                anchors.left: undefined
                anchors.right: _albumArt.left
            }
        },
        State {
            name: "noArt"
            extend: "details"
            PropertyChanges {
                target: _albumArt
                opacity: 0
            }
            PropertyChanges {
                target: albumHeader
                width: parent.width - Theme.horizontalPageMargin * 2
            }
            AnchorChanges {
                target: albumHeader
                anchors.left: parent.left
                anchors.right: parent.right
            }
        }
    ]
    transitions: [
        Transition {
            from: "noArt"
            // No transitions from "noArt", otherwise the layout animates every load
        },
        Transition {
            OpacityAnimator { target: albumHeader}
            OpacityAnimator { target: _albumArt}
            NumberAnimation {
                properties: "width,height,contentY"
                //velocity: 1600
                duration: 300
                easing.type: Easing.OutQuad
            }
            AnchorAnimation {}
        }
    ]
}

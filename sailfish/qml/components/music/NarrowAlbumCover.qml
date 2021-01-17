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
    property alias albumArt: albumArtImage.source
    property string albumArtist
    property real duration
    property int songCount
    property string name
    property alias blurhash : albumArtImage.blurhash
    property bool twoColumns

    readonly property real smallSize: albumHeader.height
    readonly property real bigSize: listHeader.width
    id: listHeader
    width: parent.width
    //spacing: Theme.paddingLarge

    MouseArea {
        anchors.fill: albumArtImage
        onClicked: {
            if (listview.contentY < -bigSize + 10) {
                listviewShrinkAnimation.start()
            } else {
                listviewGrowAnimation.start()
            }
        }
    }

    NumberAnimation {
        id: listviewShrinkAnimation
        target: listview
        property: "contentY"
        easing.type: Easing.OutCubic
        to: -smallSize
    }

    NumberAnimation {
        id: listviewGrowAnimation
        target: listview
        property: "contentY"
        easing.type: Easing.OutCubic
        to: -bigSize
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

    RemoteImage {
        id: albumArtImage
        anchors {
            right: parent.right
            bottom: parent.bottom
        }
        sourceSize.width: listHeader.width
        sourceSize.height: listHeader.width
        fillMode: Image.PreserveAspectFit
        opacity: 1
        clip: true
    }

    states: [
        State {
            name: "art"
            when: albumArtImage.status != Image.Null && !twoColumns
            PropertyChanges {
                target: listview
                //contentY: -smallSize
                topMargin: Screen.width - smallSize
                bottomMargin: listview.contentHeight < listview.height ? listview.height - listview.contentHeight : 0
            }
            PropertyChanges {
                target: albumArtImage
                opacity: 1
                width: height
                height: smallSize + -(Math.min(listview.contentY + smallSize, 0) / (listview.topMargin)) * (bigSize - smallSize)
            }
            PropertyChanges {
                target: listHeader
                height: smallSize
                visible: true
            }
            PropertyChanges {
                target: albumHeader
                opacity: 1.0 - Math.min(1.0, Math.max(0.0, -Math.min(listview.contentY + smallSize, 0) / (listview.topMargin)))
                anchors.rightMargin: Theme.paddingMedium + albumArtImage.width
            }
            AnchorChanges {
                target: albumHeader
                anchors.top: albumArtImage.top
                anchors.left: undefined
                anchors.right: parent.right
            }
        },
        State {
            name: "noArt"
            when: albumArtImage.status == Image.Null && !twoColumns
            PropertyChanges {
                target: albumArtImage
                opacity: 0
            }
            PropertyChanges {
                target: listHeader
                height: smallSize
            }
            PropertyChanges {
                target: albumHeader
                width: parent.width - Theme.horizontalPageMargin * 2
                opacity: 1
            }
            AnchorChanges {
                target: albumHeader
                anchors.top: parent.top
                anchors.left: parent.left
                anchors.right: parent.right
            }

        },
        State {
            name: "hidden"
            when: twoColumns
            PropertyChanges {
                target: listview
                topMargin: 0
            }

            PropertyChanges {
                target: listHeader
                height: 0
                visible: false
            }
        }
    ]
    transitions: [
        /*Transition {
            from: "noArt"
            // No transitions from "noArt", otherwise the layout animates every load
        },*/
        Transition {
            from: "hidden"
            SequentialAnimation {
                PauseAnimation {
                    duration: 50
                }
                ScriptAction {
                    script: {
                        if (listview.contentY < 10) {
                            listviewShrinkAnimation.start()
                        }
                    }
                }
            }
        },
        Transition {
            to: "noArt"
            SequentialAnimation {
                PauseAnimation {
                    duration: 10
                }
                ScriptAction {
                    script: {
                        if (listview.contentY < 10) {
                            listview.contentY = -smallSize
                        }
                    }
                }
            }
        },
        Transition {
            to: "art"
            SequentialAnimation {
                PauseAnimation {
                    duration: 10
                }
                ScriptAction {
                    script: {
                        if (listview.contentY < 10) {
                            listview.contentY = -smallSize
                        }
                    }
                }
            }
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

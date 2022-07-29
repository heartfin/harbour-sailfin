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

import "../.."

ListItem {
    id: songDelegateRoot
    property var artists: []
    property real duration
    property string name
    property int indexNumber
    property bool playing

    contentHeight: songName.height + songArtists.height + 2 * Theme.paddingMedium
    width: parent.width
    menu: contextMenu

    TextMetrics {
        id: indexMetrics
        text: "99"
        font.pixelSize: Theme.fontSizeLarge
    }

    Label {
        id: songIndex
        anchors {
            top: parent.top
            topMargin: Theme.paddingMedium
            left: parent.left
            leftMargin: Theme.horizontalPageMargin
        }
        text: indexNumber
        horizontalAlignment: Text.AlignRight
        font.pixelSize: Theme.fontSizeExtraLarge
        width: indexMetrics.width
        highlighted: playing
    }

    Label {
        id: songName
        anchors {
            left: songIndex.right
            leftMargin: Theme.paddingLarge
            top: parent.top
            topMargin: Theme.paddingMedium
            right: duration.left
            rightMargin: Theme.paddingLarge
        }
        text: name
        font.pixelSize: Theme.fontSizeMedium
        truncationMode: TruncationMode.Fade
        highlighted: down || playing
    }
    Label {
        id: songArtists
        anchors {
            top: songName.bottom
            left: songIndex.right
            leftMargin: Theme.paddingLarge
            right: parent.right
            rightMargin: Theme.horizontalPageMargin
        }
        text: {
            var names = []
            for (var i = 0; i < artists.length; i++) {
                names.push(artists[i].name)
            }
            return names.join(", ")
        }
        font.pixelSize: Theme.fontSizeSmall
        truncationMode: TruncationMode.Fade
        color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
        highlighted: down || playing
    }

    Label {
        id: duration
        anchors {
            right: parent.right
            rightMargin: Theme.horizontalPageMargin
            baseline: songName.baseline
        }
        width: contentWidth
        text: Utils.ticksToText(songDelegateRoot.duration)
        font.pixelSize: Theme.fontSizeSmall
        color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
        highlighted: down || playing
    }

    function goToArtist(id) {
        appWindow.navigateToItem(id, "audio", "MusicArtist", true)
    }

    Component {
        id: contextMenu
        ContextMenu {
            MenuItem {
                text: {
                    if(artists.length === 1) {
                        //: Context menu item for navigating to the artist of the selected track
                        return qsTr("Go to %1").arg(artists[0].name)
                    } else {
                        //: Context menu item for navigating to one of the artists of the selected track (opens submenu)
                        return qsTr("Go to artists")
                    }
                }
                onDelayedClick: {
                    if (artists.length > 1) {
                        songDelegateRoot.menu = artistMenu
                        songDelegateRoot.openMenu()
                    } else {
                        goToArtist(artists[0].jellyfinId)
                    }
                }
            }
        }
    }

    Component {
        id: artistMenu
        ContextMenu {
            Repeater {
                model: artists
                MenuItem {
                    text: modelData.name
                    onDelayedClick: goToArtist(modelData.jellyfinId)
                }
            }
            onClosed: songDelegateRoot.menu = contextMenu
        }
    }

}

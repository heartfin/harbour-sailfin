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

import nl.netsoj.chris.Jellyfin 1.0 as J

Column {
    property var audioTracks
    property var videoTracks
    property var subtitleTracks

    readonly property int videoTrack: videoSelector.currentItem ? videoSelector.currentItem._index : 0
    readonly property int audioTrack: audioSelector.currentItem ? audioSelector.currentItem._index : 0
    readonly property int subtitleTrack: subitleSelector.currentItem._index


    ListModel {
        id: videoModel
    }
    ListModel {
        id: audioModel
    }

    ListModel {
        id: subtitleModel
    }

    ComboBox {
        id: videoSelector
        label: qsTr("Video track")
        enabled: videoTracks.length > 1
        menu: ContextMenu {
            Repeater {
                model: videoTracks
                MenuItem {
                    readonly property int _index: modelData.index
                    text: modelData.displayTitle
                }
            }
        }
    }

    ComboBox {
        id: audioSelector
        label: qsTr("Audio track")
        enabled: audioTracks.length > 1
        menu: ContextMenu {
            Repeater {
                model: audioTracks
                MenuItem {
                    readonly property int _index: modelData.index
                    text: modelData.displayTitle
                }
            }
        }
    }

    ComboBox {
        id: subitleSelector
        label: qsTr("Subtitle track")
        enabled: subtitleTracks.length> 0
        menu: ContextMenu {
            MenuItem {
                readonly property int _index: -1
                //: Value in ComboBox to disable subtitles
                text: qsTr("Off")
            }
            Repeater {
                model: subtitleTracks
                MenuItem {
                    readonly property int _index: modelData.index
                    text: modelData.displayTitle
                }
            }
        }
    }
}

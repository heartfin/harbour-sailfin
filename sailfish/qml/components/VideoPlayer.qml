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
import QtMultimedia 5.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0 as J

import "videoplayer"
import "../"

/**
 * A videoPlayer for Jellyfin videos
 */

SilicaItem {
    id: playerRoot
    //FIXME: Once QTBUG-10822 is resolved, change to J.Item
    property var item
    property string title: item.name
    property bool resume
    property int progress
    readonly property bool landscape: videoOutput.contentRect.width > videoOutput.contentRect.height
    readonly property bool hudVisible: !hud.hidden || manager.error !== MediaPlayer.NoError
    property int audioTrack: 0
    property int subtitleTrack: 0
    //FIXME: Once QTBUG-10822 is resolved, change to J.PlaybackManager
    property var manager;
    onManagerChanged: console.log(manager.player)

    // Blackground to prevent the ambience from leaking through
    Rectangle {
        anchors.fill: parent
        color: Theme.overlayBackgroundColor
    }

    VideoOutput {
        id: videoOutput
        source: manager
        anchors.fill: parent
        Component.onCompleted: {
            console.log(manager.player)
        }
    }

    VideoHud {
        id: hud
        anchors.fill: parent
        manager: playerRoot.manager
        title: videoPlayer.title

    }

    VideoError {
        anchors.fill: videoOutput
        player: manager
    }

    Label {
        readonly property string _playbackMethod: {
            switch(manager.playMethod) {
            case J.PlayMethod.EnumNotSet:
                return "Enum not set"
            case J.PlayMethod.DirectPlay:
                return "Direct Play"
            case J.PlayMethod.Transcode:
                return "Transcoding"
            case J.PlayMethod.DirectStream:
                return "Direct Stream"
            default:
                return "Unknown playback method '%1'".arg(manager.playMethod)
            }
        }
        anchors.fill: parent
        anchors.margins: Theme.horizontalPageMargin
        text: item.jellyfinId + "\n" + appWindow.playbackManager.streamUrl + "\n"
          + "Playback method: " + _playbackMethod + "\n"
          + "Media status: " + manager.mediaStatus + "\n"
          + "Playback state: " + manager.playbackState + "\n"
          // + player.bufferProgress + "\n"
          // + player.metaData.videoCodec + "@" + player.metaData.videoFrameRate + "(" + player.metaData.videoBitRate + ")" + "\n"
          // + player.metaData.audioCodec + "(" + player.metaData.audioBitRate + ")" + "\n"
          // + player.errorString + "\n"
        font.pixelSize: Theme.fontSizeExtraSmall
        wrapMode: "WordWrap"
        visible: appWindow.showDebugInfo

        MouseArea {
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            enabled: parent.visible
            onClicked: Clipboard.text = appWindow.playbackManager.streamUrl
        }
    }

    function start() {
        manager.audioIndex = audioTrack
        manager.subtitleIndex = subtitleTrack
        manager.resumePlayback = resume
        manager.playItem(item)
    }

    function stop() {
        manager.stop();
    }
}

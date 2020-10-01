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

import nl.netsoj.chris.Jellyfin 1.0

import "videoplayer"
import "../"

/**
 * A videoPlayer for Jellyfin videos
 */

SilicaItem {
    id: playerRoot
    property string itemId
    property string title
    property int progress
    readonly property bool landscape: videoOutput.contentRect.width > videoOutput.contentRect.height
    property MediaPlayer player
    readonly property bool hudVisible: !hud.hidden || player.error !== MediaPlayer.NoError
    property alias audioTrack: mediaSource.audioIndex
    property alias subtitleTrack: mediaSource.subtitleIndex
    property int startTicks: 0

    // Force a Light on Dark theme since I doubt that there are persons who are willing to watch a Video
    // on a white background.
    palette.colorScheme: Theme.LightOnDark

    // Blackground to prevent the ambience from leaking through
    Rectangle {
        anchors.fill: parent
        color: "black"
    }

    MediaSource {
        id: mediaSource
        apiClient: ApiClient
        itemId: playerRoot.itemId
        autoOpen: true
        //autoPlay: true
        onStreamUrlChanged: {
            if (mediaSource.streamUrl != "") {
                player.source = streamUrl
            }
        }
    }

    Connections {
        target: player
        onPlaybackStateChanged: mediaSource.state = player.playbackState
        onPositionChanged: mediaSource.position = Utils.msToTicks(player.position)
    }


    VideoOutput {
        id: videoOutput
        source: player
        anchors.fill: parent
    }

    VideoHud {
        id: hud
        anchors.fill: parent
        player: playerRoot.player
        title: videoPlayer.title

        Label {
            anchors.fill: parent
            anchors.margins: Theme.horizontalPageMargin
            text: itemId + "\n" + mediaSource.streamUrl + "\n"
                  + player.status + "\n"
                  + player.bufferProgress + "\n"
                  + player.metaData.videoCodec + "@" + player.metaData.videoFrameRate + "(" + player.metaData.videoBitRate + ")" + "\n"
                  + player.metaData.audioCodec + "(" + player.metaData.audioBitRate + ")" + "\n"
                  + player.errorString + "\n"
            font.pixelSize: Theme.fontSizeExtraSmall
            wrapMode: "WordWrap"
            visible: false
        }
    }

    VideoError {
        anchors.fill: videoOutput
        player: playerRoot.player
    }

    function stop() {
        player.stop()
        //player.source = ""
    }

    Connections {
        id: playerReadyToSeek
        target: player
        onPlaybackStateChanged: {
            if (startTicks > 0 && player.playbackState == MediaPlayer.PlayingState) {
                console.log("Seeking to " + Utils.ticksToMs(startTicks))
                player.seek(Utils.ticksToMs(startTicks))
                playerReadyToSeek.enabled = false // Only seek the first time this property changes
            }
        }
    }
}

import QtQuick 2.6
import QtMultimedia 5.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "videoplayer"

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
                //mediaPlayer.play()
            }
        }
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
        player.source = ""
    }
}

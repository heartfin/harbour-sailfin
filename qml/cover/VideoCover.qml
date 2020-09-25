import QtQuick 2.6
import QtMultimedia 5.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../components"

CoverBackground {
    readonly property MediaPlayer player: appWindow.mediaPlayer
    property var mData: appWindow.itemData

    Rectangle {
        anchors.fill: parent
        color: "black"

        // Wanted to display the currently running move on here, but it's hard :/
        /*VideoOutput {
            id: coverOutput
            anchors.fill: parent
            source: player
        }*/

    }
    // As a temporary fallback, use the poster image
    RemoteImage {
        anchors.fill: parent
        source: mData.ImageTags["Primary"] ? ApiClient.baseUrl + "/Items/" + mData.Id
                                             + "/Images/Primary?maxHeight=" + height + "&tag=" + mData.ImageTags["Primary"]
                                           : ""
        fillMode: Image.PreserveAspectCrop
    }

    CoverActionList {
        CoverAction {
            id: playPause
            iconSource: player.playbackState === MediaPlayer.PlayingState ? "image://theme/icon-cover-pause"
                                                                         : "image://theme/icon-cover-play"
            onTriggered: {
                if (player.playbackState === MediaPlayer.PlayingState) {
                    player.pause()
                } else {
                    player.play()
                }
            }
        }
    }

}

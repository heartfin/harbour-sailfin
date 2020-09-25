import QtQuick 2.6
import QtMultimedia 5.6
import Sailfish.Silica 1.0

CoverBackground {
    readonly property MediaPlayer player: appWindow.mediaPlayer

    Rectangle {
        anchors.fill: parent
        color: "black"

        /*VideoOutput {
            id: coverOutput
            anchors.fill: parent
            source: player
        }*/

    }

    CoverActionList {
        CoverAction {
            id: playPause
            iconSource: player.playbackState === MediaPlayer.PlayingState ? "image://theme/icon-cover-pause"
                                                                         : "image://theme/icon-cover-play"
        }
    }

}

import QtQuick 2.6
import QtMultimedia 5.6
import Sailfish.Silica 1.0

import "../../Utils.js" as Utils

/**
 * The video "hud" or controls. This is the overlay displayed over a video player, which contains controls
 * and playback information.
 */
Item {
    id: videoHud
    property MediaPlayer player
    property string title
    property bool _manuallyActivated: false
    readonly property bool hidden: opacity == 0.0

    Behavior on opacity { FadeAnimator {} }
    Rectangle {
        id: topBar
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.right: parent.right
        height: pageTitle.height

        gradient: Gradient {
            GradientStop { position: 1.0; color: Theme.rgba(palette.overlayBackgroundColor, 0.15); }
            GradientStop { position: 0.0; color: Theme.rgba(palette.overlayBackgroundColor, 0.30); }
        }
        PageHeader {
            id: pageTitle
            title: videoHud.title
            anchors.fill: parent
            titleColor: palette.primaryColor
        }
    }

    Rectangle {
        anchors.top: topBar.bottom
        anchors.bottom: bottomBar.top
        anchors.left: parent.left
        anchors.right: parent.right
        color: Theme.rgba(palette.overlayBackgroundColor, 0.15)
    }

    MouseArea {
        id: wakeupArea
        enabled: true
        anchors.fill: parent
        onClicked: hidden ? videoHud.show(true) : videoHud.hide(true)
    }

    BusyIndicator {
        id: busyIndicator
        anchors.centerIn: parent
        size: BusyIndicatorSize.Medium
        running: [MediaPlayer.Loading, MediaPlayer.Stalled].indexOf(player.status) >= 0
    }

    IconButton {
        id: playPause
        enabled: !hidden
        anchors.centerIn: parent
        icon.source: player.playbackState == MediaPlayer.PausedState ? "image://theme/icon-l-play" : "image://theme/icon-l-pause"
        onClicked: {
            if (player.playbackState == MediaPlayer.PlayingState) {
                player.pause()
            } else {
                player.play()
            }
        }
        visible: !busyIndicator.running
    }

    Rectangle {
        id: bottomBar
        anchors.bottom: parent.bottom
        width: parent.width
        height: progress.height
        visible: [MediaPlayer.Unavailable, MediaPlayer.Loading, MediaPlayer.NoMedia].indexOf(player.status) == -1

        gradient: Gradient {
            GradientStop { position: 0.0; color: Theme.rgba(palette.overlayBackgroundColor, 0.15); }
            GradientStop { position: 1.0; color: Theme.rgba(palette.overlayBackgroundColor, 0.30); }
        }

        Item {
            id: progress
            height: progressSlider.height + 2 * Theme.paddingMedium
            width: parent.width

            Label {
                id: playedTime
                anchors.left: parent.left
                anchors.leftMargin: Theme.horizontalPageMargin
                anchors.verticalCenter: progressSlider.verticalCenter
                text: Utils.timeToText(player.position)
            }

            Slider {
                id: progressSlider
                enabled: player.seekable
                value: player.position
                maximumValue: player.duration
                stepSize: 1000
                anchors.left: playedTime.right
                anchors.right: totalTime.left
                anchors.verticalCenter: parent.verticalCenter
                onDownChanged: if (!down) { player.seek(value) }
            }

            Label {
                id: totalTime
                anchors.right: parent.right
                anchors.rightMargin: Theme.horizontalPageMargin
                anchors.verticalCenter: progress.verticalCenter
                text: Utils.timeToText(player.duration)
            }
        }
    }



    Connections {
        target: player
        onStatusChanged: {
            console.log("New mediaPlayer status: " + player.status)
            switch(player.status) {
            case MediaPlayer.Loaded:
            case MediaPlayer.Buffering:
                show(false)
                break;
            case MediaPlayer.Buffered:
                hide(false)
                break;
            }
        }
    }

    function show(manual) {
        if (manual) {
            _manuallyActivated = true
            inactivityTimer.restart()
        } else {
            _manuallyActivated = false
        }
        opacity = 1
    }

    function hide(manual) {
        // Don't hide if the user decided on their own to show the hud
        if (!manual && _manuallyActivated) return;
        opacity = 0
    }

    Timer {
        id: inactivityTimer
        interval: 5000
        onTriggered: {
            hide(true)
        }
    }
}

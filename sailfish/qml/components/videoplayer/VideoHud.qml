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

import "../../Utils.js" as Utils

/**
 * The video "hud" or controls. This is the overlay displayed over a video player, which contains controls
 * and playback information.
 */
Item {
    id: videoHud
    //FIXME: Once QTBUG-10822 is resolved, change to J.PlaybackManager
    property var manager
    property string title
    property bool _manuallyActivated: false
    /// Don't allow the HUD to hide
    property bool alwaysVisible: false
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
        onClicked: {
            hidden ? videoHud.show(true) : videoHud.hide(true)
            console.log("Trying")
        }

    }

    BusyIndicator {
        id: busyIndicator
        anchors.centerIn: parent
        size: BusyIndicatorSize.Medium
        running: [J.MediaStatus.Loading, J.MediaStatus.Stalled].indexOf(manager.mediaStatus) >= 0
    }

    IconButton {
        id: playPause
        enabled: !hidden
        anchors.centerIn: parent
        icon.source: manager.playbackState === J.PlayerState.Paused ? "image://theme/icon-l-play" : "image://theme/icon-l-pause"
        onClicked: {
            console.log(manager.playbackState)
            if (manager.playbackState === J.PlayerState.Playing) {
                manager.pause()
            } else {
                manager.play()
            }
        }
        visible: !busyIndicator.running
    }

    Rectangle {
        id: bottomBar
        anchors.bottom: parent.bottom
        width: parent.width
        height: progress.height
        visible: [J.MediaStatus.Unavailable, J.MediaStatus.Loading, J.MediaStatus.NoMedia].indexOf(manager.mediaStatus) == -1

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
                text: Utils.timeToText(manager.position)
            }

            Slider {
                id: progressSlider
                enabled: manager.seekable
                value: manager.position
                maximumValue: manager.duration
                stepSize: 1000
                anchors.left: playedTime.right
                anchors.right: totalTime.left
                anchors.verticalCenter: parent.verticalCenter
                onDownChanged: if (!down) { manager.seek(value) }
            }

            Label {
                id: totalTime
                anchors.right: parent.right
                anchors.rightMargin: Theme.horizontalPageMargin
                anchors.verticalCenter: progress.verticalCenter
                text: Utils.timeToText(manager.duration)
            }
        }
    }



    Connections {
        target: manager
        onMediaStatusChanged: {
            if (manager.mediaStatus == J.MediaStatus.Loaded || manager.mediaStatus == J.MediaStatus.Buffered) {
                hide(false)
            } else if (manager.mediaStatus == J.MediaStatus.Buffering || manager.mediaStatus == J.MediaStatus.Stalled) {
                show(false)
            }
        }
    }

    function show(manual) {
        _manuallyActivated = manual
        if (manual) {
            inactivityTimer.restart()
        } else {
            inactivityTimer.stop()
        }
        opacity = 1
    }

    function hide(manual) {
        if (alwaysVisible) return
        // Don't hide if the user decided on their own to show the hud
        //if (!manual && _manuallyActivated) return;
        // Don't give in to the user if they want to hide the hud while it was forced upon them
        /*if (!_manuallyActivated && manual) return;
        _manuallyActivated = false;*/
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

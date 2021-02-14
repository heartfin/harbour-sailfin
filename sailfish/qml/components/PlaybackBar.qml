/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021 Chris Josten

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

import "../"

/**
 *
 * +---+--------------------------------------+
 * |\   /|                              +---+ |
 * | \ / |   Media title                |   | |
 * |  X  |                              | ⏸︎| |
 * | / \ |   Artist 1, artist 2         |   | |
 * |/   \|                              +---+ |
 * +-----+------------------------------------+
 */
PanelBackground {
    id: playbackBar
    height: Theme.itemSizeLarge
    width: parent.width
    y: parent.height
    property PlaybackManager manager
    property bool open
    property real visibleSize: height

    property bool _pageWasShowingNavigationIndicator


    transform: Translate {id: playbackBarTranslate; y: 0}

    BackgroundItem {
        id: backgroundItem
        width: parent.width
        height: parent.height
        onClicked: playbackBar.state = (playbackBar.state == "large" ? "open" : "large")

        RemoteImage {
            id: albumArt
            anchors {
                left: parent.left
                bottom: parent.bottom
                top: parent.top
            }
            width: height
            blurhash: manager.item.imageBlurHashes["Primary"][manager.item.imageTags["Primary"]]
            source: largeAlbumArt.source
            fillMode: Image.PreserveAspectCrop

            Image {
                id: largeAlbumArt
                source: Utils.itemImageUrl(ApiClient.baseUrl, manager.item, "Primary")
                fillMode: Image.PreserveAspectFit
                anchors.fill: parent
                opacity: 0
                Behavior on opacity { FadeAnimation {} }
            }
        }

        Column {
            id: artistInfo
            height: Theme.fontSizeMedium + Theme.fontSizeLarge

            anchors {
                left: albumArt.right
                leftMargin: Theme.paddingMedium
                right: playButton.left
                verticalCenter: parent.verticalCenter
            }

            Label {
                id: name
                text: manager.item == null ? qsTr("No media selected") : manager.item.name
                width: Math.min(contentWidth, parent.width)
                font.pixelSize: Theme.fontSizeMedium
                maximumLineCount: 1
                truncationMode: TruncationMode.Fade
            }
            Label {
                id: artists
                text: {
                    if (manager.item == null) return qsTr("Play some media!")
                    console.log(manager.item.type)
                    switch(manager.item.type) {
                    case "Audio":
                        return manager.item.artists.join(", ")
                    }
                }
                width: Math.min(contentWidth, parent.width)
                font.pixelSize: Theme.fontSizeSmall
                maximumLineCount: 1
                truncationMode: TruncationMode.Fade
                color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
            }
        }

        IconButton {
            id: playModeButton
            anchors {
                right: previousButton.left
                rightMargin: Theme.paddingLarge
                verticalCenter: playButton.verticalCenter
            }
            icon.source: "image://theme/icon-m-shuffle"
            enabled: false
            opacity: 0
        }

        IconButton {
            id: previousButton
            anchors {
                right: playButton.left
                rightMargin: Theme.paddingLarge
                verticalCenter: playButton.verticalCenter
            }
            icon.source: "image://theme/icon-m-previous"
            enabled: false
            opacity: 0
        }

        IconButton {
            id: playButton
            anchors {
                right: parent.right
                rightMargin: Theme.paddingMedium
                verticalCenter: parent.verticalCenter
            }
            icon.source: appWindow.mediaPlayer.playbackState === MediaPlayer.PlayingState
                         ? "image://theme/icon-m-pause" : "image://theme/icon-m-play"
            onClicked: appWindow.mediaPlayer.playbackState === MediaPlayer.PlayingState
                ? appWindow.mediaPlayer.pause()
                : appWindow.mediaPlayer.play()
        }
        IconButton {
            id: nextButton
            anchors {
                left: playButton.right
                leftMargin: Theme.paddingLarge
                verticalCenter: playButton.verticalCenter
            }
            icon.source: "image://theme/icon-m-next"
            enabled: false
            opacity: 0
        }
        IconButton {
            id: queueButton
            anchors {
                left: nextButton.right
                leftMargin: Theme.paddingLarge
                verticalCenter: playButton.verticalCenter
            }
            icon.source: "image://theme/icon-m-menu"
            enabled: false
            opacity: 0
        }

        ProgressBar {
            id: progressBar
            anchors.verticalCenter: parent.top
            width: parent.width
            leftMargin: Theme.itemSizeLarge
            rightMargin: 0
            minimumValue: 0
            value: appWindow.mediaPlayer.position
            maximumValue: appWindow.mediaPlayer.duration
            indeterminate: [MediaPlayer.Loading, MediaPlayer.Buffering].indexOf(appWindow.mediaPlayer.status) >= 0
        }

        Slider {
            id: seekBar
            animateValue: false
            anchors.verticalCenter: progressBar.top
            minimumValue: 0
            value: appWindow.mediaPlayer.position
            maximumValue: appWindow.mediaPlayer.duration
            width: parent.width
            stepSize: 1000
            valueText: Utils.timeToText(value)
            enabled: false
            visible: false
            onDownChanged: { if (!down) {
                    appWindow.mediaPlayer.seek(value);
                    // For some reason, the binding breaks when dragging the slider.
                    value = Qt.binding(function() { return appWindow.mediaPlayer.position})
                }
            }
        }

    }

   states: [
       State {
           name: ""
           when: appWindow.mediaPlayer.playbackState !== MediaPlayer.StoppedState && state != "page" && !("__hidePlaybackBar" in pageStack.currentPage)
       },
       State {
           name: "large"
            PropertyChanges {
                target: playbackBar
                height: Screen.height
            }
            PropertyChanges {
                target: albumArt
                state: "blurhash"
                width: parent.width
                anchors.bottomMargin: Theme.paddingLarge
            }
            AnchorChanges {
                target: albumArt
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: artistInfo.top
            }

            PropertyChanges {
                target: artistInfo
                anchors.leftMargin: Theme.horizontalPageMargin
                anchors.rightMargin: Theme.horizontalPageMargin
                anchors.bottomMargin: Theme.paddingLarge + seekBar.height - progressBar.height
                height: Theme.fontSizeLarge + Theme.fontSizeMedium
            }

            AnchorChanges {
                target: artistInfo
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.bottom: progressBar.top
                anchors.verticalCenter: undefined
            }

            PropertyChanges {
                target: progressBar
                leftMargin: Screen.width / 8
                rightMargin: Screen.width / 8
                anchors.bottomMargin: Theme.paddingLarge
                opacity: 0
                visible: false
            }

            AnchorChanges {
                target: progressBar
                anchors.verticalCenter: undefined
                anchors.bottom: playButton.top
            }

            PropertyChanges {
                target: playButton
                anchors.bottomMargin: Theme.paddingLarge * 2
                /*icon.source: appWindow.mediaPlayer.playbackState === MediaPlayer.PlayingState
                         ? "image://theme/icon-l-pause" : "image://theme/icon-l-play"*/
                width: Theme.itemSizeMedium
                height: Theme.itemSizeMedium
                icon.width: icon.implicitWidth * 1.5
                icon.height: icon.implicitWidth * 1.5
            }

            AnchorChanges {
                target: playButton
                anchors.right: undefined
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: undefined
                anchors.bottom: parent.bottom
            }

            PropertyChanges {
                target: previousButton; opacity: 1; enabled: true;
            }
            PropertyChanges {
                target: nextButton; opacity: 1; enabled: true;
            }
            PropertyChanges {
                target: playModeButton; opacity: 1; enabled: true;
            }
            PropertyChanges {
                target: queueButton; opacity: 1; enabled: true;
            }
            PropertyChanges {
                target: seekBar
                enabled: true
                visible: true
                animateValue: true
            }
            PropertyChanges {
                target: largeAlbumArt
                opacity: status == Image.Ready ? 1.0 : 0.0
            }
            PropertyChanges {
                target: artists
                font.pixelSize: Theme.fontSizeMedium
            }
            AnchorChanges {
                target: artists
                anchors.horizontalCenter: parent.horizontalCenter
            }
            PropertyChanges {
                target: name
                font.pixelSize: Theme.fontSizeLarge
            }
            AnchorChanges {
                target: name
                anchors.horizontalCenter: parent.horizontalCenter
            }
            PropertyChanges {
                target: backgroundItem
                enabled: false
            }

        },
       State {
           name: "hidden"
           when: (appWindow.mediaPlayer.playbackState === MediaPlayer.StoppedState || "__hidePlaybackBar" in pageStack.currentPage) && state != "page"
           PropertyChanges {
               target: playbackBarTranslate
               y: playbackBar.height
           }
           PropertyChanges {
               target: playbackBar
               visibleSize: 0
           }
           PropertyChanges {
               target: albumArt
               source: ""
           }
       },
       State {
           name: "page"
           extend: "large"
       }
    ]

    Component {
        id: fullPage
        Page {
            property bool __hidePlaybackBar: true
            showNavigationIndicator: true
            Loader {
                Component.onCompleted: setSource(Qt.resolvedUrl("PlaybackBar.qml"),
                                                 {"state": "page", "manager": manager, "y": 0})
                anchors.fill: parent
            }
        }
    }

    transitions: [
        Transition {
            from: "*"
            to: "large"
            // We animate this object to a large size and then quickly swap out this component
            // with a page containing this component.
            SequentialAnimation {
                ScriptAction {
                    script: {
                        _pageWasShowingNavigationIndicator = pageStack.currentPage.showNavigationIndicator
                        appWindow.pageStack.currentPage.showNavigationIndicator = false
                        seekBar.enabled = true
                        seekBar.visible = true
                    }
                }
                ParallelAnimation {
                    NumberAnimation {
                        properties: "width,height,targetX,targetY,leftMargin,rightMargin,font.pixelSize"
                        easing.type: Easing.OutCubic
                        duration: 300 // Long, but avoids stutters
                    }
                    AnchorAnimation {
                        easing.type: Easing.OutCubic
                        duration: 300
                    }
                    FadeAnimation {
                        duration: 300
                    }
                }
                ScriptAction {
                    script: {
                        pageStack.currentPage.showNavigationIndicator = _pageWasShowingNavigationIndicator
                        pageStack.push(fullPage, {"background": pageStack.currentPage.background}, PageStackAction.Immediate)
                    }
                }
            }
        },
        Transition {
            from: "*"
            to: "page"
        },
        Transition {
            from: "hidden"
            SequentialAnimation {
                ParallelAnimation {
                    NumberAnimation {
                        targets: [playbackBarTranslate, playbackBar]
                        properties: "y,visibileSize"
                        duration: 250
                        easing.type: Easing.OutQuad
                    }

                    NumberAnimation {
                        target: appWindow
                        property: "bottomMargin"
                        duration: 250
                        to: Theme.itemSizeLarge
                        easing.type: Easing.OutQuad
                    }
                }
            }
        },
        Transition {
            from: ""
            to: "hidden"
            SequentialAnimation {
                ParallelAnimation {
                    NumberAnimation {
                        targets: [playbackBarTranslate, playbackBar]
                        properties: "y,visibileSize"
                        duration: 250
                        easing.type: Easing.OutQuad
                    }

                    NumberAnimation {
                        target: appWindow
                        property: "bottomMargin"
                        duration: 250
                        to: 0
                        easing.type: Easing.OutQuad
                    }
                }
            }
        }
    ]
}

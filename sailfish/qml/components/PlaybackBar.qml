/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021-2024 Chris Josten

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

import "../"

/**
 *
 * +---+--------------------------------------+
 * |\   /|                              +---+ |
 * | \ / |   Media title                |   | |
 * |  X  |                              | ⏸︎ | |
 * | / \ |   Artist 1, artist 2         |   | |
 * |/   \|                              +---+ |
 * +-----+------------------------------------+
 */
PanelBackground {
    id: playbackBar
    height: Theme.itemSizeLarge
    width: parent.width
    y: parent.height - height
    //FIXME: Once QTBUG-10822 is resolved, change to J.PlaybackManager
    property var manager
    property bool open
    property real visibleSize: height
    property bool isFullPage: false
    property bool showQueue: false

    property bool _pageWasShowingNavigationIndicator
    readonly property bool _isItemSet: manager.item !== null && manager.item !== undefined && manager.item.jellyfinId.length > 0
    readonly property bool controllingRemote: !manager.controllingSessionLocal
    readonly property bool mediaLoading: [J.MediaStatus.Loading, J.MediaStatus.Buffering].indexOf(manager.mediaStatus) >= 0


    transform: Translate {id: playbackBarTranslate; y: 0}

    BackgroundItem {
        id: backgroundItem
        width: parent.width
        height: parent.height
        onClicked: playbackBar.state = "large"

        RemoteImage {
            id: albumArt
            anchors {
                left: parent.left
                bottom: parent.bottom
                top: parent.top
            }
            width: height
            blurhash: {
                if (_isItemSet && "Primary" in manager.item.imageBlurHashes && "Primary" in manager.item.imageTags) {
                    return manager.item.imageBlurHashes["Primary"][manager.item.imageTags["Primary"]]
                } else {
                    return ""
                }
            }
            source: largeAlbumArt.source
            fillMode: Image.PreserveAspectCrop
            opacity: 1

            Image {
                id: largeAlbumArt
                source: Utils.itemImageUrl(apiClient.baseUrl, manager.item, "Primary")
                fillMode: Image.PreserveAspectFit
                anchors.fill: parent
                opacity: 0
                Behavior on opacity { FadeAnimation {} }
            }
        }
        Rectangle {
            id: playQueueShim
            anchors.fill: albumArt
            color: Theme.rgba(Theme.overlayBackgroundColor, Theme.opacityOverlay)
            opacity: 0
        }
        Loader {
            id: queueLoader
            source: Qt.resolvedUrl("PlayQueue.qml")
            anchors.fill: albumArt
            active: false
            visible: false
            opacity: 0
            Binding {
                when: queueLoader.item !== null
                target: queueLoader.item
                property: "model"
                value: manager.queue
                //currentIndex: manager.queueIndex
            }
            Binding {
                when: queueLoader.item !== null
                target: queueLoader.item
                property: "playbackManager"
                value: manager
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
                text: manager.item.jellyfinId
                      ? manager.item.name
                      //: Shown in a bright font when no media is playing in the bottom bar and now playing screen
                      : qsTr("Nothing is playing")
                width: Math.min(contentWidth, parent.width)
                font.pixelSize: Theme.fontSizeMedium
                maximumLineCount: 1
                truncationMode: TruncationMode.Fade
            }
            Label {
                id: artists
                leftPadding: controllingRemote ? remoteIcon.width + Theme.paddingSmall : 0
                text: {
                    if (!_isItemSet) {
                        if (controllingRemote) {
                            //: Shown when no media is being played, but the app is controlling another Jellyfin client
                            //: %1 is the name of said client
                            return qsTr("Connected to %1").arg(manager.controllingSessionName)
                        } else {
                            return qsTr("Start playing some media!")
                        }
                    }
                    var remoteText = "";

                    if (controllingRemote) {
                        remoteText = manager.controllingSessionName + " - "
                    }

                    switch(manager.item.mediaType) {
                    case J.MediaType.Audio:
                        var links = [];
                        var items = manager.item.artistItems;
                        console.log(items)
                        for (var i = 0; i < items.length; i++) {
                            links.push("<a href=\"%1\" style=\"text-decoration:none;color:%3\">%2</a>"
                                .arg(items[i].jellyfinId)
                                .arg(items[i].name)
                                .arg(Theme.secondaryColor)
                            )
                        }
                        return remoteText + links.join(", ")
                    }
                    return qsTr("No audio")
                }

                width: Math.min(contentWidth, parent.width)
                font.pixelSize: Theme.fontSizeSmall
                maximumLineCount: 1
                truncationMode: TruncationMode.Fade
                color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
                linkColor: Theme.secondaryColor
                onLinkActivated: {
                    appWindow.navigateToItem(link, J.MediaType.Audio, J.ItemType.MusicArtist, true)
                }
                textFormat: Text.StyledText
                Icon {
                    id: remoteIcon
                    anchors {
                        left: parent.left
                        verticalCenter: parent.verticalCenter
                    }
                    height: parent.height
                    source: "image://theme/icon-s-device-upload"
                    visible: controllingRemote
                }
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
            opacity: 0
            enabled: false
            onClicked: Notices.show(qsTr("Shuffle not yet implemented"))
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
            onClicked: manager.previous()
        }

        IconButton {
            id: playButton
            anchors {
                right: parent.right
                rightMargin: Theme.paddingMedium
                verticalCenter: parent.verticalCenter
            }
            icon.source: manager.playbackState === J.PlayerState.Playing
                         ? "image://theme/icon-m-pause" : "image://theme/icon-m-play"
            onClicked: manager.playbackState === J.PlayerState.Playing
                ? manager.pause()
                : manager.play()
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
            onClicked: manager.next()
        }
        IconButton {
            id: queueButton
            anchors {
                left: nextButton.right
                leftMargin: Theme.paddingLarge
                verticalCenter: playButton.verticalCenter
            }
            icon.source: "image://theme/icon-m-menu"
            icon.highlighted: showQueue
            enabled: false
            opacity: 0
            onClicked: showQueue = !showQueue
        }

        ProgressBar {
            id: progressBar
            anchors.verticalCenter: parent.top
            width: parent.width
            leftMargin: Theme.itemSizeLarge
            rightMargin: 0
            minimumValue: 0
            value: manager.position
            maximumValue: manager.duration
            indeterminate: mediaLoading
        }

        Slider {
            id: seekBar
            animateValue: false
            anchors.verticalCenter: progressBar.top
            minimumValue: 0
            value: manager.position
            maximumValue: manager.duration
            width: parent.width
            stepSize: 1000
            valueText: Utils.timeToText(value)
            enabled: false
            visible: false
            onDownChanged: { if (!down) {
                    manager.seek(value);
                    // For some reason, the binding breaks when dragging the slider.
                    value = Qt.binding(function() { return manager.position})
                }
            }
        }

    }

   states: [
       State {
           name: ""
           // Show the bar whenever:
           // 1. Either one of the following is true:
           //    a. The playbackmanager is playing media
           //    b. The playbackmanager is controlling a remote session
           // AND
           // 2. The playback bar isn't in the full page state
           // AND
           // 3. The topmost page on the pagestack hasn't requested to hide the page
           when: (manager.playbackState !== J.PlayerState.Stopped || !manager.controllingSessionLocal)
                 && !isFullPage && !("__hidePlaybackBar" in pageStack.currentPage)
       },
       State {
           name: "large"
            PropertyChanges {
                target: playbackBar
                height: pageStack.currentOrientation & Orientation.LandscapeMask ? Screen.width : Screen.height
            }
            PropertyChanges {
                target: albumArt
                forceBlurhash: true
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
                target: previousButton; opacity: 1; enabled: playbackManager.hasPrevious;
            }
            PropertyChanges {
                target: nextButton; opacity: 1; enabled: playbackManager.hasNext;
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
            when: ((manager.playbackState === J.PlayerState.Stopped && !mediaLoading)
                    || ("__hidePlaybackBar" in pageStack.currentPage && pageStack.currentPage.__hidePlaybackBar))
                  && !isFullPage
            PropertyChanges {
                target: playbackBarTranslate
                // + small padding since the ProgressBar otherwise would stick out
                y: playbackBar.height + Theme.paddingMedium
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
            when: isFullPage && !showQueue
            extend: "large"
            PropertyChanges {
                target: queueLoader
                active: true
            }
        },
        State {
            name: "pageQueue"
            when: isFullPage && showQueue
            extend: "page"
            PropertyChanges {
                target: queueLoader
                visible: true
                opacity: 1
            }
            PropertyChanges {
                target: largeAlbumArt
                opacity: 0
                visible: false
            }
            PropertyChanges {
                target: playQueueShim
                opacity: 1
            }
        }
    ]

    Component {
        id: fullPage
        Page {
            property bool __hidePlaybackBar: true
            property bool __isPlaybackBar: true
            showNavigationIndicator: true
            allowedOrientations: appWindow.allowedOrientations
            SilicaFlickable {
                anchors.fill: parent
                PullDownMenu {
                    /*MenuItem {
                        //: Pulley menu item to view detailed media information of a song
                        text: qsTr("Info")
                    }
                    MenuItem {
                        //: Pulley menu item: add music to a playlist
                        text: qsTr("Add to playlist")
                    }*/
                    MenuItem {
                        //: Pulley menu item: stops playback of music
                        text: qsTr("Stop")
                        onClicked: {
                            playbackManager.stop()
                            pageStack.pop()
                        }
                    }
                }
                Loader {
                    Component.onCompleted: setSource(Qt.resolvedUrl("PlaybackBar.qml"),
                                                     {"isFullPage": true, "manager": manager, "y": 0})
                    anchors.fill: parent
                }
            }
        }
    }

    transitions: [
        Transition {
            from: ""
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
                        /*playbackBarTranslate.y = playbackBar.height + Theme.paddingMedium
                        appWindow.bottomMargin = 0*/
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
            to: ""
            NumberAnimation {
                targets: [playbackBarTranslate, playbackBar]
                properties: "y,visibleSize"
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
        },
        Transition {
            from: ""
            to: "hidden"
            SequentialAnimation {
                ParallelAnimation {
                    NumberAnimation {
                        targets: [playbackBarTranslate, playbackBar]
                        properties: "y,visibleSize"
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
        },
        Transition {
            from: "page"
            to: "pageQueue"
            reversible: false

            SequentialAnimation {
                FadeAnimation {
                    targets: [playQueueShim, largeAlbumArt, queueLoader]
                    property: "opacity"
                }
                PropertyAction { target: largeAlbumArt; property: "visible"; value: false }
            }
        },
        Transition {
            from: "pageQueue"
            to: "page"
            reversible: false
            SequentialAnimation {
                PropertyAction { target: largeAlbumArt; property: "visible"; value: true }
                PropertyAction { target: largeAlbumArt; property: "opacity"; value: 0 }

                FadeAnimation {
                    targets: [playQueueShim, largeAlbumArt, queueLoader]
                    property: "opacity"
                }

                PropertyAction { target: queueLoader; property: "visible"; value: false }
            }
        }
    ]
}

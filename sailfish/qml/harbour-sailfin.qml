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

import QtQuick 2.0
import Sailfish.Silica 1.0
import QtMultimedia 5.6
import nl.netsoj.chris.Jellyfin 1.0

import Nemo.Configuration 1.0
import Nemo.Notifications 1.0
import Nemo.KeepAlive 1.2

import "components"
import "pages"
import "."

ApplicationWindow {
    id: appWindow
    property bool _hasInitialized: false
    // The global mediaPlayer instance
    //readonly property MediaPlayer mediaPlayer: _mediaPlayer
    readonly property PlaybackManager playbackManager: _playbackManager
    readonly property ApiClient apiClient: _apiClient

    // Due QTBUG-10822, declarartions such as `property J.Item foo` are not possible.
    property var itemData: pageStack.currentPage.itemData

    // Bad way to implement settings, but it'll do for now.
    property alias showDebugInfo: config.showDebugInfo
    property bool _hidePlaybackBar: false


    bottomMargin: playbackBar.visibleSize
    ApiClient {
        id: _apiClient
        objectName: "Test"
        supportedCommands: [GeneralCommandType.Play, GeneralCommandType.DisplayMessage]
    }

    PlatformMediaControl {
        playbackManager: appWindow.playbackManager
        canQuit: false
        desktopFile: "harbour-sailfin"
        playerName: "Sailfin"
        canRaise: true
        onRaiseRequested: appWindow.raise()
    }

    initialPage:  ConnectingPage {
        id: connectingPage
        onStatusChanged: {
            if (connectingPage.status == PageStatus.Active && !_hasInitialized) {
                _hasInitialized = true;
                apiClient.restoreSavedSession();
            }
        }
    }
    //cover: CoverBackground {CoverPlaceholder { icon.source: "icon.png"; text: "Sailfin"}}
    cover: {
        // Disabled due to buggy Loader behaviour
        if ([MediaPlayer.NoMedia, MediaPlayer.InvalidMedia, MediaPlayer.UnknownStatus].indexOf(_playbackManager.mediaStatus) >= 0
                 || _playbackManager.playbackState === MediaPlayer.StoppedState) {
            return Qt.resolvedUrl("cover/CollectionPage.qml")
        } else {
            return Qt.resolvedUrl("cover/NowPlayingCover.qml")
        }
    }

    Notification {
        id: errorNotification
        previewSummary: "foo"
        isTransient: true

        function show(data) {
            previewSummary = data;
            publish();
        }
    }

    Notification {
        id: serverNotification
        //: The application name for the notification
        appName: qsTr("Sailfin")
        appIcon: "harbour-sailfin"
        isTransient: true
    }

    Connections {
        target: apiClient.eventbus
        onDisplayMessage: {
            serverNotification.summary = header
            serverNotification.body = message
            serverNotification.publish()
        }
    }

    PlaybackManager {
        id: _playbackManager
        apiClient: appWindow.apiClient
        audioIndex: 0
        autoOpen: true
    }

    Connections {
        target: pageStack
        onCurrentPageChanged: {
            if ("itemData" in pageStack.currentPage) {
                appWindow.itemData =  pageStack.currentPage.itemData
            } else {
                appWindow.itemData = null
            }
        }
    }

    // Keep the sytem alive while playing media
    KeepAlive {
        enabled: playbackManager.playbackState === MediaPlayer.PlayingState
    }

    DisplayBlanking {
        preventBlanking: playbackManager.playbackState === MediaPlayer.PlayingState && playbackManager.hasVideo
    }
    
    PlaybackBar {
        id: playbackBar
        manager: _playbackManager
        // CTMBWSIU: Code That Might Break When Silica Is Updated
        Component.onCompleted: playbackBar.parent = __silica_applicationwindow_instance._rotatingItem
    }

    ConfigurationGroup {
        id: config
        path: "/nl/netsoj/chris/Sailfin"
        property bool showDebugInfo: false
    }

    function navigateToItem(jellyfinId, mediaType, type, isFolder) {
        if (mediaType === "Audio" && !isFolder) {
            playbackManager.playItemId(jellyfinId)
        } else {
            pageStack.push(Utils.getPageUrl(mediaType, type, isFolder), {"itemId": jellyfinId});
        }
    }

    //FIXME: proper error handling
    Connections {
        target: apiClient
        onNetworkError: errorNotification.show("Network error: " + error)
        onConnectionFailed: errorNotification.show("Connect error: " + error)
        //onConnectionSuccess: errorNotification.show("Success: " + loginMessage)
        onSetupRequired: {
            console.log("Is in setup: " + isInSetup())
            if (!isInSetup()) {
                pageStack.replace(Qt.resolvedUrl("pages/setup/AddServerPage.qml"), {"backNavigation": false});
            }
        }
        onAuthenticatedChanged: {
            if (authenticated && !isInSetup()) {
                console.log("Authenticated)")
                loginAnimation.start()
                //pageStack.replace(Qt.resolvedUrl("pages/MainPage.qml"))
            }
        }
    }

    // Delaying the creation of the MainPage prevents the application from freezing
    // if connecting to the server over HTTPS
    // TODO: figure out why the application actually freezes and remove this workaround
    SequentialAnimation {
        id: loginAnimation

        PauseAnimation {
            duration: 250
        }

        ScriptAction {
            script: pageStack.replace(Qt.resolvedUrl("pages/MainPage.qml"), {}, PageStackAction.Immediate)
        }
    }

    function isInSetup() {
        return pageStack.find(function (page) { return typeof page._isSetupPage !== "undefined" }) !== null
    }
}

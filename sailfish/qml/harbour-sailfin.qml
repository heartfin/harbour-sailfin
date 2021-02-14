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

import Nemo.Notifications 1.0
import Nemo.KeepAlive 1.2

import "components"
import "pages"

ApplicationWindow {
    id: appWindow
    property bool _hasInitialized: false
    // The global mediaPlayer instance
    readonly property MediaPlayer mediaPlayer: _mediaPlayer
    readonly property PlaybackManager playbackManager: _playbackManager

    // Data of the currently selected item. For use on the cover.
    property JellyfinItem itemData
    // Id of the collection currently browsing. For use on the cover.
    property string collectionId

    // Bad way to implement settings, but it'll do for now.
    property bool showDebugInfo: false

    property bool _hidePlaybackBar: false

    Connections {
        target: pageStack
        onCurrentPageChanged: {
           _hidePlaybackBar = "__videoPlaybackPage" in pageStack.currentPage
            console.log("Current page changed: " + _hidePlaybackBar)
        }
    }

    bottomMargin: playbackBar.visibleSize

    //FIXME: proper error handling
    Connections {
        target: ApiClient
        onNetworkError: errorNotification.show("Network error: " + error)
        onConnectionFailed: errorNotification.show("Connect error: " + error)
        //onConnectionSuccess: errorNotification.show("Success: " + loginMessage)
        onSetupRequired: {
            var isInSetup = pageStack.find(function (page) { return typeof page._isSetupPage !== "undefined" }) !== null
            console.log("Is in setup: " + isInSetup)
            if (!isInSetup) {
                pageStack.replace(Qt.resolvedUrl("pages/setup/AddServerPage.qml"), {"backNavigation": false});
            }
        }
    }

    initialPage: Component {
        MainPage {
            Connections {
                target: ApiClient
                // Replace the MainPage if no server was set up.

            }
            onStatusChanged: {
                if (status == PageStatus.Active && !_hasInitialized) {
                    _hasInitialized = true;
                    ApiClient.restoreSavedSession();
                }
            }
        }
    }
    cover: {
        if ([MediaPlayer.NoMedia, MediaPlayer.InvalidMedia, MediaPlayer.UnknownStatus].indexOf(mediaPlayer.status) >= 0) {
            if (itemData) {
                return Qt.resolvedUrl("cover/PosterCover.qml")
            } else {
                return Qt.resolvedUrl("cover/CoverPage.qml")
            }
        } else if (mediaPlayer.hasVideo){
            return Qt.resolvedUrl("cover/VideoCover.qml")
        }
    }
    allowedOrientations: Orientation.All

    Notification {
        id: errorNotification
        previewSummary: "foo"
        isTransient: true

        function show(data) {
            previewSummary = data;
            publish();
        }
    }

    MediaPlayer {
        id: _mediaPlayer
        autoPlay: true
    }

    PlaybackManager {
        id: _playbackManager
        apiClient: ApiClient
        mediaPlayer: _mediaPlayer
        audioIndex: 0
        autoOpen: true
    }

    // Keep the sytem alive while playing media
    KeepAlive {
        enabled: _mediaPlayer.playbackState == MediaPlayer.PlayingState
    }

    DisplayBlanking {
        preventBlanking: _mediaPlayer.playbackState == MediaPlayer.PlayingState && _mediaPlayer.hasVideo
    }
    
    PlaybackBar {
        id: playbackBar
        open: !_hidePlaybackBar//_mediaPlayer.playbackState != MediaPlayer.StoppedState
        manager: _playbackManager
    }
}

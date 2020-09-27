import QtQuick 2.0
import Sailfish.Silica 1.0
import QtMultimedia 5.6
import nl.netsoj.chris.Jellyfin 1.0
import Nemo.Notifications 1.0

import "components"
import "pages"

ApplicationWindow {
    id: appWindow
    property bool _hasInitialized: false
    // The global mediaPlayer instance
    readonly property MediaPlayer mediaPlayer: _mediaPlayer

    // Data of the currently selected item. For use on the cover.
    property var itemData
    // Id of the collection currently browsing. For use on the cover.
    property string collectionId

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

    MediaPlayer {
        id: _mediaPlayer
        autoPlay: true
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
}

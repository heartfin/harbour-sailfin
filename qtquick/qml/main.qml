import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

import QtMultimedia 5.12

import nl.netsoj.chris.Jellyfin 1.0 as J

import "components"
import ".."
import "."

ApplicationWindow {
    id: appWindow
    width: 600
    height: 600
    visible: true
    property int _oldDepth: 0
    property alias playbackManager: _playbackManager

    J.PlaybackManager {
        id: _playbackManager
        apiClient: ApiClient
    }

    J.PlatformMediaControl {
        playbackManager: appWindow.playbackManager
        canQuit: true
        onQuitRequested: appWindow.close()
        desktopFile: "sailfin"
        playerName: "Sailfin"
        canRaise: true
        onRaiseRequested: appWindow.raise()
    }

    background: Background {
        id: background
        anchors.fill: parent
    }

    StackView {
        id: pageStack
        anchors.fill: parent
        onDepthChanged: {
            if (depth >= _oldDepth) {
                background.enter();
            } else {
                background.exit();
            }
            _oldDepth = depth
        }
        initialItem: Qt.resolvedUrl("pages/MainPage.qml")
        Keys.onEscapePressed: pop()
    }

    NotificationList {
        id: notifList
        anchors {
            right: parent.right
            bottom: parent.bottom
        }
        width: Math.min(parent.width, 400)
        height: parent.height

        Connections {
            target: ApiClient.eventbus
            onDisplayMessage: {
                console.log("Displaying message: ", header, ": ", message)
                notifList.addNotification(header, message, timeout)
            }
        }
    }

    Connections {
        target: ApiClient
        onSetupRequired:  { pageStack.replace(Qt.resolvedUrl("pages/setup/ServerSelectPage.qml")); }
    }

    Component.onCompleted: {
        ApiClient.restoreSavedSession()
    }

    footer: Item {
        id: footer
        height: Math.max(details.height, playButtons.height)
        Column {
            id: details
            anchors.verticalCenter: parent.verticalCenter
            Text {
                text: qsTr("Now playing")
                color: "white"
            }
            Text {
                text: "%1\n%2"
                        .arg(playbackManager.item.name ? playbackManager.item.name : "Nothing")
                        .arg(playbackManager.error === MediaPlayer.NoError ? playbackManager.streamUrl : playbackManager.errorString)
                color: "white"
            }
        }
        Row {
            id: playButtons
            anchors {
                verticalCenter: parent.verticalCenter
                right: parent.right
            }
            Button {
                anchors.verticalCenter: parent.verticalCenter
                text: "Previous"
                onClicked: playbackManager.previous();
                enabled: playbackManager.hasPrevious
            }
            Button {
                readonly property bool _playing: playbackManager.playbackState === J.PlayerState.Playing
                anchors.verticalCenter: parent.verticalCenter
                text:  _playing ? "Pause" : "Play"
                onClicked: _playing ? playbackManager.pause() : playbackManager.play()
            }
            Button {
                anchors.verticalCenter: parent.verticalCenter
                text: "Next"
                onClicked: playbackManager.next();
                enabled: playbackManager.hasNext
            }
        }

    }
    Rectangle {
        color: "darkblue"
        anchors.fill: footer
    }
}

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
    property alias playbackManager: playbackManager

    J.PlaybackManager {
        id: playbackManager
        apiClient: ApiClient
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
                text: "%1\n%2".arg(playbackManager.item.name ? playbackManager.item.name : "Nothing").arg(playbackManager.streamUrl)
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
            }
            Button {
                readonly property bool _playing: playbackManager.playbackState === MediaPlayer.PlayingState;
                anchors.verticalCenter: parent.verticalCenter
                text:  _playing ? "Pause" : "Play"
                onClicked: _playing ? playbackManager.pause() : playbackManager.play()
            }
            Button {
                anchors.verticalCenter: parent.verticalCenter
                text: "Next"
                onClicked: playbackManager.next();
            }
        }

    }
    Rectangle {
        color: "darkblue"
        anchors.fill: footer
    }
}

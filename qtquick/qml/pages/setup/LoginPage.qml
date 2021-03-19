import QtQuick 2.12
import QtQuick.Controls 2.12

import nl.netsoj.chris.Jellyfin 1.0

import "../../components"
import "../../.."

Page {
    property string loginMessage
    property StackView stackView: StackView.view
    header: ToolBar {
        Label {
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: SailfinStyle.fontSizeLarge
            text: qsTr("Log in")
        }
    }

    Column {
        anchors.horizontalCenter: parent.horizontalCenter
        width: Math.min(80 * SailfinStyle.unit, parent.width - SailfinStyle.largePadding * 2)
        spacing: SailfinStyle.mediumPadding
        TextField {
            id: usernameField
            width: parent.width
            placeholderText: qsTr("Username")
            EnterKey.type: Qt.EnterKeyNext
        }
        TextField {
            id: passwordField
            width: parent.width
            placeholderText: qsTr("Password")
            echoMode: TextInput.Password
        }

        Label {
            id: loginError
            width: parent.width
            wrapMode: Text.WordWrap
            text: qsTr("Invalid username/password")
            visible: false
        }

        Button {
            text: qsTr("Login")
            onClicked: login()
        }
        Label {
            width: parent.width
            text: loginMessage
            wrapMode: Text.WordWrap
        }
    }

    BusyDialog {
        id: busyDialog
        anchors.centerIn: Overlay.overlay
        title: qsTr("Logging in as %1").arg(usernameField.text)
    }

    function login() {
        busyDialog.open()
        ApiClient.authenticate(usernameField.text, passwordField.text, true)
    }

    Connections {
        target: ApiClient
        onAuthenticatedChanged: {
            busyDialog.close()
            if (authenticated) {
                stackView.replace(null, Qt.resolvedUrl("../MainPage.qml"), {})
            }
        }
        onAuthenticationError: {
            busyDialog.close()
            loginError.visible = true
        }
    }
}

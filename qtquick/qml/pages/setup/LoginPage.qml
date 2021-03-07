import QtQuick 2.12
import QtQuick.Controls 2.12

import "../../.."

Page {
    property string loginMessage
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
            EnterKey.type: Qt.EnterKeyNext
        }
        TextField {
            id: passwordField
            width: parent.width
        }
        Label {
            width: parent.width
            text: loginMessage
            wrapMode: Text.WordWrap
        }
    }
}

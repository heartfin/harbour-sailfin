import QtQuick 2.12
import QtQuick.Controls 2.12

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../../components"
import "../../.."
import "../.."

Page {
    property string selectedServerName
    property StackView stackView: StackView.view
    header: ToolBar {
        Label {
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: SailfinStyle.fontSizeLarge
            text: qsTr("Select a server")
        }
    }

    ListView {
        anchors {
            horizontalCenter: parent.horizontalCenter
            top: parent.top
            bottom: parent.bottom
        }
        width: Math.min(80 * SailfinStyle.unit, parent.width - 2 * SailfinStyle.largePadding)
        model: discoveryModel

        header: Column {
            width: parent.width
            Label {
                text: "Enter the Jellyfin server URL"
                width: parent.width
            }
            Row {
                width: parent.width
                TextField {
                    id: serverAddressField
                    width: parent.width - goButton.width
                }

                Button {
                    id: goButton
                    text: "Go"
                    onClicked: {
                        selectedServerName = serverAddressField.text
                        ApiClient.baseUrl = serverAddressField.text
                        ApiClient.setupConnection()
                        busyDialog.open()
                    }
                }
            }
        }
        delegate: RadioDelegate {
            text: name
            width: parent.width
            onClicked: {
                selectedServerName = name
                ApiClient.baseUrl = address
                ApiClient.setupConnection()
                busyDialog.open()
                //StackView.view.push()
            }
        }
        footer: BusyIndicator {
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

    J.ServerDiscoveryModel {
        id: discoveryModel
    }

    StackView.onActivated: {
        console.log("Hello")
        discoveryModel.refresh()
    }

    BusyDialog {
        id: busyDialog
        anchors.centerIn: Overlay.overlay
        title: qsTr("Connecting to %1").arg(selectedServerName)
    }

    Connections {
        target: ApiClient
        onConnectionSuccess: {
            busyDialog.close()
            stackView.push(Qt.resolvedUrl("LoginPage.qml"), {"loginMessage": loginMessage})
        }
        onConnectionFailed: {
            busyDialog.close()
        }
    }

}

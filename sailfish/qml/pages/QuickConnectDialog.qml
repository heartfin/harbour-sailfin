import QtQuick 2.6
import Sailfish.Silica 1.0

Dialog {
    id: qqDialog
    canAccept: qqCode.length > 0
    acceptDestination: ConnectingPage {
        id: loadingPage
        onStatusChanged: {
            if (status == PageStatus.Active) {
                submit()
            }
        }

        Connections {
            target: apiClient
            onQuickConnectAccepted: pageStack.pop(pageStack.previousPage(qqDialog))
            onQuickConnectRejected: {
                qqCode.errorHighlight = true
                pageStack.pop(qqDialog)
            }
        }

       function submit() {
            console.log("Accepted QuickConnect with code", qqCode.text)
            apiClient.submitQuickConnectCode(qqCode.text)
        }
    }

    Column {
        width: parent.width
        DialogHeader {
            //: Dialog title
            title: "Quick Connect"
            //: Accept button on dialog for submitting a Quick Connect code
            defaultAcceptText: qsTr("Allow login")
        }


        Label {
            anchors {
                left: parent.left
                right: parent.right
                leftMargin: Theme.horizontalPageMargin
                rightMargin: Theme.horizontalPageMargin
            }
            color: Theme.highlightColor
            wrapMode: Text.WordWrap
            //: Instructions on page that tells the user a bit about how Quick Connect works
            text: qsTr("To log a device in with Quick Connect, select the Quick Connect button and enter the displayed code in the field below.")
        }

        TextField {
            id: qqCode
            //: Label for textfield for entering the Quick Connect codeyy
            label: qsTr("Quick Connect code")
            focus: true
            //: Placeholder text for textfield for entering the Quick Connect codeyy
            placeholderText: qsTr("Quick Connect code")
            inputMethodHints: Qt.ImhDigitsOnly
            EnterKey.iconSource: "image://theme/icon-m-enter-accept"
            EnterKey.onClicked: accept()
            onTextChanged: {
                if (errorHighlight) {
                    errorHighlight = false
                }
            }
        }

        Label {
            id: errorText
            visible: qqCode.errorHighlight
            anchors {
                left: parent.left
                right: parent.right
                leftMargin: Theme.horizontalPageMargin
                rightMargin: Theme.horizontalPageMargin
            }
            color: Theme.errorColor
            //: Error message shown below the textfield when it is not connected
            text: qsTr("The Quick Connect code was not accepted")
        }
    }


}

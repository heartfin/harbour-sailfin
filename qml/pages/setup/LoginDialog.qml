import QtQuick 2.6
import Sailfish.Silica 1.0
import nl.netsoj.chris.Jellyfin 1.0

import "../../components"

/**
 * Page where the user can login on their server. Is displayed after the AddServerPage successfully connected
 * to a Jellyfin server. This page also displays a login message and, if applicable, a list of public users.
 */

Dialog {
    id: loginDialog
	property string loginMessage
	property Page firstPage

    property string error
	
	allowedOrientations: Orientation.All
	
	
	acceptDestination: Page {
		BusyLabel {
			text: qsTr("Logging in as %1").arg(username.text)
			running: true
		}
		onStatusChanged: {
			if(status == PageStatus.Active) {
				ApiClient.authenticate(username.text, password.text, true)
			}
		}
		
		Connections {
			target: ApiClient
			onAuthenticatedChanged: {
				if (ApiClient.authenticated) {
					console.log("authenticated!")
                    pageStack.replaceAbove(null, Qt.resolvedUrl("../MainPage.qml"))
				}
			}
			onAuthenticationError: {
                loginDialog.error = qsTr("Invalid username or password")
				pageStack.completeAnimation()
				pageStack.pop()
			}
		}
	}
	
	PublicUserModel {
		id: userModel
		apiClient: ApiClient
		Component.onCompleted: reload();
	}
	
	DialogHeader {
		id: dialogHeader
		anchors.left: parent.left
		anchors.right: parent.right
        //: Dialog action
		acceptText: qsTr("Login");
	}
	SilicaFlickable {
		anchors.left: parent.left
		anchors.right: parent.right
		anchors.top: dialogHeader.bottom
		anchors.bottom: parent.bottom
		contentHeight: column.height
		clip: true
		
		VerticalScrollDecorator {}
		
		Column {
			id: column
			width: parent.width
			
			Flow {
				width: parent.width
				Repeater {
					model: userModel
					delegate: UserGridDelegate {
						name: model.name
						image: model.primaryImageTag ? "%1/Users/%2/Images/Primary?tag=%3".arg(ApiClient.baseUrl).arg(model.id).arg(model.primaryImageTag) : null
						highlighted: model.name == username.text
						onClicked: {
							username.text = model.name
							password.focus = true
						}
					}
				}
			}
			
			SectionHeader {
                //: Section header for entering username and password
				text: qsTr("Credentials")
			}
			
			TextField {
				id: username
				width: parent.width
                //: Label placeholder for username field
				placeholderText: qsTr("Username")
                label: placeholderText
                errorHighlight: error
				EnterKey.iconSource: "image://theme/icon-m-enter-next"
				EnterKey.onClicked: password.focus = true
			}
			
			TextField {
				id: password
				width: parent.width
				
                //: Label placeholder for password field
				placeholderText: qsTr("Password")
                label: placeholderText
				echoMode: TextInput.Password
                errorHighlight: error

				EnterKey.iconSource: "image://theme/icon-m-enter-accept"
                EnterKey.onClicked: accept()
			}

            Label {
                anchors {
                    left: parent.left
                    leftMargin: Theme.horizontalPageMargin
                    right: parent.right
                    rightMargin: Theme.horizontalPageMargin
                }
                text: error
                color: Theme.errorColor
                visible: error
            }
			
			SectionHeader {
                //: Message shown on login, configured by the server owner. Some form of a MOTD
				text: qsTr("Login message")
                visible: loginMessage
			}
			Label {
				anchors {
					left: parent.left
					right: parent.right
					leftMargin: Theme.horizontalPageMargin
					rightMargin: Theme.horizontalPageMargin
				}
                visible: loginMessage
                text: loginMessage
				wrapMode: Text.WordWrap
				color: Theme.highlightColor
			}
		}
	}
    canAccept: username.text
}

import QtQuick 2.6
import Sailfish.Silica 1.0
import nl.netsoj.chris.Jellyfin 1.0

import "../../components"

/**
 * Page where the user can login on their server. Is displayed after the AddServerPage successfully connected
 * to a Jellyfin server. This page also displays a login message and, if applicable, a list of public users.
 */

Dialog {
	property string loginMessage
	property Page firstPage
	
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
                    pageStack.replaceAbove(pageStack.previousPage(firstPage), Qt.resolvedUrl("../MainPage.qml"))
				}
			}
			onAuthenticationError: {
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
				text: qsTr("Credentials")
			}
			
			TextField {
				id: username
				width: parent.width
				placeholderText: qsTr("Username")
				label: qsTr("Username")
				EnterKey.iconSource: "image://theme/icon-m-enter-next"
				EnterKey.onClicked: password.focus = true
			}
			
			TextField {
				id: password
				width: parent.width
				
				placeholderText: qsTr("Password")
				label: qsTr("password")
				echoMode: TextInput.Password
				EnterKey.iconSource: "image://theme/icon-m-enter-accept"
				EnterKey.onClicked: login()
			}
			
			SectionHeader {
				text: qsTr("Login message")
			}
			Label {
				anchors {
					left: parent.left
					right: parent.right
					leftMargin: Theme.horizontalPageMargin
					rightMargin: Theme.horizontalPageMargin
				}
				text: loginMessage
				wrapMode: Text.WordWrap
				color: Theme.highlightColor
			}
		}
	}
	canAccept: username.text.length > 0
	
	/*onAccepted: {
		pageStack.replace(Qt.resolvedUrl("MainPage.qml"))
	}*/
}

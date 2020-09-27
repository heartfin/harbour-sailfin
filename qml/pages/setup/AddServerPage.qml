import QtQuick 2.6
import Sailfish.Silica 1.0
import nl.netsoj.chris.Jellyfin 1.0

/**
 * Dialog showed when the user has to connect to a Jellyfin server.
 *
 * This dialog allows manual address entry or use one of the addresses discovered via UDP broadcasts.
 */
Dialog {
	id: dialogRoot
	allowedOrientations: Orientation.All
	// Picks the address of the ComboBox if selected, otherwise the manual address entry
	readonly property string address: serverSelect.currentItem._address
	readonly property bool addressCorrect: serverSelect.currentIndex > 0 || manualAddress.acceptableInput
	readonly property string serverName: serverSelect.currentItem._name
    readonly property bool _isSetupPage: true
	
	
	acceptDestination: AddServerConnectingPage {
		id: connectingPage
		serverName: dialogRoot.serverName
		serverAddress: address
		firstPage: dialogRoot
	}
	
	Column {
		width: parent.width
		DialogHeader {
			acceptText: qsTr("Connect")
			title: qsTr("Connect to Jellyfin")
		}
		
		ServerDiscoveryModel {
			id: serverModel
		}
		
		
		ComboBox {
			id: serverSelect
			label: qsTr("Server")
			description: qsTr("Sailfin will try to search for Jellyfin servers on your local network automatically")
			
			menu: ContextMenu {
				MenuItem {
					// Special values are cool, aren't they?
					readonly property string _address: manualAddress.text
					readonly property string _name: manualAddress.text
					text: qsTr("enter address manually") 
				}
				Repeater {
					model: serverModel
					delegate: MenuItem {
						readonly property string _address: address
						readonly property string _name: name
						text: qsTr("%1 - %2").arg(name).arg(address)
					}
				}
			}
		}
		
		TextField {
			id: manualAddress
			width: parent.width
			clip: true
			
			label: qsTr("Server address")
			placeholderText: qsTr("e.g. https://demo.jellyfin.org")
			
			enabled: serverSelect.currentIndex == 0
			visible: enabled
			
			inputMethodHints: Qt.ImhUrlCharactersOnly
			validator: RegExpValidator {
				regExp: /^https?:\/\/[a-zA-Z0-9-._~:/?#\[\]\@\!\$\&\'\(\)\*\+\,\;\=]+$/m
			}
			
			EnterKey.enabled: addressCorrect
			EnterKey.iconSource: "image://theme/icon-m-enter-accept"
            EnterKey.onClicked: accept()
		}
	}
	
	onOpened: serverModel.refresh()
	canAccept: addressCorrect
	
	function tryConnect() {
		console.log("Hi there!")
		ApiClient.baseUrl = address;
		//ApiClient.setupConnection()
		//fakeTimer.start()
	}
	
	onDone: tryConnect()
}

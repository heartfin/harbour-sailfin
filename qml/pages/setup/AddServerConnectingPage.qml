import QtQuick 2.6
import Sailfish.Silica 1.0
import nl.netsoj.chris.Jellyfin 1.0

Page {
	property string serverName
	property string serverAddress
	property Page firstPage
	
	allowedOrientations: Orientation.All
	
	
	BusyLabel {
		text: qsTr("Connecting to %1").arg(serverName)
		running: true
	}
	
	onStatusChanged: {
		if (status == PageStatus.Active) {
			console.log("Connecting page active");
			ApiClient.setupConnection();
		}
	}
	
	Connections {
		target: ApiClient
		onConnectionSuccess: {
			console.log("Login success: " + loginMessage);
			pageStack.replace(Qt.resolvedUrl("LoginDialog.qml"), {"loginMessage": loginMessage, "firstPage": firstPage});
		}
		onConnectionFailed: function(error) {
			console.log("Connection failed : " + error)
			pageStack.pop();
		}
		onNetworkError: {
			console.log("ConnectingPage: popping page!")
			pageStack.pop();
		}
	}
}

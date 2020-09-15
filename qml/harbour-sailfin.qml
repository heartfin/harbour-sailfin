import QtQuick 2.0
import Sailfish.Silica 1.0
import nl.netsoj.chris.Jellyfin 1.0
import Nemo.Notifications 1.0

import "components"
import "pages"

ApplicationWindow {
	id: appWindow
	property bool isInSetup: false
    property bool _hasInitialized: false
    //property alias backdrop: backdrop
	
	Connections {
		target: ApiClient
		onNetworkError: errorNotification.show("Network error: " + error)
		onConnectionFailed: errorNotification.show("Connect error: " + error)
		//onConnectionSuccess: errorNotification.show("Success: " + loginMessage)
	}

    /*GlassyBackground {
        id: backdrop
        anchors.fill: parent
        opacity: status == Image.Ready ? 1.0 : 0.0
        Behavior on opacity { NumberAnimation { duration: 300 } }

        function clear() {
            source = ""
        }
    }*/
	
	initialPage: Component {
		MainPage {
			Connections {
				target: ApiClient
				onSetupRequired: {
					if (!isInSetup) {
						isInSetup = true;
						pageStack.replace(Qt.resolvedUrl("pages/AddServerPage.qml"), {"backNavigation": false});
					}
				}
			}
			onStatusChanged: {
                if (status == PageStatus.Active && !_hasInitialized) {
                    _hasInitialized = true;
					ApiClient.initialize();
				}
			}
		}
	}
	cover: Qt.resolvedUrl("cover/CoverPage.qml")
	allowedOrientations: Orientation.All
	
	Notification {
		id: errorNotification
		previewSummary: "foo"
		isTransient: true
		
		function show(data) {
			previewSummary = data;
			publish();
		}
	}
}

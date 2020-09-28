/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/
import QtQuick 2.6
import Sailfish.Silica 1.0
import nl.netsoj.chris.Jellyfin 1.0

/**
 * Page to indicate that the application is connecting to a server.
 */
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

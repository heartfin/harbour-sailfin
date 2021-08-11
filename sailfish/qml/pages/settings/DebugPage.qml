/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021 Chris Josten

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

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../../components"
import "../.."

Page {
    id: page

    // The effective value will be restricted by ApplicationWindow.allowedOrientations
    allowedOrientations: Orientation.All

    SilicaFlickable {
        anchors.fill: parent
        contentHeight: content.height
        Column {
            id: content
            width: parent.width
            PageHeader {
                title: qsTr("Debug information")
            }

            TextSwitch {
                text: qsTr("Show debug information")
                checked: appWindow.showDebugInfo
                onCheckedChanged: appWindow.showDebugInfo = checked
            }

            SectionHeader {
                text: qsTr("Websocket")
            }

            DetailItem {
                label: qsTr("Connection state")
                value: {
                    var stateText
                    switch(apiClient.websocket.state) {
                    case 0:
                        //- Socket state
                        stateText = qsTr("Unconnected");
                        break;
                    case 1:
                        //- Socket state
                        stateText = "Looking up host";
                        break;
                    case 2:
                        //- Socket state
                        stateText = "Connecting";
                        break;
                    case 3:
                        //- Socket state
                        stateText = "Connected";
                        break;
                    case 4:
                        //- Socket state
                        stateText = "Bound";
                        break;
                    case 5:
                        //- Socket state
                        stateText = "Closing";
                        break;
                    case 6:
                        //- Socket state
                        stateText = "Listening";
                        break;
                    }
                    //- Socket state: "state no (state description)"
                    qsTr("%1 (%2)").arg(apiClient.websocket.state).arg(stateText)
                }
            }

            SectionHeader {
                text: qsTr("Device profile")
            }

            SilicaFlickable {
                anchors {
                    left: parent.left
                    leftMargin: Theme.horizontalPageMargin
                    right: parent.right
                    rightMargin: Theme.horizontalPageMargin
                }
                height: deviceProfile.contentHeight
                contentWidth: deviceProfile.contentWidth
                Label {
                    id: deviceProfile
                    color: Theme.secondaryHighlightColor
                    text: JSON.stringify(apiClient.deviceProfile, null, '\t')
                }
                HorizontalScrollDecorator {}
            }
        }
        VerticalScrollDecorator {}
    }
}

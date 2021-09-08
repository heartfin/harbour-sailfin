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

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../components"
import ".."

Page {
    id: settingsPage
    allowedOrientations: Orientation.All

    property alias loggedInUser: userLoader.data

    SilicaFlickable {
        anchors.fill: parent
        contentHeight: content.height

        Column {
            id: content
            width: parent.width

            RemorsePopup {
                id: remorse
            }

            PageHeader {
                //: Header of Settings page
                title: qsTr("Settings")
            }


            SectionHeader {
                text: qsTr("Session")
            }

            Item {
                anchors {
                    left: parent.left
                    leftMargin: Theme.horizontalPageMargin
                    right: parent.right
                    rightMargin: Theme.horizontalPageMargin
                }
                height: user.implicitHeight + server.implicitHeight + Theme.paddingMedium
                J.UserLoader{
                    id: userLoader
                    apiClient: appWindow.apiClient
                    userId: appWindow.apiClient.userId
                }
                RemoteImage {
                    id: userIcon
                    width: height
                    anchors {
                        left: parent.left
                        top: parent.top
                        bottom: parent.bottom
                    }
                    source: apiClient.baseUrl + "/Users/" + apiClient.userId + "/Images/Primary?tag=" + loggedInUser.primaryImageTag
                }

                Label {
                    id: user
                    anchors {
                        left: userIcon.right
                        leftMargin: Theme.paddingLarge
                        bottom: parent.verticalCenter
                        right: parent.right
                    }
                    text: userLoader.status === J.UserLoader.Ready ? loggedInUser.name : apiClient.userId
                    color: Theme.highlightColor
                }

                Label {
                    id: server
                    anchors {
                        left: userIcon.right
                        leftMargin: Theme.paddingLarge
                        top: parent.verticalCenter
                        right: parent.right
                    }
                    text: apiClient.baseUrl
                    color: Theme.secondaryHighlightColor
                }


            }

            Item { width: 1; height: Theme.paddingLarge; }

            ButtonLayout {
                Button {
                    text: qsTr("Log out")
                    onClicked: remorse.execute(qsTr("Logging out"), apiClient.deleteSession)
                }
            }

            SectionHeader {
                //: Other settings menu item
                text: qsTr("Other")
            }

            IconListItem {
                //: Settings list item for settings related to streaming
                text: qsTr("Streaming settings")
                iconSource: "image://theme/icon-m-cloud-download"
                onClicked: pageStack.push(Qt.resolvedUrl("settings/StreamingPage.qml"))
            }

            IconListItem {
                //: Debug information settings menu itemy
                text: qsTr("Debug information")
                iconSource: "image://theme/icon-s-developer"
                onClicked: pageStack.push(Qt.resolvedUrl("settings/DebugPage.qml"))
            }

            //: About Sailfin settings menu itemy
            IconListItem {
                text: qsTr("About Sailfin")
                iconSource: "image://theme/icon-m-about"
                onClicked: pageStack.push(Qt.resolvedUrl("AboutPage.qml"))
            }
        }
    }

}

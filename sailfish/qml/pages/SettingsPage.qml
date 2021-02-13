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

import "../components"

Page {
    id: settingsPage

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
                User {
                    id: loggedInUser
                    apiClient: ApiClient
                }
                RemoteImage {
                    id: userIcon
                    width: height
                    anchors {
                        left: parent.left
                        top: parent.top
                        bottom: parent.bottom
                    }
                    source: ApiClient.baseUrl + "/Users/" + ApiClient.userId + "/Images/Primary?tag=" + loggedInUser.primaryImageTag
                }

                Label {
                    id: user
                    anchors {
                        left: userIcon.right
                        leftMargin: Theme.paddingLarge
                        bottom: parent.verticalCenter
                        right: parent.right
                    }
                    text: loggedInUser.status == User.Ready ? loggedInUser.name : ApiClient.userId
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
                    text: ApiClient.baseUrl
                    color: Theme.secondaryHighlightColor
                }


            }

            Item { width: 1; height: Theme.paddingLarge; }

            ButtonLayout {
                Button {
                    text: qsTr("Log out")
                    onClicked: remorse.execute(qsTr("Logging out"), ApiClient.deleteSession)
                }
            }

            SectionHeader {
                //: Other settings
                text: qsTr("Other")
            }

            IconListItem {
                text: qsTr("Debug information")
                iconSource: "image://theme/icon-s-developer"
                onClicked: pageStack.push(Qt.resolvedUrl("settings/DebugPage.qml"))
            }

            IconListItem {
                text: qsTr("About Sailfin")
                iconSource: "image://theme/icon-m-about"
                onClicked: pageStack.push(Qt.resolvedUrl("AboutPage.qml"))
            }
        }
    }

}

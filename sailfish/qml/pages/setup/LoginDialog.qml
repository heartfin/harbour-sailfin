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

import "../../components"
import "../../"

/**
 * Page where the user can login on their server. Is displayed after the AddServerPage successfully connected
 * to a Jellyfin server. This page also displays a login message and, if applicable, a list of public users.
 */

Dialog {
    id: loginDialog
    property string loginMessage
    property Page firstPage
    property QtObject /*User*/ selectedUser: null

    property string error

    allowedOrientations: Orientation.All


    acceptDestination: Page {
        BusyLabel {
            text: qsTr("Logging in as %1").arg(username.text)
            running: true
        }
        onStatusChanged: {
            if(status == PageStatus.Active) {
                apiClient.authenticate(username.text, password.text, true)
            }
        }

        Connections {
            target: apiClient
            onAuthenticatedChanged: {
                if (apiClient.authenticated) {
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

    QtObject { id: userModel; }

    /*PublicUserModel {
        id: userModel
        apiClient: appWindow.apiClient
        Component.onCompleted: reload();
    }*/

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
                id: userList
                width: parent.width
                Repeater {
                    id: userRepeater
                    model: 0 //userModel
                    delegate: UserGridDelegate {
                        name: model.name
                        image: model.primaryImageTag ? "%1/Users/%2/Images/Primary?tag=%3".arg(apiClient.baseUrl).arg(model.jellyfinId).arg(model.primaryImageTag) : ""
                        highlighted: model.name === username.text
                        onHighlightedChanged: {
                            if (highlighted) {
                                selectedUser = model.qtObject
                            }
                        }
                        onClicked: {
                            username.text = model.name
                            if (!password.activeFocus) {
                                password.focus = true
                            }
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
                EnterKey.iconSource: "image://theme/icon-m-enter-" + (password.enabled ? "next" : "accept")
                EnterKey.onClicked: password.enabled ? password.focus = true : accept()
                onTextChanged: {
                    // Wil be executed before the onHighlightChanged of the UserDelegate
                    // This is done to update the UI after an user is selected and this field has
                    // been changed, to not let the UI be in an invalid state (e.g. no user selected, password field disabled)
                    selectedUser = null
                }
            }

            PasswordField {
                id: password
                width: parent.width

                //: Label placeholder for password field
                placeholderText: qsTr("Password")
                label: placeholderText
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

    states: [
        State {
            name: "noUsers"
            when: userRepeater.count == 0
            PropertyChanges {
                target: userList
                visible: false
            }
        },
        State {
            name: "users"
            when: userRepeater.count != 0 && selectedUser === null
            PropertyChanges {
                target: userList
                visible: true
            }
        },
        State {
            name: "selectedUserPassword"
            when: selectedUser !== null && selectedUser.hasPassword
            extend: "users"
            PropertyChanges {
                target: password
                enabled: true
            }
        },
        State {
            name: "selectedUserNoPassword"
            when: selectedUser !== null && !selectedUser.hasPassword
            extend: "users"
            PropertyChanges {
                target: password
                enabled: false
            }
        }
    ]
}

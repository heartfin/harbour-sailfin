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

import "../../"

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

        J.ServerDiscoveryModel {
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
                            // No, this isn't a clever hack that depends on how ComboBox is
                            // implemented. It really isn't, trust me!
                            readonly property string description: address
                            height: Theme.itemSizeSmall + Theme.paddingSmall * 2
                            text: name
                            topPadding: -description.implicitHeight

                            Label {
                                id: description
                                text: parent.description
                                anchors {
                                    verticalCenter: parent.verticalCenter
                                    verticalCenterOffset: parent.implicitHeight + Theme.paddingSmall
                                }
                                width: parent.width
                                horizontalAlignment: parent.horizontalAlignment
                                verticalAlignment: parent.verticalAlignment
                                font.pixelSize: Theme.fontSizeExtraSmall
                                truncationMode: parent.truncationMode
                                color: Theme.rgba(parent.color, Theme.opacityHigh)
                            }
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
        apiClient.baseUrl = address;
        //apiClient.setupConnection()
        //fakeTimer.start()
    }

    onDone: tryConnect()
}

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

            PlainLabel {
                text: qsTr("Server")
            }

            PlainLabel {
                text: ApiClient.baseUrl
                color: Theme.secondaryHighlightColor
            }

            Item { width: 1; height: Theme.paddingMedium; }

            PlainLabel {
                text: qsTr("User id")
            }

            PlainLabel {
                text: ApiClient.userId
                color: Theme.secondaryHighlightColor
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
                text: qsTr("About Sailfin")
                iconSource: "image://theme/icon-m-about"
                onClicked: pageStack.push(Qt.resolvedUrl("AboutPage.qml"))
            }
        }
    }

}

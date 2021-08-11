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
    id: page
    allowedOrientations: Orientation.All

    SilicaFlickable {
        anchors.fill: parent
        contentHeight: content.height
        Column {
            id: content
            width: parent.width
            PageHeader {
                title: qsTr("About Sailfin")
            }
            Image {
                anchors.horizontalCenter: parent.horizontalCenter
                source: Qt.resolvedUrl("../icon.png")
            }

            Item { width: 1; height: Theme.paddingLarge }

            Label {
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.leftMargin: Theme.horizontalPageMargin
                anchors.rightMargin: Theme.horizontalPageMargin
                wrapMode: Text.WordWrap
                text: qsTr("<p><b>Sailfin version %1</b><br/>" +
                      "Copyright © Chris Josten 2020</p>" +
                      "<p>Sailfin is Free Software licensed under the <a href='lgpl'>LGPL-v2.1</a> or later, at your choice. " +
                      "Parts of the code of Sailfin are from other libraries. <a href='3rdparty'>View their licenses here</a>.</p>")
                        .arg(apiClient.version)
                textFormat: Text.StyledText
                color: Theme.secondaryHighlightColor
                linkColor: Theme.primaryColor
                onLinkActivated: {
                    switch(link) {
                    case "lgpl":
                        pageStack.push(licensePage)
                        break;
                    case "3rdparty":
                        pageStack.push(Qt.resolvedUrl("LegalPage.qml"))
                        break;
                     }
                }
            }

        }
        VerticalScrollDecorator {}
    }

    Component {
        id: licensePage

        Page {
            allowedOrientations: Orientation.All
            SilicaFlickable {
                anchors.fill: parent
                contentHeight: content.height
                PullDownMenu {
                    MenuItem {
                        text: qsTr("Open externally")
                        onClicked: Qt.openUrlExternally(Qt.resolvedUrl("../licenses/lgpl-2.1.html"))
                    }
                }
                VerticalScrollDecorator {}
                Column {
                    id: content
                    width: parent.width
                    PageHeader {
                        title: qsTr("LGPL 2.1 License")
                    }
                    PlainLabel {
                        id: licenseLabel

                        Component.onCompleted: {
                            var xhr = new XMLHttpRequest;
                            xhr.open("GET", Qt.resolvedUrl("../licenses/lgpl-2.1.html")); // set Method and File
                            xhr.onreadystatechange = function () {
                                if (xhr.readyState === XMLHttpRequest.DONE){ // if request_status == DONE
                                    licenseLabel.text = xhr.responseText;
                                }
                            }
                            xhr.send(); // begin the request
                        }
                    }
                }
            }

        }
    }
}

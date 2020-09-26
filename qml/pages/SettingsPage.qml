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

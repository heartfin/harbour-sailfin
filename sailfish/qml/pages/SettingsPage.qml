/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020-2024 Chris Josten

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
import Nemo.Configuration 1.0

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
                    //: This is a name used by Jellyfin and seems to be untranslated in other languages
                    text: qsTr("Quick Connect")
                    onClicked: pageStack.push(Qt.resolvedUrl("QuickConnectDialog.qml"))
                }
                Button {
                    text: qsTr("Log out")
                    onClicked: remorse.execute(qsTr("Logging out"), apiClient.deleteSession)
                }
            }

            SectionHeader {
                //: Other settings menu item
                text: qsTr("Other")
            }

            ConfigurationGroup {
                id: config
                path: "/nl/netsoj/chris/Sailfin"
                property string startupItemId
                property string startupItemType
            }

            ComboBox {
                id: startupLibrarySelector
                //: Combo box label for selecting where the application should start
                label: qsTr("Start page")
                //: Combo box description for selecting where the application should start
                description: qsTr("Which page should be shown when the application starts?")
                               menu: ContextMenu {
                    MenuItem {
                        readonly property string jellyfinId: ""
                        readonly property string mediaType: ""
                        text: qsTr("All libraries (default)")
                        onClicked:saveStartupLibrary("", "")
                    }

                    Timer {
                        id: libraryRepeaterDelay
                        // Ugh, there must be a small delay before setting the currentIndex or else it won't work
                        interval: 100
                        onTriggered: {
                            console.log("Libraries ready")
                            for (var i = 0; i < libraryRepeater.count; i++) {
                                console.log("%1: %2 (%3)".arg(i).arg(libraryRepeater.itemAt(i).jellyfinId).arg(config.startupItemId))
                                if (libraryRepeater.itemAt(i).jellyfinId == config.startupItemId) {
                                    startupLibrarySelector.currentIndex = i + 1
                                    console.log("%1: %2".arg(i + 1).arg(startupLibrarySelector.currentIndex))
                                }
                            }
                        }
                    }

                    Repeater {
                        id: libraryRepeater
                        model: J.ItemModel {
                            loader: J.UserItemsLoader {
                                apiClient: appWindow.apiClient
                                includeItemTypes: [J.ItemType.CollectionFolder]
                                onReady: libraryRepeaterDelay.start()
                            }
                        }

                        MenuItem {
                            readonly property string jellyfinId: model.jellyfinId
                            readonly property string type: model.collectionType
                            onClicked: saveStartupLibrary(jellyfinId, model.collectionType)
                            text: model.name
                        }
                    }
                }
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
    function saveStartupLibrary(itemId, mediaType) {
        config.startupItemId = itemId
        config.startupItemType = mediaType
        config.sync()
        console.log("Saved pref: %1 (%2)".arg(config.startupItemId).arg(config.startupMediaType))
        // We do a little trick: after clicking an item, we wait for
        // the animation to finish and then replace the entire page stack with the new start page
        // and the settings page. This is not ideal in the case that the page stack does not equal that
        // but the tradeoff is that users should not get stuck in the app when the library that they selected
        // as their start library has been deleted on the server. Otherwise, they need to restart the app.
        startupPageReplacer.start()
    }

    Timer {
        id: startupPageReplacer
        interval: 500
        onTriggered: {
            var firstPage = Qt.resolvedUrl("MainPage.qml")
            if (config.startupItemId) {
                firstPage = {
                    "page": Utils.getPageUrl(config.startupItemType, "collectionfolder", true),
                    "properties": { "itemId": config.startupItemId }
                }
            }
            pageStack.replaceAbove(
                null,
                [
                    firstPage,
                    Qt.resolvedUrl("SettingsPage.qml")
                ],
                {},
                PageStackAction.Immediate
            )
        }
    }

}

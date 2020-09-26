import QtQuick 2.0
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../components"
import "../"
import "../Utils.js" as Utils

/**
 * Main page, which simply shows some content of every library, as well as next items.
 */
Page {
    property bool _modelsLoaded: false

    id: page
    allowedOrientations: Orientation.All

    ViewPlaceholder {

    }

    SilicaFlickable {
        anchors.fill: parent

        // PullDownMenu and PushUpMenu must be declared in SilicaFlickable, SilicaListView or SilicaGridView
        PullDownMenu {
            MenuItem {
                text: qsTr("Settings")
                onClicked: pageStack.push(Qt.resolvedUrl("SettingsPage.qml"))
            }
            busy: mediaLibraryModel.status == ApiModel.Loading
        }

        // Tell SilicaFlickable the height of its content.
        contentHeight: column.height

        // Place our content in a Column.  The PageHeader is always placed at the top
        // of the page, followed by our content.
        Column {
            id: column

            width: page.width
            //spacing: Theme.paddingLarge
            UserViewModel {
                id: mediaLibraryModel2
                apiClient: ApiClient
            }

			MoreSection {
                text: qsTr("Resume watching")
                clickable: false
			}
			MoreSection {
                text: qsTr("Next up")
                clickable: false
			}

            UserViewModel {
                id: mediaLibraryModel
                apiClient: ApiClient
            }
            Repeater {
                model: mediaLibraryModel
                MoreSection {
                    text: model.name
                    busy: userItemModel.status != ApiModel.Ready
                    property string collectionType: model.collectionType || ""

                    onHeaderClicked: pageStack.push(Qt.resolvedUrl("DetailPage.qml"), {"itemId": model.id})

                    SilicaListView {
                        clip: true
                        height: {
                            if (count > 0) {
                                if (["tvshows", "movies"].indexOf(collectionType) == -1) {
                                    Constants.libraryDelegateHeight
                                } else {
                                    Constants.libraryDelegatePosterHeight
                                }
                            } else {
                                0
                            }
                        }
                        Behavior on height {
                            NumberAnimation { duration: 300 }
                        }
                        width: parent.width
                        model: userItemModel
                        orientation: ListView.Horizontal
                        leftMargin: Theme.horizontalPageMargin
                        rightMargin: Theme.horizontalPageMargin
                        spacing: Theme.paddingLarge
                        delegate: LibraryItemDelegate {
                            property string id: model.id
                            title: model.name
                            poster: Utils.itemModelImageUrl(ApiClient.baseUrl, model.id, model.imageTags["Primary"], "Primary", {"maxHeight": height})
                                /*model.imageTags["Primary"] ? ApiClient.baseUrl + "/Items/" + model.id
                                                                 + "/Images/Primary?maxHeight=" + height + "&tag=" + model.imageTags["Primary"]
                                                               : ""*/
                            landscape: !Utils.usePortraitCover(model.type)

                            onClicked: {
                                pageStack.push(Qt.resolvedUrl("DetailPage.qml"), {"itemId": model.id})
                            }
                        }
                        UserItemLatestModel {
                            id: userItemModel
                            apiClient: ApiClient
                            parentId: model.id
                            limit: 12
                        }
                        Connections {
                            target: mediaLibraryModel
                            onStatusChanged: {
                                if (status == ApiModel.Ready) {
                                    userItemModel.reload()
                                }
                            }
                        }
                    }
                }
            }
            Column {
                width: parent.width
                visible: mediaLibraryModel.status == ApiModel.Error
                PageHeader {
                    title: qsTr("Network error")
                    //clickable: false
                }

                PlainLabel {
                    text: qsTr("An error has occurred. Please try again.")
                }
                Item { width: 1; height: Theme.paddingLarge }
                Button {
                    text: qsTr("Retry")
                    anchors.horizontalCenter: parent.horizontalCenter
                    onClicked: loadModels(true)
                }
                Item { width: 1; height: Theme.paddingLarge }
            }
        }
    }

    onStatusChanged: {
        if (status == PageStatus.Active) {
            appWindow.itemData = null
            loadModels(false)
        }
    }

    Connections {
        target: ApiClient
        onAuthenticatedChanged: loadModels(false)
    }


    /**
     * Loads models if not laoded. Set force to true to reload models
     * even if loaded.
     */
    function loadModels(force) {
        if (force || (ApiClient.authenticated && !_modelsLoaded)) {
            _modelsLoaded = true;
            mediaLibraryModel.reload()
        }
	}
}

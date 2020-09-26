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

    SilicaFlickable {
        anchors.fill: parent

        // PullDownMenu and PushUpMenu must be declared in SilicaFlickable, SilicaListView or SilicaGridView
        PullDownMenu {
            MenuItem {
                text: qsTr("About")
                onClicked: pageStack.push(Qt.resolvedUrl("AboutPage.qml"))
            }
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
                    property string collectionType: model.collectionType

                    onHeaderClicked: pageStack.push(Qt.resolvedUrl("DetailPage.qml"), {"itemId": model.id})

                    SilicaListView {
                        clip: true
                        height: {
                            if (count > 0) {
                                console.log(collectionType)
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
                            landscape: ["Series", "Movie"].indexOf(model.type) == -1

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
        }
    }

    onStatusChanged: {
        if (status == PageStatus.Active) {
            appWindow.itemData = null
        }
    }

    Connections {
        target: ApiClient
        onAuthenticatedChanged: {
            if (authenticated && !_modelsLoaded) loadModels();
        }
    }

    Component.onCompleted: {
        if (ApiClient.authenticated && _modelsLoaded) {
            loadModels();
        }
    }
    function loadModels() {
        _modelsLoaded = true;
        mediaLibraryModel.reload()
	}
}

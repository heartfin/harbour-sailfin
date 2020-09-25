import QtQuick 2.0
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../components"

// Test
Page {
    id: page

    // The effective value will be restricted by ApplicationWindow.allowedOrientations
    allowedOrientations: Orientation.All

    property bool _modelsLoaded: false
    
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

    // To enable PullDownMenu, place our content in a SilicaFlickable
    SilicaFlickable {
        anchors.fill: parent

        // PullDownMenu and PushUpMenu must be declared in SilicaFlickable, SilicaListView or SilicaGridView
        PullDownMenu {
            MenuItem {
                text: qsTr("About")
                onClicked: pageStack.push(Qt.resolvedUrl("LegalPage.qml"))
            }
            MenuItem {
                text: qsTr("Settings")
                onClicked: pageStack.push(Qt.resolvedUrl("SecondPage.qml"))
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
				text: "Kijken hervatten"
                enabled: false
			}
			MoreSection {
				text: "Volgende"
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

                    SilicaListView {
                        clip: true
                        height: count > 0 ? Screen.width / 4 : 0
                        Behavior on height {
                            NumberAnimation { duration: 300 }
                        }
                        width: parent.width
                        model: userItemModel
                        orientation: ListView.Horizontal
                        delegate: LibraryItemDelegate {
                            property string id: model.id
                            title: model.name
                            poster: model.imageTags["Primary"] ? ApiClient.baseUrl + "/Items/" + model.id
                                                                 + "/Images/Primary?maxHeight=" + height + "&tag=" + model.imageTags["Primary"]
                                                               : ""
                            landscape: true

                            onClicked: {
                                pageStack.push(Qt.resolvedUrl("DetailPage.qml"), {"itemId": model.id})
                            }
                        }
                        HorizontalScrollDecorator {}
                        UserItemModel {
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
    
    function loadModels() {
        _modelsLoaded = true;
        mediaLibraryModel.reload()
	}
}

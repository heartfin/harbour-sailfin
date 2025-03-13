import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../components"
import "../.."
import ".."

Page {
    property bool _modelsLoaded: false
    property StackView stackView: StackView.view
    header: ToolBar {
        Label {
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: SailfinStyle.fontSizeLarge
            text: qsTr("Main page")
        }
    }

    J.ItemModel {
        id: mediaLibraryModel
        loader: J.UsersViewsLoader {
            id: mediaLibraryModelLoader
            apiClient: ApiClient
        }
    }

    ScrollView {
        anchors.fill: parent
        contentHeight: content.height
        contentWidth: availableWidth
        Column {
            id: content
            width: parent.width
            Row {
                CheckBox {
                    checked: ApiClient.settings.allowTranscoding
                    text: "allow transcoding"
                    onCheckedChanged: ApiClient.settings.allowTranscoding = checked
                }
                ComboBox {
                    model: J.RemoteDeviceList {
                        id: deviceList
                        apiClient: ApiClient
                        scanning: _modelsLoaded == true
                    }
                    textRole: "deviceName"
                    width: 400
                }
            }
            Repeater {
                model: mediaLibraryModel
                Column {
                    width: parent.width
                    J.ItemModel{
                        id: userItemModel
                        loader: J.LatestMediaLoader {
                            id: latestMediaLoader
                            apiClient: ApiClient
                            parentId: model.jellyfinId
                            //limit: 16
                        }
                    }
                    Label {
                        text: model.name ? model.name : "<Model without name>"
                    }

                    ListView {
                        width: parent.width
                        height: SailfinStyle.unit * 20
                        orientation: ListView.Horizontal
                        model: userItemModel
                        delegate: ItemDelegate {
                            width: 12 * SailfinStyle.unit
                            height: 20 * SailfinStyle.unit
                            Image {
                                anchors.fill: parent
                                source: ApiClient.baseUrl + "/Items/" + model.jellyfinId
                                        + "/Images/Primary?tag=" + model.imageTags["Primary"] //model.tag
                            }
                            Label {
                                anchors.left: parent.left
                                anchors.top: parent.top
                                anchors.right: parent.right
                                text: model.name
                            }
                            onClicked: stackView.push(Qt.resolvedUrl(
                                                          "DetailPage.qml"), {
                                                          "itemId": model.jellyfinId
                                                      })
                        }
                    }
                    Connections {
                        target: mediaLibraryModelLoader
                        onReady: {
                            if (mediaLibraryModelLoader.status === ModelStatus.Ready) {

                                latestMediaLoader.reload()
                            }
                        }
                    }
                }
            }
        }
    }


    /**
     * Loads models if not laoded. Set force to true to reload models
     * even if loaded.
     */
    function loadModels(force) {
        if (force || (ApiClient.authenticated && !_modelsLoaded)) {
            _modelsLoaded = true
            mediaLibraryModel.reload()
        }
    }

    Connections {
        target: ApiClient
        onAuthenticatedChanged: {
            if (authenticated) {
                loadModels(false)
            }
        }
    }
}

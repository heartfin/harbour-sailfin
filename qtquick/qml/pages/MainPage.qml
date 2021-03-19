import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

import nl.netsoj.chris.Jellyfin 1.0

import "../components"
import "../.."

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

    UserViewModel {
        id: mediaLibraryModel
        apiClient: ApiClient
    }

    ScrollView {
        anchors.fill: parent
        contentHeight: content.height
        Column {
            id: content
            width: parent.width
            Repeater {
                model: mediaLibraryModel
                Column {
                    width: parent.width
                    UserItemLatestModel {
                        id: userItemModel
                        apiClient: ApiClient
                        parentId: model.id
                        limit: 16
                    }
                    Label {
                        text: model.name
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
                                source: ApiClient.baseUrl + "/Items/" + model.id + "/Images/Primary?tag=" + model.tag
                            }
                            Label {
                                anchors.left: parent.left
                                anchors.top: parent.top
                                anchors.right: parent.right
                                text: model.name
                            }
                            onClicked: stackView.push(Qt.resolvedUrl("DetailPage.qml"), {"itemId": model.id})
                        }
                    }
                    Connections {
                        target: mediaLibraryModel
                        onStatusChanged: {
                            if (mediaLibraryModel.status == UserItemModel.Ready) {
                                userItemModel.reload()
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
            _modelsLoaded = true;
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

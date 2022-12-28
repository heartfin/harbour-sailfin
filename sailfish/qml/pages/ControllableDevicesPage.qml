import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0 as J
import ".."

Page {
    id: pageRoot
    SilicaListView {
        id: listView
        anchors.fill: parent
        contentHeight: Theme.itemSizeLarge

        header: PageHeader {
            //: Page title: page for remote controlling other Jellyfin apps
            title: qsTr("Remote control")
        }
        model: J.RemoteDeviceList {
            id: deviceList
            apiClient: appWindow.apiClient
            scanning: pageRoot.status == PageStatus.Active
        }

        delegate: ListItem {
            property bool isConnected: model.jellyfinId === appWindow.playbackManager.controllingSessionId
            onClicked: deviceList.activateSession(appWindow.playbackManager, model.index)
            contentHeight: Theme.itemSizeMedium
            HighlightImage {
                id: deviceIcon
                anchors {
                    left: parent.left
                    leftMargin: Theme.horizontalPageMargin
                    verticalCenter: parent.verticalCenter
                }
                height: parent.contentHeight - 2 * Theme.paddingMedium
                width: height
                source: "image://theme/icon-m-computer"
                highlighted: parent.down || isConnected
            }
            Column {
                anchors {
                    left: deviceIcon.right
                    right: parent.right
                    verticalCenter: parent.verticalCenter
                    leftMargin: Theme.paddingLarge
                    rightMargin: Theme.horizontalPageMargin
                }
                Label {
                    id: deviceName
                    //: List of devices item title in the form of <app name> — <device name>
                    text: qsTr("%1 — %2").arg(model.name).arg(model.deviceName)
                    color: isConnected || highlighted ? Theme.highlightColor : Theme.primaryColor
                }
                Label {
                    id: deviceUser
                    text: model.userName
                    color: isConnected || highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
                }
            }
        }
    }

}

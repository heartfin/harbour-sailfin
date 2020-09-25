import QtQuick 2.6
import Sailfish.Silica 1.0

import "../components"

Page {
    id: videoPage
    property string itemId
    property var itemData
    allowedOrientations: Orientation.All
    palette.colorScheme: Theme.LightOnDark
    showNavigationIndicator: videoPlayer.hudVisible

    Rectangle {
        anchors.fill: parent
        color: "black"
    }

    VideoPlayer {
        id: videoPlayer
        anchors.fill: parent
        itemId: videoPage.itemId
        onLandscapeChanged: {
            console.log("Is landscape: " + landscape)
            //appWindow.orientation = landscape ? Orientation.Landscape : Orientation.Portrait
            videoPage.allowedOrientations = landscape ? Orientation.LandscapeMask : Orientation.PortraitMask
        }
        player: appWindow.mediaPlayer
        title: itemData.Name
    }

    onStatusChanged: {
        if (status == PageStatus.Inactive) {
            videoPlayer.stop()
        }
    }
}

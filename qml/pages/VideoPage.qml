import QtQuick 2.6
import Sailfish.Silica 1.0

import "../components"

/**
 * Page only containing a video player.
 *
 * On larger devices the video player could potentially be embedded somewhere else.
 */

Page {
    id: videoPage
    property string itemId
    property var itemData
    property int audioTrack
    property int subtitleTrack

    allowedOrientations: Orientation.All
    showNavigationIndicator: videoPlayer.hudVisible

    VideoPlayer {
        id: videoPlayer
        anchors.fill: parent
        itemId: videoPage.itemId
        player: appWindow.mediaPlayer
        title: itemData.Name
        audioTrack: videoPage.audioTrack
        subtitleTrack: videoPage.subtitleTrack

        onLandscapeChanged: {
            console.log("Is landscape: " + landscape)
            //appWindow.orientation = landscape ? Orientation.Landscape : Orientation.Portrait
            videoPage.allowedOrientations = landscape ? Orientation.LandscapeMask : Orientation.PortraitMask
        }
    }

    onStatusChanged: {
        switch(status) {
        case PageStatus.Inactive:
            videoPlayer.stop()
            break;
        case PageStatus.Active:
            appWindow.itemData = videoPage.itemData
            break;
        }
    }
}

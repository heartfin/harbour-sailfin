/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

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

import "../components"

import nl.netsoj.chris.Jellyfin 1.0 as J

/**
 * Page only containing a video player.
 *
 * On larger devices the video player could potentially be embedded somewhere else.
 */

Page {
    id: videoPage
    // PlaybackBar will hide itself when it encounters a page with such a property
    property bool __hidePlaybackBar: true
    property var itemData
    property int audioTrack
    property int subtitleTrack
    property bool resume: true

    allowedOrientations: {
        if (itemData.width !== null && itemData.height !== null) {
            return itemData.width / itemData.height > Screen.width / Screen.height
                             ? Orientation.LandscapeMask
                             : Orientation.PortraitMask
        } else {
            return Orientation.All
        }
    }

    showNavigationIndicator: videoPlayer.hudVisible

    VideoPlayer {
        id: videoPlayer
        anchors.fill: parent
        manager: appWindow.playbackManager
        title: itemData.name
        audioTrack: videoPage.audioTrack
        subtitleTrack: videoPage.subtitleTrack
        resume: videoPage.resume
        item: itemData

        onLandscapeChanged: {
            console.log("Is landscape: " + landscape)
            //appWindow.orientation = landscape ? Orientation.Landscape : Orientation.Portrait
            videoPage.allowedOrientations = landscape ? Orientation.LandscapeMask : Orientation.PortraitMask
        }

    }

    onStatusChanged: {
        switch(status) {
        case PageStatus.Deactivating:
            videoPlayer.stop()
            break;
        case PageStatus.Active:
            videoPlayer.start()
            appWindow.itemData = videoPage.itemData
            break;
        }
    }
}

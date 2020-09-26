import QtQuick 2.6
import Sailfish.Silica 1.0
import nl.netsoj.chris.Jellyfin 1.0

import ".."
import "../../Utils.js" as Utils

Column {
    property var itemData
    spacing: Theme.paddingMedium

    PlayToolbar {
        onPlayPressed: pageStack.push(Qt.resolvedUrl("../../pages/VideoPage.qml"),
                                      {"itemId": itemId, "itemData": itemData, "audioTrack": trackSelector.audioTrack,
                                      "subtitleTrack": trackSelector.subtitleTrack })
    }

    VideoTrackSelector {
        id: trackSelector
        width: parent.width
        tracks: itemData.MediaStreams
    }

    PlainLabel {
        id: tinyDetails
        text: qsTr("Released: %1 — Run time: %2").arg(itemData.ProductionYear).arg(Utils.ticksToText(itemData.RunTimeTicks))
    }

    PlainLabel {
        id: overviewText
        text: itemData.Overview
        font.pixelSize: Theme.fontSizeSmall
        color: Theme.secondaryHighlightColor
    }
}

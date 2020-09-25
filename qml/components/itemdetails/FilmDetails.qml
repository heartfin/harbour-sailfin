import QtQuick 2.6
import Sailfish.Silica 1.0

import "../"
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
        text: "sub: %1 dub: %2".arg(trackSelector.subtitleTrack).arg(trackSelector.audioTrack)
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

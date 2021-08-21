import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0 as J

import "music"

SilicaListView {
    //header: PageHeader { title: qsTr("Play queue") }
    property var playbackManager
    section.property: "section"
    section.delegate: SectionHeader {
        text: {
            switch(Number(section)) {
            case J.NowPlayingSection.Queue:
                //: Now playing page queue section header
                return qsTr("Queue")
            case J.NowPlayingSection.NowPlaying:
                //: Now playing page playlist section header
                return qsTr("Playlist")
            default:
                return qsTr("Unknown section: %1").arg(ListView.section)
            }
        }
    }
    delegate: SongDelegate {
        artists: model.artists
        name: model.name
        width: parent.width
        indexNumber: index + 1
        duration: model.runTimeTicks
        playing: model.playing
        onClicked: playbackManager.skipToItemIndex(model.index)
    }
    clip: true
}

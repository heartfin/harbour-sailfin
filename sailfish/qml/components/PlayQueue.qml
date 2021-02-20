import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "music"

SilicaListView {
    header: SectionHeader { text: qsTr("Play queue") }
    delegate: SongDelegate {
        artists: model.artists
        name: model.name
        width: parent.width
        indexNumber: ListView.index
    }
}

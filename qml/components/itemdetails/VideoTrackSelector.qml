import QtQuick 2.6
import Sailfish.Silica 1.0

Column {
    property var tracks
    readonly property int audioTrack: audioSelector.currentItem ? audioSelector.currentItem._index : 0
    readonly property int subtitleTrack: subitleSelector.currentItem._index

    ListModel {
        id: audioModel
    }

    ListModel {
        id: subtitleModel
    }

    ComboBox {
        id: audioSelector
        label: qsTr("Audio track")
        menu: ContextMenu {
            Repeater {
                model: audioModel
                MenuItem {
                    readonly property int _index: model.Index
                    text: model.DisplayTitle
                }
            }
        }
    }

    ComboBox {
        id: subitleSelector
        label: qsTr("Subtitle track")
        menu: ContextMenu {
            MenuItem {
                readonly property int _index: -1
                //: Value in ComboBox to disable subtitles
                text: qsTr("Off")
            }
            Repeater {
                model: subtitleModel
                MenuItem {
                    readonly property int _index: model.Index
                    text: model.DisplayTitle
                }
            }
        }
    }

    onTracksChanged: {
        audioModel.clear()
        subtitleModel.clear()
        for(var i = 0; i < tracks.length; i++) {
            var track = tracks[i];
            switch(track.Type) {
            case "Audio":
                audioModel.append(track)
                break;
            case "Subtitle":
                subtitleModel.append(track)
                break;
            default:
                break;
            }
        }
    }
}

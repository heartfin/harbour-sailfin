import QtQuick 2.0
import Sailfish.Silica 1.0

import "../../components"

VideoPage {
    title: itemData.currentProgram.name
    subtitle: qsTr("%1 | %2 - %3")
        .arg(itemData.name)
        .arg(Qt.formatTime(itemData.currentProgram.startDate))
        .arg(Qt.formatTime(itemData.currentProgram.endDate))

    SectionHeader {
        text: qsTr("Program info")
    }

    PlainLabel {
        id: overviewText
        text: itemData.currentProgram.overview || qsTr("No program info available")
        font.pixelSize: Theme.fontSizeSmall
        color: Theme.secondaryHighlightColor
    }
}

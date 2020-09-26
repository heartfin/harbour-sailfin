import QtQuick 2.0
import Sailfish.Silica 1.0

BackgroundItem {
    property alias text: label.text
    property alias iconSource: icon.source
    HighlightImage {
        id: icon
        anchors {
            top: parent.top
            topMargin: Theme.paddingMedium
            left: parent.left
            leftMargin: Theme.horizontalPageMargin
            bottom: parent.bottom
            bottomMargin: Theme.paddingMedium
        }
    }

    Label {
        id: label
        anchors {
            left: icon.right
            leftMargin: Theme.paddingMedium
            verticalCenter: parent.verticalCenter
        }
    }
}

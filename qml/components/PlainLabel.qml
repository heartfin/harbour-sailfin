import QtQuick 2.6
import Sailfish.Silica 1.0

/**
 * A label with the most commonly used settings set
 */
Label {
    anchors {
        left: parent.left
        right: parent.right
        leftMargin: Theme.horizontalPageMargin
        rightMargin: Theme.horizontalPageMargin
    }
    color: Theme.highlightColor
    linkColor: Theme.primaryColor
    onLinkActivated: Qt.openUrlExternally(link)
    wrapMode: Text.WordWrap
}

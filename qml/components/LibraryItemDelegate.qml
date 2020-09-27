import QtQuick 2.6
import Sailfish.Silica 1.0

import ".."

/**
 * Delegate for displaying an item in the library.
 */
BackgroundItem {
    id: root
    property alias poster: posterImage.source
    property alias title: titleText.text
    property bool landscape: false
    property real progress: 0.0

    width: Constants.libraryDelegateWidth
    height: landscape ? Constants.libraryDelegateHeight : Constants.libraryDelegatePosterHeight

    RemoteImage {
        id: posterImage
        clip: true
        anchors {
            left: parent.left
            top: parent.top
            right: parent.right
            bottom: parent.bottom
        }
        fillMode: Image.PreserveAspectCrop
    }

    /*Rectangle {
        anchors.fill: posterImage
        color: Theme.rgba(Theme.highlightBackgroundColor, Theme.highlightBackgroundOpacity)
        visible: root.highlighted
    }*/

    Shim {
        anchors {
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }
        height: titleText.height * 1.5 + Theme.paddingSmall * 2

    }

    Label {
        id: titleText
        anchors {
            left: parent.left
            bottom: parent.bottom
            right: parent.right
            leftMargin: Theme.paddingMedium
            rightMargin: Theme.paddingMedium
            bottomMargin: Theme.paddingSmall
        }
        truncationMode: TruncationMode.Fade
        horizontalAlignment: Text.AlignLeft
    }

    Rectangle {
        id: progress
        anchors {
            left: parent.left
            bottom: parent.bottom
        }
        height: Theme.paddingSmall
        color: Theme.highlightColor
        width: root.progress * parent.width
    }
}

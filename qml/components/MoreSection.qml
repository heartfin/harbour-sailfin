/*
 * File taken from Storeman. See ../3rdparty.xml for licensing information
 */

import QtQuick 2.0
import Sailfish.Silica 1.0

Item {
    id: root
    property alias text: label.text
    property alias textAlignment: label.horizontalAlignment
    property bool busy: false
    property int depth: 0
    readonly property color _color: enabled ? highlighted ? Theme.highlightColor : Theme.primaryColor : Theme.secondaryColor
    default property alias content: container.data

    implicitHeight: backgroundItem.height + container.height
    width: parent.width

    BackgroundItem {
        id: backgroundItem
        width: parent.width
        height: Theme.itemSizeMedium

        Rectangle {
            anchors.fill: parent
            gradient: Gradient {
                GradientStop { position: 0.0; color: Theme.rgba(Theme.highlightBackgroundColor, 0.15) }
                GradientStop { position: 1.0; color: "transparent" }
            }
        }

        Label {
            id: label
            anchors {
                left: parent.left
                right: image.left
                verticalCenter: parent.verticalCenter
                leftMargin: Theme.horizontalPageMargin + depth * Theme.paddingLarge
                rightMargin: Theme.paddingMedium
            }
            horizontalAlignment: Text.AlignRight
            truncationMode: TruncationMode.Fade
            color: _color
        }

        Image {
            id: image
            anchors {
                right: parent.right
                verticalCenter: parent.verticalCenter
                rightMargin: Theme.horizontalPageMargin
            }
            visible: root.enabled && !root.busy
            source: "image://theme/icon-m-right?" + _color
        }

        BusyIndicator {
            id: busyIndicator
            running: root.busy
            anchors.centerIn: image
            size: BusyIndicatorSize.Small
        }
    }

    Item {
        id: container
        anchors {
            top: backgroundItem.bottom
            left: parent.left
            right: parent.right
        }
        width: parent.width
        height: children.length > 0 ? children[0].height : 0
    }
}

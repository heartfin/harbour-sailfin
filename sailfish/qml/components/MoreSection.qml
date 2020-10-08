/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

/*
File taken and adapted from Storeman. Licensed under the MIT license.
Copyright (c) 2017 Petr Tsymbarovich
View ../licenses/MIT.txt for the full license.
*/

import QtQuick 2.0
import Sailfish.Silica 1.0

Item {
    id: root
    property alias text: label.text
    property alias textAlignment: label.horizontalAlignment
    property bool busy: false
    property bool clickable: true
    property int depth: 0
    readonly property color _color: {
        if (!clickable) {
            Theme.primaryColor
        } else if (enabled) {
                if (highlighted) {
                    Theme.highlightColor
                } else {
                    Theme.primaryColor
                }
        } else {
            Theme.secondaryColor
        }
    }
    default property alias content: container.data

    signal headerClicked()

    implicitHeight: backgroundItem.height + container.height
    width: parent.width

    BackgroundItem {
        id: backgroundItem
        enabled: parent.enabled && parent.clickable
        width: parent.width
        height: Theme.itemSizeMedium
        onClicked: root.headerClicked()

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
            visible: root.enabled  && root.clickable && !root.busy
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

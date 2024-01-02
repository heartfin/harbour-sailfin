/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020-2024 Chris Josten

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

import QtQuick 2.6
import Sailfish.Silica 1.0

BaseDetailPage {
    SilicaFlickable {
        anchors.fill: parent
        visible: itemData.status !== JellyfinItem.Error
        PageHeader {
            title: itemData.name
        }
        PullDownMenu {
            // If for some reason the initial library item is not accessible, we must be able
            // to access the settings.
            MenuItem {
                //: Pulley menu item: navigate to application settings page
                text: qsTr("Settings")
                onClicked: pageStack.push(Qt.resolvedUrl("../SettingsPage.qml"))
            }
            MenuItem {
                //: Pulley menu item: shows controllable device page
                text: qsTr("Remote control")
                onClicked: pageStack.push(Qt.resolvedUrl("../ControllableDevicesPage.qml"))
            }
        }
        ViewPlaceholder {

            enabled: true
            text: qsTr("Item type (%1) unsupported").arg(itemData.type)
            hintText: qsTr("Fallback page for %2 not found either\nThis is still an alpha version :)").arg(itemData.mediaType)
        }
    }
}

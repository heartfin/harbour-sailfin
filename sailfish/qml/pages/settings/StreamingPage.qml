/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021 Chris Josten

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

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../../components"
import "../.."

Page {
    id: page

    // The effective value will be restricted by ApplicationWindow.allowedOrientations
    allowedOrientations: Orientation.All

    SilicaFlickable {
        anchors.fill: parent
        contentHeight: content.height

        Column {
            id: content
            width: parent.width

            PageHeader {
                title: qsTr("Streaming settings")
            }

            TextSwitch {
                text: qsTr("Allow transcoding")
                description: qsTr("If enabled, Sailfin may request the Jellyfin server " +
                                  "to transcode media to a more suitable media format for this device. " +
                                  "It is recommended to leave this enabled unless your server is weak.")
                checked: appWindow.apiClient.settings.allowTranscoding
                onCheckedChanged: appWindow.apiClient.settings.allowTranscoding = checked
            }

            Slider {
                minimumValue: 0
                maximumValue: 64 * 1024 * 1024
                stepSize:  1024 * 128
                valueText: qsTr("%1 mbps").arg((value / 1024 / 1024).toPrecision(4))
                value: appWindow.apiClient.settings.maxStreamingBitRate
                onDownChanged: if (!down) appWindow.apiClient.settings.maxStreamingBitRate = value
                label: qsTr("Maximum streaming bitrate")
                width: parent.width
            }
        }
    }

}

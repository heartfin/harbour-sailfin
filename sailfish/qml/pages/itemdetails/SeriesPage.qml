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

import QtQuick 2.6
import Sailfish.Silica 1.0
import nl.netsoj.chris.Jellyfin 1.0

import "../../components"
import "../.."

BaseDetailPage {
    SilicaFlickable {
        anchors.fill: parent
        contentHeight: content.height

        Column {
            id: content
            width: parent.width

            PageHeader {
                id: header
                title: itemData.name
                visible: !hasLogo
            }

            Item {
                visible: hasLogo
                width: parent.width
                height: Math.max(logoImage.height, header.height) + 2 * Theme.paddingLarge
                RemoteImage {
                    id: logoImage
                    anchors.centerIn: parent
                    source: Utils.itemImageUrl(ApiClient.baseUrl, itemData, "Logo")
                }
            }

            PlainLabel {
                id: overviewText
                text: itemData.overview
                font.pixelSize: Theme.fontSizeSmall
                color: Theme.secondaryHighlightColor
            }

            SectionHeader {
                //: Seasons of a (TV) show
                text: qsTr("Seasons")
            }

            ShowSeasonsModel {
                id: showSeasonsModel
                apiClient: ApiClient
                show: itemData.jellyfinId
                onShowChanged: reload()
            }

            SilicaListView {
                model: showSeasonsModel
                clip: true
                width: parent.width
                height: Screen.width / 2
                orientation: ListView.Horizontal
                spacing: Theme.paddingLarge
                leftMargin: Theme.horizontalPageMargin
                rightMargin: Theme.horizontalPageMargin
                delegate: LibraryItemDelegate {
                    poster: Utils.itemModelImageUrl(ApiClient.baseUrl, model.id, model.imageTags.primary, "Primary", {"maxHeight": height})
                    title: model.name
                    onClicked: pageStack.push(Utils.getPageUrl(model.mediaType, model.type), {"itemId": model.id})
                }
            }

        }
    }

    /*onStatusChanged: {
        if (status == PageStatus.Active) {
            showSeasonsModel.reload()
        }
    }*/
    Connections {
        target: itemData
        onJellyfinIdChanged: {
            console.log("Item id changed")
            //showSeasonsModel.show = itemData.jellyfinId
        }
    }
}

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

/**
 * This page displays details about a film, show, season, episode, and so on.
 *
 * It contains the common functionality for all items. Additional components are
 * loaded in for every specific type of items, from ../components/itemdetails.
 */
Page {
    id: pageRoot
    property alias itemId: jItem.jellyfinId
    property alias itemData: jItem
    //property string itemId: ""
    //property var itemData: ({})
    property bool _loading: jItem.status === "Loading"
    readonly property bool hasLogo: (typeof itemData.ImageTags !== "undefined") && (typeof itemData.ImageTags["Logo"] !== "undefined")
    readonly property var _backdropImages: itemData.BackdropImageTags
    readonly property var _parentBackdropImages: itemData.ParentBackdropImageTags
    readonly property string parentId: itemData.ParentId || ""
    property alias backdrop: backdrop

    on_BackdropImagesChanged: updateBackdrop()
    on_ParentBackdropImagesChanged: updateBackdrop()

    function updateBackdrop() {
        return;
        if (_backdropImages && _backdropImages.length > 0) {
            var rand = Math.floor(Math.random() * (_backdropImages.length - 0.001))
            console.log("Random: ", rand)
            backdrop.source = ApiClient.baseUrl + "/Items/" + itemId + "/Images/Backdrop/" + rand + "?tag=" + _backdropImages[rand] + "&maxHeight" + height
        } else if (_parentBackdropImages && _parentBackdropImages.length > 0) {
            console.log(parentId)
            backdrop.source = ApiClient.baseUrl + "/Items/" + itemData.ParentBackdropItemId + "/Images/Backdrop/0?tag=" + _parentBackdropImages[0]
        }
    }


    allowedOrientations: Orientation.All
    GlassyBackground {
        id: backdrop
        anchors.fill: parent
    }

    PageBusyIndicator {
        running: pageRoot._loading
    }

    SilicaFlickable {
        anchors.fill: parent
        contentHeight: errorContent.height
        visible: jItem.status == JellyfinItem.Error

        PullDownMenu {
            busy: jItem.status == JellyfinItem.Loading
            MenuItem {
                text: qsTr("Retry")
                onClicked: jItem.reload()
            }
        }

        Column {
            id: errorContent
            width: parent.width

            ViewPlaceholder {
                enabled: true
                text: qsTr("An error has occured")
                hintText: jItem.errorString
            }
        }
    }

    JellyfinItem {
        id: jItem
        apiClient: ApiClient
        onStatusChanged: {
            console.log("Status changed: " + newStatus, JSON.stringify(jItem))
            console.log(jItem.mediaStreams)
        }
    }

    onStatusChanged: {
        if (status == PageStatus.Deactivating) {
            backdrop.clear()
            //appWindow.itemData = ({})
        }
        if (status == PageStatus.Active) {
            appWindow.itemData = jItem
        }
    }
}

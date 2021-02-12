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
import Sailfish.Silica.Background 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../../components"
import "../.."

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
    property string _chosenBackdropImage: ""
    readonly property string parentId: itemData.ParentId || ""

    function updateBackdrop() {
        var rand = 0;
        if (itemData.backdropImageTags.length > 0) {
            rand = Math.floor(Math.random() * (itemData.backdropImageTags.length - 0.001))
            console.log("Random: ", rand)
            _chosenBackdropImage = ApiClient.baseUrl + "/Items/" + itemId + "/Images/Backdrop/" + rand + "?tag=" +itemData.backdropImageTags[rand] + "&maxHeight" + height
        } else if (itemData.parentBackdropImageTags.length > 0) {
            rand = Math.floor(Math.random() * (itemData.parentBackdropImageTags.length - 0.001))
            _chosenBackdropImage = ApiClient.baseUrl + "/Items/" + itemData.parentBackdropItemId + "/Images/Backdrop/" + rand + "?tag=" + itemData.parentBackdropImageTags[0]
        }
    }


    allowedOrientations: Orientation.All
    background: _chosenBackdropImage ? backdropBackground : null

    Component {
        id: backdropBackground
        ThemeBackground {
            sourceItem: backdrop
            backgroundMaterial: Materials.blur
        }
    }

    ThemeWallpaper {
        id: backdrop
        source: _chosenBackdropImage
        visible: false
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
            if (status == JellyfinItem.Ready) {
                updateBackdrop()
            }
        }
    }

    onStatusChanged: {
        if (status == PageStatus.Deactivating) {
            //appWindow.itemData = ({})
        }
        if (status == PageStatus.Active) {
            appWindow.itemData = jItem
        }
    }
}

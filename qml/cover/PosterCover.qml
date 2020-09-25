import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../components"

CoverBackground {
    property var mData: appWindow.itemData
    RemoteImage {
        anchors.fill: parent
        source: mData.ImageTags["Primary"] ? ApiClient.baseUrl + "/Items/" + mData.Id
                                             + "/Images/Primary?maxHeight=" + height + "&tag=" + mData.ImageTags["Primary"]
                                           : ""
        fillMode: Image.PreserveAspectCrop
    }

}

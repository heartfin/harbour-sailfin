import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../../components"

BaseDetailPage {
    id: pageRoot
    navigationStyle: PageNavigation.Vertical

    Rectangle {
        anchors.fill: parent
        color: Theme.overlayBackgroundColor
    }

    PageHeader {
        title: itemData.name
        titleColor: Theme.primaryColor
    }

    RemoteImage {
        id: image
        source: apiClient.downloadUrl(itemId)
        fillMode: Image.PreserveAspectFit
        anchors.fill: parent

        blurhash: itemData.imageBlurHashes["Primary"][itemData.imageTags["Primary"]]
        aspectRatio: itemData.width / itemData.height
    }
}

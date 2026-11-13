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
        source: itemId ? apiClient.downloadImageUrl(itemId) : ""
        fillMode: Image.PreserveAspectFit
        anchors.fill: parent

        blurhash: {
            var hashes = itemData.imageBlurHashes ? itemData.imageBlurHashes["Primary"] : undefined
            var tag = itemData.imageTags ? itemData.imageTags["Primary"] : undefined
            return (hashes && tag && hashes[tag]) ? hashes[tag] : ""
        }
        aspectRatio: itemData.width > 0 && itemData.height > 0 ? itemData.width / itemData.height : 1.0
    }
}

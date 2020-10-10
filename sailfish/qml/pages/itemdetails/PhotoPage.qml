import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

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

    Image {
        id: image
        source: ApiClient.downloadUrl(itemId)
        fillMode: Image.PreserveAspectFit
        anchors.fill: parent

        opacity: status == Image.Ready ? 1.0 : 0.0
        Behavior on opacity { FadeAnimator {}}
    }

    BusyIndicator {
            running: image.status == Image.Loading
            size: BusyIndicatorSize.Large
            anchors.centerIn: parent
        }
}

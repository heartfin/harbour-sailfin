import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../"

MoreSection {
    id: header
    busy: itemModel.loader.status === J.ModelStatus.Loading || extraBusy
    property bool extraBusy: false
    property alias loader: itemModel.loader
    property int collectionType
    property bool collapseWhenEmpty: true

    J.ItemModel {
        id: itemModel
    }

    SilicaListView {
        readonly property bool isPortrait: Utils.usePortraitCover(collectionType)
        id: list
        clip: true
        height: {
            if (count > 0 || !collapseWhenEmpty) {
                if (isPortrait) {
                    Constants.libraryDelegatePosterHeight
                } else {
                    Constants.libraryDelegateHeight
                }
            } else {
                0
            }
        }
        Behavior on height {
            NumberAnimation { easing.type: Easing.OutQuad; duration: 300 }
        }
        model: itemModel
        width: parent.width
        orientation: ListView.Horizontal
        leftMargin: Theme.horizontalPageMargin
        rightMargin: Theme.horizontalPageMargin
        spacing: Theme.paddingLarge
        delegate: LibraryItemDelegate {
            property string id: model.jellyfinId
            title: model.name
            poster: Utils.itemModelImageUrl(appWindow.apiClient.baseUrl, model.jellyfinId, model.imageTags["Primary"], "Primary", {"height": height})
            Binding on blurhash {
                when: poster != ""
                value: model.imageBlurHashes["Primary"][model.imageTags["Primary"]]
            }
            landscape: !list.isPortrait
            progress: (typeof model.userDataPlayedProgress !== 0.0) ? model.userDataPlayedPercentage / 100 : 0.0

            onClicked: {
                appWindow.navigateToItem(model.jellyfinId, model.mediaType, model.type, model.isFolder);
            }
        }
    }
}

import QtQuick 2.6
import Sailfish.Silica 1.0
import nl.netsoj.chris.Jellyfin 1.0

import "../../Utils.js" as Utils
import "../.."
import ".."

Column {
    property var itemData

    ShowEpisodesModel {
        id: episodeModel
        apiClient: ApiClient
        show: itemData.SeriesId
        seasonId: itemData.Id
        fields: ["Overview"]
    }

    ColumnView {
        model: episodeModel
        itemHeight: Constants.libraryDelegateHeight
        delegate: BackgroundItem {
            height: Constants.libraryDelegateHeight
            RemoteImage {
                id: episodeImage
                anchors {
                    top: parent.top
                    left: parent.left
                    leftMargin: Theme.horizontalPageMargin
                    bottom: parent.bottom
                }
                width: Constants.libraryDelegateWidth
                height: Constants.libraryDelegateHeight
                source: Utils.itemModelImageUrl(ApiClient.baseUrl, model.id, model.imageTags["Primary"], "Primary", {"maxHeight": height})
                fillMode: Image.PreserveAspectCrop
                clip: true
            }

            Label {
                id: episodeTitle
                anchors {
                    left: episodeImage.right
                    leftMargin: Theme.paddingLarge
                    top: parent.top
                    right: parent.right
                    rightMargin: Theme.horizontalPageMargin
                }
                text: model.name
                truncationMode: TruncationMode.Fade
                horizontalAlignment: Text.AlignLeft
            }

            Label {
                id: episodeOverview
                anchors {
                    left: episodeImage.right
                    leftMargin: Theme.paddingLarge
                    right: parent.right
                    rightMargin: Theme.horizontalPageMargin
                    top: episodeTitle.bottom
                    bottom: parent.bottom
                }
                color: highlighted ? Theme.secondaryHighlightColor: Theme.secondaryColor
                font.pixelSize: Theme.fontSizeExtraSmall
                //: No overview/summary text of an episode available
                text: model.overview || qsTr("No overview available")
                wrapMode: Text.WordWrap
                elide: Text.ElideRight
            }
            onClicked: pageStack.push(Qt.resolvedUrl("../../pages/DetailPage.qml"), {"itemId": model.id})
        }
    }
    onItemDataChanged: {
        console.log(JSON.stringify(itemData))
        episodeModel.show = itemData.SeriesId
        episodeModel.seasonId = itemData.Id
        episodeModel.reload()
    }
}

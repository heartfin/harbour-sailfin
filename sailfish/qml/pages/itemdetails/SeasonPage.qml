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

import "../.."
import "../../components"
import ".."

BaseDetailPage {
    ShowEpisodesModel {
        id: episodeModel
        apiClient: ApiClient
        show: itemData.seriesId
        seasonId: itemData.jellyfinId
        fields: ["Overview"]
    }

    Connections {
        target: itemData
        onReady: episodeModel.reload()
    }

    SilicaListView {
        anchors.fill: parent
        contentHeight: content.height
        visible: itemData.status !== JellyfinItem.Error

        header: PageHeader {
            title: itemData.name
            description: itemData.seriesName
        }
        model: episodeModel
        delegate: BackgroundItem {
            height: Constants.libraryDelegateHeight
            RemoteImage {
                id: episodeImage
                anchors {
                    top: parent.top
                    left: parent.left
                    bottom: parent.bottom
                }
                width: Constants.libraryDelegateWidth
                height: Constants.libraryDelegateHeight
                source: Utils.itemModelImageUrl(ApiClient.baseUrl, model.id, model.imageTags.primary, "Primary", {"maxHeight": height})
                fillMode: Image.PreserveAspectCrop
                clip: true

                // Makes the progress bar stand out more
                Shim {
                    anchors {
                        left: parent.left
                        bottom: parent.bottom
                        right: parent.right
                    }
                    height: parent.height / 3
                    shimColor: Theme.overlayBackgroundColor
                    shimOpacity: Theme.opacityOverlay
                    //width: model.userData.PlayedPercentage * parent.width / 100
                    visible: episodeProgress.width > 0 || model.userData.played || model.userData.isFavorite // It doesn't look nice when it's visible on every image
                }

                Rectangle {
                    id: episodeProgress
                    anchors {
                        left: parent.left
                        bottom: parent.bottom
                    }
                    height: Theme.paddingMedium
                    width:  model.userData.playedPercentage * parent.width / 100
                    color: Theme.highlightColor
                }
                Row {
                    spacing: Theme.paddingSmall
                    anchors {
                        bottom: episodeProgress.width > 0 ? episodeProgress.top : parent.bottom
                        bottomMargin: Theme.paddingMedium
                        right: parent.right
                        rightMargin: Theme.paddingMedium
                    }

                    Icon {
                        source: "image://theme/icon-s-checkmark"
                        visible: model.userData.played
                    }

                    Icon {
                        source: "image://theme/icon-s-favorite"
                        visible: model.userData.isFavorite
                    }
                }
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
            onClicked: pageStack.push(Utils.getPageUrl(model.mediaType, model.type), {"itemId": model.id})
        }

        VerticalScrollDecorator {}
    }
    Connections {
        target: itemData
        onStatusChanged: {
            if (itemData.status == JellyfinItem.Ready) {
                episodeModel.reload()
            }
        }
    }
    onStatusChanged: {
        if (status == PageStatus.Active) {
            //console.log(JSON.stringify(itemData))
            episodeModel.show = itemData.seriesId
            episodeModel.seasonId = itemData.jellyfinId
        }
    }
}

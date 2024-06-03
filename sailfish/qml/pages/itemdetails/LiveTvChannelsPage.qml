import QtQuick 2.6
import Sailfish.Silica 1.0
import nl.netsoj.chris.Jellyfin 1.0 as J

import "../../components"
import "../../"

BaseDetailPage {
    J.ItemModel {
        id: episodeModel
        loader: J.LiveTvChannelsLoader{
                apiClient: appWindow.apiClient
                fields: [J.ItemFields.Overview]
                autoReload: itemData.jellyfinId.length > 0
        }
    }

    SilicaListView {
        anchors.fill: parent
        model: episodeModel
        header: PageHeader {
            title: itemData.name
            description: itemData.seriesName
        }
        delegate: BackgroundItem {
            height: content.height
            onClicked: appWindow.navigateToItem(model.jellyfinId, model.mediaType, model.type, model.isFolder);

            Column {
                id: content
                anchors {
                    left: parent.left
                    leftMargin: Theme.horizontalPageMargin
                    right: parent.right
                    rightMargin: Theme.horizontalPageMargin
                }
                spacing: Theme.paddingSmall
                topPadding: Theme.paddingLarge
                bottomPadding: Theme.paddingLarge
                width: parent.width


                Row {
                    anchors {
                        left: parent.left
                        right: parent.right
                    }
                    spacing: Theme.paddingMedium

                    RemoteImage {
                        id: channelLogo
                        width: Theme.fontSizeLarge
                        height: width
                        source: Utils.itemModelImageUrl(apiClient.baseUrl, model.jellyfinId, model.imageTags.Primary, "Primary", {"maxHeight": height})
                        blurhash: model.imageBlurHashes.Primary[model.imageTags.Primary]
                        fillMode: Image.PreserveAspectFit
                        fallbackColor: "transparent"
                    }

                    Label {
                        anchors.verticalCenter: channelLogo.verticalCenter
                        id: channelName
                        text: model.name
                        font.pixelSize: Theme.fontSizeLarge
                    }
                }
                Item {
                    anchors { left: parent.left; right: parent.right }
                    height: programName.height
                    Label {
                        id: programName
                        anchors {
                            left: parent.left
                            right: programTime.left
                            rightMargin: Theme.paddingLarge
                        }
                        text: currentProgramName
                              ? currentProgramName
                                //: Shown in the channel list when the name of the current program is unknown
                              : qsTr("No program information available")
                        truncationMode: TruncationMode.Fade
                    }
                    Label {
                        id: programTime
                        anchors.right: parent.right
                        text: "%1 - %2"
                            .arg(Qt.formatTime(currentProgramStartDate))
                            .arg(Qt.formatTime(currentProgramEndDate))
                        color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
                    }
                }
                Label {
                    anchors {
                        left: parent.left
                        right: parent.right
                    }
                    visible: text

                    text: currentProgramOverview
                    color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
                    maximumLineCount: 2
                    wrapMode: Text.WordWrap
                    elide: "ElideRight"
                }
            }
        }
        VerticalScrollDecorator {}
    }
}

import QtQuick 2.6
import Sailfish.Silica 1.0

import nl.netsoj.chris.Jellyfin 1.0

import "../../components"
import "../.."

BaseDetailPage {
    readonly property int _songIndexWidth: 100
    property string _albumArtistText: itemData.albumArtist

    UserItemModel {
        id: collectionModel
        apiClient: ApiClient
        sortBy: ["SortName"]
        fields: ["ItemCounts","PrimaryImageAspectRatio","BasicSyncInfo","CanDelete","MediaSourceCount"]
        parentId: itemData.jellyfinId
        onParentIdChanged: reload()
    }

    SilicaListView {
        id: list
        anchors.fill: parent
        model: collectionModel
        header: Item {
            property string stateIfArt: "largeArt"
            property alias albumArt: albumArt
            id: listHeader
            width: parent.width
            //spacing: Theme.paddingLarge
            state: albumArt.source != "" ? stateIfArt : "noArt"
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    if (listHeader.stateIfArt == "largeArt") {
                        listHeader.stateIfArt = "details"
                    } else {
                        listHeader.stateIfArt = "largeArt"
                    }
                }
            }
            RemoteImage {
                id: albumArt
                anchors {
                    top: parent.top
                    right: parent.right
                }
                source: Utils.itemImageUrl(ApiClient.baseUrl, itemData, "Primary", {"maxWidth": parent.width})
                sourceSize.width: listHeader.width
                sourceSize.height: listHeader.width
                fillMode: Image.PreserveAspectFit
                opacity: 1
                clip: true
            }
            PageHeader {
                id: albumHeader
                width: parent.width - Theme.horizontalPageMargin - height
                title: itemData.name
                description: qsTr("%1\n%2 songs | %3 | %4")
                    .arg(_albumArtistText)
                    .arg(itemData.childCount)
                    .arg(Utils.ticksToText(itemData.runTimeTicks))
                    .arg(itemData.productionYear > 0 ? itemData.productionYear : qsTr("Unknown year"))
            }

            states: [
                State {
                    name: "largeArt"
                    PropertyChanges {
                        target: albumArt
                        width: parent.width
                        height: width
                    }
                    PropertyChanges {
                        target: listHeader
                        height: width
                    }
                    PropertyChanges {
                        target: albumHeader
                        opacity: 0
                    }
                    PropertyChanges {
                        target: list
                        contentY: -list.width
                    }
                    AnchorChanges {
                        target: albumHeader
                        anchors.left: undefined
                        anchors.right: albumArt.left
                    }
                },
                State {
                    name: "details"
                    PropertyChanges {
                        target: albumArt
                        width: height
                        height: albumHeader.height
                    }
                    PropertyChanges {
                        target: listHeader
                        height: albumHeader.height
                    }
                    PropertyChanges {
                        target: albumHeader
                        opacity: 1
                    }
                    PropertyChanges {
                        target: list
                        contentY: -albumHeader.height
                    }
                    AnchorChanges {
                        target: albumHeader
                        anchors.left: undefined
                        anchors.right: albumArt.left
                    }
                },
                State {
                    name: "noArt"
                    extend: "details"
                    PropertyChanges {
                        target: albumArt
                        opacity: 0
                    }
                    PropertyChanges {
                        target: albumHeader
                        width: parent.width - Theme.horizontalPageMargin * 2
                    }
                    AnchorChanges {
                        target: albumHeader
                        anchors.left: parent.left
                        anchors.right: parent.right
                    }
                }
            ]
            transitions: Transition {
                OpacityAnimator { target: albumHeader}
                OpacityAnimator { target: albumArt}
                NumberAnimation {
                    properties: "width,height,contentY"
                    //velocity: 1600
                    duration: 300
                    easing.type: Easing.OutQuad
                }
                AnchorAnimation {}
            }
        }
        section {
            property: "parentIndexNumber"
            delegate: SectionHeader {
                text: qsTr("Disc %1").arg(section)
            }
        }
        delegate: ListItem {
            contentHeight: songName.height + songArtists.height + 2 * Theme.paddingMedium
            width: parent.width

            Label {
                id: songIndex
                anchors {
                    top: parent.top
                    topMargin: Theme.paddingMedium
                    left: parent.left
                    leftMargin: Theme.horizontalPageMargin
                }
                text: model.indexNumber
                horizontalAlignment: Text.AlignRight
                font.pixelSize: Theme.fontSizeExtraLarge
                width: _songIndexWidth
            }

            Label {
                id: songName
                anchors {
                    left: songIndex.right
                    leftMargin: Theme.paddingLarge
                    top: parent.top
                    topMargin: Theme.paddingMedium
                    right: duration.left
                    rightMargin: Theme.paddingLarge
                }
                text: model.name
                font.pixelSize: Theme.fontSizeMedium
                truncationMode: TruncationMode.Fade
            }
            Label {
                id: songArtists
                anchors {
                    top: songName.bottom
                    left: songIndex.right
                    leftMargin: Theme.paddingLarge
                    right: parent.right
                    rightMargin: Theme.horizontalPageMargin
                }
                text: model.artists.join(", ")
                font.pixelSize: Theme.fontSizeSmall
                truncationMode: TruncationMode.Fade
                color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
            }

            Label {
                id: duration
                anchors {
                    right: parent.right
                    rightMargin: Theme.horizontalPageMargin
                    baseline: songName.baseline
                }
                width: contentWidth
                text: Utils.ticksToText(model.runTimeTicks)
                font.pixelSize: Theme.fontSizeSmall
                color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
            }
        }



        VerticalScrollDecorator {}
    }

    Connections {
        target: itemData
        onAlbumArtistsChanged: {
            console.log(itemData.albumArtists)
            _albumArtistText = ""
            for (var i = 0; i < itemData.albumArtists.length; i++) {
                _albumArtistText += itemData.albumArtists[i]["name"]
            }
        }
    }
}

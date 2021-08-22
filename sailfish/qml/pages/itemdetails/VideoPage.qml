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

import nl.netsoj.chris.Jellyfin 1.0 as J

import "../../components"
import "../.."

/**
 * Fallback page for everything that's a video, but we haven't a more specific page for, like
 * the FilmPage or EpisodePage.
 */
BaseDetailPage {
    property alias subtitle: pageHeader.description
    default property alias _data: content.data
    property real _playbackProsition: itemData.userData.playbackPositionTicks
    readonly property bool _userdataReady:  itemLoader.status === J.ItemLoader.Ready && itemData.userData !== null
    SilicaFlickable {
        anchors.fill: parent
        contentHeight: content.height + Theme.paddingLarge
        visible: itemData.status !== J.ItemLoader.Error

        VerticalScrollDecorator {}

        Column {
            id: content
            width: parent.width
            spacing: Theme.paddingMedium

            PageHeader {
                id: pageHeader
                title: itemData.name
                description: qsTr("Run time: %2").arg(Utils.ticksToText(itemData.runTimeTicks))
            }

            PlayToolbar {
                id: toolbar
                width: parent.width
                imageSource: Utils.itemImageUrl(apiClient.baseUrl, itemData, "Primary", {"maxWidth": parent.width})
                imageAspectRatio: Constants.horizontalVideoAspectRatio
                imageBlurhash: itemData.imageBlurHashes["Primary"][itemData.imageTags["Primary"]]
                Binding on favourited {
                    when: _userdataReady
                    value: itemData.userData.favorite
                }
                Binding on playProgress {
                    when: _userdataReady
                    value: itemData.userData.playedPercentage / 100
                }
                onPlayPressed: pageStack.push(Qt.resolvedUrl("../VideoPage.qml"),
                                              {"itemData": itemData,
                                                  "audioTrack": trackSelector.audioTrack,
                                                  "subtitleTrack": trackSelector.subtitleTrack,
                                                  "resume": resume})
            }

            VideoTrackSelector {
                id: trackSelector
                width: parent.width
                audioTracks: itemData.audioStreams
                videoTracks: itemData.videoStreams
                subtitleTracks: itemData.subtitleStreams
            }

            Label {
                text:  "Video %1, audio %2, subtitle %3".arg(trackSelector.videoTrack).arg(trackSelector.audioTrack).arg(trackSelector.subtitleTrack)
            }
        }
    }

    Connections {
        target: itemLoader
        onStatusChanged: {
            if (status === J.ItemLoader.Ready) {
                console.log(itemData.mediaStreams)
            }
        }
    }
}

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

import nl.netsoj.chris.blurhash 1.0

/**
 * An image for "remote" images (loaded over e.g. http), with a spinner and a fallback image.
 *
 * If placed in a page, it will delay the loading of the image until the transition is over,
 * displaying a simpler blurhash instead, to reduce the stutter during the transition
 */
SilicaItem {
    id: root
    property string fallbackImage
    property bool usingFallbackImage
    property color fallbackColor: Theme.highlightColor

    property var __parentPage : null
    property bool _alreadyLoaded: false
    readonly property bool _shouldLoad: _alreadyLoaded
                                        || __parentPage == null // Not an indirect child of a page. Immediatly start loading.
                                        || __parentPage && [PageStatus.Active, PageStatus.Deactivating].indexOf(__parentPage.status) >= 0

    onSourceChanged: _alreadyLoaded = false

    /**
     * BlurHash that is used as placeholder
     */
    property string blurhash: ""
    /**
     *
     */
    property real aspectRatio: 1.0
    property string source: ""
    property alias sourceSize: realImage.sourceSize
    property var fillMode: Image.Stretch
    property int status: {
        if (!source) return Image.Null
        if (realImage.status == Image.Null && !_shouldLoad) return Image.Loading
        return realImage.status
    }
    implicitHeight: realImage.implicitHeight
    implicitWidth: realImage.implicitWidth

    Image {
        id: realImage
        anchors.fill: parent
        asynchronous: true
        fillMode: root.fillMode
        opacity: 1
        source:  _shouldLoad ? root.source : ""
        onStatusChanged: {
            if (status == Image.Ready) {
                _alreadyLoaded = true
            }
        }
    }
	
    Rectangle {
        id: fallbackBackground
        anchors.fill: parent
        gradient: Gradient {
            GradientStop { position: 0.0; color: fallbackColor; }
            GradientStop { position: 1.0; color: Theme.highlightDimmerFromColor(fallbackColor, Theme.colorScheme); }
        }
        opacity: 0
    }

    Image {
        id: blurhashImage
        anchors.fill: parent
        fillMode: root.fillMode
        sourceSize.height: 32
        sourceSize.width: 32 * aspectRatio
        source: blurhash.length > 0 ? "image://blurhash/" + encodeURIComponent(blurhash) : ""
        opacity: 0
    }

    Rectangle {
        id: highlightOverlay
        anchors.fill: parent
        color: Theme.rgba(Theme.highlightColor, Theme.opacityOverlay)
        visible: parent.highlighted
    }

    BusyIndicator {
        anchors.centerIn: parent
        running: realImage.status === Image.Loading
    }

    HighlightImage {
		id: fallbackImageItem
		anchors.centerIn: parent
        visible: realImage.status === Image.Error || (realImage.status === Image.Null && blurhash.length === 0)
        source: fallbackImage ? fallbackImage : "image://theme/icon-m-question"
	}

    states: [
        State {
            name: "fallback"
            when: (blurhash.length === 0) && (realImage.status === Image.Error || realImage.status === Image.Null || realImage.status === Image.Loading)
            PropertyChanges {
                target: fallbackBackground
                opacity: 1
            }
        },
        State {
            name: "blurhash"
            when: blurhash.length > 0 && (realImage.status === Image.Error || realImage.status === Image.Null || realImage.status === Image.Loading)
            PropertyChanges {
                target: blurhashImage
                opacity: 1
            }
        },
        State {
            name: "loaded"
            when: realImage.status === Image.Ready
            PropertyChanges {
                target: realImage
                //opacity: 1
            }
        }
    ]

    transitions: [
        Transition {
            from: "*"
            to: "*"
            FadeAnimation {}
        }
    ]

    Component.onCompleted: {
        var item = parent;
        while (item !== null) {
            if ("__silica_page" in item) {
                __parentPage = item
                break;
            }
            item = item.parent
        }
    }
}

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
import QtMultimedia 5.6

import nl.netsoj.chris.Jellyfin 1.0 as J

Rectangle {
    id: videoError
    //FIXME: Once QTBUG-10822 is resolved, change to J.PlaybackManager
    property var player
    property bool showError: false
    color: pal.palette.overlayBackgroundColor
    opacity: showError ? 1.0 : 0.0
    Behavior on opacity { FadeAnimator {} }

    SilicaItem {
        id: pal
    }

    Column {
        anchors.centerIn: parent
        anchors.margins: Theme.horizontalPageMargin

        Label {
            anchors.horizontalCenter: parent.horizontalCenter
            font.pixelSize: Theme.fontSizeExtraLarge
            color: Theme.errorColor
            text: {
                switch(player.error) {
                case MediaPlayer.NoError:
                    //: Just to be complete if the application shows a video playback error when there's no error.
                    qsTr("No error");
                    break;
                case MediaPlayer.ResourceError:
                    //: Video playback error: out of resources
                    qsTr("Resource allocation error")
                    break;
                case MediaPlayer.FormatError:
                    //: Video playback error: unsupported format/codec
                    qsTr("Video format unsupported")
                    break;
                case MediaPlayer.NetworkError:
                    //: Video playback error: network error
                    qsTr("Network error")
                    break;
                case MediaPlayer.AccessDenied:
                    //: Video playback error: access denied
                    qsTr("Access denied")
                    break;
                case MediaPlayer.ServiceMissing:
                    //: Video playback error: the media cannot be played because the media service could not be instantiated.
                    qsTr("Media service missing")
                    break;
                }
            }
        }

        Label {
            wrapMode: Text.WordWrap
            text: player.errorString
            color: Theme.errorColor
            width: videoError.width - Theme.horizontalPageMargin * 2
            horizontalAlignment: Text.AlignHCenter
        }

        Item { width: 1; height: Theme.paddingLarge; }

        ButtonLayout {
            Button {
                //: Button to retry loading a video after a failure
                text: qsTr("Retry")
                onClicked: player.play()
            }

            Button {
                text: qsTr("Hide")
                onClicked: showError = false
            }
        }
    }

    Connections {
        target: player
        onErrorChanged: {
            if (player.error !== MediaPlayer.NoError) {
                showError = true
            }
        }
    }

}

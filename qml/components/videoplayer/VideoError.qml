import QtQuick 2.6
import Sailfish.Silica 1.0
import QtMultimedia 5.6

Rectangle {
    id: videoError
    property MediaPlayer player
    color: pal.palette.overlayBackgroundColor
    opacity: player.error === MediaPlayer.NoError ? 0.0 : 1.0
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
        }
    }

}

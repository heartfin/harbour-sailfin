import QtQuick 2.6
import Sailfish.Silica 1.0

/**
 * An image for "remote" images (loaded over e.g. http), with a spinner and a fallback image
 */
Image {
	property string fallbackImage
	property bool usingFallbackImage
	
	BusyIndicator {
		anchors.centerIn: parent
		running: parent.status == Image.Loading
	}

    Rectangle {
        id: fallbackBackground
        anchors.fill: parent
        gradient: Gradient {
            GradientStop { position: 0.0; color: Theme.highlightColor; }
            GradientStop { position: 1.0; color: Theme.highlightDimmerColor; }
        }
        visible: parent.status == Image.Error || parent.status == Image.Null
    }
	
	Image {
		id: fallbackImageItem
		anchors.centerIn: parent
        visible: parent.status == Image.Error || parent.status == Image.Null
		source: fallbackImage ? fallbackImage : "image://theme/icon-m-question"
	}
}

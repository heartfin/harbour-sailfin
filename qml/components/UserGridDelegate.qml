import QtQuick 2.6
import Sailfish.Silica 1.0

GridItem {
	id: root
	property string image
	property alias name: nameLabel.text
	RemoteImage {
		id: userImage
		anchors.fill: parent
		source: root.image ? root.image : "image://theme/icon-m-contact?" + ((root.highlighted || root.down) ? Theme.highlightColor : Theme.primaryColor)
		fillMode: Image.PreserveAspectCrop
        clip: true
	}
	Rectangle {
		anchors.fill: parent
		gradient: Gradient {
			GradientStop { position: 0.0; color: "transparent" }
			GradientStop { position: 1.0; color: Theme.overlayBackgroundColor }
		}
	}
	Label {
		id: nameLabel
		anchors {
			leftMargin: Theme.horizontalPageMargin
			rightMargin: Theme.horizontalPageMargin
			right: parent.right
			left: parent.left
			bottom: parent.bottom
			bottomMargin: Theme.paddingSmall
		}
		text: qsTr("Other account")
		color: (root.highlighted || root.down) ? Theme.highlightColor : Theme.secondaryColor
	}
}

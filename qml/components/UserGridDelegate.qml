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

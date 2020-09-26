import QtQuick 2.6
import Sailfish.Silica 1.0

Row {
    signal playPressed()

    anchors {
        //left: parent.left
        right: parent.right
        leftMargin: Theme.horizontalPageMargin
        rightMargin: Theme.horizontalPageMargin
    }
    spacing: Theme.paddingMedium
    IconButton {
        id: favouriteButton
        icon.source: "image://theme/icon-m-favorite"
    }
    IconButton {
        id: playButton
        icon.source: "image://theme/icon-l-play"
        onPressed: playPressed()
    }

}

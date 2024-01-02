import QtQuick 2.6
import Sailfish.Silica 1.0

Column {
    property string headerText
    // The contributors model
    property var contributors
    width: parent.width
    SectionHeader {
        text: headerText
    }

    ColumnView {
        model: contributors
        itemHeight: Theme.itemSizeLarge

        delegate: ListItem {
            width: parent.width
            contentHeight: Theme.itemSizeLarge

            onClicked: {
                if (model.url) {
                    Qt.openUrlExternally(model.url)
                }
            }

            Column {
                anchors {
                    verticalCenter: parent.verticalCenter
                    left: parent.left
                    right: parent.right
                    leftMargin: Theme.horizontalPageMargin
                    rightMargin: Theme.horizontalPageMargin
                }

                Label {
                    text: model.name
                }

                Label {
                    text: model.role
                    color: highlighted ? Theme.secondaryHighlightColor : Theme.secondaryColor
                }
            }
        }
    }

}

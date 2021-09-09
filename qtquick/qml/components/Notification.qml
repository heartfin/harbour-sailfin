import QtQuick 2.6
import QtQuick.Controls 2.6

Rectangle {
    property alias title: titleText.text
    property alias content: contentText.text
    color: "black"
    implicitHeight: column.height
    implicitWidth: column.width

    Column {
        id: column
        width: parent.width

        Text {
            id: titleText
            width: parent.width
            font.pointSize: 24
            color: "white"
        }

        Text {
            id: contentText
            width: parent.width
            color: "white"
        }
    }
}

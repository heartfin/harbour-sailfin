import QtQuick 2.6
import Sailfish.Silica 1.0

ViewPlaceholder {
    property var itemData

    enabled: true
    text: qsTr("Item type (%1) unsupported").arg(itemData.Type)
    hintText: qsTr("This is still an alpha version :)")
}

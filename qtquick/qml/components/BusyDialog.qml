import QtQuick 2.12
import QtQuick.Controls 2.12

Dialog {
    modal: true
    BusyIndicator {
        anchors.centerIn: parent
        running: true
    }
}

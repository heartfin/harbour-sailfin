import QtQuick 2.6
import Sailfish.Silica 1.0
import QtGraphicalEffects 1.0

Rectangle {
    property alias source: backgroundImage.source
    property alias sourceSize: backgroundImage.sourceSize
    property real dimmedOpacity: Theme.opacityFaint
    readonly property alias status: backgroundImage.status
    color: Theme.colorScheme == Theme.DarkOnLight ? "#fff" : "#000"
    z: -1
    opacity: status == Image.Ready ? 1.0 : 0.0
    Behavior on opacity { NumberAnimation { duration: 300 } }

    Image {
        id: backgroundImage
        cache: true
        smooth: false
        asynchronous: true
        fillMode: Image.PreserveAspectCrop
        anchors.fill: parent
        visible: false
    }

    FastBlur {
        anchors.fill: backgroundImage
        source: backgroundImage
        opacity: dimmedOpacity
        radius: 100
    }

    Image {
        anchors.fill: parent
        fillMode:  Image.Tile
        source: "image://theme/graphic-shader-texture"
        opacity: 0.1
        visible: parent.visible
    }

    function clear() {
        //source = ""
    }
}

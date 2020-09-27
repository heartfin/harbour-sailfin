import QtQuick 2.6
import Sailfish.Silica 1.0

Rectangle {
    property real shimOpacity: 1.0
    property color shimColor: Theme.overlayBackgroundColor
    gradient: Gradient {
                  GradientStop { position: 0.0; color: Theme.rgba(shimColor, 0.0); }
                  GradientStop { position: 1.0; color: Theme.rgba(shimColor, shimOpacity); }
              }

}

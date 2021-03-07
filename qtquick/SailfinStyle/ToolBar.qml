import QtQuick 2.12
import QtGraphicalEffects 1.12
import QtQuick.Templates 2.12 as T

import ".."

T.ToolBar {
    horizontalPadding: SailfinStyle.mediumPadding
    topPadding: SailfinStyle.smallPadding
    bottomPadding: implicitBackgroundHeight / 3 * 2 + SailfinStyle.smallPadding

    implicitHeight: Math.max(background ? background.implicitHeight : 0, contentHeight + topPadding + bottomPadding)
    implicitWidth: Math.max(background ? background.implicitWidth : 0, contentWidth + leftPadding + rightPadding)

    contentHeight: contentItem.implicitHeight || (contentChildren.length === 1 ? contentChildren[0].implicitHeight : 0)
    contentWidth: contentItem.implicitWidth || (contentChildren.length === 1 ? contentChildren[0].implicitWidth : 0)

    background: Item {
        implicitHeight: SailfinStyle.toolbarHeight
        // FIXME: SVG is being "cut", show a rectangle as background as workaround.
        Rectangle {
            anchors {
                left: parent.left; right: parent.right; top: parent.top; bottom: parent.bottom;
                bottomMargin: 75
            }
            color: "crimson"
        }

        BorderImage {
            id: backgroundImage
            anchors.fill: parent
            border { left: 0; right: 0; bottom: 75; top: 10; }
            horizontalTileMode: BorderImage.Stretch
            verticalTileMode: BorderImage.Stretch
            source: Qt.resolvedUrl("assets/ToolBarBackground.svg")
            visible: false
        }

        ColorOverlay {
            anchors.fill: backgroundImage
            source: backgroundImage
            color: "crimson"
        }
    }
}

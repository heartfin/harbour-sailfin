pragma Singleton
import QtQuick 2.12

QtObject {
    readonly property real scaleFactor: 1.0
    readonly property real unit: 8.0 * scaleFactor
    readonly property real smallPadding: unit
    readonly property real mediumPadding: 2 * unit
    readonly property real largePadding: 3 * unit
    readonly property real hugePadding: 4 * unit
    readonly property real enormousPadding: 5 * unit

    // Fonts
    readonly property real fontMultiplier: 1.0
    readonly property real fontSizeMedium: 3 * unit * fontMultiplier
    readonly property real fontSizeLarge: 4 * unit * fontMultiplier

    // Specific controls
    readonly property real toolbarHeight: 8 * unit
}

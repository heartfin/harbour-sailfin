import QtQuick 2.12
import QtQuick.Particles 2.12

Rectangle {
    id: root
    anchors.fill: parent
    color: "#ccc"

    readonly property real normalStrength: 0.5

    MouseArea {
        anchors.fill: parent
        acceptedButtons: Qt.LeftButton | Qt.RightButton
        onClicked: {
            if (mouse.button == Qt.LeftButton) {
                enter();
            } else {
                exit();
            }
        }
    }

    ParticleSystem {
        id: particleSystem
    }

    Emitter {
        id: emitter
        anchors.centerIn: parent
        width: parent.width * 0.5
        height: parent.height * 0.5
        system: particleSystem
        emitRate: Math.sqrt(width * height) * 30 / (lifeSpan)
        lifeSpan: 10000
        lifeSpanVariation: 1000
        size: 12
        endSize: 24
        sizeVariation: 6
        shape: EllipseShape {}
    }

    Attractor {
        id: affector
        anchors.centerIn: parent
        width: parent.width * 2
        height: parent.height * 2
        affectedParameter: Attractor.Position
        system: particleSystem
        pointX: width / 2
        pointY: height / 2
        proportionalToDistance: Attractor.Linear
        strength: -normalStrength
    }

    Wander {
        anchors.fill: parent
        system: particleSystem
        pace: 300
        affectedParameter: Wander.Velocity
        xVariance: 1000
        yVariance: 1000
    }


    ImageParticle {
        //source: Qt.resolvedUrl("../../assets/img/particle.png")
        source: "qrc:/particleresources/fuzzydot.png"
        system: particleSystem
        alpha: 0.7
        alphaVariation: 0.3
    }

    SequentialAnimation {
        id: enterAnimation
        NumberAnimation {
            target: affector
            property: "strength"
            from: - 5 * normalStrength
            to: -normalStrength
            easing.type: Easing.OutQuad
            duration: 1000
        }
        ScriptAction {
            script: emitter.burst(10)
        }
    }

    SequentialAnimation {
        id: exitAnimation
        PropertyAction {
            target: affector
            property: "strength"
            value: 4 * normalStrength
        }
        PauseAnimation {
            duration: 500
        }
        NumberAnimation {
            target: affector
            property: "strength"
            easing.type: Easing.InOutQuad
            to: -normalStrength
            duration: 500
        }
    }

    function enter() {
        console.log("Enter animation")
        enterAnimation.start();
    }

    function exit() {
        console.log("Exit animation")
        exitAnimation.start();
    }
}

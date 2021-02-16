import QtQuick 2.12
import QtQuick.Particles 2.12

Rectangle {
    color: "black"

    ParticleSystem {
        id: particleSystem
    }

    Emitter {
        id: emitter
        anchors.fill: parent
        system: particleSystem
        emitRate: width * height / (lifeSpan * 100)
        lifeSpan: 10000
        lifeSpanVariation: 500
        size: 16
        endSize: 64
    }

    Wander {
        anchors.fill: parent
        system: particleSystem
        pace: 100
        affectedParameter: Wander.Velocity
        xVariance: 300
        yVariance: 300
    }


    ImageParticle {
        source: "/assets/img/particle.png"
        system: particleSystem
    }
}

#include <QDebug>
#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QString>

#include <JellyfinQt/jellyfin.h>

int main(int argc, char** argv) {
    QGuiApplication app(argc, argv);
    app.setApplicationDisplayName(QStringLiteral("Sailfin QtQuick"));

    qDebug() << "Creating engine";
    QQmlApplicationEngine engine;

    qDebug() << "Registering types";
    Jellyfin::registerTypes();

    qDebug() << "Loading file";
    engine.load(QStringLiteral("qrc:/qml/main.qml"));
    qDebug() << "Entering event loop";
    return app.exec();
}

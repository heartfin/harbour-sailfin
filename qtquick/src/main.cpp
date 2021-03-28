#define QT_DEBUG
#define QT_QML_DEBUG
#include <QtQuick>
//#endif

#include <QDebug>
#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QString>

#include <QtCore/qloggingcategory.h>

#include <JellyfinQt/jellyfin.h>

int main(int argc, char** argv) {
    QGuiApplication app(argc, argv);
    app.setApplicationDisplayName(QStringLiteral("Sailfin QtQuick"));

#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    // Disable Qt nagging about "implicitly defined onFoo properties in connections are deprecated",
    // as we cannot yet move towards a newer version.
    QLoggingCategory::setFilterRules("qt.qml.connections=false");
#endif

    qDebug() << "Creating engine";
    QQmlApplicationEngine engine;

    qDebug() << "Registering types";
    Jellyfin::registerTypes();

    qDebug() << "Loading file";
    engine.load(QStringLiteral("qrc:/qml/main.qml"));
    qDebug() << "Entering event loop";
    return app.exec();
}

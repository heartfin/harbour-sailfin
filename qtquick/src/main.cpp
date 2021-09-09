#ifndef QT_DEBUG
#include <QtQuick>
#endif

#include <QDebug>
#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QString>

#include <QtCore/qloggingcategory.h>

#include <JellyfinQt/jellyfin.h>

int main(int argc, char** argv) {
    QGuiApplication app(argc, argv);
    app.setApplicationDisplayName(QStringLiteral("Sailfin QtQuick"));
    app.setApplicationName("Sailfin QtQuick");
    app.setOrganizationDomain("nl.netsoj.chris");
    app.setOrganizationName("Chris Josten");

    qSetMessagePattern("[%{time yyyyMMdd h:mm:ss.zzz} %{if-debug}D%{endif}%{if-info}I%{endif}%{if-warning}W%{endif}%{if-critical}C%{endif}%{if-fatal}F%{endif}] %{if-category}<%{category}> %{endif} %{message}");

#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    // Disable Qt nagging about "implicitly defined onFoo properties in connections are deprecated",
    // as we cannot yet move towards a newer version.
    QLoggingCategory::setFilterRules("qt.qml.connections=false");
#endif

    qDebug() << "Creating engine";
    QQmlApplicationEngine engine;

    qDebug() << "Registering types";
    Jellyfin::JellyfinPlugin plugin;
    plugin.registerTypes("nl.netsoj.chris.Jellyfin");

    qDebug() << "Loading file";
    engine.load(QStringLiteral("qrc:/qml/main.qml"));
    qDebug() << "Entering event loop";
    return app.exec();
}

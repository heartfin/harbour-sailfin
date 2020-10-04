/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2020 Chris Josten

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifdef QT_QML_DEBUG
#include <QtQuick>
#endif

#include <QJSEngine>
#include <QGuiApplication>
#include <QQuickView>
#include <QQmlEngine>

#include <sailfishapp.h>

#include "jellyfinapiclient.h"
#include "jellyfinapimodel.h"
#include "jellyfinitem.h"
#include "jellyfinmediasource.h"
#include "serverdiscoverymodel.h"


void registerQml() {
    const char* QML_NAMESPACE = "nl.netsoj.chris.Jellyfin";
    // Singletons are perhaps bad, but they are convenient :)
    qmlRegisterSingletonType<Jellyfin::ApiClient>(QML_NAMESPACE, 1, 0, "ApiClient", [](QQmlEngine *eng, QJSEngine *js) {
        Q_UNUSED(eng)
        Q_UNUSED(js)
        return dynamic_cast<QObject*>(new Jellyfin::ApiClient());
    });
    qmlRegisterType<Jellyfin::ServerDiscoveryModel>(QML_NAMESPACE, 1, 0, "ServerDiscoveryModel");
    qmlRegisterType<Jellyfin::MediaSource>(QML_NAMESPACE, 1, 0, "MediaSource");

    // API models
    Jellyfin::registerModels(QML_NAMESPACE);
    Jellyfin::registerSerializableJsonTypes(QML_NAMESPACE);
}

int main(int argc, char *argv[]) {
    // SailfishApp::main() will display "qml/harbour-sailfin.qml", if you need more
    // control over initialization, you can use:
    //
    //   - SailfishApp::application(int, char *[]) to get the QGuiApplication *
    //   - SailfishApp::createView() to get a new QQuickView * instance
    //   - SailfishApp::pathTo(QString) to get a QUrl to a resource file
    //   - SailfishApp::pathToMainQml() to get a QUrl to the main QML file
    //
    // To display the view, call "show()" (will show fullscreen on device).
    QGuiApplication *app = SailfishApp::application(argc, argv);
    registerQml();

    QQuickView *view = SailfishApp::createView();
    view->setSource(SailfishApp::pathToMainQml());
    view->show();

    return app->exec();
}

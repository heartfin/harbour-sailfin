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
#include "serverdiscoverymodel.h"


void registerQml() {
    const char* QML_NAMESPACE = "nl.netsoj.chris.Jellyfin";
    qmlRegisterSingletonType<JellyfinApiClient>(QML_NAMESPACE, 1, 0, "ApiClient", [](QQmlEngine *eng, QJSEngine *js) {
        Q_UNUSED(eng)
        Q_UNUSED(js)
        return dynamic_cast<QObject*>(new JellyfinApiClient());
    });
    qmlRegisterType<ServerDiscoveryModel>(QML_NAMESPACE, 1, 0, "ServerDiscoveryModel");

    // API models
    Jellyfin::registerModels(QML_NAMESPACE);
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

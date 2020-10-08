#include "jellyfin.h"
namespace Jellyfin {

void registerTypes() {
    const char* QML_NAMESPACE = "nl.netsoj.chris.Jellyfin";
    // Singletons are perhaps bad, but they are convenient :)
    qmlRegisterSingletonType<Jellyfin::ApiClient>(QML_NAMESPACE, 1, 0, "ApiClient", [](QQmlEngine *eng, QJSEngine *js) {
        Q_UNUSED(eng)
        Q_UNUSED(js)
        return dynamic_cast<QObject*>(new Jellyfin::ApiClient());
    });
    qmlRegisterType<Jellyfin::ServerDiscoveryModel>(QML_NAMESPACE, 1, 0, "ServerDiscoveryModel");
    qmlRegisterType<Jellyfin::PlaybackManager>(QML_NAMESPACE, 1, 0, "PlaybackManager");

    // API models
    Jellyfin::registerModels(QML_NAMESPACE);
    Jellyfin::registerSerializableJsonTypes(QML_NAMESPACE);
}
}

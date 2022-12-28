#include "JellyfinQt/model/controllablesession.h"

#include <optional>

#include "JellyfinQt/loader/http/session.h"
#include "JellyfinQt/loader/requesttypes.h"
#include <JellyfinQt/model/playbackmanager.h>


namespace Jellyfin {
namespace Model {

ControllableSession::ControllableSession(QObject *parent)
    : QObject(parent) {}

// LocalSession
LocalSession::LocalSession(ApiClient &apiClient, QObject *parent)
    : ControllableSession(parent), m_apiClient(apiClient) {}

QString LocalSession::id() const {
    return m_apiClient.deviceId();
}

QString LocalSession::appName() const {
    return m_apiClient.appName();
}

QString LocalSession::name() const {
    //: Shown in a list of devices to indicate that media should be played on this device
    return tr("This device");
}

DeviceType LocalSession::deviceType() const {
    return DeviceType::Unknown;
}

QString LocalSession::userName() const {
    return m_apiClient.userId();
}

PlaybackManager *LocalSession::createPlaybackManager() const {
    return new LocalPlaybackManager();
}

// ControllableJellyfinSession
ControllableJellyfinSession::ControllableJellyfinSession(const QSharedPointer<DTO::SessionInfo> info, QObject *parent)
    : ControllableSession(parent),
      m_data(info) {}

QString ControllableJellyfinSession::id() const {
    return m_data->jellyfinId();
}

QString ControllableJellyfinSession::appName() const {
    return m_data->client();
}

QString ControllableJellyfinSession::name() const {
    return m_data->deviceName();
}

DeviceType ControllableJellyfinSession::deviceType() const {
    return DeviceType::Unknown;
}

QString ControllableJellyfinSession::userName() const {
    return m_data->userName();
}

PlaybackManager * ControllableJellyfinSession::createPlaybackManager() const {
    // TODO: implement
    return nullptr;
}

RemoteSessionScanner::RemoteSessionScanner(QObject *parent)
    : QObject(parent) {}

using GetSessionsLoader = Loader::HTTP::GetSessionsLoader;
class RemoteJellyfinSessionScannerPrivate {
public:
    RemoteJellyfinSessionScannerPrivate(ApiClient *apiClient)
        : apiClient(apiClient) {
    };

    ApiClient *apiClient;
    GetSessionsLoader *loader = nullptr;
};


RemoteJellyfinSessionScanner::RemoteJellyfinSessionScanner(ApiClient *apiClient, QObject *parent)
    : RemoteSessionScanner(parent),
      d_ptr(new RemoteJellyfinSessionScannerPrivate(apiClient)) {
}

RemoteJellyfinSessionScanner::~RemoteJellyfinSessionScanner() {}

void RemoteJellyfinSessionScanner::startScanning() {
    Q_D(RemoteJellyfinSessionScanner);
    if (d->loader != nullptr) return;

    emit resetSessions();
    emit sessionFound(new LocalSession(*d->apiClient));

    Loader::GetSessionsParams params;
    params.setControllableByUserId(d->apiClient->userId());
    d->loader = new GetSessionsLoader(d->apiClient);
    d->loader->setParameters(params);
    connect(d->loader, &Loader::HTTP::GetSessionsLoader::ready, this, [this, d]() {
        if (d->loader == nullptr) return;
        QList<DTO::SessionInfo> sessions = d->loader->result();

        for(auto it = sessions.begin(); it != sessions.end(); it++) {

            // Skip this device
            if (it->jellyfinId() == d->apiClient->deviceId()) continue;

            emit sessionFound(new ControllableJellyfinSession(QSharedPointer<DTO::SessionInfo>::create(*it)));
        }
    });
    d->loader->load();
}

void RemoteJellyfinSessionScanner::stopScanning() {
    Q_D(RemoteJellyfinSessionScanner);
    if (d->loader != nullptr) {
        d->loader->deleteLater();
        d->loader = nullptr;
    }
}

} // NS Model
} // NS Jellyfin

#include "JellyfinQt/model/controllablesession.h"

#include <optional>

#include "JellyfinQt/loader/http/session.h"
#include "JellyfinQt/loader/requesttypes.h"
#include <JellyfinQt/model/playbackmanager.h>
#include <JellyfinQt/model/remotejellyfinplayback.h>


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
    return m_apiClient.deviceType();
}

QString LocalSession::userName() const {
    return QString(); //m_apiClient.userId();
}

PlaybackManager *LocalSession::createPlaybackManager() const {
    LocalPlaybackManager *playbackManager = new LocalPlaybackManager();
    playbackManager->setApiClient(&m_apiClient);
    return playbackManager;
}

// ControllableJellyfinSession
ControllableJellyfinSession::ControllableJellyfinSession(const QSharedPointer<DTO::SessionInfoDto> info, ApiClient &apiClient, QObject *parent)
    : ControllableSession(parent),
      m_data(info),
      m_apiClient(apiClient){}

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
    // This is surely not the best way
    // I based this of https://github.com/jellyfin/jellyfin-web/blob/45793052fa7c854ec97133878c75937065ae4650/src/utils/image.ts
    const QStringList tvDevices = {
        "Samsung Smart TV",
        "Xbox One",
        "Sony PS4",
        "Kodi",
        "Kodi JellyCon",
        "AndroidTV",
        "Android TV",
        "Infuse",
        "Jellyfin Roku",
        "DLNA"
    };

    const QStringList pcDevices = {
        "Jellyfin Web",
    };

    const QStringList phoneDevices = {
        "FinAmp",
        "Jellyfin Mobile (iOS)",
        "Jellyfin Mobile (iPadOS)",
        "Jellyfin Android",
        "Sailfin"
    };

    if (tvDevices.contains(m_data->client())) {
        return DeviceType::Tv;
    } else if (pcDevices.contains(m_data->client())) {
        return DeviceType::Computer;
    } else if (phoneDevices.contains(m_data->client())) {
        return DeviceType::Phone;
    } else {
        return DeviceType::Unknown;
    }
}

QString ControllableJellyfinSession::userName() const {
    return m_data->userName();
}

PlaybackManager * ControllableJellyfinSession::createPlaybackManager() const {
    return new RemoteJellyfinPlayback(m_apiClient, m_data->jellyfinId());
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

    LocalSession *localSession = new LocalSession(*d->apiClient);

    emit resetSessions();
    emit sessionFound(localSession);

    Loader::GetSessionsParams params;
    params.setControllableByUserId(d->apiClient->userId());
    d->loader = new GetSessionsLoader(d->apiClient);
    d->loader->setParameters(params);
    connect(d->loader, &Loader::HTTP::GetSessionsLoader::ready, this, [this, d, localSession]() {
        if (d->loader == nullptr) return;
        QList<DTO::SessionInfoDto> sessions = d->loader->result();
        qDebug() << "Found " << sessions.count() << " sessions";

        for(auto it = sessions.begin(); it != sessions.end(); it++) {

            // Skip this device
            if (it->deviceId() == localSession->id()) continue;

            emit sessionFound(new ControllableJellyfinSession(QSharedPointer<DTO::SessionInfoDto>::create(*it), *d->apiClient));
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

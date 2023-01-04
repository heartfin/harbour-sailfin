#ifndef JELLYFIN_MODEL_CONTROLLABLESESSION_H
#define JELLYFIN_MODEL_CONTROLLABLESESSION_H

#include <QObject>
#include <QScopedPointer>
#include <QSharedPointer>

#include "JellyfinQt/dto/sessioninfo.h"

namespace Jellyfin {

class ApiClient;

namespace DTO {
class ClientCapabilities;
} // NS DTO

namespace Model {

class PlaybackManager;

class DeviceTypeClass { Q_GADGET
public:
    enum Value {
        Unknown,
        Tv,
        Computer,
        Phone
    };
    Q_ENUM(Value)
};

class MediaTypeClass {
    Q_GADGET
public:
    enum Value {
        None  = 0x0,
        Audio = 0x1,
        Video = 0x2,
        Photo = 0x4
    };
    Q_DECLARE_FLAGS(MediaTypes, Value)
};

Q_DECLARE_OPERATORS_FOR_FLAGS(MediaTypeClass::MediaTypes)

using DeviceType = DeviceTypeClass::Value;
using MediaTypes = MediaTypeClass::MediaTypes;

/**
 * @brief Abstract class for describing a playback session that can be controlled.
 *
 * Main purpose for this class is to hold information for displaying it in a UI for an user to select
 * and to create an implementation of a PlaybackManager instance to control this session.
 */
class ControllableSession : public QObject {
    Q_OBJECT
public:
    explicit ControllableSession(QObject *parent = nullptr);
    /**
     * @brief An unique id for this session.
     */
    virtual QString id() const = 0;
    /**
     * @brief An human-readable name for this session
     */
    virtual QString name() const = 0;
    /**
     * @brief The app for this session
     */
    virtual QString appName() const = 0;
    virtual DeviceType deviceType() const = 0;

    /**
     * @brief user The username of who started this session
     */
    virtual QString userName() const = 0;
    /**
     * @brief Creates a playbackManager for this device. This PlaybackManager has no
     * QObject parent and must be cleaned up by the caller.
     */
    virtual PlaybackManager *createPlaybackManager() const = 0;
};

/**
 * @brief Dummy session representing this device.
 */
class LocalSession : public ControllableSession {
    Q_OBJECT
public:
    LocalSession(ApiClient &apiClient, QObject *parent = nullptr);
    QString id() const override;
    QString name() const override;
    QString appName() const override;
    DeviceType deviceType() const override;
    QString userName() const override;
    PlaybackManager *createPlaybackManager() const override;
private:
    ApiClient &m_apiClient;
};

/**
 * @brief A session on the Jellyfin server that can be controlled.
 */
class ControllableJellyfinSession : public ControllableSession {
    Q_OBJECT
public:
    ControllableJellyfinSession(QSharedPointer<DTO::SessionInfo> info, ApiClient &apiClient, QObject *parent = nullptr);
    QString id() const override;
    QString name() const override;
    QString appName() const override;
    DeviceType deviceType() const override;
    QString userName() const override;
    PlaybackManager *createPlaybackManager() const override;
private:
    QSharedPointer<DTO::SessionInfo> m_data;
    ApiClient &m_apiClient;
};

/**
 * Abstract class for finding remotely controllable sessions
 */
class RemoteSessionScanner : public QObject {
    Q_OBJECT
public:
    explicit RemoteSessionScanner(QObject *parent = nullptr);
    /**
     * The session scanner should start discovering sessions
     */
    virtual void startScanning() = 0;
    /**
     * The session scanner should stop discovering sessions
     */
    virtual void stopScanning() = 0;
signals:
    /**
     * This signal should be emitted when an session has been discovered.
     * The session should be reparented to whoever is listening for this signal.
     */
    void sessionFound(Jellyfin::Model::ControllableSession *session);
    /**
     * Should be emitted when an session is gone.
     */
    void sessionLost(const QString &sessionId);
    /**
     * Should be emitted when the listener should delete all sessions by this discoverer.
     */
    void resetSessions();
};


class RemoteJellyfinSessionScannerPrivate;
/**
 * @brief Lists controllable Jellyfin sessions from the Jellyfin server
 */
class RemoteJellyfinSessionScanner : public RemoteSessionScanner {
    Q_OBJECT
    Q_DECLARE_PRIVATE(RemoteJellyfinSessionScanner);
public:
    explicit RemoteJellyfinSessionScanner(ApiClient *client, QObject *parent);
    virtual ~RemoteJellyfinSessionScanner();

    void startScanning() override;
    void stopScanning() override;
private:
    QScopedPointer<RemoteJellyfinSessionScannerPrivate> d_ptr;
};

} // NS Model
} // NS Jellyfin

#endif // JELLYFIN_MODEL_CONTROLLABLESESSION_H

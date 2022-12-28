/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2022 Chris Josten and the Sailfin Contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef JELLYFIN_VIEWMODEL_REMOTEDEVICE_H
#define JELLYFIN_VIEWMODEL_REMOTEDEVICE_H

#include <JellyfinQt/model/controllablesession.h>

#include <QAbstractItemModel>
#include <QList>
#include <QObject>
#include <QQmlParserStatus>
#include <QSharedPointer>

#include <utility>

namespace Jellyfin {

class ApiClient;

namespace ViewModel {

class PlaybackManager;

/**
 * @brief AbstractListModel of remotely controllable devices by JellyfinQt.
 *
 * This class controls a set of \link ViewModel::RemoteSessionScanner RemoteSessionScanners\endlink and
 * puts their found devices in this list.
 */
class RemoteDeviceList : public QAbstractListModel, public QQmlParserStatus {
    Q_OBJECT
    Q_INTERFACES(QQmlParserStatus)

    /**
     * The ApiClient for interacting with the Jellyfin API.
     */
    Q_PROPERTY(Jellyfin::ApiClient* apiClient READ apiClient WRITE setApiClient NOTIFY apiClientChanged)
    /**
     * Gets/sets whether the model is scanning for other devices.
     */
    Q_PROPERTY(bool scanning READ scanning WRITE setScanning NOTIFY scanningChanged);
public:
    enum RoleNames {
        jellyfinId = Qt::UserRole + 1,
        name,
        deviceName,
        deviceType,
        userName,
        session
    };

    explicit RemoteDeviceList(QObject *parent = nullptr);

    ApiClient *apiClient() const { return m_apiClient; }
    void setApiClient(ApiClient *apiClient);

    bool scanning() const { return m_scanning; }
    void setScanning(bool scanning);

    // QAbstractListModel
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override {
        return {
            { RoleNames::jellyfinId, "jellyfinId"},
            { RoleNames::name,       "name"       },
            { RoleNames::deviceName, "deviceName" },
            { RoleNames::deviceType, "deviceType" },
            { RoleNames::userName,   "userName"   },
            { RoleNames::session,    "session"    }
        };
    }

    /**
     * @brief Sets the PlaybackManager to control the session at the given index in this model
     * @param manager The PlaybackManager
     * @param index The index of the session that should be controlled
     */
    Q_INVOKABLE void activateSession(Jellyfin::ViewModel::PlaybackManager *manager, int index);

    // QQmlParserStatus
    void classBegin() override;
    void componentComplete() override;
signals:
    void apiClientChanged();
    void scanningChanged();
private slots:
    void onSessionFound(Jellyfin::Model::ControllableSession * session);
    void onSessionLost(QString sessionId);
    void onSessionsReset();
private:
    ApiClient *m_apiClient = nullptr;
    bool m_scanning = false;
    bool m_componentComplete = false;
    QList<std::pair<Model::RemoteSessionScanner *, QSharedPointer<Model::ControllableSession>>> m_sessions;
    QList<Model::RemoteSessionScanner *> m_scanners;
};

} // NS ViewModel
} // NS Jellyfin

#endif // JELLYFIN_VIEWMODEL_REMOTEDEVICE_H

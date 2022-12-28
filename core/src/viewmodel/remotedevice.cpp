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

#include <JellyfinQt/viewmodel/remotedevice.h>

#include <JellyfinQt/model/controllablesession.h>
#include <JellyfinQt/viewmodel/playbackmanager.h>

namespace Jellyfin {
namespace ViewModel {

RemoteDeviceList::RemoteDeviceList(QObject *parent)
    : QAbstractListModel(parent) {}

void RemoteDeviceList::classBegin() {}
void RemoteDeviceList::componentComplete() {
    m_componentComplete = true;
    if (m_apiClient != nullptr) {
        setApiClient(m_apiClient);
    }
}

void RemoteDeviceList::setApiClient(ApiClient *apiClient) {
    if (m_apiClient != nullptr) {
        for (auto it = m_scanners.begin(); it != m_scanners.end(); it++) {
            disconnect(*it, &Model::RemoteSessionScanner::sessionFound, this, &RemoteDeviceList::onSessionFound);
            disconnect(*it, &Model::RemoteSessionScanner::sessionLost, this, &RemoteDeviceList::onSessionLost);
            disconnect(*it, &Model::RemoteSessionScanner::resetSessions, this, &RemoteDeviceList::onSessionsReset);
        }
        for (auto it = m_sessions.begin(); it != m_sessions.end(); it++) {
            it->first->stopScanning();
            it->first->deleteLater();
            it->second->deleteLater();
        }
        m_scanners.clear();
        m_sessions.clear();
    }
    m_apiClient = apiClient;
    emit apiClientChanged();
    if (!m_componentComplete) return;

    m_scanners.append(new Model::RemoteJellyfinSessionScanner(m_apiClient, this));
    for (auto it = m_scanners.begin(); it != m_scanners.end(); it++) {
        connect(*it, &Model::RemoteSessionScanner::sessionFound, this, &RemoteDeviceList::onSessionFound);
        connect(*it, &Model::RemoteSessionScanner::sessionLost, this, &RemoteDeviceList::onSessionLost);
        connect(*it, &Model::RemoteSessionScanner::resetSessions, this, &RemoteDeviceList::onSessionsReset);
    }
}

int RemoteDeviceList::rowCount(const QModelIndex &parent) const {
    return m_sessions.size();
}

QVariant RemoteDeviceList::data(const QModelIndex &index, int role) const {
    int row = index.row();
    if (!index.isValid() || row < 0 || row > rowCount()) return QVariant();
    const QSharedPointer<Model::ControllableSession> session = m_sessions.at(row).second;
    if (session.isNull()) return QVariant();

    switch (role) {
    case RoleNames::jellyfinId:
        return session->id();
    case RoleNames::name:
        return session->name();
    case RoleNames::deviceName:
        return session->appName();
    case RoleNames::deviceType:
        return QVariant::fromValue<Model::DeviceType>(session->deviceType());
    case RoleNames::userName:
        return session->userName();
    default:
        return QVariant();
    }
}

void RemoteDeviceList::activateSession(PlaybackManager *manager, int index) {
    manager->setControllingSession(m_sessions.at(index).second);
}

void RemoteDeviceList::setScanning(bool scanning) {
    if (scanning == m_scanning) return;
    m_scanning = scanning;
    emit scanningChanged();

    if (scanning) {
        for (auto it = m_scanners.begin(); it != m_scanners.end(); it++) {
            (*it)->startScanning();
        }
    } else {
        for (auto it = m_scanners.begin(); it != m_scanners.end(); it++) {
            (*it)->stopScanning();
        }
    }
}

void RemoteDeviceList::onSessionFound(Model::ControllableSession *session) {
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_sessions.append(std::make_pair(qobject_cast<Model::RemoteSessionScanner *>(sender()), QSharedPointer<Model::ControllableSession>(session)));
    endInsertRows();
}

void RemoteDeviceList::onSessionLost(QString sessionId) {
    Model::RemoteSessionScanner *scanner = qobject_cast<Model::RemoteSessionScanner *>(sender());
    for (int i = 0; i < m_sessions.size(); i++) {
        auto row = m_sessions.at(i);
        if (row.first == scanner && row.second->name() == sessionId) {
            beginRemoveRows(QModelIndex(), i, i);
            m_sessions.removeAt(i);
            if (row.second->parent() == this) {
                row.second->deleteLater();
            }
            endRemoveRows();
            i--;
        }
    }
}

void RemoteDeviceList::onSessionsReset() {
    Model::RemoteSessionScanner *scanner = qobject_cast<Model::RemoteSessionScanner *>(sender());
    for (int i = 0; i < m_sessions.size(); i++) {
        auto row = m_sessions.at(i);
        if (row.first == scanner) {
            beginRemoveRows(QModelIndex(), i, i);
            m_sessions.removeAt(i);
            if (row.second->parent() == this) {
                row.second->deleteLater();
            }
            endRemoveRows();
            i--;
        }
    }
}


} // NS Model
} // NS Jellyfin

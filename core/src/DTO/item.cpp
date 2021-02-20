/*
Sailfin: a Jellyfin client written using Qt
Copyright (C) 2021 Chris Josten

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

#include "JellyfinQt/DTO/item.h"

#include "JellyfinQt/apiclient.h"

namespace Jellyfin {
namespace DTO {

Item::Item(QObject *parent) : RemoteData(parent) {
    connect(this, &RemoteData::apiClientChanged, this, [this](ApiClient *newApiClient) {
        connect(newApiClient, &ApiClient::userDataChanged, this, &Item::onUserDataChanged);
    });
}

Item::Item(QString id, ApiClient *apiClient, QObject *parent)
    : RemoteData(parent), m_id(id) {
    connect(this, &RemoteData::apiClientChanged, this, [this](ApiClient *newApiClient) {
        connect(newApiClient, &ApiClient::userDataChanged, this, &Item::onUserDataChanged);
    });
    setApiClient(apiClient);
}

QString Item::getDataUrl() const {
    return QString("/Users/") + m_apiClient->userId() + "/Items/" + m_id;
}

bool Item::canReload() const {
    return !m_id.isNull() && m_apiClient != nullptr;
}

void Item::setJellyfinId(QString newId) {
    m_id = newId.trimmed();
    if (m_id != newId) {
        emit jellyfinIdChanged(m_id);
        reload();
    }
}

void Item::onUserDataChanged(const QString &itemId, UserData *userData) {
    if (itemId != m_id || m_userData == nullptr) return;
    m_userData->onUpdated(userData);
}

} // NS DTO
} // NS Jellyfin

/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin Contributors.
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

#include <JellyfinQt/model/item.h>

namespace Jellyfin {
namespace Model {


Item::Item()
    : Item(DTO::BaseItemDto(), nullptr) { }

Item::Item(const DTO::BaseItemDto &data, ApiClient *apiClient)
    : DTO::BaseItemDto(data), m_apiClient(apiClient) {
    if (m_apiClient != nullptr) {
        m_apiClientConnections.append(QObject::connect(
                                          m_apiClient->eventbus(),
                                          &EventBus::itemUserDataUpdated,
                                          [&](auto itemId, auto userData) {
                                              onUserDataUpdated(itemId, userData);
                                          }));
    }
}

Item::~Item() {
    for(auto it = m_apiClientConnections.begin(); it != m_apiClientConnections.end(); it++) {
        QObject::disconnect(*it);
    }
}

bool Item::sameAs(const DTO::BaseItemDto &other) {
    return jellyfinId() == other.jellyfinId();
}

void Item::setApiClient(ApiClient *apiClient) {
    if (m_apiClient != nullptr) {
        for(auto it = m_apiClientConnections.begin(); it != m_apiClientConnections.end(); it++) {
            QObject::disconnect(*it);
        }
        m_apiClientConnections.clear();
    }
    this->m_apiClient = apiClient;
    if (apiClient != nullptr) {
        m_apiClientConnections.append(QObject::connect(
                                          m_apiClient->eventbus(),
                                          &EventBus::itemUserDataUpdated,
                                          [&](auto itemId, auto userData) {
                                              onUserDataUpdated(itemId, userData);
                                          }));
    }
}
void Item::onUserDataUpdated(const QString &itemId, const DTO::UserItemDataDto &userData) {

}

}
}

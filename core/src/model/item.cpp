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


Item::Item(ApiClient *apiClient, QObject *parent)
    : Item(DTO::BaseItemDto(
                QString(), // id
                ExtraType::Unknown,
                Video3DFormat::EnumNotSet,
                PlayAccess::Full,
                BaseItemKind::EnumNotSet,
                QSharedPointer<UserItemDataDto>::create(0, 0, false, false, QString(), QString()),
                CollectionType::EnumNotSet,
                VideoType::EnumNotSet,
                LocationType::Virtual,
                IsoType::EnumNotSet,
                MediaType::EnumNotSet,
                ImageOrientation::EnumNotSet,
                ChannelType::EnumNotSet,
                ProgramAudio::EnumNotSet,
                QSharedPointer<DTO::BaseItemDto>(nullptr)
           ),
           apiClient, parent) {
}

Item::Item(const DTO::BaseItemDto &data, ApiClient *apiClient, QObject *parent)
    : QObject(parent),
      DTO::BaseItemDto(data),
      m_apiClient(nullptr) {
    setApiClient(apiClient);
}

bool Item::sameAs(const DTO::BaseItemDto &other) {
    return jellyfinId() == other.jellyfinId();
}

void Item::setApiClient(ApiClient *apiClient) {
    if (m_apiClient != nullptr) {
        disconnect(m_apiClient->eventbus(), &EventBus::itemUserDataUpdated,
                   this, &Item::updateUserData);
    }
    this->m_apiClient = apiClient;
    if (apiClient != nullptr) {
        QObject::connect(m_apiClient->eventbus(), &EventBus::itemUserDataUpdated,
                         this, &Item::updateUserData);
    }
}

void Item::updateUserData(const QString &itemId, const DTO::UserItemDataDto &userData) {
    if (itemId == this->jellyfinId()) {
        this->m_userData = QSharedPointer<DTO::UserItemDataDto>::create(userData);
        emit userDataChanged(userData);
    }
}

}
}

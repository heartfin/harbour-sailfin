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
#include "JellyfinQt/viewmodel/item.h"

namespace Jellyfin {
namespace ViewModel {

Item::Item(QObject *parent)
    : Item(nullptr, parent){}

Item::Item(QSharedPointer<Model::Item> data, QObject *parent)
    : QObject(parent), m_data(data){}

void Item::setData(QSharedPointer<Model::Item> newData) {
    Model::Item oldData = *m_data.data();
    m_data = newData;
}


// ItemLoader

ItemLoader::ItemLoader(QObject *parent)
    : BaseClass(Jellyfin::Loader::HTTP::GetItem(), parent) {
}

void ItemLoader::onApiClientChanged(ApiClient *newApiClient) {
    if (m_apiClient != nullptr) {
        disconnect(m_apiClient, &ApiClient::userIdChanged, this, &ItemLoader::setUserId);
    }
    if (newApiClient != nullptr) {
        m_parameters.setUserId(newApiClient->userId());
        connect(newApiClient, &ApiClient::userIdChanged, this, &ItemLoader::setUserId);
    }
}

void ItemLoader::setUserId(const QString &newUserId) {
    m_parameters.setUserId(newUserId);
}

bool ItemLoader::canReload() const {
    return BaseClass::canReload() && !m_parameters.itemId().isEmpty();
}

}

}

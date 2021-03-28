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
#include "JellyfinQt/viewmodel/itemmodel.h"

#define JF_CASE(roleName) case roleName: \
    return QVariant(item.roleName());

namespace Jellyfin {

namespace ViewModel {

UserViewsLoader::UserViewsLoader(QObject *parent)
    : UserViewsLoaderBase(new Jellyfin::Loader::HTTP::GetUserViewsLoader(), parent) {
    connect(this, &BaseModelLoader::apiClientChanged, this, &UserViewsLoader::apiClientChanged);
}

void UserViewsLoader::apiClientChanged(ApiClient *newApiClient) {
    if (m_apiClient != nullptr) disconnect(m_apiClient, &ApiClient::userIdChanged, this, &UserViewsLoader::userIdChanged);
    if (newApiClient != nullptr) {
        connect(newApiClient, &ApiClient::userIdChanged, this, &UserViewsLoader::userIdChanged);
        if (!newApiClient->userId().isNull()) {
            m_parameters.setUserId(newApiClient->userId());
        }
    }
}

void UserViewsLoader::userIdChanged(const QString &newUserId) {
    m_parameters.setUserId(newUserId);
    autoReloadIfNeeded();
}
void UserItemsLoader::apiClientChanged(ApiClient *newApiClient) {
    if (m_apiClient != nullptr) disconnect(m_apiClient, &ApiClient::userIdChanged, this, &UserItemsLoader::userIdChanged);
    if (newApiClient != nullptr) connect(newApiClient, &ApiClient::userIdChanged, this, &UserItemsLoader::userIdChanged);
}

void UserItemsLoader::userIdChanged(const QString &newUserId) {
    m_parameters.setUserId(newUserId);
    autoReloadIfNeeded();
}

bool UserItemsLoader::canReload() const {
    return BaseModelLoader::canReload() && !m_parameters.userId().isNull();
}

ItemModel::ItemModel(QObject *parent)
    : ApiModel<Model::Item>(parent) { }

QVariant ItemModel::data(const QModelIndex &index, int role) const {
    if (role <= Qt::UserRole || !index.isValid()) return QVariant();
    int row = index.row();
    if (row < 0 || row >= m_array.size()) return QVariant();
    Model::Item item = m_array[row];
    switch(role) {
    JF_CASE(jellyfinId)
    JF_CASE(name)
    JF_CASE(originalTitle)
    JF_CASE(serverId)
    JF_CASE(etag)
    JF_CASE(sourceType)
    JF_CASE(playlistItemId)
    JF_CASE(dateCreated)
    JF_CASE(dateLastMediaAdded)
    JF_CASE(extraType)
    default:
        return QVariant();
    }

}

} // NS ViewModel

} // NS Jellyfin

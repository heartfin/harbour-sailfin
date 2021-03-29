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

#include "JellyfinQt/loader/http/getlatestmedia.h"
#include "JellyfinQt/loader/http/getitemsbyuserid.h"

#define JF_CASE(roleName) case roleName: \
    try { \
        return QVariant(item.roleName()); \
    } catch(std::bad_optional_access e) { \
        return QVariant(); \
    }

namespace Jellyfin {

namespace ViewModel {

UserViewsLoader::UserViewsLoader(QObject *parent)
    : UserViewsLoaderBase(new Jellyfin::Loader::HTTP::GetUserViewsLoader(), parent) { }

LatestMediaLoader::LatestMediaLoader(QObject *parent)
    : LatestMediaBase(new Jellyfin::Loader::HTTP::GetLatestMediaLoader(), parent){ }

UserItemsLoader::UserItemsLoader(QObject *parent)
    : UserItemsLoaderBase(new Jellyfin::Loader::HTTP::GetItemsByUserIdLoader(), parent) {}

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
    // Handpicked, important ones
    JF_CASE(imageTags)
    default:
        return QVariant();
    }

}

} // NS ViewModel

} // NS Jellyfin

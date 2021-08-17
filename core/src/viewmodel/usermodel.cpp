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
#include "JellyfinQt/viewmodel/usermodel.h"

namespace Jellyfin {
namespace ViewModel {

UserModel::UserModel(QObject *parent)
    : ApiModel<Model::User>(parent) {}

QVariant UserModel::data(const QModelIndex &index, int role) const {
    if (role <= Qt::UserRole || !index.isValid()) return QVariant();
    int row = index.row();
    if (row < 0 || row >= m_array.size()) return QVariant();
    QSharedPointer<Model::User> item = m_array[row];

    switch(role) {
    case userId:
        return QVariant(item->jellyfinId());
    case name:
        return QVariant(item->name());
    case hasPassword:
        return QVariant(item->hasPassword());
    case primaryImageTag:
        return QVariant(item->primaryImageTag());
    default:
        return QVariant();
    }
}

PublicUsersLoader::PublicUsersLoader(QObject *parent)
    : PublicUsersLoaderBase(new Loader::HTTP::GetPublicUsersLoader(), parent) {}

bool PublicUsersLoader::canReload() const {
    return m_apiClient != nullptr && !m_apiClient->baseUrl().isNull();
}


} // NS ViewModel
} // NS Jellyfin

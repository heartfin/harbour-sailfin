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

#include "JellyfinQt/viewmodel/user.h"

#include "JellyfinQt/loader/http/getuserbyid.h"

namespace Jellyfin {
namespace ViewModel {

// User
User::User(QObject *parent, QSharedPointer<Model::User> data)
    : QObject(parent),
      m_data(data) {

}

void User::setData(QSharedPointer<Model::User> newData) {
    m_data = newData;
}


// UserLoader
UserLoader::UserLoader(QObject *parent)
    : UserLoaderBase(new Jellyfin::Loader::HTTP::GetUserByIdLoader(), parent) {}

void UserLoader::setUserId(QString newUserId) {
    m_parameters.setUserId(newUserId);
    reloadIfNeeded();
    emit userIdChanged(newUserId);
}

bool UserLoader::canReload() const {
    return UserLoaderBase::canReload()
            && !m_parameters.userId().isEmpty();
}

} // NS ViewModel
} // NS Jellyfin

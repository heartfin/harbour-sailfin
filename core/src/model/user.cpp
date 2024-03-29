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

#include "JellyfinQt/model/user.h"

namespace Jellyfin {
namespace Model {

User::User(ApiClient *apiClient)
    : DTO::UserDto(QString(), false, false, false,
                   QSharedPointer<DTO::UserConfiguration>(), QSharedPointer<DTO::UserPolicy>()) {
}

User::User(const DTO::UserDto &other, ApiClient *apiClient)
    : DTO::UserDto(other) {
    Q_UNUSED(apiClient)
}

bool User::sameAs(const DTO::UserDto &other) {
    return this->jellyfinId() == other.jellyfinId();
}


} // NS Model
} // NS Jellyfin

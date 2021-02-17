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

#include "JellyfinQt/DTO/types.h"

#include <QtQml>

namespace Jellyfin {
namespace DTO {

void registerTypes(const char *uri) {
    qmlRegisterType<MediaStream>(uri, 1, 0, "MediaStream");
    qmlRegisterType<NameGuidPair>(uri, 1, 0, "NameGuidPair");
    qmlRegisterType<User>(uri, 1, 0, "User");
    qmlRegisterType<UserData>(uri, 1, 0, "UserData");
    qmlRegisterType<Item>(uri, 1, 0, "JellyfinItem");
}

} // NS DTO
} // NS Jellyfin

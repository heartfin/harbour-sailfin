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
#include <JellyfinQt/viewmodel/userdata.h>

namespace Jellyfin {
namespace ViewModel {

UserData::UserData(QObject *parent)
    : UserData(QSharedPointer<DTO::UserItemDataDto>::create(0, 0, false, false, QString(), QString()), parent) {

}

UserData::UserData(QSharedPointer<DTO::UserItemDataDto> data, QObject *parent)
    : QObject(parent),
      m_data(data) {
    if (m_data.isNull()) {
        m_data = QSharedPointer<DTO::UserItemDataDto>::create(0, 0, false, false, QString(), QString());
    }
}

void UserData::setData(QSharedPointer<DTO::UserItemDataDto> data) {
    if (data.isNull()) {
        m_data = QSharedPointer<DTO::UserItemDataDto>::create(0, 0, false, false, QString(), QString());
    } else {
        m_data = data;
    }
}

} // NS ViewModel
} // NS Jellyfin

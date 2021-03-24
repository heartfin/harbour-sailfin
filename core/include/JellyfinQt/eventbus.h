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

#ifndef JELLYFIN_EVENTBUS_H
#define JELLYFIN_EVENTBUS_H

#include <QObject>

namespace Jellyfin {
namespace DTO {
    class UserItemDataDto;
}

/**
 * @brief "EventBus" object through which "events" are sent.
 */
class EventBus : public QObject {
    Q_OBJECT
public:
    explicit EventBus(QObject *parent = nullptr);

signals:
    /**
     * @brief The UserData of an Item has been updated.
     * @param itemId The id of the item which was updated.
     * @param userData The new userData
     */
    void itemUserDataUpdated(const QString &itemId, const DTO::UserItemDataDto &userData);
};

}

#endif //JELLYVIN_EVENTBUS_H

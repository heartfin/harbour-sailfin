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

#ifndef JELLYFIN_MODEL_ITEM
#define JELLYFIN_MODEL_ITEM

#include <QList>
#include <QThreadPool>
#include <QtConcurrent/QtConcurrent>

#include "../dto/baseitemdto.h"
#include "../support/loader.h"
#include "../apiclient.h"

namespace Jellyfin {
namespace Model {

class Item : public DTO::BaseItemDto {
public:
    /**
     * @brief Constructor that creates an empty item.
     */
    Item();

    /**
     * @brief Copies the data from the DTO into this model and attaches an ApiClient
     * @param data The DTO to copy information from
     * @param apiClient The ApiClient to attach to, to listen for updates and so on.
     */
    Item(const DTO::BaseItemDto &data, ApiClient *apiClient = nullptr);
    virtual ~Item();

    /**
     * @brief sameAs Returns true if this item represents the same item as `other`
     *
     * Note that this does not mean each property is the same, this just mean both of
     * these models represent the same item.
     *
     * @param other The item to compare to
     * @return True if they represent the same item, false otherwise.
     */
    bool sameAs(const DTO::BaseItemDto &other);

    void setApiClient(ApiClient *apiClient);
private:
    ApiClient *m_apiClient = nullptr;
    QList<QMetaObject::Connection> m_apiClientConnections;

    void onUserDataUpdated(const QString &itemId, const DTO::UserItemDataDto &userData);
};

}
}

#endif // JELLYFIN_MODEL_ITEM

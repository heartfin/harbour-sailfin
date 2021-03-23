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
#ifndef JELLYFIN_LIBRARY_STORE_H
#define JELLYFIN_LIBRARY_STORE_H

#include <string>

#include <immer/map.hpp>

#include "../DTO/baseitemdto.h"

namespace Jellyfin {
namespace Library {

/**
 * @brief Stores information about one Jellyfin Item.
 */
struct ItemStore {
    std::string id;
    std::string name;
};

struct ItemListStore {
    immer::map<std::string, ItemStore> itemList;
};

}
}

#endif // JELLYFIN_LIBRARY_STORE_H

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
#ifndef JELLYFIN_LIBRARY_REDUCER_H
#define JELLYFIN_LIBRARY_REDUCER_H

#include <utility>

#include <lager/context.hpp>
#include <lager/util.hpp>


#include "actions.h"
#include "store.h"

namespace Jellyfin {
namespace Library {

using ItemListResult = std::pair<ItemListStore, lager::effect<Action>>;

ItemListResult update(ItemListStore store, Action action);

}
}

#endif // JELLYFIN_LIBRARY_REDUCER_H

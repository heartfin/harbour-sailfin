/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin Contributors
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
#ifndef JELLYFIN_H
#define JELLYFIN_H

#include <QtQml>

#include "model/item.h"
#include "dto/mediastream.h"
#include "dto/nameguidpair.h"
#include "dto/userdto.h"
#include "dto/useritemdatadto.h"

#include "apiclient.h"
#include "apimodel.h"
#include "serverdiscoverymodel.h"
#include "websocket.h"
#include "viewmodel/item.h"
#include "viewmodel/itemmodel.h"
#include "viewmodel/loader.h"
#include "viewmodel/modelstatus.h"
#include "viewmodel/playbackmanager.h"
#include "viewmodel/playlist.h"
#include "viewmodel/userdata.h"
#include "viewmodel/usermodel.h"
#include "viewmodel/user.h"

namespace Jellyfin {

void registerTypes(const char *uri = "nl.netsoj.chris.Jellyfin");

}

#endif // JELLYFIN_H

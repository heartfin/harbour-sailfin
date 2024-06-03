/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021 Chris Josten and the Sailfin contributes
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
#include "JellyfinQt/jellyfin.h"

#include "JellyfinQt/model/item.h"
#include "JellyfinQt/dto/itemfields.h"
#include "JellyfinQt/dto/mediastream.h"
#include "JellyfinQt/dto/nameguidpair.h"
#include "JellyfinQt/dto/userdto.h"
#include "JellyfinQt/dto/useritemdatadto.h"

#include "JellyfinQt/apiclient.h"
#include "JellyfinQt/apimodel.h"
#include "JellyfinQt/eventbus.h"
#include "JellyfinQt/serverdiscoverymodel.h"
#include "JellyfinQt/websocket.h"
#include "JellyfinQt/model/controllablesession.h"
#include "JellyfinQt/model/player.h"
#include "JellyfinQt/viewmodel/item.h"
#include "JellyfinQt/viewmodel/itemmodel.h"
#include "JellyfinQt/viewmodel/loader.h"
#include "JellyfinQt/viewmodel/mediastream.h"
#include "JellyfinQt/viewmodel/modelstatus.h"
#include "JellyfinQt/viewmodel/platformmediacontrol.h"
#include "JellyfinQt/viewmodel/playbackmanager.h"
#include "JellyfinQt/viewmodel/playlist.h"
#include "JellyfinQt/viewmodel/remotedevice.h"
#include "JellyfinQt/viewmodel/settings.h"
#include "JellyfinQt/viewmodel/userdata.h"
#include "JellyfinQt/viewmodel/usermodel.h"
#include "JellyfinQt/viewmodel/user.h"

namespace Jellyfin {

void JellyfinPlugin::registerTypes(const char *uri) {
    qmlRegisterType<ApiClient>(uri, 1, 0, "ApiClient");
    qmlRegisterType<ServerDiscoveryModel>(uri, 1, 0, "ServerDiscoveryModel");
    qmlRegisterType<ViewModel::PlaybackManager>(uri, 1, 0, "PlaybackManager");
    qmlRegisterType<ViewModel::PlatformMediaControl>(uri, 1, 0, "PlatformMediaControl");
    qmlRegisterUncreatableType<ViewModel::Item>(uri, 1, 0, "Item", "Acquire one via ItemLoader or exposed properties");
    qmlRegisterUncreatableType<ViewModel::User>(uri, 1, 0, "User", "Acquire one via UserLoader or exposed properties");
    qmlRegisterUncreatableType<EventBus>(uri, 1, 0, "EventBus", "Obtain one via your ApiClient");
    qmlRegisterUncreatableType<WebSocket>(uri, 1, 0, "WebSocket", "Obtain one via your ApiClient");
    qmlRegisterUncreatableType<ViewModel::NameGuidPair>(uri, 1, 0, "NameGuidPair", "Obbtain one via an Item");
    qmlRegisterUncreatableType<ViewModel::MediaStream>(uri, 1, 0, "MediaStream", "Obtain one via an Item");
    qmlRegisterUncreatableType<ViewModel::Settings>(uri, 1, 0, "Settings", "Obtain one via your ApiClient");
    qmlRegisterUncreatableType<ViewModel::UserData>(uri, 1, 0, "UserData", "Obtain one via an Item");

    // AbstractItemModels
    qmlRegisterUncreatableType<BaseApiModel>(uri, 1, 0, "BaseApiModel", "Please use one of its subclasses");
    qmlRegisterUncreatableType<BaseModelLoader>(uri, 1, 0, "BaseModelLoader", "Please use one of its subclasses");
    qmlRegisterType<ViewModel::ItemModel>(uri, 1, 0, "ItemModel");
    qmlRegisterType<ViewModel::UserModel>(uri, 1, 0, "UserModel");
    qmlRegisterUncreatableType<ViewModel::Playlist>(uri, 1, 0, "Playlist", "Available via PlaybackManager");
    qmlRegisterType<ViewModel::RemoteDeviceList>(uri, 1, 0, "RemoteDeviceList");

    // Loaders
    qmlRegisterUncreatableType<ViewModel::LoaderBase>(uri, 1, 0, "LoaderBase", "Use one of its subclasses");
    qmlRegisterType<ViewModel::ItemLoader>(uri, 1, 0, "ItemLoader");
    qmlRegisterType<ViewModel::UserLoader>(uri, 1, 0, "UserLoader");
    qmlRegisterType<ViewModel::LatestMediaLoader>(uri, 1, 0, "LatestMediaLoader");
    qmlRegisterType<ViewModel::UserItemsLoader>(uri, 1, 0, "UserItemsLoader");
    qmlRegisterType<ViewModel::UserViewsLoader>(uri, 1, 0, "UsersViewsLoader");
    qmlRegisterType<ViewModel::ResumeItemsLoader>(uri, 1, 0, "ResumeItemsLoader");
    qmlRegisterType<ViewModel::ShowSeasonsLoader>(uri, 1, 0, "ShowSeasonsLoader");
    qmlRegisterType<ViewModel::ShowEpisodesLoader>(uri, 1, 0, "ShowEpisodesLoader");
    qmlRegisterType<ViewModel::NextUpLoader>(uri, 1, 0, "NextUpLoader");
    qmlRegisterType<ViewModel::PublicUsersLoader>(uri, 1, 0, "PublicUsersLoader");
    qmlRegisterType<ViewModel::AlbumArtistLoader>(uri, 1, 0, "AlbumArtistLoader");
    qmlRegisterType<ViewModel::LiveTvChannelsLoader>(uri, 1, 0, "LiveTvChannelsLoader");

    // Enumerations
    qmlRegisterUncreatableType<Jellyfin::DTO::GeneralCommandTypeClass>(uri, 1, 0, "GeneralCommandType", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::ViewModel::ModelStatusClass>(uri, 1, 0, "ModelStatus", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::DTO::PlayMethodClass>(uri, 1, 0, "PlayMethod", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::DTO::ItemFieldsClass>(uri, 1, 0, "ItemFields", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::DTO::ImageTypeClass>(uri, 1, 0, "ImageType", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::ViewModel::NowPlayingSection>(uri, 1, 0, "NowPlayingSection", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::Model::PlayerStateClass>(uri, 1, 0, "PlayerState", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::Model::MediaStatusClass>(uri, 1, 0, "MediaStatus", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::Model::DeviceTypeClass>(uri, 1, 0, "DeviceType", "Is an enum");

    qRegisterMetaType<Jellyfin::DTO::PlayMethodClass::Value>();
}
}

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
namespace Jellyfin {

void registerTypes(const char *uri) {
    qmlRegisterType<ApiClient>(uri, 1, 0, "ApiClient");
    qmlRegisterType<ServerDiscoveryModel>(uri, 1, 0, "ServerDiscoveryModel");
    qmlRegisterType<ViewModel::PlaybackManager>(uri, 1, 0, "PlaybackManager");
    qmlRegisterType<ViewModel::PlatformMediaControl>(uri, 1, 0, "PlatformMediaControl");
    qmlRegisterUncreatableType<ViewModel::Item>(uri, 1, 0, "Item", "Acquire one via ItemLoader or exposed properties");
    qmlRegisterUncreatableType<ViewModel::User>(uri, 1, 0, "User", "Acquire one via UserLoader or exposed properties");
    qmlRegisterUncreatableType<EventBus>(uri, 1, 0, "EventBus", "Obtain one via your ApiClient");
    qmlRegisterUncreatableType<WebSocket>(uri, 1, 0, "WebSocket", "Obtain one via your ApiClient");
    qmlRegisterUncreatableType<ViewModel::MediaStream>(uri, 1, 0, "MediaStream", "Obtain one via an Item");
    qmlRegisterUncreatableType<ViewModel::UserData>(uri, 1, 0, "UserData", "Obtain one via an Item");

    // AbstractItemModels
    qmlRegisterUncreatableType<BaseApiModel>(uri, 1, 0, "BaseApiModel", "Please use one of its subclasses");
    qmlRegisterUncreatableType<BaseModelLoader>(uri, 1, 0, "BaseModelLoader", "Please use one of its subclasses");
    qmlRegisterType<ViewModel::ItemModel>(uri, 1, 0, "ItemModel");
    qmlRegisterType<ViewModel::UserModel>(uri, 1, 0, "UserModel");
    qmlRegisterUncreatableType<ViewModel::Playlist>(uri, 1, 0, "Playlist", "Available via PlaybackManager");

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
    qmlRegisterType<ViewModel::PublicUsersLoader>(uri, 1, 0, "PublicUsersLoader");

    // Enumerations
    qmlRegisterUncreatableType<Jellyfin::DTO::GeneralCommandTypeClass>(uri, 1, 0, "GeneralCommandType", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::ViewModel::ModelStatusClass>(uri, 1, 0, "ModelStatus", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::DTO::PlayMethodClass>(uri, 1, 0, "PlayMethod", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::DTO::ItemFieldsClass>(uri, 1, 0, "ItemFields", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::DTO::ImageTypeClass>(uri, 1, 0, "ImageType", "Is an enum");
    qmlRegisterUncreatableType<Jellyfin::ViewModel::NowPlayingSection>(uri, 1, 0, "NowPlayingSection", "Is an enum");

    qRegisterMetaType<Jellyfin::DTO::PlayMethodClass::Value>();
}
}

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
#include "JellyfinQt/jellyfin.h"
namespace Jellyfin {

void registerTypes(const char *uri) {
    // Singletons are perhaps bad, but they are convenient :)
    qmlRegisterSingletonType<Jellyfin::ApiClient>(uri, 1, 0, "ApiClient", [](QQmlEngine *eng, QJSEngine *js) {
        Q_UNUSED(eng)
        Q_UNUSED(js)
        return dynamic_cast<QObject*>(new Jellyfin::ApiClient());
    });
    qmlRegisterType<Jellyfin::ServerDiscoveryModel>(uri, 1, 0, "ServerDiscoveryModel");
    qmlRegisterType<Jellyfin::PlaybackManager>(uri, 1, 0, "PlaybackManager");

    // API models
    Jellyfin::registerModels(uri);
    //Jellyfin::DTO::registerTypes(uri);
    Jellyfin::registerRemoteTypes(uri);
}
}

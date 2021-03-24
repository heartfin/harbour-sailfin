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

#include "JellyfinQt/viewmodel/loader.h"
#include "JellyfinQt/apiclient.h"

namespace Jellyfin {
namespace ViewModel {

bool LoaderBase::canReload() const {
    return m_apiClient != nullptr && !m_isParsing;
}

void LoaderBase::setStatus(Status newStatus) {
    m_status = newStatus;
    emit statusChanged(newStatus);
    if (newStatus == Ready) emit ready();
}

void LoaderBase::setErrorString(const QString &newErrorString) {
    m_errorString = newErrorString;
    emit errorStringChanged(newErrorString);
}

void LoaderBase::setApiClient(ApiClient *newApiClient) {
    m_apiClient = newApiClient;
    emit apiClientChanged(newApiClient);
    if (canReload()) reload();
}

void LoaderBase::emitDataChanged() {
    emit viewModelChanged();
}

void registerRemoteTypes(const char *uri) {
    //qmlRegisterUncreatableType<BaseItemDto>(uri, 1, 0, "JellyfinItem", "Please use RemoteItem instead");
    //qmlRegisterType<RemoteItem>(uri, 1, 0, "JellyfinItem");
}

} // NS ViewModel
} // NS Jellyfin

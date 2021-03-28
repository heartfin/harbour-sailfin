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

#include "JellyfinQt/apimodel.h"

#include "JellyfinQt/DTO/baseitemdto.h"
#include "JellyfinQt/DTO/useritemdatadto.h"
#include "JellyfinQt/DTO/userdto.h"

namespace Jellyfin {

// BaseApiModel
namespace DTO {
    using UserData = DTO::UserItemDataDto;
    using User = DTO::UserDto;
}
using User = DTO::UserDto;

BaseModelLoader::BaseModelLoader(QObject *parent)
    : QObject(parent) { }

void BaseModelLoader::classBegin() {
    m_isBeingParsed = true;
}

void BaseModelLoader::componentComplete() {
    m_isBeingParsed = false;
    autoReloadIfNeeded();
}

void BaseModelLoader::autoReloadIfNeeded() {
    if (m_autoReload && canReload()) {
        emit reloadWanted();
    }
}

void BaseModelLoader::setApiClient(ApiClient *newApiClient) {
    bool changed = this->m_apiClient != newApiClient;
    m_apiClient = newApiClient;
    if (changed) {
        emit apiClientChanged(newApiClient);
    }
}

void BaseModelLoader::setLimit(int newLimit) {
    int oldLimit = this->m_limit;
    m_limit = newLimit;
    if (oldLimit != this->m_limit) {
        emit limitChanged(this->m_limit);
    }
}

void BaseModelLoader::setAutoReload(bool newAutoReload) {
    if (m_autoReload != newAutoReload) {
        m_autoReload = newAutoReload;
        emit autoReloadChanged(newAutoReload);
    }
}

bool BaseModelLoader::canReload() const {
    return m_apiClient != nullptr && (!m_needsAuthentication || m_apiClient->authenticated());
}

void BaseApiModel::reload() {
    qWarning() << " BaseApiModel slot called instead of overloaded method";
}

void setStartIndex(Loader::GetUserViewsParams &params, int startIndex) {
    // Not supported
    Q_UNUSED(params)
    Q_UNUSED(startIndex)
}

void setLimit(Loader::GetUserViewsParams &params, int limit) {
    Q_UNUSED(params)
    Q_UNUSED(limit)
}

QList<DTO::BaseItemDto> extractRecords(const DTO::BaseItemDtoQueryResult &result) {
    return result.items();
}

int extractTotalRecordCount(const DTO::BaseItemDtoQueryResult &result) {
    return result.totalRecordCount();
}


void registerModels(const char *URI) {
    Q_UNUSED(URI)
    //qmlRegisterUncreatableType<ApiModel>(URI, 1, 0, "ApiModel", "Is enum and base class");
    //qmlRegisterType<PublicUserModel>(URI, 1, 0, "PublicUserModel");
}
}

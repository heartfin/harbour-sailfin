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
#define JELLYFIN_APIMODEL_CPP
#include "JellyfinQt/apimodel.h"

#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/useritemdatadto.h"
#include "JellyfinQt/dto/userdto.h"

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
        qDebug() << "reloading due to 'autoReloadIfNeeded()'";
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
    if (oldLimit != newLimit) {
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
    return m_apiClient != nullptr
            && !m_isBeingParsed
            // If the loader for this model needs authentication (almost every one does)
            // block if the ApiClient is not authenticated yet.
            && (!m_needsAuthentication || m_apiClient->authenticated())
            // Only allow for a reload if this model is ready or uninitialised.
            && (m_status == ViewModel::ModelStatus::Ready
                || m_status == ViewModel::ModelStatus::Uninitialised);
}

void BaseApiModel::reload() {
    qWarning() << " BaseApiModel slot called instead of overloaded method";
}

// Parameters injectors and result extractors

template <>
bool setRequestStartIndex(Loader::GetUserViewsParams &params, int startIndex) {
    // Not supported
    Q_UNUSED(params)
    Q_UNUSED(startIndex)
    return false;
}

template <>
void setRequestLimit(Loader::GetUserViewsParams &params, int limit) {
    Q_UNUSED(params)
    Q_UNUSED(limit)
}

template <>
QList<DTO::BaseItemDto> extractRecords(const DTO::BaseItemDtoQueryResult &result) {
    return result.items();
}

template <>
int extractTotalRecordCount(const DTO::BaseItemDtoQueryResult &result) {
    return result.totalRecordCount();
}

template <>
QList<DTO::BaseItemDto> extractRecords(const QList<DTO::BaseItemDto> &result) {
    return result;
}

template <>
int extractTotalRecordCount(const QList<DTO::BaseItemDto> &result) {
    return result.size();
}

template<>
void setRequestLimit(Loader::GetLatestMediaParams &params, int limit) {
    params.setLimit(limit);
}

template<>
bool setRequestStartIndex(Loader::GetLatestMediaParams &params, int offset) {
    Q_UNUSED(params)
    Q_UNUSED(offset)
    return false;
}


void registerModels(const char *URI) {
    Q_UNUSED(URI)
    //qmlRegisterUncreatableType<ApiModel>(URI, 1, 0, "ApiModel", "Is enum and base class");
    //qmlRegisterType<PublicUserModel>(URI, 1, 0, "PublicUserModel");
}
}

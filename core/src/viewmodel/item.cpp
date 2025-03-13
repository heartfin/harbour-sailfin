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
#include "JellyfinQt/viewmodel/item.h"


#include "JellyfinQt/loader/http/items.h"
#include "JellyfinQt/loader/http/userlibrary.h"
#include "JellyfinQt/viewmodel/userdata.h"
#include "JellyfinQt/viewmodel/utils.h"

namespace Jellyfin {
namespace ViewModel {

NameGuidPair::NameGuidPair(QSharedPointer<DTO::NameGuidPair> data, QObject *parent)
    : QObject(parent), m_data(data) {}

Item::Item(QObject *parent, QSharedPointer<Model::Item> data)
    : QObject(parent),
      m_data(data),
      m_userData(new UserData(this)){
    this->setData(data);
}

void Item::setData(QSharedPointer<Model::Item> newData) {
    if (!m_data.isNull()) {
        disconnect(m_data.data(), &Model::Item::userDataChanged, this, &Item::onUserDataChanged);
    }

    m_data = newData;

    if (!m_data.isNull()) {
        connect(m_data.data(), &Model::Item::userDataChanged, this, &Item::onUserDataChanged);
        updateMediaStreams();
        setUserData(m_data->userData());

        if (m_data->currentProgram().isNull()) {
            m_currentProgram = nullptr;
        } else {
            QSharedPointer<DTO::BaseItemDto> dataDto = m_data->currentProgram();
            QSharedPointer<Model::Item> data = QSharedPointer<Model::Item>::create(*dataDto.data());
            m_currentProgram = new Item(this, data);
        }
        emit currentProgramChanged();
    }


    emit userDataChanged(m_userData);
}

void Item::updateMediaStreams() {
    m_allMediaStreams.clear();
    m_audioStreams.clear();
    m_videoStreams.clear();
    m_subtitleStreams.clear();
    const QList<DTO::MediaStream> streams = m_data->mediaStreams();
    for (auto it = streams.cbegin(); it != streams.cend(); it++) {
        MediaStream *stream = new MediaStream(QSharedPointer<DTO::MediaStream>::create(*it), this);

        m_allMediaStreams.append(stream);
        switch(stream->type()) {
        case DTO::MediaStreamType::Audio:
            m_audioStreams.append(stream);
            break;
        case DTO::MediaStreamType::Video:
            m_videoStreams.append(stream);
            break;
        case DTO::MediaStreamType::Subtitle:
            m_subtitleStreams.append(stream);
            break;
        default:
            break;
        }
    }
    qDebug() << m_audioStreams.size() << " audio streams, " << m_videoStreams.size() << " video streams, "
             << m_subtitleStreams.size() << " subtitle streams, " << m_allMediaStreams.size() << " streams total";

    const QList<DTO::NameGuidPair> artists = m_data->artistItems();
    qDeleteAll(m_artistItems);
    m_artistItems = wrapQObjectList<NameGuidPair, DTO::NameGuidPair>(artists.cbegin(), artists.cend(), this);
}

void Item::setUserData(DTO::UserItemDataDto &newData) {
    setUserData(QSharedPointer<DTO::UserItemDataDto>::create(newData));
}

void Item::setUserData(QSharedPointer<DTO::UserItemDataDto> newData)  {
    if (m_data.isNull() || m_data->userData().isNull()) {
        m_userData->setData(QSharedPointer<DTO::UserData>::create(0, 0, false, false, QString(), QString()));
    } else {
        m_userData->setData(newData);
    }
    emit userDataChanged(m_userData);
}

void Item::onUserDataChanged(const DTO::UserItemDataDto &newData) {
    setUserData(QSharedPointer<DTO::UserItemDataDto>::create(newData));
}


// ItemLoader

ItemLoader::ItemLoader(QObject *parent)
    : BaseClass(new Jellyfin::Loader::HTTP::GetItemLoader(), parent) {
    connect(this, &LoaderBase::apiClientChanged, this, &ItemLoader::onApiClientChanged);
}

void ItemLoader::onApiClientChanged(ApiClient *newApiClient) {
    if (m_apiClient != nullptr) {
        disconnect(m_apiClient, &ApiClient::userIdChanged, this, &ItemLoader::setUserId);
    }
    if (newApiClient != nullptr) {
        connect(newApiClient, &ApiClient::userIdChanged, this, &ItemLoader::setUserId);
        setUserId(newApiClient->userId());
    }
}

void ItemLoader::setUserId(const QString &newUserId) {
    qDebug() << "ItemLoader: userId set to " << m_apiClient->userId();
    m_parameters.setUserId(m_apiClient->userId());
    qDebug() << "New userId: " << m_parameters.userId();
    reloadIfNeeded();
}

bool ItemLoader::canReload() const {
    qDebug() << "ItemLoader::canReload(): baseClass=" << BaseClass::canReload() << ", itemId=" << m_parameters.userId() << ", userId=" << m_parameters.userId();
    return BaseClass::canReload()
            && !m_parameters.itemId().isEmpty()
            && !m_parameters.userId().isEmpty();
}

void ItemLoader::setItemId(QString newItemId) {
    qDebug() << "ItemLoader: itemId set to " << newItemId;
    m_parameters.setItemId(newItemId);
    qDebug() << "New itemId: " << m_parameters.itemId();
    emit itemIdChanged(newItemId);
    reloadIfNeeded();
}
}

}

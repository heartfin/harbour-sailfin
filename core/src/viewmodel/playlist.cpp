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
#include "JellyfinQt/viewmodel/playlist.h"

namespace Jellyfin {
namespace ViewModel {

Playlist::Playlist(ApiClient *apiClient, QObject *parent)
    : ItemModel(parent), m_apiClient(apiClient), m_fetcherThread(new ItemUrlFetcherThread(this)){

    connect(this, &QAbstractListModel::rowsInserted, this, &Playlist::onItemsAdded);
    connect(this, &QAbstractListModel::rowsRemoved, this, &Playlist::onItemsRemoved);
    connect(this, &QAbstractListModel::rowsMoved, this, &Playlist::onItemsMoved);
    connect(this, &QAbstractListModel::modelReset, this, &Playlist::onItemsReset);
    connect(m_fetcherThread, &ItemUrlFetcherThread::itemUrlFetched, this, &Playlist::onItemExtraDataReceived);
}

void Playlist::onItemsAdded(const QModelIndex &parent, int startIndex, int endIndex) {
    if (parent.isValid()) return;
    // Retrieve added items.
    for (int i = startIndex; i <= endIndex; i++) {
        m_fetcherThread->addItemToQueue(at(i));
    }
}

void Playlist::onItemsMoved(const QModelIndex &parent, int startIndex, int endIndex, const QModelIndex &destination, int index) {
    if (parent.isValid()) return;
    if (destination.isValid()) return;
}

void Playlist::onItemsRemoved(const QModelIndex &parent, int startIndex, int endIndex) {
    if (parent.isValid()) return;
    QSet<QString> removedItemIds;
    // Assume almost all items in the playlist are unique
    // If you're the kind of person who puts songs multiple time inside of a playlist:
    // enjoy your needlessly reserved memory.
    removedItemIds.reserve(endIndex - startIndex + 1);
    // First collect all the ids of items that are going to be removed and how many of them there are
    for (int i = startIndex; i <= endIndex; i++) {
        removedItemIds.insert(at(i).jellyfinId());
    }

    // Look for itemIds which appear outside of the removed range
    // these do not need to be removed from the cahe
    for (int i = 0; i < startIndex; i++) {
        const QString &id = at(i).jellyfinId();
        if (removedItemIds.contains(id)) {
            removedItemIds.remove(id);
        }
    }

    for (int i = endIndex + 1; i < size(); i++) {
        const QString &id = at(i).jellyfinId();
        if (removedItemIds.contains(id)) {
            removedItemIds.remove(id);
        }
    }

    for (auto it = removedItemIds.cbegin(); it != removedItemIds.cend(); it++) {
        m_cache.remove(*it);
    }
}

void Playlist::onItemsReset() {

}

void Playlist::onItemExtraDataReceived(const QString &itemId, const QUrl &url, const QString &playSession) {
    m_cache.insert(itemId, ExtraData { url, playSession, QString()});
}

void Playlist::onItemErrorReceived(const QString &itemId, const QString &errorString) {
    m_cache.insert(itemId, ExtraData {QUrl(), QString(), errorString});
}

ItemUrlFetcherThread::ItemUrlFetcherThread(Playlist *playlist) :
    QThread(playlist),
    m_parent(playlist),
    m_loader(new Loader::HTTP::GetPostedPlaybackInfoLoader(playlist->m_apiClient)) {

    connect(this, &ItemUrlFetcherThread::prepareLoaderRequested, this, &ItemUrlFetcherThread::onPrepareLoader);
}

void ItemUrlFetcherThread::addItemToQueue(const Model::Item item) {
    QMutexLocker locker(&m_queueModifyMutex);
    m_queue.enqueue(item);
    m_urlWaitCondition.wakeOne();
}

void ItemUrlFetcherThread::cleanlyStop() {
    m_keepRunning = false;
    m_urlWaitCondition.wakeAll();
}

void ItemUrlFetcherThread::onPrepareLoader() {
    m_loader->prepareLoad();
    m_loaderPrepared = true;
    m_waitLoaderPrepared.wakeOne();
}

void ItemUrlFetcherThread::run() {
    while (m_keepRunning) {
        while(m_queue.isEmpty() && m_keepRunning) {
            m_urlWaitConditionMutex.lock();
            m_urlWaitCondition.wait(&m_urlWaitConditionMutex);
        }
        if (!m_keepRunning) break;

        Jellyfin::Loader::GetPostedPlaybackInfoParams params;
        const Model::Item& item = m_queue.dequeue();
        m_queueModifyMutex.lock();
        params.setItemId(item.jellyfinId());
        m_queueModifyMutex.unlock();
        params.setUserId(m_parent->m_apiClient->userId());
        params.setEnableDirectPlay(true);
        params.setEnableDirectStream(true);
        params.setEnableTranscoding(true);

        m_loaderPrepared = false;
        m_loader->setParameters(params);

        // We cannot call m_loader->prepareLoad() from this thread, so we must
        // emit a signal and hope for the best
        emit prepareLoaderRequested(QPrivateSignal());
        while (!m_loaderPrepared) {
            m_waitLoaderPreparedMutex.lock();
            m_waitLoaderPrepared.wait(&m_waitLoaderPreparedMutex);
        }

        DTO::PlaybackInfoResponse response;
        try {
            std::optional<DTO::PlaybackInfoResponse> responseOpt = m_loader->load();
            if (responseOpt.has_value()) {
                response = responseOpt.value();
            } else {
                qWarning() << "Cannot retrieve URL of " << params.itemId();
                continue;
            }
        }  catch (QException e) {
            qWarning() << "Cannot retrieve URL of " << params.itemId() << ": " << e.what();
            continue;
        }

        QList<DTO::MediaSourceInfo> mediaSources = response.mediaSources();
        QUrl resultingUrl;
        QString playSession = response.playSessionId();
        for (int i = 0; i < mediaSources.size(); i++) {
            const DTO::MediaSourceInfo &source = mediaSources.at(i);
            if (source.supportsDirectPlay()) {
                resultingUrl = QUrl::fromLocalFile(source.path());
            } else if (source.supportsDirectStream()) {
                QString mediaType = item.mediaType();
                QUrlQuery query;
                query.addQueryItem("mediaSourceId", source.jellyfinId());
                query.addQueryItem("deviceId", m_parent->m_apiClient->deviceId());
                query.addQueryItem("api_key", m_parent->m_apiClient->token());
                query.addQueryItem("Static", "True");
                resultingUrl = QUrl(this->m_parent->m_apiClient->baseUrl() + "/" + mediaType + "/" + params.itemId()
                        + "/stream." + source.container() + "?" + query.toString(QUrl::EncodeReserved));
            } else if (source.supportsTranscoding()) {
                resultingUrl = QUrl(m_parent->m_apiClient->baseUrl() + source.transcodingUrl());
            } else {
                qDebug() << "No suitable sources for item " << item.jellyfinId();
            }
            if (!resultingUrl.isEmpty()) break;
        }
        if (resultingUrl.isEmpty()) {
            qWarning() << "Could not find suitable media source for item " << params.itemId();
            emit itemUrlFetchError(item.jellyfinId(), tr("Cannot fetch stream URL"));
        }
        emit itemUrlFetched(item.jellyfinId(), resultingUrl, playSession);
    }
}


} // NS ViewModel
} // NS Jellyfin

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
#ifndef JELLYFIN_VIEWMODEL_PLAYLIST
#define JELLYFIN_VIEWMODEL_PLAYLIST

#include <optional>

#include <QAtomicInteger>
#include <QMutex>
#include <QMutexLocker>
#include <QObject>
#include <QQueue>
#include <QWaitCondition>
#include <QtMultimedia/QMediaPlaylist>

#include "../dto/playbackinfodto.h"
#include "../loader/requesttypes.h"
#include "../loader/http/getpostedplaybackinfo.h"
#include "itemmodel.h"

namespace Jellyfin {
namespace ViewModel {

class ItemUrlFetcherThread;


/**
 * @brief Playlist/queue that can be exposed to the UI. It also containts the playlist-related logic,
 * which is mostly relevant
 */
class Playlist : public ItemModel {
    Q_OBJECT
    friend class ItemUrlFetcherThread;
public:
    explicit Playlist(ApiClient *apiClient, QObject *parent = nullptr);
    enum ExtraRoles {
        Url = ItemModel::RoleNames::jellyfinExtendModelAfterHere + 1,
        PlaySession,
        ErrorText
    };

    QHash<int, QByteArray> roleNames() const override {
        QHash<int, QByteArray> result(ItemModel::roleNames());
        result.insert(Url, "url");
        result.insert(PlaySession, "playSession");
        result.insert(ErrorText, "errorText");
        return result;
    }

private slots:
    void onItemsAdded(const QModelIndex &parent, int startIndex, int endIndex);
    void onItemsMoved(const QModelIndex &parent, int startIndex, int endIndex, const QModelIndex &destination, int destinationRow);
    void onItemsRemoved(const QModelIndex &parent, int startIndex, int endIndex);
    void onItemsReset();
    /// Called when the fetcherThread has fetched the playback URL and playSession
    void onItemExtraDataReceived(const QString &itemId, const QUrl &url, const QString &playSession);
    /// Called when the fetcherThread encountered an error
    void onItemErrorReceived(const QString &itemId, const QString &errorString);
private:
    /// Map from ItemId to ExtraData
    QHash<QString, ExtraData> m_cache;

    ApiClient *m_apiClient;

    /// Thread that fetches the URLS asynchronously
    ItemUrlFetcherThread *m_fetcherThread;
};

/// Thread that fetches the Item's stream URL always in the given order they were requested
class ItemUrlFetcherThread : public QThread {
    Q_OBJECT
public:
    ItemUrlFetcherThread(Playlist *playlist);

    /**
     * @brief Adds an item to the queue of items that should be requested
     * @param item The item to fetch the URL of
     */
    void addItemToQueue(const Model::Item item);

signals:
    /**
     * @brief Emitted when the url of the item with the itemId has been retrieved.
     * @param itemId The id of the item of which the URL has been retrieved
     * @param itemUrl The retrieved url
     * @param playSession The playsession set by the Jellyfin Server
     */
    void itemUrlFetched(QString itemId, QUrl itemUrl, QString playSession);
    void itemUrlFetchError(QString itemId, QString errorString);

    void prepareLoaderRequested(QPrivateSignal);
public slots:
    /**
     * @brief Ask the thread nicely to stop running.
     */
    void cleanlyStop();
private slots:
    void onPrepareLoader();
protected:
    void run() override;
private:
    Playlist *m_parent;
    Support::Loader<DTO::PlaybackInfoResponse, Jellyfin::Loader::GetPostedPlaybackInfoParams> *m_loader;

    QMutex m_queueModifyMutex;
    QQueue<const Model::Item&> m_queue;

    QMutex m_urlWaitConditionMutex;
    /// WaitCondition on which this threads waits until an Item is put into the queue
    QWaitCondition m_urlWaitCondition;

    QMutex m_waitLoaderPreparedMutex;
    /// WaitCondition on which this threads waits until the loader has been prepared.
    QWaitCondition m_waitLoaderPrepared;

    bool m_keepRunning = true;
    bool m_loaderPrepared = false;
};

} // NS ViewModel
} // NS Jellyfin

#endif //JELLYFIN_VIEWMODEL_PLAYLIST

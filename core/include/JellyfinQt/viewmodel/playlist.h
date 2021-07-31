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

#include "../apiclient.h"
#include "itemmodel.h"

namespace Jellyfin {
namespace ViewModel {

/**
 * @brief Playlist/queue that can be exposed to the UI. It also containts the playlist-related logic,
 * which is mostly relevant
 */
/*class Playlist : public ItemModel {
    Q_OBJECT
    friend class ItemUrlFetcherThread;
public:
    explicit Playlist(ApiClient *apiClient, QObject *parent = nullptr);

private slots:
    void onItemsAdded(const QModelIndex &parent, int startIndex, int endIndex);
    void onItemsMoved(const QModelIndex &parent, int startIndex, int endIndex, const QModelIndex &destination, int destinationRow);
    void onItemsRemoved(const QModelIndex &parent, int startIndex, int endIndex);
    void onItemsReset();
};*/



} // NS ViewModel
} // NS Jellyfin

#endif //JELLYFIN_VIEWMODEL_PLAYLIST

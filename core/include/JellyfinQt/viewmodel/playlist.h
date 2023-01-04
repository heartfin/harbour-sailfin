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

#include <QAbstractListModel>
#include <QByteArray>
#include <QHash>
#include <QObject>
#include <QSharedPointer>
#include <QVariant>

#include "../apiclient.h"
#include "../model/playlist.h"
#include "itemmodel.h"

namespace Jellyfin {
namespace ViewModel {

/**
 * @brief Indicator in which part of the playing queue a given item is positioned.
 */
class NowPlayingSection {
    Q_GADGET
public:
    enum Value {
        Queue,
        NowPlaying,
    };
    Q_ENUM(Value);
};

/**
 * @brief Playlist/queue that can be exposed to QML.
 */
class Playlist : public QAbstractListModel {
    Q_OBJECT
    friend class ItemUrlFetcherThread;
public:
    enum RoleNames {
        // Item properties
        name = Qt::UserRole + 1,
        artists,
        artistItems,
        runTimeTicks,

        // Non-item properties
        playing,
        section,
    };
    explicit Playlist(Model::Playlist *data, QObject *parent = nullptr);

    QVariant data(const QModelIndex &parent, int role = Qt::DisplayRole) const override;
    int rowCount(const QModelIndex &parent) const override;
    QHash<int, QByteArray> roleNames() const override;
    void setPlaylistModel(Model::Playlist *data);


private slots:
    void onBeforePlaylistCleared();
    void onPlaylistCleared();
    void onBeforeItemsAddedToList(int startIndex, int amount);
    void onBeforeItemsAddedToQueue(int startIndex, int amount);
    void onItemsAddedToList();
    void onItemsAddedToQueue();
    void onBeforeItemsRemovedFromList(int startIndex, int amount);
    void onBeforeItemsRemovedFromQueue(int startIndex, int amount);
    void onItemsRemovedFromList();
    void onItemsRemovedFromQueue();
    void onReshuffled();
    void onPlayingItemChanged();
private:
    Model::Playlist *m_data;
    // The index of the last played item.
    int m_lastPlayedRow = -1;

    /**
     * @param index The index, from 0..rowCount();
     * @return True if the item at the current index is being played, false otherwise.
     */
    bool isPlaying(int index) const;
};



} // NS ViewModel
} // NS Jellyfin

#endif //JELLYFIN_VIEWMODEL_PLAYLIST

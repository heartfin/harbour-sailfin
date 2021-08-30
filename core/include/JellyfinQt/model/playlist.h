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
#ifndef JELLYFIN_MODEL_PLAYLIST_H
#define JELLYFIN_MODEL_PLAYLIST_H

#include <QObject>
#include <QSharedPointer>
#include <QString>
#include <QUrl>
#include <QVector>

#include "../viewmodel/itemmodel.h"
#include "item.h"

namespace Jellyfin {
namespace Model {

class Shuffle;

/**
 * @brief Model of a playlist, a list of items that can be played.
 *
 * This tries to take the managing what items to play away from the PlaybackManager,
 * which now only will be informed about the current and next item to play.
 *
 * The playlist has actually two list, one named list and the other named queue. When
 * playing, the queue has priority over the list and will not be affected by the
 * shuffle mode. After all items of the queue are played, the items in the list are played.
 * Items in the list may be shuffled.
 */
class Playlist : public QObject {
    Q_OBJECT
public:
    explicit Playlist(QObject *parent = nullptr);

    /// Returns the current item in the queue
    QSharedPointer<Item> currentItem();
    QSharedPointer<Item> nextItem();
    /**
     * @return the current index of the playing item if it is in the list. If playing from the queue,
     * returns -1.
     */
    int currentItemIndexInList() const;

    bool hasPrevious();

    /**
     * @brief Determine the previous item to be played.
     */
    void previous();

    bool hasNext();

    /**
     * @brief Determine the next item to be played.
     */
    void next();

    int queueSize() { return m_queue.size(); };
    int listSize() const { return m_list.size(); };
    int totalSize() const { return m_queue.size() + m_list.size(); }

    /**
     * @brief Returns the item at the given index of the currently selected playlist, excluding the queue.
     * @param index
     * @return The given item.
     */
    QSharedPointer<const Item> listAt(int index) const;

    /**
     * @brief Returns the item at the given index of the currently queue, excluding the playlist.
     * @param index
     * @return The given item.
     */
    QSharedPointer<const Item> queueAt(int index) const;

    /**
     * @brief Removes all the items from the playlist, but not from the queue.
     */
    void clearList();

    /**
     * @brief Appends all items from the given itemModel to this list
     */
    void appendToList(ViewModel::ItemModel &model);

    /**
     * @brief Start playing this playlist
     * @param index The index to start from.
     */
    void play(int index = 0);

    /**
     * @brief playingFromQueue
     * @return True if the currently played item comes from the queue.
     */
    bool playingFromQueue() const;

signals:
    void beforeListCleared();
    void listCleared();
    void beforeItemsAddedToQueue(int index, int count);
    void beforeItemsAddedToList(int index, int count);
    void itemsAddedToQueue();
    void itemsAddedToList();
    void beforeItemsRemovedFromQueue(int index, int count);
    void beforeItemsRemovedFromList(int index, int count);
    void itemsRemovedFromQueue();
    void itemsRemovedFromList();
    void listReshuffled();
    void currentItemChanged();
private:
    void reshuffle();

    QSharedPointer<Item> m_currentItem;
    bool m_currentItemFromQueue = false;
    QSharedPointer<Item> m_nextItem;
    bool m_nextItemFromQueue = false;

    /// list of the items in the queue
    QVector<QSharedPointer<Item>> m_queue;
    /// list of the items in the playlist
    QVector<QSharedPointer<Item>> m_list;
    /// The current position in the playlist
    int m_pos = 0;

    /// Algorithm for shuffling the playlist.
    Shuffle *m_shuffler;
};

}
}

#endif // JELLYFIN_MODEL_PLAYLIST_H

/*
 * Sailfin: a Jellyfin client written using Qt
 * Copyright (C) 2021-2022 Chris Josten and the Sailfin Contributors.
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
#include "JellyfinQt/model/playlist.h"

#include "JellyfinQt/model/shuffle.h"

namespace Jellyfin {
namespace Model {

Playlist::Playlist(QObject *parent)
    : QObject(parent),
      m_shuffler(new NoShuffle(this)){}

void Playlist::clearList() {
    emit beforeListCleared();
    m_currentItem.clear();
    m_nextItem.clear();
    m_list.clear();
    emit listCleared();
}

bool Playlist::hasPrevious() {
    return  m_shuffler->hasPrevious();
}

void Playlist::previous() {
    m_shuffler->previous();
    int curItem = m_shuffler->currentItem();
    if (curItem >= 0) {
        m_currentItem = m_list[curItem];
    } else {
        m_currentItem.clear();
    }
    int nextItem = m_shuffler->nextItem();
    if (nextItem >= 0) {
        m_nextItem = m_list[m_shuffler->nextItem()];
    } else {
        m_nextItem.clear();
    }
    m_nextItemFromQueue = !m_queue.isEmpty();
    m_currentItemFromQueue = false;
    emit currentItemChanged();
}

bool Playlist::hasNext() {
    return  m_shuffler->hasNext();
}

void Playlist::next() {
    // Determine the new current item
    if (!m_queue.isEmpty()) {
        m_currentItem = m_queue.first();
        emit beforeItemsRemovedFromQueue(0, 1);
        m_queue.removeFirst();
        emit itemsRemovedFromQueue();
        m_currentItemFromQueue = true;
    } else if (!m_list.isEmpty()) {
        // The queue is empty
        m_currentItemFromQueue = false;
        m_shuffler->next();
        int next = m_shuffler->currentItem();
        if (next >= 0) {
            m_currentItem = m_list[next];
        } else {
            m_currentItem.clear();
        }
    } else {
        m_currentItem.clear();
    }

    // Determine the new next item
    if (!m_queue.isEmpty()) {
        m_nextItem = m_queue.first();
        m_queue.removeFirst();
        m_nextItemFromQueue = true;
    } else if (!m_list.isEmpty()) {
        // The queue is empty
        m_nextItemFromQueue = false;
        int next = m_shuffler->nextItem();
        if (next >= 0) {
            m_nextItem = m_list[next];
        } else {
            m_nextItem.clear();
        }
    } else {
        m_nextItem.clear();
    }
    emit currentItemChanged();
}

QList<QSharedPointer<Item>> Playlist::queueAndList() const {
    QList<QSharedPointer<Item>> result;
    result.reserve(totalSize());
    result.append(m_queue.toList());
    result.append(m_list.toList());
    return result;
}

QSharedPointer<const Item> Playlist::listAt(int index) const {
    if (m_shuffler->canShuffleInAdvance()) {
        return m_list.at(m_shuffler->itemAt(index));
    } else {
        return m_list.at(index);
    }
}

QSharedPointer<const Item> Playlist::queueAt(int index) const {
    return m_queue.at(index);
}

QSharedPointer<Item> Playlist::currentItem() {
    return m_currentItem;
}

int Playlist::currentItemIndexInList() const {
    if (m_currentItemFromQueue) {
        return -1;
    } else {
        return m_shuffler->currentItem();
    }
}

QSharedPointer<Item> Playlist::nextItem() {
    return m_nextItem;
}

void Playlist::appendToList(const QList<QSharedPointer<Model::Item>> &items) {
    int start = m_list.size();
    int count = items.size();
    m_list.reserve(count);
    emit beforeItemsAddedToList(start, count);
    for (int i = 0; i < count; i++) {
        m_list.append(QSharedPointer<Model::Item>(items.at(i)));
    }
    emit itemsAddedToList();
    reshuffle();
}

void Playlist::appendToList(QSharedPointer<Model::Item> item) {
    int start = m_list.size();
    emit beforeItemsAddedToList(start, 1);
    m_list.append(item);
    emit itemsAddedToList();
    reshuffle();
}

void Playlist::reshuffle() {
    if (m_shuffler->canShuffleInAdvance()) {
        m_shuffler->shuffleInAdvance();
    } else {
        m_shuffler->next();
    }

    if (!m_nextItemFromQueue) {
        int nextItemIdx = m_shuffler->nextItem();
        if (nextItemIdx >= 0) {
            m_nextItem = m_list[m_shuffler->nextItem()];
        } else {
            m_nextItem.clear();
        }
    }
    emit listReshuffled();
    emit currentItemChanged();
}

void Playlist::play(int index) {
    m_shuffler->setIndex(index);
    if (!m_nextItemFromQueue) {
        int nextItemIdx = m_shuffler->nextItem();
        if (nextItemIdx >= 0) {
            m_nextItem = m_list[m_shuffler->nextItem()];
        } else {
            m_nextItem.clear();
        }
    }
    m_currentItem = m_list[m_shuffler->currentItem()];
    emit currentItemChanged();
}

bool Playlist::playingFromQueue() const {
    return m_currentItemFromQueue;
}

} // NS Model
} // NS Jellyfin

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
#include "JellyfinQt/model/playlist.h"

#include "JellyfinQt/model/shuffle.h"

namespace Jellyfin {
namespace Model {

Playlist::Playlist(QObject *parent)
    : QObject(parent),
      m_shuffler(new NoShuffle(this)){}

void Playlist::clearList() {
    m_currentItem.clear();
    m_nextItem.clear();
    m_list.clear();
    emit listCleared();
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
    if (nextItem) {
        m_nextItem = m_list[m_shuffler->nextItem()];
    } else {
        m_nextItem.clear();
    }
    m_nextItemFromQueue = !m_queue.isEmpty();
    m_currentItemFromQueue = false;
}

void Playlist::next() {
    // Determine the new current item
    if (!m_queue.isEmpty()) {
        m_currentItem = m_queue.first();
        m_queue.removeFirst();
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
}

QSharedPointer<const Item> Playlist::listAt(int index) const {
    return m_list.at(index);
}

QSharedPointer<Item> Playlist::currentItem() {
    return m_currentItem;
}

QSharedPointer<Item> Playlist::nextItem() {
    return m_nextItem;
}

void Playlist::appendToList(const ViewModel::ItemModel &model) {
    int start = m_list.size();
    int count = model.size();
    m_list.reserve(count);
    for (int i = 0; i < count; i++) {
        m_list.append(QSharedPointer<Model::Item>::create(model.at(i)));
    }
    emit itemsAddedToList(start, count);
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
}

} // NS Model
} // NS Jellyfin

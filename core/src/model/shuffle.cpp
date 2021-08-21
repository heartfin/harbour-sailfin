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
#include "JellyfinQt/model/shuffle.h"

#if QT_VERSION > QT_VERSION_CHECK(5, 10, 0)
#include <QRandomGenerator>
#endif

namespace Jellyfin {
namespace Model {

int Shuffle::random(int max, int min) {
#if QT_VERSION >= QT_VERSION_CHECK(5, 10, 0)
    return QRandomGenerator::global()->bounded(min, max);
#else
    return static_cast<int>(min + static_cast<double>(max - min) / static_cast<double>(RAND_MAX) * qrand());
#endif
}

NoShuffle::NoShuffle(const Playlist *parent)
    : Shuffle(parent) {}

void NoShuffle::next() {
    m_index = nextIndex();
}

void NoShuffle::previous() {
    m_index = previousIndex();
}

int NoShuffle::currentItem() const {
    return m_index;
}
int NoShuffle::nextItem() const {
    return nextIndex();
}

int NoShuffle::previousIndex() const {
    if (m_repeatAll) {
        return (m_index - 1) % m_playlist->listSize();
    } else {
        if (m_index - 1 < 0) {
            return -1;
        } else {
            return m_index - 1;
        }
    }
}

int NoShuffle::itemAt(int index) const {
    return index;
}

int NoShuffle::nextIndex() const {
    if (m_repeatAll) {
        return (m_index + 1) % m_playlist->listSize();
    } else {
        if (m_index + 1 >= m_playlist->listSize()) {
            return -1;
        } else {
            return m_index + 1;
        }
    }
}

void NoShuffle::setIndex(int i) {
    m_index = i;
}

// ListShuffleBase
ListShuffleBase::ListShuffleBase(const Playlist *parent)
    : NoShuffle(parent) {}

int ListShuffleBase::currentItem() const {
    return m_map[m_index];
}

int ListShuffleBase::nextItem() const {
    return m_map[nextIndex()];
}

int ListShuffleBase::itemAt(int index) const {
    return m_map[index];
}

// SimpleListShuffle
SimpleListShuffle::SimpleListShuffle(const Playlist *parent)
    : ListShuffleBase(parent) {}

void SimpleListShuffle::shuffleInAdvance() {
    int count = m_playlist->listSize();
    m_map.clear();
    m_map.reserve(count);
    for (int i = 0; i < count; i++) {
        m_map.append(i);
    }

    // Swap the list
    for (int i = 0; i < count; i++) {
        int tmp = m_map[i];
        int other = random(count, i);
        m_map[i] = m_map[other];
        m_map[other] = tmp;
    }

}

// RandomShuffle
RandomShuffle::RandomShuffle(const Playlist *parent)
    : Shuffle(parent) {}

bool RandomShuffle::canShuffleInAdvance() {
    return false;
}

int RandomShuffle::currentItem() const {
    return m_current;
};

int RandomShuffle::nextItem() const {
    return m_next;
}
void RandomShuffle::previous() {
    m_next = m_current;
    m_current = m_previous;
    m_previous = random(m_playlist->listSize());
}
void RandomShuffle::next() {
    m_previous = m_current;
    if (m_next == -1) {
        m_next = random(m_playlist->listSize());
    }
    m_current = m_next;
    m_next = random(m_playlist->listSize());
}

} // NS Model
} // NS Jellyfin

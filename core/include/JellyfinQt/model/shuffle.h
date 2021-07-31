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
#ifndef JELLYFIN_MODEL_SHUFFLE_H
#define JELLYFIN_MODEL_SHUFFLE_H

#include "playlist.h"
#include "../model/item.h"


namespace Jellyfin {
namespace Model {

/**
 * @brief Interface for an algorithm shuffling a playlist.
 */
class Shuffle {
public:
    Shuffle(const Playlist *parent) : m_playlist(parent) {}

    /**
     * @brief If this Shuffle implementation shuffles the entire list in advance.
     * @return True if this shuffle class shuffles the entire list in advance
     *
     * Some shuffle implementations may only shuffle the next item as they go.
     */
    virtual bool canShuffleInAdvance() { return true; }

    /**
     * @brief Shuffle the list in advance. Should only be called if canShuffleInAdvance()
     * is called.
     */
    virtual void shuffleInAdvance() {}

    /**
     * @brief The shuffle should determine the next item.
     */
    virtual void next() {};

    /**
     * @brief The shuffle should determine the previous item.
     */
    virtual void previous() {};

    /**
     * @brief Set the index of the now playing item.
     * @param i
     */
    virtual void setIndex(int i) {};

    /**
     * @return the index of the currently playing item
     */
    virtual int currentItem() const { return -1; }

    /**
     * @brief Determine the item index at at the shuffled index
     * @param index The shuffled index
     * @return The actual index
     *
     * If canShuffleInAdvance() returns false, a new implemention is not needed
     * or -1 may be returned. This function should not even be called in that case.
     */
    virtual int itemAt(int index) const { return -1; }

    /**
     * @return the index of the next item
     */
    virtual int nextItem() const { return -1; }

    /**
     * @brief Sets whether the shuffler to loop over the list if all items are played.
     */
    void setRepeatAll(bool repeatAll) { m_repeatAll = repeatAll; }
protected:
    /// Playlist that can be used to gather information about the songs if needed for the algorithm
    const Playlist *m_playlist;
    bool m_repeatAll = false;
    static int random(int max, int min = 0);
};

/**
 * @brief A shuffler that does not shuffle.
 */
class NoShuffle : public Shuffle {
public:
    NoShuffle(const Playlist *parent);

    virtual int currentItem() const override;
    virtual int nextItem() const override;

    virtual void previous() override;
    virtual void next() override;
    virtual void setIndex(int i) override;
protected:
    int nextIndex() const;
    int previousIndex() const;
    int m_index = 0;

};

/**
 * @brief Base class for shuffles that shuffle the entire list in advance
 */
class ListShuffleBase : public NoShuffle {
public:
    ListShuffleBase(const Playlist *parent);
    virtual int currentItem() const override;
    virtual int nextItem() const override;
protected:
    QVector<int> m_map;
};

/**
 * @brief A simple shuffler which shuffles each item in the list in advance
 */
class SimpleListShuffle : public ListShuffleBase {
public:
    SimpleListShuffle(const Playlist *parent);
    virtual void shuffleInAdvance() override;
};

/**
 * @brief A shuffler that is pretty random. Does not care about repeating items in a list.
 */
class RandomShuffle : public Shuffle {
public:
    RandomShuffle(const Playlist *parent);
    bool canShuffleInAdvance() override;
    virtual int currentItem() const override;
    virtual int nextItem() const override;
    virtual void previous() override;
    virtual void next() override;
protected:
    int m_previous, m_current, m_next = -1;
};

/**
 * @brief A smart shuffler that shuffles a list with a few constraints to make it appear "more random" to an user.
 *
 * This shuffler tries to place to avoid placing tracks of the same album, artist, and genre next to each other.
 * This way, the user may perceive the list as more random
 */
class VariedListShuffle {

};

} // NS Model
} // NS Jellyfin

#endif // SHUFFLE_H

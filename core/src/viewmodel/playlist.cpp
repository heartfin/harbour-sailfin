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

#include "JellyfinQt/viewmodel/item.h"
#include "JellyfinQt/viewmodel/utils.h"

namespace Jellyfin {
namespace ViewModel {

Playlist::Playlist(Model::Playlist *data, QObject *parent)
    : QAbstractListModel(parent),
      m_data(data) {

    connect(data, &Model::Playlist::beforeListCleared, this, &Playlist::onBeforePlaylistCleared);
    connect(data, &Model::Playlist::listCleared, this, &Playlist::onPlaylistCleared);
    connect(data, &Model::Playlist::beforeItemsAddedToList, this, &Playlist::onBeforeItemsAddedToList);
    connect(data, &Model::Playlist::beforeItemsAddedToQueue, this, &Playlist::onBeforeItemsAddedToQueue);
    connect(data, &Model::Playlist::itemsAddedToList, this, &Playlist::onItemsAddedToList);
    connect(data, &Model::Playlist::itemsAddedToQueue, this, &Playlist::onItemsAddedToQueue);
    connect(data, &Model::Playlist::beforeItemsRemovedFromList, this, &Playlist::onBeforeItemsRemovedFromList);
    connect(data, &Model::Playlist::beforeItemsRemovedFromQueue, this, &Playlist::onBeforeItemsRemovedFromQueue);
    connect(data, &Model::Playlist::itemsRemovedFromList, this, &Playlist::onItemsRemovedFromList);
    connect(data, &Model::Playlist::itemsRemovedFromQueue, this, &Playlist::onItemsRemovedFromQueue);
    connect(data, &Model::Playlist::listReshuffled, this, &Playlist::onReshuffled);
    connect(data, &Model::Playlist::currentItemChanged, this, &Playlist::onPlayingItemChanged);
}

int Playlist::rowCount(const QModelIndex &parent) const {
    if (!parent.isValid()) return m_data->totalSize();
    return 0;
}
QHash<int, QByteArray> Playlist::roleNames() const {
    return {
        {RoleNames::name, "name"},
        {RoleNames::artists, "artists"},
        {RoleNames::artistItems, "artistItems"},
        {RoleNames::runTimeTicks, "runTimeTicks"},
        {RoleNames::section, "section"},
        {RoleNames::playing, "playing"},
    };
};

QVariant Playlist::data(const QModelIndex &index, int role) const {
    if (!index.isValid()) return QVariant();
    if (index.row() >= m_data->totalSize()) return QVariant();

    bool inQueue = index.row() < m_data->queueSize();
    // Handle the special "section" role
    if (role == RoleNames::section) {
        if (inQueue) {
            return QVariant(NowPlayingSection::Queue);
        } else {
            return QVariant(NowPlayingSection::NowPlaying);
        }
    } else if (role == RoleNames::playing) {
        return isPlaying(index.row());
    }

    // Handle the other roles
    QSharedPointer<const Model::Item> rowData;

    if (inQueue) {
        rowData = m_data->queueAt(index.row());
    } else {
        rowData = m_data->listAt((index.row() - m_data->queueSize()));
    }

    switch(role) {
    case RoleNames::name:
        return QVariant(rowData->name());
    case RoleNames::artists:
        return QVariant(rowData->artists());
    case RoleNames::artistItems: {
        auto artists = rowData->artistItems();
        return wrapQVariantList<NameGuidPair, DTO::NameGuidPair>(artists.cbegin(), artists.cend(), const_cast<Playlist *>(this));
    }
    case RoleNames::runTimeTicks:
        return QVariant(rowData->runTimeTicks().value_or(-1));
    default:
        return QVariant();

    }

    return QVariant();
}

void Playlist::onBeforePlaylistCleared() {
    onBeforeItemsRemovedFromList(0, m_data->listSize());
}
void Playlist::onPlaylistCleared() {
    onItemsRemovedFromList();
}

void Playlist::onBeforeItemsAddedToList(int startIndex, int count) {
    int start = startIndex + m_data->queueSize();
    this->beginInsertRows(QModelIndex(), start, start + count - 1);
}

void Playlist::onItemsAddedToList() {
    this->endInsertRows();
}

void Playlist::onBeforeItemsAddedToQueue(int startIndex, int count) {
    this->beginInsertRows(QModelIndex(), startIndex, startIndex + count - 1);
}

void Playlist::onItemsAddedToQueue() {
    this->endInsertRows();
}

void Playlist::onBeforeItemsRemovedFromList(int startIndex, int count) {
    int start = startIndex + m_data->queueSize();
    this->beginRemoveRows(QModelIndex(), start, start + count - 1);
}

void Playlist::onItemsRemovedFromList() {
    this->endInsertRows();
}

void Playlist::onBeforeItemsRemovedFromQueue(int startIndex, int count) {
    this->beginRemoveRows(QModelIndex(), startIndex, startIndex + count - 1);
}

void Playlist::onItemsRemovedFromQueue() {
    this->endRemoveRows();
}

void Playlist::onReshuffled() {
    this->beginResetModel();
    this->endResetModel();
}

void Playlist::onPlayingItemChanged() {
    if (m_lastPlayedRow >= 0 ) {
        this->dataChanged(index(m_lastPlayedRow), index(m_lastPlayedRow), {RoleNames::playing});
    }
    int newIndex = 0;
    if (!m_data->playingFromQueue()) {
        newIndex = m_data->queueSize() + m_data->currentItemIndexInList();
    }
    m_lastPlayedRow = newIndex;
    emit this->dataChanged(index(newIndex), index(newIndex), {RoleNames::playing});
}

bool Playlist::isPlaying(int index) const {
    return (m_data->playingFromQueue() && index == 0)
        || (m_data->currentItemIndexInList() == index - m_data->queueSize());
}


} // NS ViewModel
} // NS Jellyfin

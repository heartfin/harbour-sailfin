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
#include "JellyfinQt/viewmodel/itemmodel.h"

#include "JellyfinQt/viewmodel/item.h"

#include "JellyfinQt/loader/http/artists.h"
#include "JellyfinQt/loader/http/items.h"
#include "JellyfinQt/loader/http/userlibrary.h"
#include "JellyfinQt/loader/http/userviews.h"
#include "JellyfinQt/loader/http/tvshows.h"

#include "JellyfinQt/viewmodel/userdata.h"
#include "JellyfinQt/viewmodel/utils.h"

#define JF_CASE(roleName) case roleName: \
    try { \
        return QVariant(item->roleName()); \
    } catch(std::bad_optional_access &e) { \
        return QVariant(); \
    }

namespace Jellyfin {

namespace ViewModel {

UserViewsLoader::UserViewsLoader(QObject *parent)
    : UserViewsLoaderBase(new Jellyfin::Loader::HTTP::GetUserViewsLoader(), parent) { }

LatestMediaLoader::LatestMediaLoader(QObject *parent)
    : LatestMediaBase(new Jellyfin::Loader::HTTP::GetLatestMediaLoader(), parent){ }

UserItemsLoader::UserItemsLoader(QObject *parent)
    : UserItemsLoaderBase(new Jellyfin::Loader::HTTP::GetItemsByUserIdLoader(), parent) {}

ResumeItemsLoader::ResumeItemsLoader(QObject *parent)
    : ResumeItemsLoaderBase(new Jellyfin::Loader::HTTP::GetResumeItemsLoader(), parent) {}

ShowSeasonsLoader::ShowSeasonsLoader(QObject *parent)
    : ShowSeasonsLoaderBase(new Jellyfin::Loader::HTTP::GetSeasonsLoader(), parent) {}

ShowEpisodesLoader::ShowEpisodesLoader(QObject *parent)
    : ShowEpisodesLoaderBase(new Jellyfin::Loader::HTTP::GetEpisodesLoader(), parent) {}

NextUpLoader::NextUpLoader(QObject *parent)
    : NextUpLoaderBase(new Jellyfin::Loader::HTTP::GetNextUpLoader(), parent) {}

AlbumArtistLoader::AlbumArtistLoader(QObject *parent)
    : AlbumArtistLoaderBase(new Jellyfin::Loader::HTTP::GetAlbumArtistsLoader(), parent) {}

ItemModel::ItemModel(QObject *parent)
    : ApiModel<Model::Item>(parent) {
    connect(this, &QAbstractItemModel::rowsInserted, this, &ItemModel::onInsertItems);
}

QVariant ItemModel::data(const QModelIndex &index, int role) const {
    if (role <= Qt::UserRole || !index.isValid()) return QVariant();
    int row = index.row();
    if (row < 0 || row >= m_array.size()) return QVariant();
    QSharedPointer<Model::Item> item = m_array[row];
    switch(role) {
    JF_CASE(jellyfinId)
    JF_CASE(name)
    JF_CASE(originalTitle)
    JF_CASE(serverId)
    JF_CASE(etag)
    JF_CASE(sourceType)
    JF_CASE(playlistItemId)
    JF_CASE(dateCreated)
    JF_CASE(dateLastMediaAdded)
    JF_CASE(extraType)
    // Handpicked, important ones
    JF_CASE(imageTags)
    JF_CASE(imageBlurHashes)
    JF_CASE(mediaType)
    JF_CASE(type)
    JF_CASE(collectionType)
    case RoleNames::indexNumber:
        return QVariant(item->indexNumber().value_or(0));
    case RoleNames::runTimeTicks:
        return QVariant(item->runTimeTicks().value_or(0));
    JF_CASE(artists)
    case RoleNames::artistItems: {
        auto artists = item->artistItems();
        return wrapQVariantList<NameGuidPair, DTO::NameGuidPair>(artists.cbegin(), artists.cend(), const_cast<ItemModel *>(this));
    }
    case RoleNames::isFolder:
        return QVariant(item->isFolder().value_or(false));
    JF_CASE(overview)
    case RoleNames::parentIndexNumber:
        return QVariant(item->parentIndexNumber().value_or(1));
    // UserData
    case RoleNames::userDataRating:
        return QVariant(item->userData()->rating().value_or(0.0));
    case RoleNames::userDataPlayedPercentage:
        return QVariant(item->userData()->playedPercentage().value_or(0.0));
    case RoleNames::userDataUnplayedItemCount:
        return QVariant(item->userData()->unplayedItemCount().value_or(0));
    case RoleNames::userDataPlaybackPositionTicks:
        return QVariant(item->userData()->playbackPositionTicks());
    case RoleNames::userDataPlayCount:
        return QVariant(item->userData()->playCount());
    case RoleNames::userDataFavorite:
        return QVariant(item->userData()->isFavorite());
    case RoleNames::userDataLikes:
        return QVariant(item->userData()->likes().value_or(false));
    case RoleNames::userDataLastPlayedDate:
        return QVariant(item->userData()->lastPlayedDate());
    case RoleNames::userDataPlayed:
        return QVariant(item->userData()->played());
    case RoleNames::userDataKey:
        return QVariant(item->userData()->key());
    default:
        return QVariant();
    }

}

QSharedPointer<Model::Item> ItemModel::itemAt(int index) {
    return m_array[index];
}


void ItemModel::onInsertItems(const QModelIndex &parent, int start, int end) {
    if (parent.isValid()) return;
    //qDebug() << "Connecting " << (end - start + 1) << "items!";
    for (int i = start; i <= end; i++) {
        connect(itemAt(i).data(), &Model::Item::userDataChanged, this, &ItemModel::onUserDataUpdated);
    }
}

void ItemModel::onUserDataUpdated(const DTO::UserItemDataDto &newUserData) {
    const QString &itemId = newUserData.itemId();
    qDebug() << "ApiModel: item updated: " << itemId;
    for (int i = 0; i < rowCount(QModelIndex()); i++) {
        if (itemAt(i)->jellyfinId() == itemId) {
            QModelIndex index = this->index(i);
            emit this->dataChanged(index, index);
        }
    }
}

} // NS ViewModel

} // NS Jellyfin

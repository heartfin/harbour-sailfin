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
#ifndef JELLYFIN_VIEWMODEL_ITEMMODEL_H
#define JELLYFIN_VIEWMODEL_ITEMMODEL_H

#include <QAbstractListModel>
#include <QObject>
#include <QScopedPointer>

#include "propertyhelper.h"
#include "../dto/baseitemdto.h"
#include "../dto/baseitemdtoqueryresult.h"
#include "../loader/http/getuserviews.h"
#include "../loader/requesttypes.h"
#include "../model/item.h"
#include "../apimodel.h"

// Jellyfin Forward Read/Write Property
#define FWDPROP(type, propName, propSetName) JF_FWD_RW_PROP(type, propName, propSetName, this->m_parameters)

namespace Jellyfin {

namespace ViewModel {

// JellyFinRoleName
#define JFRN(name) {RoleNames::name, #name}

// This file contains all models that expose a Model::Item

using UserViewsLoaderBase = LoaderModelLoader<Model::Item, DTO::BaseItemDto, DTO::BaseItemDtoQueryResult, Jellyfin::Loader::GetUserViewsParams>;
class UserViewsLoader : public UserViewsLoaderBase {
    Q_OBJECT
public:
    explicit UserViewsLoader(QObject *parent = nullptr);

    FWDPROP(bool, includeExternalContent, IncludeExternalContent)
    FWDPROP(bool, includeHidden, IncludeHidden)
    FWDPROP(QStringList, presetViews, PresetViews)
private slots:
    void apiClientChanged(ApiClient *newApiClient);
    void userIdChanged(const QString &newUserId);
};

using UserItemsLoaderBase = LoaderModelLoader<Model::Item, DTO::BaseItemDto, DTO::BaseItemDtoQueryResult, Jellyfin::Loader::GetItemsByUserIdParams>;
class UserItemsLoader : public UserItemsLoaderBase {
    Q_OBJECT
public:
    explicit UserItemsLoader(QObject *parent = nullptr);

    FWDPROP(QString, adjacentTo, AdjacentTo)
    FWDPROP(QStringList, albumArtistIds, AlbumArtistIds)
    FWDPROP(QStringList, albumIds, AlbumIds)
    FWDPROP(QStringList, albums, Albums)
    FWDPROP(QStringList, artistIds, ArtistIds)
    FWDPROP(QStringList, artists, Artists)
    FWDPROP(bool, recursive, Recursive)
    //FWDPROP(bool, collapseBoxSetItems)
protected:
    virtual bool canReload() const override;
private slots:
    void apiClientChanged(ApiClient *newApiClient);
    void userIdChanged(const QString &newUserId);
};
/**
 * @brief Base class for each model that works with items.
 */

class ItemModel : public ApiModel<Model::Item> {
    Q_OBJECT
public:
    enum RoleNames {
        jellyfinId = Qt::UserRole + 1,
        name,
        originalTitle,
        serverId,
        etag,
        sourceType,
        playlistItemId,
        dateCreated,
        dateLastMediaAdded,
        extraType
    };

    explicit ItemModel (QObject *parent = nullptr);

    QHash<int, QByteArray> roleNames() const override {
        return {
            JFRN(jellyfinId),
            JFRN(name),
            JFRN(originalTitle),
            JFRN(serverId),
            JFRN(etag),
            JFRN(sourceType),
            JFRN(playlistItemId),
            JFRN(dateCreated),
            JFRN(dateLastMediaAdded),
            JFRN(extraType)
        };
    }
    QVariant data(const QModelIndex &index, int role) const override;
};

/*class UserItemModel : public ItemModel {
public:
    explicit UserItemModel (QObject *parent = nullptr);
};

class UserItemResumeModel : public ItemModel {
public:
    explicit UserItemResumeModel (QObject *parent = nullptr);
};

class UserItemLatestModel : public ItemModel {
public:
    explicit UserItemLatestModel (QObject *parent = nullptr);
};

class ShowNextUpModel : public ItemModel {
public:
    explicit ShowNextUpModel (QObject *parent = nullptr);
};

class ShowSeasonsModel : public ItemModel {
public:
    explicit ShowSeasonsModel (QObject *parent = nullptr);
};

class ShowEpisodesModel : public ItemModel {
public:
    explicit ShowEpisodesModel (QObject *parent = nullptr);
};*/
#undef JFRN

} // NS Jellyfin
} // NS ViewModel

#undef FWDPROP

#endif // JELLYFIN_VIEWMODEL_ITEMMODEL_H

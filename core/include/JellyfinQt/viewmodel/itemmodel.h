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

#include "../dto/baseitemdto.h"
#include "../dto/baseitemdtoqueryresult.h"
#include "../loader/http/getuserviews.h"
#include "../loader/requesttypes.h"
#include "../model/item.h"
#include "../apimodel.h"
#include "modelstatus.h"
#include "propertyhelper.h"

// Jellyfin Forward Read/Write Property
#define FWDPROP(type, propName, propSetName) JF_FWD_RW_PROP(type, propName, propSetName, this->m_parameters)

namespace Jellyfin {

namespace ViewModel {

// JellyFinRoleName
#define JFRN(name) {RoleNames::name, #name}

// This file contains all models that expose a Model::Item

/**
 * @brief Class intended for models which have a mandatory userId property, which can be extracted from the
 * ApiClient.
 */
template <class T, class D, class R, class P>
class AbstractUserParameterLoader :  public LoaderModelLoader<T, D, R, P> {
public:
    explicit AbstractUserParameterLoader(Support::Loader<R, P> *loader, QObject *parent = nullptr)
            : LoaderModelLoader<T, D, R, P>(loader, parent) {
        this->connect(this, &BaseModelLoader::apiClientChanged, this, &AbstractUserParameterLoader<T, D, R, P>::apiClientChanged);
    }
protected:
    virtual bool canReload() const override {
        return BaseModelLoader::canReload() && !this->m_parameters.userId().isNull();
    }
private:
    void apiClientChanged(ApiClient *newApiClient) {
        if (this->m_apiClient != nullptr) {
            this->disconnect(this->m_apiClient, &ApiClient::userIdChanged, this, &AbstractUserParameterLoader<T, D, R, P>::userIdChanged);
        }
        if (newApiClient != nullptr) {
            this->connect(newApiClient, &ApiClient::userIdChanged, this, &AbstractUserParameterLoader<T, D, R, P>::userIdChanged);
            if (!newApiClient->userId().isNull()) {
                this->m_parameters.setUserId(newApiClient->userId());
            }
        }
    }

    void userIdChanged(const QString &newUserId) {
        this->m_parameters.setUserId(newUserId);
        this->autoReloadIfNeeded();
    }
};

/**
 * Loads the views of an user, such as "Videos", "Music" and so on.
 */
using UserViewsLoaderBase = AbstractUserParameterLoader<Model::Item, DTO::BaseItemDto, DTO::BaseItemDtoQueryResult, Jellyfin::Loader::GetUserViewsParams>;
class UserViewsLoader : public UserViewsLoaderBase {
    Q_OBJECT
public:
    explicit UserViewsLoader(QObject *parent = nullptr);

    FWDPROP(bool, includeExternalContent, IncludeExternalContent)
    FWDPROP(bool, includeHidden, IncludeHidden)
    FWDPROP(QStringList, presetViews, PresetViews)
};

using LatestMediaBase = AbstractUserParameterLoader<Model::Item, DTO::BaseItemDto, QList<DTO::BaseItemDto>, Jellyfin::Loader::GetLatestMediaParams>;
class LatestMediaLoader : public LatestMediaBase {
    Q_OBJECT
public:
    explicit LatestMediaLoader(QObject *parent = nullptr);

    // Optional
    FWDPROP(QList<Jellyfin::DTO::ImageTypeClass::Value>, enableImageTypes, EnableImageTypes)
    FWDPROP(bool, enableImages, EnableImages)
    FWDPROP(bool, enableUserData, EnableUserData)
    FWDPROP(QList<Jellyfin::DTO::ItemFieldsClass::Value>, fields, Fields)
    FWDPROP(bool, groupItems, GroupItems)
    FWDPROP(qint32, imageTypeLimit, ImageTypeLimit)
    FWDPROP(QStringList, includeItemTypes, IncludeItemTypes)
    FWDPROP(bool, isPlayed, IsPlayed)
    FWDPROP(QString, parentId, ParentId)
};

using UserItemsLoaderBase = AbstractUserParameterLoader<Model::Item, DTO::BaseItemDto, DTO::BaseItemDtoQueryResult, Jellyfin::Loader::GetItemsByUserIdParams>;
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
    FWDPROP(bool, collapseBoxSetItems, CollapseBoxSetItems)
    FWDPROP(QStringList, contributingArtistIds, ContributingArtistIds)
    FWDPROP(QList<Jellyfin::DTO::ImageTypeClass::Value>, enableImageTypes, EnableImageTypes);
    FWDPROP(bool, enableImages, EnableImages)
    FWDPROP(bool, enableTotalRecordCount, EnableTotalRecordCount)
    FWDPROP(bool, enableUserData, EnableUserData)
    FWDPROP(QStringList, excludeArtistIds, ExcludeArtistIds)
    FWDPROP(QStringList, excludeItemIds, ExcludeItemIds)
    FWDPROP(QStringList, excludeItemTypes, ExcludeItemTypes)
    FWDPROP(QList<Jellyfin::DTO::LocationTypeClass::Value>, excludeLocationTypes, ExcludeLocationTypes)
    FWDPROP(QList<Jellyfin::DTO::ItemFieldsClass::Value>, fields, Fields)
    FWDPROP(QList<Jellyfin::DTO::ItemFilterClass::Value>, filters, Filters)
    FWDPROP(QStringList, genreIds, GenreIds)
    FWDPROP(QStringList, genres, Genres)
    FWDPROP(bool, hasImdbId, HasImdbId)
    FWDPROP(bool, hasOfficialRating, HasOfficialRating)
    FWDPROP(bool, hasOverview, HasOverview)
    FWDPROP(bool, hasParentalRating, HasParentalRating)
    FWDPROP(bool, hasSpecialFeature, HasSpecialFeature)
    FWDPROP(bool, hasSubtitles, HasSubtitles)
    FWDPROP(bool, hasThemeSong, HasThemeSong)
    FWDPROP(bool, hasThemeVideo, HasThemeVideo)
    FWDPROP(bool, hasTmdbId, HasTmdbId)
    FWDPROP(bool, hasTrailer, HasTrailer)
    FWDPROP(bool, hasTvdbId, HasTvdbId)
    FWDPROP(QStringList, ids, Ids)
    FWDPROP(qint32, imageTypeLimit, ImageTypeLimit)
    FWDPROP(QList<Jellyfin::DTO::ImageTypeClass::Value>, imageTypes, ImageTypes)
    FWDPROP(QStringList, includeItemTypes, IncludeItemTypes)
    FWDPROP(bool, is3D, Is3D)
    FWDPROP(bool, is4K, Is4K)
    FWDPROP(bool, isFavorite, IsFavorite)
    FWDPROP(bool, isHd, IsHd)
    FWDPROP(bool, isLocked, IsLocked)
    FWDPROP(bool, isMissing, IsMissing)
    FWDPROP(bool, isPlaceHolder, IsPlaceHolder)
    FWDPROP(bool, isPlayed, IsPlayed)
    FWDPROP(bool, isUnaired, IsUnaired)
    FWDPROP(QList<Jellyfin::DTO::LocationTypeClass::Value>, locationTypes, LocationTypes)
    FWDPROP(qint32, maxHeight, MaxHeight)
    FWDPROP(QString, maxOfficialRating, MaxOfficialRating)
    FWDPROP(QDateTime, maxPremiereDate, MaxPremiereDate)
    FWDPROP(qint32, maxWidth, MaxWidth)
    FWDPROP(QStringList, mediaTypes, MediaTypes)
    FWDPROP(qint32, minHeight, MinHeight)
    FWDPROP(QString, minOfficialRating, MinOfficialRating)
    FWDPROP(QDateTime, minPremiereDate, MinPremiereDate)
    FWDPROP(qint32, minWidth, MinWidth)
    FWDPROP(QString, sortBy, SortBy)
    FWDPROP(QString, sortOrder, SortOrder)
    FWDPROP(QStringList, tags, Tags)
    FWDPROP(QList<qint32>, years, Years)

    FWDPROP(QString, parentId, ParentId)
    FWDPROP(bool, recursive, Recursive)
    FWDPROP(QString, searchTerm, SearchTerm)
    //FWDPROP(bool, collapseBoxSetItems)
};

using ResumeItemsLoaderBase = AbstractUserParameterLoader<Model::Item, DTO::BaseItemDto, DTO::BaseItemDtoQueryResult, Jellyfin::Loader::GetResumeItemsParams>;
class ResumeItemsLoader : public ResumeItemsLoaderBase {
    Q_OBJECT
public:
    explicit ResumeItemsLoader(QObject *parent = nullptr);

    FWDPROP(QList<Jellyfin::DTO::ImageTypeClass::Value>, enableImageTypes, EnableImageTypes);
    FWDPROP(bool, enableImages, EnableImages)
    FWDPROP(bool, enableTotalRecordCount, EnableTotalRecordCount)
    FWDPROP(bool, enableUserData, EnableUserData)
    FWDPROP(QStringList, excludeItemTypes, ExcludeItemTypes)
    FWDPROP(QList<Jellyfin::DTO::ItemFieldsClass::Value>, fields, Fields)
    FWDPROP(qint32, imageTypeLimit, ImageTypeLimit)
    FWDPROP(QStringList, includeItemTypes, IncludeItemTypes)
    FWDPROP(QStringList, mediaTypes, MediaTypes)
    FWDPROP(QString, parentId, ParentId)
    FWDPROP(QString, searchTerm, SearchTerm)
};

using ShowSeasonsLoaderBase = AbstractUserParameterLoader<Model::Item, DTO::BaseItemDto, DTO::BaseItemDtoQueryResult, Jellyfin::Loader::GetSeasonsParams>;
class ShowSeasonsLoader : public ShowSeasonsLoaderBase {
    Q_OBJECT
public:
    explicit ShowSeasonsLoader(QObject *parent = nullptr);

    FWDPROP(QString, seriesId, SeriesId)
    FWDPROP(QString, adjacentTo, AdjacentTo)
    FWDPROP(QList<Jellyfin::DTO::ImageTypeClass::Value>, enableImageTypes, EnableImageTypes)
    FWDPROP(bool, enableImages, EnableImages)
    FWDPROP(bool, enableUserData, EnableUserData)
    FWDPROP(QList<Jellyfin::DTO::ItemFieldsClass::Value>, fields, Fields)
    FWDPROP(qint32, imageTypeLimit, ImageTypeLimit)
    FWDPROP(bool, isMissing, IsMissing)
    FWDPROP(bool, isSpecialSeason, IsSpecialSeason)

};

using ShowEpisodesLoaderBase = AbstractUserParameterLoader<Model::Item, DTO::BaseItemDto, DTO::BaseItemDtoQueryResult, Jellyfin::Loader::GetEpisodesParams>;
class ShowEpisodesLoader : public ShowEpisodesLoaderBase {
    Q_OBJECT
public:
    explicit ShowEpisodesLoader(QObject *parent = nullptr);

    FWDPROP(QString, seriesId, SeriesId)
    FWDPROP(QString, adjacentTo, AdjacentTo)
    FWDPROP(bool, enableImages, EnableImages)
    FWDPROP(bool, enableUserData, EnableUserData)
    FWDPROP(QList<Jellyfin::DTO::ItemFieldsClass::Value>, fields, Fields)
    FWDPROP(qint32, imageTypeLimit, ImageTypeLimit)
    FWDPROP(bool, isMissing, IsMissing)
    FWDPROP(qint32, season, Season)
    FWDPROP(QString, seasonId, SeasonId)
    FWDPROP(QString, sortBy, SortBy)
    FWDPROP(QString, startItemId, StartItemId)
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
        extraType,

        // Hand-picked, important ones
        imageTags,
        imageBlurHashes,
        mediaType,
        type,
        collectionType,
        indexNumber,
        runTimeTicks,
        artists,
        isFolder,
        parentIndexNumber,

        jellyfinExtendModelAfterHere = Qt::UserRole + 300 // Should be enough for now
    };

    explicit ItemModel (QObject *parent = nullptr);

    virtual QHash<int, QByteArray> roleNames() const override {
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
            JFRN(extraType),
            // Handpicked, important ones
            JFRN(imageTags),
            JFRN(imageBlurHashes),
            JFRN(mediaType),
            JFRN(type),
            JFRN(collectionType),
            JFRN(indexNumber),
            JFRN(runTimeTicks),
            JFRN(artists),
            JFRN(isFolder),
            JFRN(parentIndexNumber),
        };
    }
    QVariant data(const QModelIndex &index, int role) const override;
    QSharedPointer<Model::Item> itemAt(int index);
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

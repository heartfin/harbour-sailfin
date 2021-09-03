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
/*
 * WARNING: THIS IS AN AUTOMATICALLY GENERATED FILE! PLEASE DO NOT EDIT THIS, AS YOUR EDITS WILL GET
 * OVERWRITTEN AT SOME POINT! 
 *
 * If there is a bug in this file, please fix the code generator used to generate this file found in
 * core/openapigenerator.d. 
 *
 * This file is generated based on Jellyfin's OpenAPI description, "openapi.json". Please update that
 * file with a newer file if needed instead of manually updating the files.
 */

#ifndef JELLYFIN_LOADER_HTTP_ITEMLOOKUP_H
#define JELLYFIN_LOADER_HTTP_ITEMLOOKUP_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/externalidinfo.h"
#include "JellyfinQt/dto/remotesearchresult.h"
#include "JellyfinQt/dto/remotesearchresult.h"
#include "JellyfinQt/dto/remotesearchresult.h"
#include "JellyfinQt/dto/remotesearchresult.h"
#include "JellyfinQt/dto/remotesearchresult.h"
#include "JellyfinQt/dto/remotesearchresult.h"
#include "JellyfinQt/dto/remotesearchresult.h"
#include "JellyfinQt/dto/remotesearchresult.h"
#include "JellyfinQt/dto/remotesearchresult.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Get the item's external id info.
 */

class GetExternalIdInfosLoader : public Jellyfin::Support::HttpLoader<QList<ExternalIdInfo>, GetExternalIdInfosParams> {
public:
	explicit GetExternalIdInfosLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetExternalIdInfosParams& parameters) const override;
	QUrlQuery query(const GetExternalIdInfosParams& parameters) const override;
	QByteArray body(const GetExternalIdInfosParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get book remote search.
 */

class GetBookRemoteSearchResultsLoader : public Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetBookRemoteSearchResultsParams> {
public:
	explicit GetBookRemoteSearchResultsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetBookRemoteSearchResultsParams& parameters) const override;
	QUrlQuery query(const GetBookRemoteSearchResultsParams& parameters) const override;
	QByteArray body(const GetBookRemoteSearchResultsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get box set remote search.
 */

class GetBoxSetRemoteSearchResultsLoader : public Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetBoxSetRemoteSearchResultsParams> {
public:
	explicit GetBoxSetRemoteSearchResultsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetBoxSetRemoteSearchResultsParams& parameters) const override;
	QUrlQuery query(const GetBoxSetRemoteSearchResultsParams& parameters) const override;
	QByteArray body(const GetBoxSetRemoteSearchResultsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get movie remote search.
 */

class GetMovieRemoteSearchResultsLoader : public Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetMovieRemoteSearchResultsParams> {
public:
	explicit GetMovieRemoteSearchResultsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetMovieRemoteSearchResultsParams& parameters) const override;
	QUrlQuery query(const GetMovieRemoteSearchResultsParams& parameters) const override;
	QByteArray body(const GetMovieRemoteSearchResultsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get music album remote search.
 */

class GetMusicAlbumRemoteSearchResultsLoader : public Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetMusicAlbumRemoteSearchResultsParams> {
public:
	explicit GetMusicAlbumRemoteSearchResultsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetMusicAlbumRemoteSearchResultsParams& parameters) const override;
	QUrlQuery query(const GetMusicAlbumRemoteSearchResultsParams& parameters) const override;
	QByteArray body(const GetMusicAlbumRemoteSearchResultsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get music artist remote search.
 */

class GetMusicArtistRemoteSearchResultsLoader : public Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetMusicArtistRemoteSearchResultsParams> {
public:
	explicit GetMusicArtistRemoteSearchResultsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetMusicArtistRemoteSearchResultsParams& parameters) const override;
	QUrlQuery query(const GetMusicArtistRemoteSearchResultsParams& parameters) const override;
	QByteArray body(const GetMusicArtistRemoteSearchResultsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get music video remote search.
 */

class GetMusicVideoRemoteSearchResultsLoader : public Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetMusicVideoRemoteSearchResultsParams> {
public:
	explicit GetMusicVideoRemoteSearchResultsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetMusicVideoRemoteSearchResultsParams& parameters) const override;
	QUrlQuery query(const GetMusicVideoRemoteSearchResultsParams& parameters) const override;
	QByteArray body(const GetMusicVideoRemoteSearchResultsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get person remote search.
 */

class GetPersonRemoteSearchResultsLoader : public Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetPersonRemoteSearchResultsParams> {
public:
	explicit GetPersonRemoteSearchResultsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPersonRemoteSearchResultsParams& parameters) const override;
	QUrlQuery query(const GetPersonRemoteSearchResultsParams& parameters) const override;
	QByteArray body(const GetPersonRemoteSearchResultsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get series remote search.
 */

class GetSeriesRemoteSearchResultsLoader : public Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetSeriesRemoteSearchResultsParams> {
public:
	explicit GetSeriesRemoteSearchResultsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSeriesRemoteSearchResultsParams& parameters) const override;
	QUrlQuery query(const GetSeriesRemoteSearchResultsParams& parameters) const override;
	QByteArray body(const GetSeriesRemoteSearchResultsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get trailer remote search.
 */

class GetTrailerRemoteSearchResultsLoader : public Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetTrailerRemoteSearchResultsParams> {
public:
	explicit GetTrailerRemoteSearchResultsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetTrailerRemoteSearchResultsParams& parameters) const override;
	QUrlQuery query(const GetTrailerRemoteSearchResultsParams& parameters) const override;
	QByteArray body(const GetTrailerRemoteSearchResultsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_ITEMLOOKUP_H

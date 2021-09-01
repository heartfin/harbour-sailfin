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

#include <JellyfinQt/loader/http/itemlookup.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetExternalIdInfosLoader::GetExternalIdInfosLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<ExternalIdInfo>, GetExternalIdInfosParams>(apiClient) {}

QString GetExternalIdInfosLoader::path(const GetExternalIdInfosParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/ExternalIdInfos");
}

QUrlQuery GetExternalIdInfosLoader::query(const GetExternalIdInfosParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetBookRemoteSearchResultsLoader::GetBookRemoteSearchResultsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetBookRemoteSearchResultsParams>(apiClient) {}

QString GetBookRemoteSearchResultsLoader::path(const GetBookRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/RemoteSearch/Book");
}

QUrlQuery GetBookRemoteSearchResultsLoader::query(const GetBookRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetBoxSetRemoteSearchResultsLoader::GetBoxSetRemoteSearchResultsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetBoxSetRemoteSearchResultsParams>(apiClient) {}

QString GetBoxSetRemoteSearchResultsLoader::path(const GetBoxSetRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/RemoteSearch/BoxSet");
}

QUrlQuery GetBoxSetRemoteSearchResultsLoader::query(const GetBoxSetRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetMovieRemoteSearchResultsLoader::GetMovieRemoteSearchResultsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetMovieRemoteSearchResultsParams>(apiClient) {}

QString GetMovieRemoteSearchResultsLoader::path(const GetMovieRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/RemoteSearch/Movie");
}

QUrlQuery GetMovieRemoteSearchResultsLoader::query(const GetMovieRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetMusicAlbumRemoteSearchResultsLoader::GetMusicAlbumRemoteSearchResultsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetMusicAlbumRemoteSearchResultsParams>(apiClient) {}

QString GetMusicAlbumRemoteSearchResultsLoader::path(const GetMusicAlbumRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/RemoteSearch/MusicAlbum");
}

QUrlQuery GetMusicAlbumRemoteSearchResultsLoader::query(const GetMusicAlbumRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetMusicArtistRemoteSearchResultsLoader::GetMusicArtistRemoteSearchResultsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetMusicArtistRemoteSearchResultsParams>(apiClient) {}

QString GetMusicArtistRemoteSearchResultsLoader::path(const GetMusicArtistRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/RemoteSearch/MusicArtist");
}

QUrlQuery GetMusicArtistRemoteSearchResultsLoader::query(const GetMusicArtistRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetMusicVideoRemoteSearchResultsLoader::GetMusicVideoRemoteSearchResultsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetMusicVideoRemoteSearchResultsParams>(apiClient) {}

QString GetMusicVideoRemoteSearchResultsLoader::path(const GetMusicVideoRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/RemoteSearch/MusicVideo");
}

QUrlQuery GetMusicVideoRemoteSearchResultsLoader::query(const GetMusicVideoRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetPersonRemoteSearchResultsLoader::GetPersonRemoteSearchResultsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetPersonRemoteSearchResultsParams>(apiClient) {}

QString GetPersonRemoteSearchResultsLoader::path(const GetPersonRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/RemoteSearch/Person");
}

QUrlQuery GetPersonRemoteSearchResultsLoader::query(const GetPersonRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetSeriesRemoteSearchResultsLoader::GetSeriesRemoteSearchResultsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetSeriesRemoteSearchResultsParams>(apiClient) {}

QString GetSeriesRemoteSearchResultsLoader::path(const GetSeriesRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/RemoteSearch/Series");
}

QUrlQuery GetSeriesRemoteSearchResultsLoader::query(const GetSeriesRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetTrailerRemoteSearchResultsLoader::GetTrailerRemoteSearchResultsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RemoteSearchResult>, GetTrailerRemoteSearchResultsParams>(apiClient) {}

QString GetTrailerRemoteSearchResultsLoader::path(const GetTrailerRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/RemoteSearch/Trailer");
}

QUrlQuery GetTrailerRemoteSearchResultsLoader::query(const GetTrailerRemoteSearchResultsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin

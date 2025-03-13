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

#include <JellyfinQt/loader/http/lyrics.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetLyricsLoader::GetLyricsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<LyricDto, GetLyricsParams>(apiClient) {}

QString GetLyricsLoader::path(const GetLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Audio/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Lyrics");
}

QUrlQuery GetLyricsLoader::query(const GetLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetLyricsLoader::body(const GetLyricsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetLyricsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

UploadLyricsLoader::UploadLyricsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<LyricDto, UploadLyricsParams>(apiClient) {}

QString UploadLyricsLoader::path(const UploadLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Audio/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Lyrics");
}

QUrlQuery UploadLyricsLoader::query(const UploadLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("fileName", Support::toString<QString>(params.fileName()));

	// Optional parameters
	
	return result;
}

QByteArray UploadLyricsLoader::body(const UploadLyricsParams &params) const {
	return Support::toString<QByteArray>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UploadLyricsLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

DeleteLyricsLoader::DeleteLyricsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteLyricsParams>(apiClient) {}

QString DeleteLyricsLoader::path(const DeleteLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Audio/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Lyrics");
}

QUrlQuery DeleteLyricsLoader::query(const DeleteLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DeleteLyricsLoader::body(const DeleteLyricsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteLyricsLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

SearchRemoteLyricsLoader::SearchRemoteLyricsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RemoteLyricInfoDto>, SearchRemoteLyricsParams>(apiClient) {}

QString SearchRemoteLyricsLoader::path(const SearchRemoteLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Audio/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/RemoteSearch/Lyrics");
}

QUrlQuery SearchRemoteLyricsLoader::query(const SearchRemoteLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SearchRemoteLyricsLoader::body(const SearchRemoteLyricsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SearchRemoteLyricsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DownloadRemoteLyricsLoader::DownloadRemoteLyricsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<LyricDto, DownloadRemoteLyricsParams>(apiClient) {}

QString DownloadRemoteLyricsLoader::path(const DownloadRemoteLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Audio/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/RemoteSearch/Lyrics/") + Support::toString< QString>(params.lyricId()) ;
}

QUrlQuery DownloadRemoteLyricsLoader::query(const DownloadRemoteLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DownloadRemoteLyricsLoader::body(const DownloadRemoteLyricsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DownloadRemoteLyricsLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetRemoteLyricsLoader::GetRemoteLyricsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<LyricDto, GetRemoteLyricsParams>(apiClient) {}

QString GetRemoteLyricsLoader::path(const GetRemoteLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Providers/Lyrics/") + Support::toString< QString>(params.lyricId()) ;
}

QUrlQuery GetRemoteLyricsLoader::query(const GetRemoteLyricsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetRemoteLyricsLoader::body(const GetRemoteLyricsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRemoteLyricsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin

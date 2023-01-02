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

#include <JellyfinQt/loader/http/subtitle.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetFallbackFontListLoader::GetFallbackFontListLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<FontFile>, GetFallbackFontListParams>(apiClient) {}

QString GetFallbackFontListLoader::path(const GetFallbackFontListParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/FallbackFont/Fonts");
}

QUrlQuery GetFallbackFontListLoader::query(const GetFallbackFontListParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetFallbackFontListLoader::body(const GetFallbackFontListParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetFallbackFontListLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

SearchRemoteSubtitlesLoader::SearchRemoteSubtitlesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<RemoteSubtitleInfo>, SearchRemoteSubtitlesParams>(apiClient) {}

QString SearchRemoteSubtitlesLoader::path(const SearchRemoteSubtitlesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/RemoteSearch/Subtitles/") + Support::toString< QString>(params.language()) ;
}

QUrlQuery SearchRemoteSubtitlesLoader::query(const SearchRemoteSubtitlesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.isPerfectMatchNull()) {
		result.addQueryItem("isPerfectMatch", Support::toString<std::optional<bool>>(params.isPerfectMatch()));
	}
	
	return result;
}

QByteArray SearchRemoteSubtitlesLoader::body(const SearchRemoteSubtitlesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SearchRemoteSubtitlesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DownloadRemoteSubtitlesLoader::DownloadRemoteSubtitlesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DownloadRemoteSubtitlesParams>(apiClient) {}

QString DownloadRemoteSubtitlesLoader::path(const DownloadRemoteSubtitlesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/RemoteSearch/Subtitles/") + Support::toString< QString>(params.subtitleId()) ;
}

QUrlQuery DownloadRemoteSubtitlesLoader::query(const DownloadRemoteSubtitlesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DownloadRemoteSubtitlesLoader::body(const DownloadRemoteSubtitlesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DownloadRemoteSubtitlesLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

UploadSubtitleLoader::UploadSubtitleLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UploadSubtitleParams>(apiClient) {}

QString UploadSubtitleLoader::path(const UploadSubtitleParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Videos/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Subtitles");
}

QUrlQuery UploadSubtitleLoader::query(const UploadSubtitleParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UploadSubtitleLoader::body(const UploadSubtitleParams &params) const {
	return Support::toString<QSharedPointer<UploadSubtitleDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UploadSubtitleLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

DeleteSubtitleLoader::DeleteSubtitleLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteSubtitleParams>(apiClient) {}

QString DeleteSubtitleLoader::path(const DeleteSubtitleParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Videos/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/Subtitles/") + Support::toString< qint32>(params.index()) ;
}

QUrlQuery DeleteSubtitleLoader::query(const DeleteSubtitleParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DeleteSubtitleLoader::body(const DeleteSubtitleParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteSubtitleLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin

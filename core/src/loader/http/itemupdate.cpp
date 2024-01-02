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

#include <JellyfinQt/loader/http/itemupdate.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

UpdateItemLoader::UpdateItemLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateItemParams>(apiClient) {}

QString UpdateItemLoader::path(const UpdateItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) ;
}

QUrlQuery UpdateItemLoader::query(const UpdateItemParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdateItemLoader::body(const UpdateItemParams &params) const {
	return Support::toString<QSharedPointer<BaseItemDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateItemLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

UpdateItemContentTypeLoader::UpdateItemContentTypeLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateItemContentTypeParams>(apiClient) {}

QString UpdateItemContentTypeLoader::path(const UpdateItemContentTypeParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/ContentType");
}

QUrlQuery UpdateItemContentTypeLoader::query(const UpdateItemContentTypeParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.contentTypeNull()) {
		result.addQueryItem("contentType", Support::toString<QString>(params.contentType()));
	}
	
	return result;
}

QByteArray UpdateItemContentTypeLoader::body(const UpdateItemContentTypeParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation UpdateItemContentTypeLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetMetadataEditorInfoLoader::GetMetadataEditorInfoLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<MetadataEditorInfo, GetMetadataEditorInfoParams>(apiClient) {}

QString GetMetadataEditorInfoLoader::path(const GetMetadataEditorInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Items/") + Support::toString< QString>(params.itemId()) + QStringLiteral("/MetadataEditor");
}

QUrlQuery GetMetadataEditorInfoLoader::query(const GetMetadataEditorInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetMetadataEditorInfoLoader::body(const GetMetadataEditorInfoParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetMetadataEditorInfoLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin

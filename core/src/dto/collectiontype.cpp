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

#include <JellyfinQt/dto/collectiontype.h>

namespace Jellyfin {
namespace DTO {

CollectionTypeClass::CollectionTypeClass() {}

} // NS DTO

namespace Support {

using CollectionType = Jellyfin::DTO::CollectionType;

template <>
CollectionType fromJsonValue(const QJsonValue &source, convertType<CollectionType>) {
	if (!source.isString()) return CollectionType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("unknown")) {
		return CollectionType::Unknown;
	}
	if (str == QStringLiteral("movies")) {
		return CollectionType::Movies;
	}
	if (str == QStringLiteral("tvshows")) {
		return CollectionType::Tvshows;
	}
	if (str == QStringLiteral("music")) {
		return CollectionType::Music;
	}
	if (str == QStringLiteral("musicvideos")) {
		return CollectionType::Musicvideos;
	}
	if (str == QStringLiteral("trailers")) {
		return CollectionType::Trailers;
	}
	if (str == QStringLiteral("homevideos")) {
		return CollectionType::Homevideos;
	}
	if (str == QStringLiteral("boxsets")) {
		return CollectionType::Boxsets;
	}
	if (str == QStringLiteral("books")) {
		return CollectionType::Books;
	}
	if (str == QStringLiteral("photos")) {
		return CollectionType::Photos;
	}
	if (str == QStringLiteral("livetv")) {
		return CollectionType::Livetv;
	}
	if (str == QStringLiteral("playlists")) {
		return CollectionType::Playlists;
	}
	if (str == QStringLiteral("folders")) {
		return CollectionType::Folders;
	}
	
	return CollectionType::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const CollectionType &source, convertType<CollectionType>) {
	switch(source) {
	case CollectionType::Unknown:
		return QStringLiteral("unknown");
	case CollectionType::Movies:
		return QStringLiteral("movies");
	case CollectionType::Tvshows:
		return QStringLiteral("tvshows");
	case CollectionType::Music:
		return QStringLiteral("music");
	case CollectionType::Musicvideos:
		return QStringLiteral("musicvideos");
	case CollectionType::Trailers:
		return QStringLiteral("trailers");
	case CollectionType::Homevideos:
		return QStringLiteral("homevideos");
	case CollectionType::Boxsets:
		return QStringLiteral("boxsets");
	case CollectionType::Books:
		return QStringLiteral("books");
	case CollectionType::Photos:
		return QStringLiteral("photos");
	case CollectionType::Livetv:
		return QStringLiteral("livetv");
	case CollectionType::Playlists:
		return QStringLiteral("playlists");
	case CollectionType::Folders:
		return QStringLiteral("folders");

	case CollectionType::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin

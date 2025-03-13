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

#include <JellyfinQt/dto/collectiontypeoptions.h>

namespace Jellyfin {
namespace DTO {

CollectionTypeOptionsClass::CollectionTypeOptionsClass() {}

} // NS DTO

namespace Support {

using CollectionTypeOptions = Jellyfin::DTO::CollectionTypeOptions;

template <>
CollectionTypeOptions fromJsonValue(const QJsonValue &source, convertType<CollectionTypeOptions>) {
	if (!source.isString()) return CollectionTypeOptions::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("movies")) {
		return CollectionTypeOptions::Movies;
	}
	if (str == QStringLiteral("tvshows")) {
		return CollectionTypeOptions::Tvshows;
	}
	if (str == QStringLiteral("music")) {
		return CollectionTypeOptions::Music;
	}
	if (str == QStringLiteral("musicvideos")) {
		return CollectionTypeOptions::Musicvideos;
	}
	if (str == QStringLiteral("homevideos")) {
		return CollectionTypeOptions::Homevideos;
	}
	if (str == QStringLiteral("boxsets")) {
		return CollectionTypeOptions::Boxsets;
	}
	if (str == QStringLiteral("books")) {
		return CollectionTypeOptions::Books;
	}
	if (str == QStringLiteral("mixed")) {
		return CollectionTypeOptions::Mixed;
	}
	
	return CollectionTypeOptions::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const CollectionTypeOptions &source, convertType<CollectionTypeOptions>) {
	switch(source) {
	case CollectionTypeOptions::Movies:
		return QStringLiteral("movies");
	case CollectionTypeOptions::Tvshows:
		return QStringLiteral("tvshows");
	case CollectionTypeOptions::Music:
		return QStringLiteral("music");
	case CollectionTypeOptions::Musicvideos:
		return QStringLiteral("musicvideos");
	case CollectionTypeOptions::Homevideos:
		return QStringLiteral("homevideos");
	case CollectionTypeOptions::Boxsets:
		return QStringLiteral("boxsets");
	case CollectionTypeOptions::Books:
		return QStringLiteral("books");
	case CollectionTypeOptions::Mixed:
		return QStringLiteral("mixed");

	case CollectionTypeOptions::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin

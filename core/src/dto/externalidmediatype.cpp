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

#include <JellyfinQt/dto/externalidmediatype.h>

namespace Jellyfin {
namespace DTO {

ExternalIdMediaTypeClass::ExternalIdMediaTypeClass() {}


} // NS DTO

namespace Support {

using ExternalIdMediaType = Jellyfin::DTO::ExternalIdMediaType;

template <>
ExternalIdMediaType fromJsonValue<ExternalIdMediaType>(const QJsonValue &source) {
	if (!source.isString()) return ExternalIdMediaType::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Album")) {
		return ExternalIdMediaType::Album;
	}
	if (str == QStringLiteral("AlbumArtist")) {
		return ExternalIdMediaType::AlbumArtist;
	}
	if (str == QStringLiteral("Artist")) {
		return ExternalIdMediaType::Artist;
	}
	if (str == QStringLiteral("BoxSet")) {
		return ExternalIdMediaType::BoxSet;
	}
	if (str == QStringLiteral("Episode")) {
		return ExternalIdMediaType::Episode;
	}
	if (str == QStringLiteral("Movie")) {
		return ExternalIdMediaType::Movie;
	}
	if (str == QStringLiteral("OtherArtist")) {
		return ExternalIdMediaType::OtherArtist;
	}
	if (str == QStringLiteral("Person")) {
		return ExternalIdMediaType::Person;
	}
	if (str == QStringLiteral("ReleaseGroup")) {
		return ExternalIdMediaType::ReleaseGroup;
	}
	if (str == QStringLiteral("Season")) {
		return ExternalIdMediaType::Season;
	}
	if (str == QStringLiteral("Series")) {
		return ExternalIdMediaType::Series;
	}
	if (str == QStringLiteral("Track")) {
		return ExternalIdMediaType::Track;
	}
	
	return ExternalIdMediaType::EnumNotSet;
}

} // NS DTO
} // NS Jellyfin

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

#ifndef JELLYFIN_DTO_EXTERNALIDMEDIATYPE_H
#define JELLYFIN_DTO_EXTERNALIDMEDIATYPE_H

#include <QJsonValue>
#include <QObject>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {

class ExternalIdMediaTypeClass {
	Q_GADGET
public:
	enum Value {
		EnumNotSet,
		Album,
		AlbumArtist,
		Artist,
		BoxSet,
		Episode,
		Movie,
		OtherArtist,
		Person,
		ReleaseGroup,
		Season,
		Series,
		Track,
	};
	Q_ENUM(Value)
private:
	explicit ExternalIdMediaTypeClass();
};

typedef ExternalIdMediaTypeClass::Value ExternalIdMediaType;

} // NS DTO

namespace Support {

using ExternalIdMediaType = Jellyfin::DTO::ExternalIdMediaType;
using ExternalIdMediaTypeClass = Jellyfin::DTO::ExternalIdMediaTypeClass;

template <>
ExternalIdMediaType fromJsonValue<ExternalIdMediaType>(const QJsonValue &source) {
	if (!source.isString()) return ExternalIdMediaTypeClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Album")) {
		return ExternalIdMediaTypeClass::Album;
	}
	if (str == QStringLiteral("AlbumArtist")) {
		return ExternalIdMediaTypeClass::AlbumArtist;
	}
	if (str == QStringLiteral("Artist")) {
		return ExternalIdMediaTypeClass::Artist;
	}
	if (str == QStringLiteral("BoxSet")) {
		return ExternalIdMediaTypeClass::BoxSet;
	}
	if (str == QStringLiteral("Episode")) {
		return ExternalIdMediaTypeClass::Episode;
	}
	if (str == QStringLiteral("Movie")) {
		return ExternalIdMediaTypeClass::Movie;
	}
	if (str == QStringLiteral("OtherArtist")) {
		return ExternalIdMediaTypeClass::OtherArtist;
	}
	if (str == QStringLiteral("Person")) {
		return ExternalIdMediaTypeClass::Person;
	}
	if (str == QStringLiteral("ReleaseGroup")) {
		return ExternalIdMediaTypeClass::ReleaseGroup;
	}
	if (str == QStringLiteral("Season")) {
		return ExternalIdMediaTypeClass::Season;
	}
	if (str == QStringLiteral("Series")) {
		return ExternalIdMediaTypeClass::Series;
	}
	if (str == QStringLiteral("Track")) {
		return ExternalIdMediaTypeClass::Track;
	}
	
	return ExternalIdMediaTypeClass::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_EXTERNALIDMEDIATYPE_H

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

#ifndef JELLYFIN_DTO_METADATAFIELD_H
#define JELLYFIN_DTO_METADATAFIELD_H

#include <QJsonValue>
#include <QObject>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {

class MetadataFieldClass {
	Q_GADGET
public:
	enum Value {
		EnumNotSet,
		Cast,
		Genres,
		ProductionLocations,
		Studios,
		Tags,
		Name,
		Overview,
		Runtime,
		OfficialRating,
	};
	Q_ENUM(Value)
private:
	explicit MetadataFieldClass();
};

typedef MetadataFieldClass::Value MetadataField;

} // NS DTO

namespace Support {

using MetadataField = Jellyfin::DTO::MetadataField;
using MetadataFieldClass = Jellyfin::DTO::MetadataFieldClass;

template <>
MetadataField fromJsonValue<MetadataField>(const QJsonValue &source) {
	if (!source.isString()) return MetadataFieldClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Cast")) {
		return MetadataFieldClass::Cast;
	}
	if (str == QStringLiteral("Genres")) {
		return MetadataFieldClass::Genres;
	}
	if (str == QStringLiteral("ProductionLocations")) {
		return MetadataFieldClass::ProductionLocations;
	}
	if (str == QStringLiteral("Studios")) {
		return MetadataFieldClass::Studios;
	}
	if (str == QStringLiteral("Tags")) {
		return MetadataFieldClass::Tags;
	}
	if (str == QStringLiteral("Name")) {
		return MetadataFieldClass::Name;
	}
	if (str == QStringLiteral("Overview")) {
		return MetadataFieldClass::Overview;
	}
	if (str == QStringLiteral("Runtime")) {
		return MetadataFieldClass::Runtime;
	}
	if (str == QStringLiteral("OfficialRating")) {
		return MetadataFieldClass::OfficialRating;
	}
	
	return MetadataFieldClass::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_METADATAFIELD_H

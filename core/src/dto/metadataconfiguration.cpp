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

#include <JellyfinQt/dto/metadataconfiguration.h>

namespace Jellyfin {
namespace DTO {

MetadataConfiguration::MetadataConfiguration() {}
MetadataConfiguration::MetadataConfiguration (
		bool useFileCreationTimeForDateAdded 
		) :
	m_useFileCreationTimeForDateAdded(useFileCreationTimeForDateAdded) { }



MetadataConfiguration::MetadataConfiguration(const MetadataConfiguration &other) :

	m_useFileCreationTimeForDateAdded(other.m_useFileCreationTimeForDateAdded){}


void MetadataConfiguration::replaceData(MetadataConfiguration &other) {
	m_useFileCreationTimeForDateAdded = other.m_useFileCreationTimeForDateAdded;
}

MetadataConfiguration MetadataConfiguration::fromJson(QJsonObject source) {
	MetadataConfiguration instance;
	instance.setFromJson(source);
	return instance;
}


void MetadataConfiguration::setFromJson(QJsonObject source) {
	m_useFileCreationTimeForDateAdded = Jellyfin::Support::fromJsonValue<bool>(source["UseFileCreationTimeForDateAdded"]);

}
	
QJsonObject MetadataConfiguration::toJson() const {
	QJsonObject result;
	
	result["UseFileCreationTimeForDateAdded"] = Jellyfin::Support::toJsonValue<bool>(m_useFileCreationTimeForDateAdded);	
	return result;
}

bool MetadataConfiguration::useFileCreationTimeForDateAdded() const { return m_useFileCreationTimeForDateAdded; }

void MetadataConfiguration::setUseFileCreationTimeForDateAdded(bool newUseFileCreationTimeForDateAdded) {
	m_useFileCreationTimeForDateAdded = newUseFileCreationTimeForDateAdded;
}


} // NS DTO

namespace Support {

using MetadataConfiguration = Jellyfin::DTO::MetadataConfiguration;

template <>
MetadataConfiguration fromJsonValue(const QJsonValue &source, convertType<MetadataConfiguration>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MetadataConfiguration::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MetadataConfiguration &source, convertType<MetadataConfiguration>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

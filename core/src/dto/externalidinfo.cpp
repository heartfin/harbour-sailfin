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

#include <JellyfinQt/dto/externalidinfo.h>

namespace Jellyfin {
namespace DTO {

ExternalIdInfo::ExternalIdInfo() {}
ExternalIdInfo::ExternalIdInfo (
		ExternalIdMediaType type 
		) :
	m_type(type) { }



ExternalIdInfo::ExternalIdInfo(const ExternalIdInfo &other) :

	m_name(other.m_name),
	m_key(other.m_key),
	m_type(other.m_type),
	m_urlFormatString(other.m_urlFormatString){}


void ExternalIdInfo::replaceData(ExternalIdInfo &other) {
	m_name = other.m_name;
	m_key = other.m_key;
	m_type = other.m_type;
	m_urlFormatString = other.m_urlFormatString;
}

ExternalIdInfo ExternalIdInfo::fromJson(QJsonObject source) {
	ExternalIdInfo instance;
	instance.setFromJson(source);
	return instance;
}


void ExternalIdInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_key = Jellyfin::Support::fromJsonValue<QString>(source["Key"]);
	m_type = Jellyfin::Support::fromJsonValue<ExternalIdMediaType>(source["Type"]);
	m_urlFormatString = Jellyfin::Support::fromJsonValue<QString>(source["UrlFormatString"]);

}
	
QJsonObject ExternalIdInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_key.isNull())) {
		result["Key"] = Jellyfin::Support::toJsonValue<QString>(m_key);
	}
			
	result["Type"] = Jellyfin::Support::toJsonValue<ExternalIdMediaType>(m_type);		
	
	if (!(m_urlFormatString.isNull())) {
		result["UrlFormatString"] = Jellyfin::Support::toJsonValue<QString>(m_urlFormatString);
	}
		
	return result;
}

QString ExternalIdInfo::name() const { return m_name; }

void ExternalIdInfo::setName(QString newName) {
	m_name = newName;
}
bool ExternalIdInfo::nameNull() const {
	return m_name.isNull();
}

void ExternalIdInfo::setNameNull() {
	m_name.clear();

}
QString ExternalIdInfo::key() const { return m_key; }

void ExternalIdInfo::setKey(QString newKey) {
	m_key = newKey;
}
bool ExternalIdInfo::keyNull() const {
	return m_key.isNull();
}

void ExternalIdInfo::setKeyNull() {
	m_key.clear();

}
ExternalIdMediaType ExternalIdInfo::type() const { return m_type; }

void ExternalIdInfo::setType(ExternalIdMediaType newType) {
	m_type = newType;
}

QString ExternalIdInfo::urlFormatString() const { return m_urlFormatString; }

void ExternalIdInfo::setUrlFormatString(QString newUrlFormatString) {
	m_urlFormatString = newUrlFormatString;
}
bool ExternalIdInfo::urlFormatStringNull() const {
	return m_urlFormatString.isNull();
}

void ExternalIdInfo::setUrlFormatStringNull() {
	m_urlFormatString.clear();

}

} // NS DTO

namespace Support {

using ExternalIdInfo = Jellyfin::DTO::ExternalIdInfo;

template <>
ExternalIdInfo fromJsonValue(const QJsonValue &source, convertType<ExternalIdInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ExternalIdInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ExternalIdInfo &source, convertType<ExternalIdInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

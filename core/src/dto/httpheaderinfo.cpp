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

#include <JellyfinQt/dto/httpheaderinfo.h>

namespace Jellyfin {
namespace DTO {

HttpHeaderInfo::HttpHeaderInfo() {}
HttpHeaderInfo::HttpHeaderInfo (
		HeaderMatchType match 
		) :
	m_match(match) { }



HttpHeaderInfo::HttpHeaderInfo(const HttpHeaderInfo &other) :

	m_name(other.m_name),
	m_value(other.m_value),
	m_match(other.m_match){}


void HttpHeaderInfo::replaceData(HttpHeaderInfo &other) {
	m_name = other.m_name;
	m_value = other.m_value;
	m_match = other.m_match;
}

HttpHeaderInfo HttpHeaderInfo::fromJson(QJsonObject source) {
	HttpHeaderInfo instance;
	instance.setFromJson(source);
	return instance;
}


void HttpHeaderInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_value = Jellyfin::Support::fromJsonValue<QString>(source["Value"]);
	m_match = Jellyfin::Support::fromJsonValue<HeaderMatchType>(source["Match"]);

}
	
QJsonObject HttpHeaderInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_value.isNull())) {
		result["Value"] = Jellyfin::Support::toJsonValue<QString>(m_value);
	}
			
	result["Match"] = Jellyfin::Support::toJsonValue<HeaderMatchType>(m_match);	
	return result;
}

QString HttpHeaderInfo::name() const { return m_name; }

void HttpHeaderInfo::setName(QString newName) {
	m_name = newName;
}
bool HttpHeaderInfo::nameNull() const {
	return m_name.isNull();
}

void HttpHeaderInfo::setNameNull() {
	m_name.clear();

}
QString HttpHeaderInfo::value() const { return m_value; }

void HttpHeaderInfo::setValue(QString newValue) {
	m_value = newValue;
}
bool HttpHeaderInfo::valueNull() const {
	return m_value.isNull();
}

void HttpHeaderInfo::setValueNull() {
	m_value.clear();

}
HeaderMatchType HttpHeaderInfo::match() const { return m_match; }

void HttpHeaderInfo::setMatch(HeaderMatchType newMatch) {
	m_match = newMatch;
}


} // NS DTO

namespace Support {

using HttpHeaderInfo = Jellyfin::DTO::HttpHeaderInfo;

template <>
HttpHeaderInfo fromJsonValue(const QJsonValue &source, convertType<HttpHeaderInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return HttpHeaderInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const HttpHeaderInfo &source, convertType<HttpHeaderInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

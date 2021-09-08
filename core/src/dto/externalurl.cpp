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

#include <JellyfinQt/dto/externalurl.h>

namespace Jellyfin {
namespace DTO {

ExternalUrl::ExternalUrl() {}

ExternalUrl::ExternalUrl(const ExternalUrl &other) :

	m_name(other.m_name),
	m_url(other.m_url){}


void ExternalUrl::replaceData(ExternalUrl &other) {
	m_name = other.m_name;
	m_url = other.m_url;
}

ExternalUrl ExternalUrl::fromJson(QJsonObject source) {
	ExternalUrl instance;
	instance.setFromJson(source);
	return instance;
}


void ExternalUrl::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_url = Jellyfin::Support::fromJsonValue<QString>(source["Url"]);

}
	
QJsonObject ExternalUrl::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_url.isNull())) {
		result["Url"] = Jellyfin::Support::toJsonValue<QString>(m_url);
	}
		
	return result;
}

QString ExternalUrl::name() const { return m_name; }

void ExternalUrl::setName(QString newName) {
	m_name = newName;
}
bool ExternalUrl::nameNull() const {
	return m_name.isNull();
}

void ExternalUrl::setNameNull() {
	m_name.clear();

}
QString ExternalUrl::url() const { return m_url; }

void ExternalUrl::setUrl(QString newUrl) {
	m_url = newUrl;
}
bool ExternalUrl::urlNull() const {
	return m_url.isNull();
}

void ExternalUrl::setUrlNull() {
	m_url.clear();

}

} // NS DTO

namespace Support {

using ExternalUrl = Jellyfin::DTO::ExternalUrl;

template <>
ExternalUrl fromJsonValue(const QJsonValue &source, convertType<ExternalUrl>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ExternalUrl::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ExternalUrl &source, convertType<ExternalUrl>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

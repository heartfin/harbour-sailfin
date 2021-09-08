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

#include <JellyfinQt/dto/nameidpair.h>

namespace Jellyfin {
namespace DTO {

NameIdPair::NameIdPair() {}

NameIdPair::NameIdPair(const NameIdPair &other) :

	m_name(other.m_name),
	m_jellyfinId(other.m_jellyfinId){}


void NameIdPair::replaceData(NameIdPair &other) {
	m_name = other.m_name;
	m_jellyfinId = other.m_jellyfinId;
}

NameIdPair NameIdPair::fromJson(QJsonObject source) {
	NameIdPair instance;
	instance.setFromJson(source);
	return instance;
}


void NameIdPair::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);

}
	
QJsonObject NameIdPair::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_jellyfinId.isNull())) {
		result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	}
		
	return result;
}

QString NameIdPair::name() const { return m_name; }

void NameIdPair::setName(QString newName) {
	m_name = newName;
}
bool NameIdPair::nameNull() const {
	return m_name.isNull();
}

void NameIdPair::setNameNull() {
	m_name.clear();

}
QString NameIdPair::jellyfinId() const { return m_jellyfinId; }

void NameIdPair::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool NameIdPair::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void NameIdPair::setJellyfinIdNull() {
	m_jellyfinId.clear();

}

} // NS DTO

namespace Support {

using NameIdPair = Jellyfin::DTO::NameIdPair;

template <>
NameIdPair fromJsonValue(const QJsonValue &source, convertType<NameIdPair>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return NameIdPair::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const NameIdPair &source, convertType<NameIdPair>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

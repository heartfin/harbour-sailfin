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

#include <JellyfinQt/dto/nameguidpair.h>

namespace Jellyfin {
namespace DTO {

NameGuidPair::NameGuidPair() {}
NameGuidPair::NameGuidPair (
		QString jellyfinId 
		) :
	m_jellyfinId(jellyfinId) { }



NameGuidPair::NameGuidPair(const NameGuidPair &other) :

	m_name(other.m_name),
	m_jellyfinId(other.m_jellyfinId){}


void NameGuidPair::replaceData(NameGuidPair &other) {
	m_name = other.m_name;
	m_jellyfinId = other.m_jellyfinId;
}

NameGuidPair NameGuidPair::fromJson(QJsonObject source) {
	NameGuidPair instance;
	instance.setFromJson(source);
	return instance;
}


void NameGuidPair::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);

}
	
QJsonObject NameGuidPair::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);	
	return result;
}

QString NameGuidPair::name() const { return m_name; }

void NameGuidPair::setName(QString newName) {
	m_name = newName;
}
bool NameGuidPair::nameNull() const {
	return m_name.isNull();
}

void NameGuidPair::setNameNull() {
	m_name.clear();

}
QString NameGuidPair::jellyfinId() const { return m_jellyfinId; }

void NameGuidPair::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}


} // NS DTO

namespace Support {

using NameGuidPair = Jellyfin::DTO::NameGuidPair;

template <>
NameGuidPair fromJsonValue(const QJsonValue &source, convertType<NameGuidPair>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return NameGuidPair::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const NameGuidPair &source, convertType<NameGuidPair>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

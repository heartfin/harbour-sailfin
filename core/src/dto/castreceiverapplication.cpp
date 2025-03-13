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

#include <JellyfinQt/dto/castreceiverapplication.h>

namespace Jellyfin {
namespace DTO {

CastReceiverApplication::CastReceiverApplication() {}
CastReceiverApplication::CastReceiverApplication (
		QString jellyfinId, 
		QString name 
		) :
	m_jellyfinId(jellyfinId),
	m_name(name) { }



CastReceiverApplication::CastReceiverApplication(const CastReceiverApplication &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_name(other.m_name){}


void CastReceiverApplication::replaceData(CastReceiverApplication &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_name = other.m_name;
}

CastReceiverApplication CastReceiverApplication::fromJson(QJsonObject source) {
	CastReceiverApplication instance;
	instance.setFromJson(source);
	return instance;
}


void CastReceiverApplication::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);

}
	
QJsonObject CastReceiverApplication::toJson() const {
	QJsonObject result;
	
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);		
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);	
	return result;
}

QString CastReceiverApplication::jellyfinId() const { return m_jellyfinId; }

void CastReceiverApplication::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString CastReceiverApplication::name() const { return m_name; }

void CastReceiverApplication::setName(QString newName) {
	m_name = newName;
}


} // NS DTO

namespace Support {

using CastReceiverApplication = Jellyfin::DTO::CastReceiverApplication;

template <>
CastReceiverApplication fromJsonValue(const QJsonValue &source, convertType<CastReceiverApplication>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return CastReceiverApplication::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const CastReceiverApplication &source, convertType<CastReceiverApplication>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

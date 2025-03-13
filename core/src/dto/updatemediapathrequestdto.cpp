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

#include <JellyfinQt/dto/updatemediapathrequestdto.h>

namespace Jellyfin {
namespace DTO {

UpdateMediaPathRequestDto::UpdateMediaPathRequestDto() {}
UpdateMediaPathRequestDto::UpdateMediaPathRequestDto (
		QString name, 
		QSharedPointer<MediaPathInfo> pathInfo 
		) :
	m_name(name),
	m_pathInfo(pathInfo) { }



UpdateMediaPathRequestDto::UpdateMediaPathRequestDto(const UpdateMediaPathRequestDto &other) :

	m_name(other.m_name),
	m_pathInfo(other.m_pathInfo){}


void UpdateMediaPathRequestDto::replaceData(UpdateMediaPathRequestDto &other) {
	m_name = other.m_name;
	m_pathInfo = other.m_pathInfo;
}

UpdateMediaPathRequestDto UpdateMediaPathRequestDto::fromJson(QJsonObject source) {
	UpdateMediaPathRequestDto instance;
	instance.setFromJson(source);
	return instance;
}


void UpdateMediaPathRequestDto::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_pathInfo = Jellyfin::Support::fromJsonValue<QSharedPointer<MediaPathInfo>>(source["PathInfo"]);

}
	
QJsonObject UpdateMediaPathRequestDto::toJson() const {
	QJsonObject result;
	
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);		
	result["PathInfo"] = Jellyfin::Support::toJsonValue<QSharedPointer<MediaPathInfo>>(m_pathInfo);	
	return result;
}

QString UpdateMediaPathRequestDto::name() const { return m_name; }

void UpdateMediaPathRequestDto::setName(QString newName) {
	m_name = newName;
}

QSharedPointer<MediaPathInfo> UpdateMediaPathRequestDto::pathInfo() const { return m_pathInfo; }

void UpdateMediaPathRequestDto::setPathInfo(QSharedPointer<MediaPathInfo> newPathInfo) {
	m_pathInfo = newPathInfo;
}


} // NS DTO

namespace Support {

using UpdateMediaPathRequestDto = Jellyfin::DTO::UpdateMediaPathRequestDto;

template <>
UpdateMediaPathRequestDto fromJsonValue(const QJsonValue &source, convertType<UpdateMediaPathRequestDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return UpdateMediaPathRequestDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const UpdateMediaPathRequestDto &source, convertType<UpdateMediaPathRequestDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

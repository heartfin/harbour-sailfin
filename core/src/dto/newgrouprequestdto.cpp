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

#include <JellyfinQt/dto/newgrouprequestdto.h>

namespace Jellyfin {
namespace DTO {

NewGroupRequestDto::NewGroupRequestDto() {}

NewGroupRequestDto::NewGroupRequestDto(const NewGroupRequestDto &other) :

	m_groupName(other.m_groupName){}


void NewGroupRequestDto::replaceData(NewGroupRequestDto &other) {
	m_groupName = other.m_groupName;
}

NewGroupRequestDto NewGroupRequestDto::fromJson(QJsonObject source) {
	NewGroupRequestDto instance;
	instance.setFromJson(source);
	return instance;
}


void NewGroupRequestDto::setFromJson(QJsonObject source) {
	m_groupName = Jellyfin::Support::fromJsonValue<QString>(source["GroupName"]);

}
	
QJsonObject NewGroupRequestDto::toJson() {
	QJsonObject result;
	result["GroupName"] = Jellyfin::Support::toJsonValue<QString>(m_groupName);

	return result;
}

QString NewGroupRequestDto::groupName() const { return m_groupName; }

void NewGroupRequestDto::setGroupName(QString newGroupName) {
	m_groupName = newGroupName;
}
bool NewGroupRequestDto::groupNameNull() const {
	return m_groupName.isNull();
}

void NewGroupRequestDto::setGroupNameNull() {
	m_groupName.clear();

}

} // NS DTO

namespace Support {

using NewGroupRequestDto = Jellyfin::DTO::NewGroupRequestDto;

template <>
NewGroupRequestDto fromJsonValue<NewGroupRequestDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return NewGroupRequestDto::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

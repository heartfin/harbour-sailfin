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

#include <JellyfinQt/dto/groupupdate.h>

namespace Jellyfin {
namespace DTO {

GroupUpdate::GroupUpdate() {}
GroupUpdate::GroupUpdate (
		QString groupId, 
		GroupUpdateType type 
		) :
	m_groupId(groupId),
	m_type(type) { }



GroupUpdate::GroupUpdate(const GroupUpdate &other) :

	m_groupId(other.m_groupId),
	m_type(other.m_type){}


void GroupUpdate::replaceData(GroupUpdate &other) {
	m_groupId = other.m_groupId;
	m_type = other.m_type;
}

GroupUpdate GroupUpdate::fromJson(QJsonObject source) {
	GroupUpdate instance;
	instance.setFromJson(source);
	return instance;
}


void GroupUpdate::setFromJson(QJsonObject source) {
	m_groupId = Jellyfin::Support::fromJsonValue<QString>(source["GroupId"]);
	m_type = Jellyfin::Support::fromJsonValue<GroupUpdateType>(source["Type"]);

}
	
QJsonObject GroupUpdate::toJson() const {
	QJsonObject result;
	
	result["GroupId"] = Jellyfin::Support::toJsonValue<QString>(m_groupId);		
	result["Type"] = Jellyfin::Support::toJsonValue<GroupUpdateType>(m_type);	
	return result;
}

QString GroupUpdate::groupId() const { return m_groupId; }

void GroupUpdate::setGroupId(QString newGroupId) {
	m_groupId = newGroupId;
}

GroupUpdateType GroupUpdate::type() const { return m_type; }

void GroupUpdate::setType(GroupUpdateType newType) {
	m_type = newType;
}


} // NS DTO

namespace Support {

using GroupUpdate = Jellyfin::DTO::GroupUpdate;

template <>
GroupUpdate fromJsonValue(const QJsonValue &source, convertType<GroupUpdate>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return GroupUpdate::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const GroupUpdate &source, convertType<GroupUpdate>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

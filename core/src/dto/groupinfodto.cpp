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

#include <JellyfinQt/dto/groupinfodto.h>

namespace Jellyfin {
namespace DTO {

GroupInfoDto::GroupInfoDto() {}

GroupInfoDto::GroupInfoDto(const GroupInfoDto &other) :

	m_groupId(other.m_groupId),
	m_groupName(other.m_groupName),
	m_state(other.m_state),
	m_participants(other.m_participants),
	m_lastUpdatedAt(other.m_lastUpdatedAt){}


void GroupInfoDto::replaceData(GroupInfoDto &other) {
	m_groupId = other.m_groupId;
	m_groupName = other.m_groupName;
	m_state = other.m_state;
	m_participants = other.m_participants;
	m_lastUpdatedAt = other.m_lastUpdatedAt;
}

GroupInfoDto GroupInfoDto::fromJson(QJsonObject source) {
	GroupInfoDto instance;
	instance.setFromJson(source);
	return instance;
}


void GroupInfoDto::setFromJson(QJsonObject source) {
	m_groupId = Jellyfin::Support::fromJsonValue<QString>(source["GroupId"]);
	m_groupName = Jellyfin::Support::fromJsonValue<QString>(source["GroupName"]);
	m_state = Jellyfin::Support::fromJsonValue<GroupStateType>(source["State"]);
	m_participants = Jellyfin::Support::fromJsonValue<QStringList>(source["Participants"]);
	m_lastUpdatedAt = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastUpdatedAt"]);

}
	
QJsonObject GroupInfoDto::toJson() const {
	QJsonObject result;
	result["GroupId"] = Jellyfin::Support::toJsonValue<QString>(m_groupId);
	result["GroupName"] = Jellyfin::Support::toJsonValue<QString>(m_groupName);
	result["State"] = Jellyfin::Support::toJsonValue<GroupStateType>(m_state);
	result["Participants"] = Jellyfin::Support::toJsonValue<QStringList>(m_participants);
	result["LastUpdatedAt"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastUpdatedAt);

	return result;
}

QString GroupInfoDto::groupId() const { return m_groupId; }

void GroupInfoDto::setGroupId(QString newGroupId) {
	m_groupId = newGroupId;
}

QString GroupInfoDto::groupName() const { return m_groupName; }

void GroupInfoDto::setGroupName(QString newGroupName) {
	m_groupName = newGroupName;
}
bool GroupInfoDto::groupNameNull() const {
	return m_groupName.isNull();
}

void GroupInfoDto::setGroupNameNull() {
	m_groupName.clear();

}
GroupStateType GroupInfoDto::state() const { return m_state; }

void GroupInfoDto::setState(GroupStateType newState) {
	m_state = newState;
}

QStringList GroupInfoDto::participants() const { return m_participants; }

void GroupInfoDto::setParticipants(QStringList newParticipants) {
	m_participants = newParticipants;
}
bool GroupInfoDto::participantsNull() const {
	return m_participants.size() == 0;
}

void GroupInfoDto::setParticipantsNull() {
	m_participants.clear();

}
QDateTime GroupInfoDto::lastUpdatedAt() const { return m_lastUpdatedAt; }

void GroupInfoDto::setLastUpdatedAt(QDateTime newLastUpdatedAt) {
	m_lastUpdatedAt = newLastUpdatedAt;
}


} // NS DTO

namespace Support {

using GroupInfoDto = Jellyfin::DTO::GroupInfoDto;

template <>
GroupInfoDto fromJsonValue(const QJsonValue &source, convertType<GroupInfoDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return GroupInfoDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const GroupInfoDto &source, convertType<GroupInfoDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

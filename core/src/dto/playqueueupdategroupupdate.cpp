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

#include <JellyfinQt/dto/playqueueupdategroupupdate.h>

namespace Jellyfin {
namespace DTO {

PlayQueueUpdateGroupUpdate::PlayQueueUpdateGroupUpdate() {}
PlayQueueUpdateGroupUpdate::PlayQueueUpdateGroupUpdate (
		QString groupId, 
		GroupUpdateType type, 
		QSharedPointer<PlayQueueUpdate> data 
		) :
	m_groupId(groupId),
	m_type(type),
	m_data(data) { }



PlayQueueUpdateGroupUpdate::PlayQueueUpdateGroupUpdate(const PlayQueueUpdateGroupUpdate &other) :

	m_groupId(other.m_groupId),
	m_type(other.m_type),
	m_data(other.m_data){}


void PlayQueueUpdateGroupUpdate::replaceData(PlayQueueUpdateGroupUpdate &other) {
	m_groupId = other.m_groupId;
	m_type = other.m_type;
	m_data = other.m_data;
}

PlayQueueUpdateGroupUpdate PlayQueueUpdateGroupUpdate::fromJson(QJsonObject source) {
	PlayQueueUpdateGroupUpdate instance;
	instance.setFromJson(source);
	return instance;
}


void PlayQueueUpdateGroupUpdate::setFromJson(QJsonObject source) {
	m_groupId = Jellyfin::Support::fromJsonValue<QString>(source["GroupId"]);
	m_type = Jellyfin::Support::fromJsonValue<GroupUpdateType>(source["Type"]);
	m_data = Jellyfin::Support::fromJsonValue<QSharedPointer<PlayQueueUpdate>>(source["Data"]);

}
	
QJsonObject PlayQueueUpdateGroupUpdate::toJson() const {
	QJsonObject result;
	
	result["GroupId"] = Jellyfin::Support::toJsonValue<QString>(m_groupId);		
	result["Type"] = Jellyfin::Support::toJsonValue<GroupUpdateType>(m_type);		
	result["Data"] = Jellyfin::Support::toJsonValue<QSharedPointer<PlayQueueUpdate>>(m_data);	
	return result;
}

QString PlayQueueUpdateGroupUpdate::groupId() const { return m_groupId; }

void PlayQueueUpdateGroupUpdate::setGroupId(QString newGroupId) {
	m_groupId = newGroupId;
}

GroupUpdateType PlayQueueUpdateGroupUpdate::type() const { return m_type; }

void PlayQueueUpdateGroupUpdate::setType(GroupUpdateType newType) {
	m_type = newType;
}

QSharedPointer<PlayQueueUpdate> PlayQueueUpdateGroupUpdate::data() const { return m_data; }

void PlayQueueUpdateGroupUpdate::setData(QSharedPointer<PlayQueueUpdate> newData) {
	m_data = newData;
}


} // NS DTO

namespace Support {

using PlayQueueUpdateGroupUpdate = Jellyfin::DTO::PlayQueueUpdateGroupUpdate;

template <>
PlayQueueUpdateGroupUpdate fromJsonValue(const QJsonValue &source, convertType<PlayQueueUpdateGroupUpdate>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PlayQueueUpdateGroupUpdate::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PlayQueueUpdateGroupUpdate &source, convertType<PlayQueueUpdateGroupUpdate>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

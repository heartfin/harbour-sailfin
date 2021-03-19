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

#include <JellyfinQt/DTO/groupinfodto.h>

#include <JellyfinQt/DTO/groupstatetype.h>

namespace Jellyfin {
namespace DTO {

GroupInfoDto::GroupInfoDto(QObject *parent) : QObject(parent) {}

GroupInfoDto *GroupInfoDto::fromJSON(QJsonObject source, QObject *parent) {
	GroupInfoDto *instance = new GroupInfoDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void GroupInfoDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject GroupInfoDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString GroupInfoDto::groupId() const { return m_groupId; }
void GroupInfoDto::setGroupId(QString newGroupId) {
	m_groupId = newGroupId;
	emit groupIdChanged(newGroupId);
}

QString GroupInfoDto::groupName() const { return m_groupName; }
void GroupInfoDto::setGroupName(QString newGroupName) {
	m_groupName = newGroupName;
	emit groupNameChanged(newGroupName);
}

GroupStateType GroupInfoDto::state() const { return m_state; }
void GroupInfoDto::setState(GroupStateType newState) {
	m_state = newState;
	emit stateChanged(newState);
}

QStringList GroupInfoDto::participants() const { return m_participants; }
void GroupInfoDto::setParticipants(QStringList newParticipants) {
	m_participants = newParticipants;
	emit participantsChanged(newParticipants);
}

QDateTime GroupInfoDto::lastUpdatedAt() const { return m_lastUpdatedAt; }
void GroupInfoDto::setLastUpdatedAt(QDateTime newLastUpdatedAt) {
	m_lastUpdatedAt = newLastUpdatedAt;
	emit lastUpdatedAtChanged(newLastUpdatedAt);
}


} // NS Jellyfin
} // NS DTO

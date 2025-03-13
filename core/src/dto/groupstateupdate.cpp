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

#include <JellyfinQt/dto/groupstateupdate.h>

namespace Jellyfin {
namespace DTO {

GroupStateUpdate::GroupStateUpdate() {}
GroupStateUpdate::GroupStateUpdate (
		GroupStateType state, 
		PlaybackRequestType reason 
		) :
	m_state(state),
	m_reason(reason) { }



GroupStateUpdate::GroupStateUpdate(const GroupStateUpdate &other) :

	m_state(other.m_state),
	m_reason(other.m_reason){}


void GroupStateUpdate::replaceData(GroupStateUpdate &other) {
	m_state = other.m_state;
	m_reason = other.m_reason;
}

GroupStateUpdate GroupStateUpdate::fromJson(QJsonObject source) {
	GroupStateUpdate instance;
	instance.setFromJson(source);
	return instance;
}


void GroupStateUpdate::setFromJson(QJsonObject source) {
	m_state = Jellyfin::Support::fromJsonValue<GroupStateType>(source["State"]);
	m_reason = Jellyfin::Support::fromJsonValue<PlaybackRequestType>(source["Reason"]);

}
	
QJsonObject GroupStateUpdate::toJson() const {
	QJsonObject result;
	
	result["State"] = Jellyfin::Support::toJsonValue<GroupStateType>(m_state);		
	result["Reason"] = Jellyfin::Support::toJsonValue<PlaybackRequestType>(m_reason);	
	return result;
}

GroupStateType GroupStateUpdate::state() const { return m_state; }

void GroupStateUpdate::setState(GroupStateType newState) {
	m_state = newState;
}

PlaybackRequestType GroupStateUpdate::reason() const { return m_reason; }

void GroupStateUpdate::setReason(PlaybackRequestType newReason) {
	m_reason = newReason;
}


} // NS DTO

namespace Support {

using GroupStateUpdate = Jellyfin::DTO::GroupStateUpdate;

template <>
GroupStateUpdate fromJsonValue(const QJsonValue &source, convertType<GroupStateUpdate>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return GroupStateUpdate::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const GroupStateUpdate &source, convertType<GroupStateUpdate>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

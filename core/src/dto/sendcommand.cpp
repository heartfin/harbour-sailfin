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

#include <JellyfinQt/dto/sendcommand.h>

namespace Jellyfin {
namespace DTO {

SendCommand::SendCommand() {}

SendCommand::SendCommand(const SendCommand &other) :

	m_groupId(other.m_groupId),
	m_playlistItemId(other.m_playlistItemId),
	m_when(other.m_when),
	m_positionTicks(other.m_positionTicks),
	m_command(other.m_command),
	m_emittedAt(other.m_emittedAt){}


void SendCommand::replaceData(SendCommand &other) {
	m_groupId = other.m_groupId;
	m_playlistItemId = other.m_playlistItemId;
	m_when = other.m_when;
	m_positionTicks = other.m_positionTicks;
	m_command = other.m_command;
	m_emittedAt = other.m_emittedAt;
}

SendCommand SendCommand::fromJson(QJsonObject source) {
	SendCommand instance;
	instance.setFromJson(source);
	return instance;
}


void SendCommand::setFromJson(QJsonObject source) {
	m_groupId = Jellyfin::Support::fromJsonValue<QString>(source["GroupId"]);
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QString>(source["PlaylistItemId"]);
	m_when = Jellyfin::Support::fromJsonValue<QDateTime>(source["When"]);
	m_positionTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["PositionTicks"]);
	m_command = Jellyfin::Support::fromJsonValue<SendCommandType>(source["Command"]);
	m_emittedAt = Jellyfin::Support::fromJsonValue<QDateTime>(source["EmittedAt"]);

}
	
QJsonObject SendCommand::toJson() const {
	QJsonObject result;
	
	result["GroupId"] = Jellyfin::Support::toJsonValue<QString>(m_groupId);		
	result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QString>(m_playlistItemId);		
	result["When"] = Jellyfin::Support::toJsonValue<QDateTime>(m_when);		
	
	if (!(!m_positionTicks.has_value())) {
		result["PositionTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_positionTicks);
	}
			
	result["Command"] = Jellyfin::Support::toJsonValue<SendCommandType>(m_command);		
	result["EmittedAt"] = Jellyfin::Support::toJsonValue<QDateTime>(m_emittedAt);	
	return result;
}

QString SendCommand::groupId() const { return m_groupId; }

void SendCommand::setGroupId(QString newGroupId) {
	m_groupId = newGroupId;
}

QString SendCommand::playlistItemId() const { return m_playlistItemId; }

void SendCommand::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}

QDateTime SendCommand::when() const { return m_when; }

void SendCommand::setWhen(QDateTime newWhen) {
	m_when = newWhen;
}

std::optional<qint64> SendCommand::positionTicks() const { return m_positionTicks; }

void SendCommand::setPositionTicks(std::optional<qint64> newPositionTicks) {
	m_positionTicks = newPositionTicks;
}
bool SendCommand::positionTicksNull() const {
	return !m_positionTicks.has_value();
}

void SendCommand::setPositionTicksNull() {
	m_positionTicks = std::nullopt;

}
SendCommandType SendCommand::command() const { return m_command; }

void SendCommand::setCommand(SendCommandType newCommand) {
	m_command = newCommand;
}

QDateTime SendCommand::emittedAt() const { return m_emittedAt; }

void SendCommand::setEmittedAt(QDateTime newEmittedAt) {
	m_emittedAt = newEmittedAt;
}


} // NS DTO

namespace Support {

using SendCommand = Jellyfin::DTO::SendCommand;

template <>
SendCommand fromJsonValue(const QJsonValue &source, convertType<SendCommand>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SendCommand::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SendCommand &source, convertType<SendCommand>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

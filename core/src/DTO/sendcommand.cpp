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

#include <JellyfinQt/DTO/sendcommand.h>

namespace Jellyfin {
namespace DTO {

SendCommand::SendCommand() {}

SendCommand SendCommand::fromJson(QJsonObject source) {
	SendCommand instance;
	instance.setFromJson(source);
	return instance;
}


void SendCommand::setFromJson(QJsonObject source) {
	m_groupId = Jellyfin::Support::fromJsonValue<QUuid>(source["GroupId"]);
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QUuid>(source["PlaylistItemId"]);
	m_when = Jellyfin::Support::fromJsonValue<QDateTime>(source["When"]);
	m_positionTicks = Jellyfin::Support::fromJsonValue<qint64>(source["PositionTicks"]);
	m_command = Jellyfin::Support::fromJsonValue<SendCommandType>(source["Command"]);
	m_emittedAt = Jellyfin::Support::fromJsonValue<QDateTime>(source["EmittedAt"]);

}
	
QJsonObject SendCommand::toJson() {
	QJsonObject result;
	result["GroupId"] = Jellyfin::Support::toJsonValue<QUuid>(m_groupId);
	result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QUuid>(m_playlistItemId);
	result["When"] = Jellyfin::Support::toJsonValue<QDateTime>(m_when);
	result["PositionTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_positionTicks);
	result["Command"] = Jellyfin::Support::toJsonValue<SendCommandType>(m_command);
	result["EmittedAt"] = Jellyfin::Support::toJsonValue<QDateTime>(m_emittedAt);

	return result;
}

QUuid SendCommand::groupId() const { return m_groupId; }

void SendCommand::setGroupId(QUuid newGroupId) {
	m_groupId = newGroupId;
}
QUuid SendCommand::playlistItemId() const { return m_playlistItemId; }

void SendCommand::setPlaylistItemId(QUuid newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}
QDateTime SendCommand::when() const { return m_when; }

void SendCommand::setWhen(QDateTime newWhen) {
	m_when = newWhen;
}
qint64 SendCommand::positionTicks() const { return m_positionTicks; }

void SendCommand::setPositionTicks(qint64 newPositionTicks) {
	m_positionTicks = newPositionTicks;
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
SendCommand fromJsonValue<SendCommand>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return SendCommand::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

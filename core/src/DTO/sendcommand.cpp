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

#include <JellyfinQt/DTO/sendcommandtype.h>

namespace Jellyfin {
namespace DTO {

SendCommand::SendCommand(QObject *parent) : QObject(parent) {}

SendCommand *SendCommand::fromJSON(QJsonObject source, QObject *parent) {
	SendCommand *instance = new SendCommand(parent);
	instance->updateFromJSON(source);
	return instance;
}

void SendCommand::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject SendCommand::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString SendCommand::groupId() const { return m_groupId; }
void SendCommand::setGroupId(QString newGroupId) {
	m_groupId = newGroupId;
	emit groupIdChanged(newGroupId);
}

QString SendCommand::playlistItemId() const { return m_playlistItemId; }
void SendCommand::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
	emit playlistItemIdChanged(newPlaylistItemId);
}

QDateTime SendCommand::when() const { return m_when; }
void SendCommand::setWhen(QDateTime newWhen) {
	m_when = newWhen;
	emit whenChanged(newWhen);
}

qint64 SendCommand::positionTicks() const { return m_positionTicks; }
void SendCommand::setPositionTicks(qint64 newPositionTicks) {
	m_positionTicks = newPositionTicks;
	emit positionTicksChanged(newPositionTicks);
}

SendCommandType SendCommand::command() const { return m_command; }
void SendCommand::setCommand(SendCommandType newCommand) {
	m_command = newCommand;
	emit commandChanged(newCommand);
}

QDateTime SendCommand::emittedAt() const { return m_emittedAt; }
void SendCommand::setEmittedAt(QDateTime newEmittedAt) {
	m_emittedAt = newEmittedAt;
	emit emittedAtChanged(newEmittedAt);
}


} // NS Jellyfin
} // NS DTO

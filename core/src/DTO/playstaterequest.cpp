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

#include <JellyfinQt/DTO/playstaterequest.h>

namespace Jellyfin {
namespace DTO {

PlaystateRequest::PlaystateRequest() {}

PlaystateRequest PlaystateRequest::fromJson(QJsonObject source) {
	PlaystateRequest instance;
	instance.setFromJson(source);
	return instance;
}


void PlaystateRequest::setFromJson(QJsonObject source) {
	m_command = Jellyfin::Support::fromJsonValue<PlaystateCommand>(source["Command"]);
	m_seekPositionTicks = Jellyfin::Support::fromJsonValue<qint64>(source["SeekPositionTicks"]);
	m_controllingUserId = Jellyfin::Support::fromJsonValue<QString>(source["ControllingUserId"]);

}
	
QJsonObject PlaystateRequest::toJson() {
	QJsonObject result;
	result["Command"] = Jellyfin::Support::toJsonValue<PlaystateCommand>(m_command);
	result["SeekPositionTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_seekPositionTicks);
	result["ControllingUserId"] = Jellyfin::Support::toJsonValue<QString>(m_controllingUserId);

	return result;
}

PlaystateCommand PlaystateRequest::command() const { return m_command; }

void PlaystateRequest::setCommand(PlaystateCommand newCommand) {
	m_command = newCommand;
}
qint64 PlaystateRequest::seekPositionTicks() const { return m_seekPositionTicks; }

void PlaystateRequest::setSeekPositionTicks(qint64 newSeekPositionTicks) {
	m_seekPositionTicks = newSeekPositionTicks;
}
QString PlaystateRequest::controllingUserId() const { return m_controllingUserId; }

void PlaystateRequest::setControllingUserId(QString newControllingUserId) {
	m_controllingUserId = newControllingUserId;
}

} // NS DTO

namespace Support {

using PlaystateRequest = Jellyfin::DTO::PlaystateRequest;

template <>
PlaystateRequest fromJsonValue<PlaystateRequest>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return PlaystateRequest::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

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

#include <JellyfinQt/dto/sessionsstopmessage.h>

namespace Jellyfin {
namespace DTO {

SessionsStopMessage::SessionsStopMessage() {}
SessionsStopMessage::SessionsStopMessage (
		SessionMessageType messageType 
		) :
	m_messageType(messageType) { }



SessionsStopMessage::SessionsStopMessage(const SessionsStopMessage &other) :

	m_messageType(other.m_messageType){}


void SessionsStopMessage::replaceData(SessionsStopMessage &other) {
	m_messageType = other.m_messageType;
}

SessionsStopMessage SessionsStopMessage::fromJson(QJsonObject source) {
	SessionsStopMessage instance;
	instance.setFromJson(source);
	return instance;
}


void SessionsStopMessage::setFromJson(QJsonObject source) {
	m_messageType = Jellyfin::Support::fromJsonValue<SessionMessageType>(source["MessageType"]);

}
	
QJsonObject SessionsStopMessage::toJson() const {
	QJsonObject result;
	
	result["MessageType"] = Jellyfin::Support::toJsonValue<SessionMessageType>(m_messageType);	
	return result;
}

SessionMessageType SessionsStopMessage::messageType() const { return m_messageType; }

void SessionsStopMessage::setMessageType(SessionMessageType newMessageType) {
	m_messageType = newMessageType;
}


} // NS DTO

namespace Support {

using SessionsStopMessage = Jellyfin::DTO::SessionsStopMessage;

template <>
SessionsStopMessage fromJsonValue(const QJsonValue &source, convertType<SessionsStopMessage>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SessionsStopMessage::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SessionsStopMessage &source, convertType<SessionsStopMessage>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

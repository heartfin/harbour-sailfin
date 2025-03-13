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

#include <JellyfinQt/dto/sessionsstartmessage.h>

namespace Jellyfin {
namespace DTO {

SessionsStartMessage::SessionsStartMessage() {}
SessionsStartMessage::SessionsStartMessage (
		SessionMessageType messageType 
		) :
	m_messageType(messageType) { }



SessionsStartMessage::SessionsStartMessage(const SessionsStartMessage &other) :

	m_data(other.m_data),
	m_messageType(other.m_messageType){}


void SessionsStartMessage::replaceData(SessionsStartMessage &other) {
	m_data = other.m_data;
	m_messageType = other.m_messageType;
}

SessionsStartMessage SessionsStartMessage::fromJson(QJsonObject source) {
	SessionsStartMessage instance;
	instance.setFromJson(source);
	return instance;
}


void SessionsStartMessage::setFromJson(QJsonObject source) {
	m_data = Jellyfin::Support::fromJsonValue<QString>(source["Data"]);
	m_messageType = Jellyfin::Support::fromJsonValue<SessionMessageType>(source["MessageType"]);

}
	
QJsonObject SessionsStartMessage::toJson() const {
	QJsonObject result;
	
	
	if (!(m_data.isNull())) {
		result["Data"] = Jellyfin::Support::toJsonValue<QString>(m_data);
	}
			
	result["MessageType"] = Jellyfin::Support::toJsonValue<SessionMessageType>(m_messageType);	
	return result;
}

QString SessionsStartMessage::data() const { return m_data; }

void SessionsStartMessage::setData(QString newData) {
	m_data = newData;
}
bool SessionsStartMessage::dataNull() const {
	return m_data.isNull();
}

void SessionsStartMessage::setDataNull() {
	m_data.clear();

}
SessionMessageType SessionsStartMessage::messageType() const { return m_messageType; }

void SessionsStartMessage::setMessageType(SessionMessageType newMessageType) {
	m_messageType = newMessageType;
}


} // NS DTO

namespace Support {

using SessionsStartMessage = Jellyfin::DTO::SessionsStartMessage;

template <>
SessionsStartMessage fromJsonValue(const QJsonValue &source, convertType<SessionsStartMessage>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SessionsStartMessage::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SessionsStartMessage &source, convertType<SessionsStartMessage>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

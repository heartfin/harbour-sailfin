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

#include <JellyfinQt/dto/restartrequiredmessage.h>

namespace Jellyfin {
namespace DTO {

RestartRequiredMessage::RestartRequiredMessage() {}
RestartRequiredMessage::RestartRequiredMessage (
		QString messageId, 
		SessionMessageType messageType 
		) :
	m_messageId(messageId),
	m_messageType(messageType) { }



RestartRequiredMessage::RestartRequiredMessage(const RestartRequiredMessage &other) :

	m_messageId(other.m_messageId),
	m_messageType(other.m_messageType){}


void RestartRequiredMessage::replaceData(RestartRequiredMessage &other) {
	m_messageId = other.m_messageId;
	m_messageType = other.m_messageType;
}

RestartRequiredMessage RestartRequiredMessage::fromJson(QJsonObject source) {
	RestartRequiredMessage instance;
	instance.setFromJson(source);
	return instance;
}


void RestartRequiredMessage::setFromJson(QJsonObject source) {
	m_messageId = Jellyfin::Support::fromJsonValue<QString>(source["MessageId"]);
	m_messageType = Jellyfin::Support::fromJsonValue<SessionMessageType>(source["MessageType"]);

}
	
QJsonObject RestartRequiredMessage::toJson() const {
	QJsonObject result;
	
	result["MessageId"] = Jellyfin::Support::toJsonValue<QString>(m_messageId);		
	result["MessageType"] = Jellyfin::Support::toJsonValue<SessionMessageType>(m_messageType);	
	return result;
}

QString RestartRequiredMessage::messageId() const { return m_messageId; }

void RestartRequiredMessage::setMessageId(QString newMessageId) {
	m_messageId = newMessageId;
}

SessionMessageType RestartRequiredMessage::messageType() const { return m_messageType; }

void RestartRequiredMessage::setMessageType(SessionMessageType newMessageType) {
	m_messageType = newMessageType;
}


} // NS DTO

namespace Support {

using RestartRequiredMessage = Jellyfin::DTO::RestartRequiredMessage;

template <>
RestartRequiredMessage fromJsonValue(const QJsonValue &source, convertType<RestartRequiredMessage>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return RestartRequiredMessage::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const RestartRequiredMessage &source, convertType<RestartRequiredMessage>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

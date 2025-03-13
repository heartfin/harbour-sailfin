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

#include <JellyfinQt/dto/inboundkeepalivemessage.h>

namespace Jellyfin {
namespace DTO {

InboundKeepAliveMessage::InboundKeepAliveMessage() {}
InboundKeepAliveMessage::InboundKeepAliveMessage (
		SessionMessageType messageType 
		) :
	m_messageType(messageType) { }



InboundKeepAliveMessage::InboundKeepAliveMessage(const InboundKeepAliveMessage &other) :

	m_messageType(other.m_messageType){}


void InboundKeepAliveMessage::replaceData(InboundKeepAliveMessage &other) {
	m_messageType = other.m_messageType;
}

InboundKeepAliveMessage InboundKeepAliveMessage::fromJson(QJsonObject source) {
	InboundKeepAliveMessage instance;
	instance.setFromJson(source);
	return instance;
}


void InboundKeepAliveMessage::setFromJson(QJsonObject source) {
	m_messageType = Jellyfin::Support::fromJsonValue<SessionMessageType>(source["MessageType"]);

}
	
QJsonObject InboundKeepAliveMessage::toJson() const {
	QJsonObject result;
	
	result["MessageType"] = Jellyfin::Support::toJsonValue<SessionMessageType>(m_messageType);	
	return result;
}

SessionMessageType InboundKeepAliveMessage::messageType() const { return m_messageType; }

void InboundKeepAliveMessage::setMessageType(SessionMessageType newMessageType) {
	m_messageType = newMessageType;
}


} // NS DTO

namespace Support {

using InboundKeepAliveMessage = Jellyfin::DTO::InboundKeepAliveMessage;

template <>
InboundKeepAliveMessage fromJsonValue(const QJsonValue &source, convertType<InboundKeepAliveMessage>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return InboundKeepAliveMessage::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const InboundKeepAliveMessage &source, convertType<InboundKeepAliveMessage>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

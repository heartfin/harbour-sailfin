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

#include <JellyfinQt/dto/syncplaygroupupdatecommandmessage.h>

namespace Jellyfin {
namespace DTO {

SyncPlayGroupUpdateCommandMessage::SyncPlayGroupUpdateCommandMessage() {}
SyncPlayGroupUpdateCommandMessage::SyncPlayGroupUpdateCommandMessage (
		QSharedPointer<GroupUpdate> data, 
		QString messageId, 
		SessionMessageType messageType 
		) :
	m_data(data),
	m_messageId(messageId),
	m_messageType(messageType) { }



SyncPlayGroupUpdateCommandMessage::SyncPlayGroupUpdateCommandMessage(const SyncPlayGroupUpdateCommandMessage &other) :

	m_data(other.m_data),
	m_messageId(other.m_messageId),
	m_messageType(other.m_messageType){}


void SyncPlayGroupUpdateCommandMessage::replaceData(SyncPlayGroupUpdateCommandMessage &other) {
	m_data = other.m_data;
	m_messageId = other.m_messageId;
	m_messageType = other.m_messageType;
}

SyncPlayGroupUpdateCommandMessage SyncPlayGroupUpdateCommandMessage::fromJson(QJsonObject source) {
	SyncPlayGroupUpdateCommandMessage instance;
	instance.setFromJson(source);
	return instance;
}


void SyncPlayGroupUpdateCommandMessage::setFromJson(QJsonObject source) {
	m_data = Jellyfin::Support::fromJsonValue<QSharedPointer<GroupUpdate>>(source["Data"]);
	m_messageId = Jellyfin::Support::fromJsonValue<QString>(source["MessageId"]);
	m_messageType = Jellyfin::Support::fromJsonValue<SessionMessageType>(source["MessageType"]);

}
	
QJsonObject SyncPlayGroupUpdateCommandMessage::toJson() const {
	QJsonObject result;
	
	result["Data"] = Jellyfin::Support::toJsonValue<QSharedPointer<GroupUpdate>>(m_data);		
	result["MessageId"] = Jellyfin::Support::toJsonValue<QString>(m_messageId);		
	result["MessageType"] = Jellyfin::Support::toJsonValue<SessionMessageType>(m_messageType);	
	return result;
}

QSharedPointer<GroupUpdate> SyncPlayGroupUpdateCommandMessage::data() const { return m_data; }

void SyncPlayGroupUpdateCommandMessage::setData(QSharedPointer<GroupUpdate> newData) {
	m_data = newData;
}

QString SyncPlayGroupUpdateCommandMessage::messageId() const { return m_messageId; }

void SyncPlayGroupUpdateCommandMessage::setMessageId(QString newMessageId) {
	m_messageId = newMessageId;
}

SessionMessageType SyncPlayGroupUpdateCommandMessage::messageType() const { return m_messageType; }

void SyncPlayGroupUpdateCommandMessage::setMessageType(SessionMessageType newMessageType) {
	m_messageType = newMessageType;
}


} // NS DTO

namespace Support {

using SyncPlayGroupUpdateCommandMessage = Jellyfin::DTO::SyncPlayGroupUpdateCommandMessage;

template <>
SyncPlayGroupUpdateCommandMessage fromJsonValue(const QJsonValue &source, convertType<SyncPlayGroupUpdateCommandMessage>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SyncPlayGroupUpdateCommandMessage::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SyncPlayGroupUpdateCommandMessage &source, convertType<SyncPlayGroupUpdateCommandMessage>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

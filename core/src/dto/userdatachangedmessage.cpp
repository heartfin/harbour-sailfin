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

#include <JellyfinQt/dto/userdatachangedmessage.h>

namespace Jellyfin {
namespace DTO {

UserDataChangedMessage::UserDataChangedMessage() {}
UserDataChangedMessage::UserDataChangedMessage (
		QSharedPointer<UserDataChangeInfo> data, 
		QString messageId, 
		SessionMessageType messageType 
		) :
	m_data(data),
	m_messageId(messageId),
	m_messageType(messageType) { }



UserDataChangedMessage::UserDataChangedMessage(const UserDataChangedMessage &other) :

	m_data(other.m_data),
	m_messageId(other.m_messageId),
	m_messageType(other.m_messageType){}


void UserDataChangedMessage::replaceData(UserDataChangedMessage &other) {
	m_data = other.m_data;
	m_messageId = other.m_messageId;
	m_messageType = other.m_messageType;
}

UserDataChangedMessage UserDataChangedMessage::fromJson(QJsonObject source) {
	UserDataChangedMessage instance;
	instance.setFromJson(source);
	return instance;
}


void UserDataChangedMessage::setFromJson(QJsonObject source) {
	m_data = Jellyfin::Support::fromJsonValue<QSharedPointer<UserDataChangeInfo>>(source["Data"]);
	m_messageId = Jellyfin::Support::fromJsonValue<QString>(source["MessageId"]);
	m_messageType = Jellyfin::Support::fromJsonValue<SessionMessageType>(source["MessageType"]);

}
	
QJsonObject UserDataChangedMessage::toJson() const {
	QJsonObject result;
	
	result["Data"] = Jellyfin::Support::toJsonValue<QSharedPointer<UserDataChangeInfo>>(m_data);		
	result["MessageId"] = Jellyfin::Support::toJsonValue<QString>(m_messageId);		
	result["MessageType"] = Jellyfin::Support::toJsonValue<SessionMessageType>(m_messageType);	
	return result;
}

QSharedPointer<UserDataChangeInfo> UserDataChangedMessage::data() const { return m_data; }

void UserDataChangedMessage::setData(QSharedPointer<UserDataChangeInfo> newData) {
	m_data = newData;
}

QString UserDataChangedMessage::messageId() const { return m_messageId; }

void UserDataChangedMessage::setMessageId(QString newMessageId) {
	m_messageId = newMessageId;
}

SessionMessageType UserDataChangedMessage::messageType() const { return m_messageType; }

void UserDataChangedMessage::setMessageType(SessionMessageType newMessageType) {
	m_messageType = newMessageType;
}


} // NS DTO

namespace Support {

using UserDataChangedMessage = Jellyfin::DTO::UserDataChangedMessage;

template <>
UserDataChangedMessage fromJsonValue(const QJsonValue &source, convertType<UserDataChangedMessage>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return UserDataChangedMessage::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const UserDataChangedMessage &source, convertType<UserDataChangedMessage>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

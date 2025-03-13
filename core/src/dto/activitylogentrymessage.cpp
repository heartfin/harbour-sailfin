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

#include <JellyfinQt/dto/activitylogentrymessage.h>

namespace Jellyfin {
namespace DTO {

ActivityLogEntryMessage::ActivityLogEntryMessage() {}
ActivityLogEntryMessage::ActivityLogEntryMessage (
		QString messageId, 
		SessionMessageType messageType 
		) :
	m_messageId(messageId),
	m_messageType(messageType) { }



ActivityLogEntryMessage::ActivityLogEntryMessage(const ActivityLogEntryMessage &other) :

	m_data(other.m_data),
	m_messageId(other.m_messageId),
	m_messageType(other.m_messageType){}


void ActivityLogEntryMessage::replaceData(ActivityLogEntryMessage &other) {
	m_data = other.m_data;
	m_messageId = other.m_messageId;
	m_messageType = other.m_messageType;
}

ActivityLogEntryMessage ActivityLogEntryMessage::fromJson(QJsonObject source) {
	ActivityLogEntryMessage instance;
	instance.setFromJson(source);
	return instance;
}


void ActivityLogEntryMessage::setFromJson(QJsonObject source) {
	m_data = Jellyfin::Support::fromJsonValue<QList<ActivityLogEntry>>(source["Data"]);
	m_messageId = Jellyfin::Support::fromJsonValue<QString>(source["MessageId"]);
	m_messageType = Jellyfin::Support::fromJsonValue<SessionMessageType>(source["MessageType"]);

}
	
QJsonObject ActivityLogEntryMessage::toJson() const {
	QJsonObject result;
	
	
	if (!(m_data.size() == 0)) {
		result["Data"] = Jellyfin::Support::toJsonValue<QList<ActivityLogEntry>>(m_data);
	}
			
	result["MessageId"] = Jellyfin::Support::toJsonValue<QString>(m_messageId);		
	result["MessageType"] = Jellyfin::Support::toJsonValue<SessionMessageType>(m_messageType);	
	return result;
}

QList<ActivityLogEntry> ActivityLogEntryMessage::data() const { return m_data; }

void ActivityLogEntryMessage::setData(QList<ActivityLogEntry> newData) {
	m_data = newData;
}
bool ActivityLogEntryMessage::dataNull() const {
	return m_data.size() == 0;
}

void ActivityLogEntryMessage::setDataNull() {
	m_data.clear();

}
QString ActivityLogEntryMessage::messageId() const { return m_messageId; }

void ActivityLogEntryMessage::setMessageId(QString newMessageId) {
	m_messageId = newMessageId;
}

SessionMessageType ActivityLogEntryMessage::messageType() const { return m_messageType; }

void ActivityLogEntryMessage::setMessageType(SessionMessageType newMessageType) {
	m_messageType = newMessageType;
}


} // NS DTO

namespace Support {

using ActivityLogEntryMessage = Jellyfin::DTO::ActivityLogEntryMessage;

template <>
ActivityLogEntryMessage fromJsonValue(const QJsonValue &source, convertType<ActivityLogEntryMessage>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ActivityLogEntryMessage::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ActivityLogEntryMessage &source, convertType<ActivityLogEntryMessage>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

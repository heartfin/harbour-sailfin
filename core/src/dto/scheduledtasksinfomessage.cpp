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

#include <JellyfinQt/dto/scheduledtasksinfomessage.h>

namespace Jellyfin {
namespace DTO {

ScheduledTasksInfoMessage::ScheduledTasksInfoMessage() {}
ScheduledTasksInfoMessage::ScheduledTasksInfoMessage (
		QString messageId, 
		SessionMessageType messageType 
		) :
	m_messageId(messageId),
	m_messageType(messageType) { }



ScheduledTasksInfoMessage::ScheduledTasksInfoMessage(const ScheduledTasksInfoMessage &other) :

	m_data(other.m_data),
	m_messageId(other.m_messageId),
	m_messageType(other.m_messageType){}


void ScheduledTasksInfoMessage::replaceData(ScheduledTasksInfoMessage &other) {
	m_data = other.m_data;
	m_messageId = other.m_messageId;
	m_messageType = other.m_messageType;
}

ScheduledTasksInfoMessage ScheduledTasksInfoMessage::fromJson(QJsonObject source) {
	ScheduledTasksInfoMessage instance;
	instance.setFromJson(source);
	return instance;
}


void ScheduledTasksInfoMessage::setFromJson(QJsonObject source) {
	m_data = Jellyfin::Support::fromJsonValue<QList<TaskInfo>>(source["Data"]);
	m_messageId = Jellyfin::Support::fromJsonValue<QString>(source["MessageId"]);
	m_messageType = Jellyfin::Support::fromJsonValue<SessionMessageType>(source["MessageType"]);

}
	
QJsonObject ScheduledTasksInfoMessage::toJson() const {
	QJsonObject result;
	
	
	if (!(m_data.size() == 0)) {
		result["Data"] = Jellyfin::Support::toJsonValue<QList<TaskInfo>>(m_data);
	}
			
	result["MessageId"] = Jellyfin::Support::toJsonValue<QString>(m_messageId);		
	result["MessageType"] = Jellyfin::Support::toJsonValue<SessionMessageType>(m_messageType);	
	return result;
}

QList<TaskInfo> ScheduledTasksInfoMessage::data() const { return m_data; }

void ScheduledTasksInfoMessage::setData(QList<TaskInfo> newData) {
	m_data = newData;
}
bool ScheduledTasksInfoMessage::dataNull() const {
	return m_data.size() == 0;
}

void ScheduledTasksInfoMessage::setDataNull() {
	m_data.clear();

}
QString ScheduledTasksInfoMessage::messageId() const { return m_messageId; }

void ScheduledTasksInfoMessage::setMessageId(QString newMessageId) {
	m_messageId = newMessageId;
}

SessionMessageType ScheduledTasksInfoMessage::messageType() const { return m_messageType; }

void ScheduledTasksInfoMessage::setMessageType(SessionMessageType newMessageType) {
	m_messageType = newMessageType;
}


} // NS DTO

namespace Support {

using ScheduledTasksInfoMessage = Jellyfin::DTO::ScheduledTasksInfoMessage;

template <>
ScheduledTasksInfoMessage fromJsonValue(const QJsonValue &source, convertType<ScheduledTasksInfoMessage>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ScheduledTasksInfoMessage::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ScheduledTasksInfoMessage &source, convertType<ScheduledTasksInfoMessage>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

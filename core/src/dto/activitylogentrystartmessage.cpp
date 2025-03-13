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

#include <JellyfinQt/dto/activitylogentrystartmessage.h>

namespace Jellyfin {
namespace DTO {

ActivityLogEntryStartMessage::ActivityLogEntryStartMessage() {}
ActivityLogEntryStartMessage::ActivityLogEntryStartMessage (
		SessionMessageType messageType 
		) :
	m_messageType(messageType) { }



ActivityLogEntryStartMessage::ActivityLogEntryStartMessage(const ActivityLogEntryStartMessage &other) :

	m_data(other.m_data),
	m_messageType(other.m_messageType){}


void ActivityLogEntryStartMessage::replaceData(ActivityLogEntryStartMessage &other) {
	m_data = other.m_data;
	m_messageType = other.m_messageType;
}

ActivityLogEntryStartMessage ActivityLogEntryStartMessage::fromJson(QJsonObject source) {
	ActivityLogEntryStartMessage instance;
	instance.setFromJson(source);
	return instance;
}


void ActivityLogEntryStartMessage::setFromJson(QJsonObject source) {
	m_data = Jellyfin::Support::fromJsonValue<QString>(source["Data"]);
	m_messageType = Jellyfin::Support::fromJsonValue<SessionMessageType>(source["MessageType"]);

}
	
QJsonObject ActivityLogEntryStartMessage::toJson() const {
	QJsonObject result;
	
	
	if (!(m_data.isNull())) {
		result["Data"] = Jellyfin::Support::toJsonValue<QString>(m_data);
	}
			
	result["MessageType"] = Jellyfin::Support::toJsonValue<SessionMessageType>(m_messageType);	
	return result;
}

QString ActivityLogEntryStartMessage::data() const { return m_data; }

void ActivityLogEntryStartMessage::setData(QString newData) {
	m_data = newData;
}
bool ActivityLogEntryStartMessage::dataNull() const {
	return m_data.isNull();
}

void ActivityLogEntryStartMessage::setDataNull() {
	m_data.clear();

}
SessionMessageType ActivityLogEntryStartMessage::messageType() const { return m_messageType; }

void ActivityLogEntryStartMessage::setMessageType(SessionMessageType newMessageType) {
	m_messageType = newMessageType;
}


} // NS DTO

namespace Support {

using ActivityLogEntryStartMessage = Jellyfin::DTO::ActivityLogEntryStartMessage;

template <>
ActivityLogEntryStartMessage fromJsonValue(const QJsonValue &source, convertType<ActivityLogEntryStartMessage>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ActivityLogEntryStartMessage::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ActivityLogEntryStartMessage &source, convertType<ActivityLogEntryStartMessage>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

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

#include <JellyfinQt/dto/seriestimercreatedmessage.h>

namespace Jellyfin {
namespace DTO {

SeriesTimerCreatedMessage::SeriesTimerCreatedMessage() {}
SeriesTimerCreatedMessage::SeriesTimerCreatedMessage (
		QSharedPointer<TimerEventInfo> data, 
		QString messageId, 
		SessionMessageType messageType 
		) :
	m_data(data),
	m_messageId(messageId),
	m_messageType(messageType) { }



SeriesTimerCreatedMessage::SeriesTimerCreatedMessage(const SeriesTimerCreatedMessage &other) :

	m_data(other.m_data),
	m_messageId(other.m_messageId),
	m_messageType(other.m_messageType){}


void SeriesTimerCreatedMessage::replaceData(SeriesTimerCreatedMessage &other) {
	m_data = other.m_data;
	m_messageId = other.m_messageId;
	m_messageType = other.m_messageType;
}

SeriesTimerCreatedMessage SeriesTimerCreatedMessage::fromJson(QJsonObject source) {
	SeriesTimerCreatedMessage instance;
	instance.setFromJson(source);
	return instance;
}


void SeriesTimerCreatedMessage::setFromJson(QJsonObject source) {
	m_data = Jellyfin::Support::fromJsonValue<QSharedPointer<TimerEventInfo>>(source["Data"]);
	m_messageId = Jellyfin::Support::fromJsonValue<QString>(source["MessageId"]);
	m_messageType = Jellyfin::Support::fromJsonValue<SessionMessageType>(source["MessageType"]);

}
	
QJsonObject SeriesTimerCreatedMessage::toJson() const {
	QJsonObject result;
	
	result["Data"] = Jellyfin::Support::toJsonValue<QSharedPointer<TimerEventInfo>>(m_data);		
	result["MessageId"] = Jellyfin::Support::toJsonValue<QString>(m_messageId);		
	result["MessageType"] = Jellyfin::Support::toJsonValue<SessionMessageType>(m_messageType);	
	return result;
}

QSharedPointer<TimerEventInfo> SeriesTimerCreatedMessage::data() const { return m_data; }

void SeriesTimerCreatedMessage::setData(QSharedPointer<TimerEventInfo> newData) {
	m_data = newData;
}

QString SeriesTimerCreatedMessage::messageId() const { return m_messageId; }

void SeriesTimerCreatedMessage::setMessageId(QString newMessageId) {
	m_messageId = newMessageId;
}

SessionMessageType SeriesTimerCreatedMessage::messageType() const { return m_messageType; }

void SeriesTimerCreatedMessage::setMessageType(SessionMessageType newMessageType) {
	m_messageType = newMessageType;
}


} // NS DTO

namespace Support {

using SeriesTimerCreatedMessage = Jellyfin::DTO::SeriesTimerCreatedMessage;

template <>
SeriesTimerCreatedMessage fromJsonValue(const QJsonValue &source, convertType<SeriesTimerCreatedMessage>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SeriesTimerCreatedMessage::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SeriesTimerCreatedMessage &source, convertType<SeriesTimerCreatedMessage>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

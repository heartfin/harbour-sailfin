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

#include <JellyfinQt/dto/messagecommand.h>

namespace Jellyfin {
namespace DTO {

MessageCommand::MessageCommand() {}
MessageCommand::MessageCommand (
		QString text 
		) :
	m_text(text) { }



MessageCommand::MessageCommand(const MessageCommand &other) :

	m_header(other.m_header),
	m_text(other.m_text),
	m_timeoutMs(other.m_timeoutMs){}


void MessageCommand::replaceData(MessageCommand &other) {
	m_header = other.m_header;
	m_text = other.m_text;
	m_timeoutMs = other.m_timeoutMs;
}

MessageCommand MessageCommand::fromJson(QJsonObject source) {
	MessageCommand instance;
	instance.setFromJson(source);
	return instance;
}


void MessageCommand::setFromJson(QJsonObject source) {
	m_header = Jellyfin::Support::fromJsonValue<QString>(source["Header"]);
	m_text = Jellyfin::Support::fromJsonValue<QString>(source["Text"]);
	m_timeoutMs = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["TimeoutMs"]);

}
	
QJsonObject MessageCommand::toJson() const {
	QJsonObject result;
	
	
	if (!(m_header.isNull())) {
		result["Header"] = Jellyfin::Support::toJsonValue<QString>(m_header);
	}
			
	result["Text"] = Jellyfin::Support::toJsonValue<QString>(m_text);		
	
	if (!(!m_timeoutMs.has_value())) {
		result["TimeoutMs"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_timeoutMs);
	}
		
	return result;
}

QString MessageCommand::header() const { return m_header; }

void MessageCommand::setHeader(QString newHeader) {
	m_header = newHeader;
}
bool MessageCommand::headerNull() const {
	return m_header.isNull();
}

void MessageCommand::setHeaderNull() {
	m_header.clear();

}
QString MessageCommand::text() const { return m_text; }

void MessageCommand::setText(QString newText) {
	m_text = newText;
}

std::optional<qint64> MessageCommand::timeoutMs() const { return m_timeoutMs; }

void MessageCommand::setTimeoutMs(std::optional<qint64> newTimeoutMs) {
	m_timeoutMs = newTimeoutMs;
}
bool MessageCommand::timeoutMsNull() const {
	return !m_timeoutMs.has_value();
}

void MessageCommand::setTimeoutMsNull() {
	m_timeoutMs = std::nullopt;

}

} // NS DTO

namespace Support {

using MessageCommand = Jellyfin::DTO::MessageCommand;

template <>
MessageCommand fromJsonValue(const QJsonValue &source, convertType<MessageCommand>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MessageCommand::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MessageCommand &source, convertType<MessageCommand>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

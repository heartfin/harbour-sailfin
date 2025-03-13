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

#include <JellyfinQt/dto/lyricline.h>

namespace Jellyfin {
namespace DTO {

LyricLine::LyricLine() {}
LyricLine::LyricLine (
		QString text 
		) :
	m_text(text) { }



LyricLine::LyricLine(const LyricLine &other) :

	m_text(other.m_text),
	m_start(other.m_start){}


void LyricLine::replaceData(LyricLine &other) {
	m_text = other.m_text;
	m_start = other.m_start;
}

LyricLine LyricLine::fromJson(QJsonObject source) {
	LyricLine instance;
	instance.setFromJson(source);
	return instance;
}


void LyricLine::setFromJson(QJsonObject source) {
	m_text = Jellyfin::Support::fromJsonValue<QString>(source["Text"]);
	m_start = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["Start"]);

}
	
QJsonObject LyricLine::toJson() const {
	QJsonObject result;
	
	result["Text"] = Jellyfin::Support::toJsonValue<QString>(m_text);		
	
	if (!(!m_start.has_value())) {
		result["Start"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_start);
	}
		
	return result;
}

QString LyricLine::text() const { return m_text; }

void LyricLine::setText(QString newText) {
	m_text = newText;
}

std::optional<qint64> LyricLine::start() const { return m_start; }

void LyricLine::setStart(std::optional<qint64> newStart) {
	m_start = newStart;
}
bool LyricLine::startNull() const {
	return !m_start.has_value();
}

void LyricLine::setStartNull() {
	m_start = std::nullopt;

}

} // NS DTO

namespace Support {

using LyricLine = Jellyfin::DTO::LyricLine;

template <>
LyricLine fromJsonValue(const QJsonValue &source, convertType<LyricLine>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return LyricLine::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const LyricLine &source, convertType<LyricLine>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

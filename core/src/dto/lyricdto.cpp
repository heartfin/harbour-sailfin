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

#include <JellyfinQt/dto/lyricdto.h>

namespace Jellyfin {
namespace DTO {

LyricDto::LyricDto() {}
LyricDto::LyricDto (
		QSharedPointer<LyricMetadata> metadata, 
		QList<LyricLine> lyrics 
		) :
	m_metadata(metadata),
	m_lyrics(lyrics) { }



LyricDto::LyricDto(const LyricDto &other) :

	m_metadata(other.m_metadata),
	m_lyrics(other.m_lyrics){}


void LyricDto::replaceData(LyricDto &other) {
	m_metadata = other.m_metadata;
	m_lyrics = other.m_lyrics;
}

LyricDto LyricDto::fromJson(QJsonObject source) {
	LyricDto instance;
	instance.setFromJson(source);
	return instance;
}


void LyricDto::setFromJson(QJsonObject source) {
	m_metadata = Jellyfin::Support::fromJsonValue<QSharedPointer<LyricMetadata>>(source["Metadata"]);
	m_lyrics = Jellyfin::Support::fromJsonValue<QList<LyricLine>>(source["Lyrics"]);

}
	
QJsonObject LyricDto::toJson() const {
	QJsonObject result;
	
	result["Metadata"] = Jellyfin::Support::toJsonValue<QSharedPointer<LyricMetadata>>(m_metadata);		
	result["Lyrics"] = Jellyfin::Support::toJsonValue<QList<LyricLine>>(m_lyrics);	
	return result;
}

QSharedPointer<LyricMetadata> LyricDto::metadata() const { return m_metadata; }

void LyricDto::setMetadata(QSharedPointer<LyricMetadata> newMetadata) {
	m_metadata = newMetadata;
}

QList<LyricLine> LyricDto::lyrics() const { return m_lyrics; }

void LyricDto::setLyrics(QList<LyricLine> newLyrics) {
	m_lyrics = newLyrics;
}


} // NS DTO

namespace Support {

using LyricDto = Jellyfin::DTO::LyricDto;

template <>
LyricDto fromJsonValue(const QJsonValue &source, convertType<LyricDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return LyricDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const LyricDto &source, convertType<LyricDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

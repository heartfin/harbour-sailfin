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

#include <JellyfinQt/dto/remotelyricinfodto.h>

namespace Jellyfin {
namespace DTO {

RemoteLyricInfoDto::RemoteLyricInfoDto() {}
RemoteLyricInfoDto::RemoteLyricInfoDto (
		QString jellyfinId, 
		QString providerName, 
		QSharedPointer<LyricDto> lyrics 
		) :
	m_jellyfinId(jellyfinId),
	m_providerName(providerName),
	m_lyrics(lyrics) { }



RemoteLyricInfoDto::RemoteLyricInfoDto(const RemoteLyricInfoDto &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_providerName(other.m_providerName),
	m_lyrics(other.m_lyrics){}


void RemoteLyricInfoDto::replaceData(RemoteLyricInfoDto &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_providerName = other.m_providerName;
	m_lyrics = other.m_lyrics;
}

RemoteLyricInfoDto RemoteLyricInfoDto::fromJson(QJsonObject source) {
	RemoteLyricInfoDto instance;
	instance.setFromJson(source);
	return instance;
}


void RemoteLyricInfoDto::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_providerName = Jellyfin::Support::fromJsonValue<QString>(source["ProviderName"]);
	m_lyrics = Jellyfin::Support::fromJsonValue<QSharedPointer<LyricDto>>(source["Lyrics"]);

}
	
QJsonObject RemoteLyricInfoDto::toJson() const {
	QJsonObject result;
	
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);		
	result["ProviderName"] = Jellyfin::Support::toJsonValue<QString>(m_providerName);		
	result["Lyrics"] = Jellyfin::Support::toJsonValue<QSharedPointer<LyricDto>>(m_lyrics);	
	return result;
}

QString RemoteLyricInfoDto::jellyfinId() const { return m_jellyfinId; }

void RemoteLyricInfoDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString RemoteLyricInfoDto::providerName() const { return m_providerName; }

void RemoteLyricInfoDto::setProviderName(QString newProviderName) {
	m_providerName = newProviderName;
}

QSharedPointer<LyricDto> RemoteLyricInfoDto::lyrics() const { return m_lyrics; }

void RemoteLyricInfoDto::setLyrics(QSharedPointer<LyricDto> newLyrics) {
	m_lyrics = newLyrics;
}


} // NS DTO

namespace Support {

using RemoteLyricInfoDto = Jellyfin::DTO::RemoteLyricInfoDto;

template <>
RemoteLyricInfoDto fromJsonValue(const QJsonValue &source, convertType<RemoteLyricInfoDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return RemoteLyricInfoDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const RemoteLyricInfoDto &source, convertType<RemoteLyricInfoDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

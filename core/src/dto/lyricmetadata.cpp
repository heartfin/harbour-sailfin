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

#include <JellyfinQt/dto/lyricmetadata.h>

namespace Jellyfin {
namespace DTO {

LyricMetadata::LyricMetadata() {}

LyricMetadata::LyricMetadata(const LyricMetadata &other) :

	m_artist(other.m_artist),
	m_album(other.m_album),
	m_title(other.m_title),
	m_author(other.m_author),
	m_length(other.m_length),
	m_by(other.m_by),
	m_offset(other.m_offset),
	m_creator(other.m_creator),
	m_version(other.m_version),
	m_isSynced(other.m_isSynced){}


void LyricMetadata::replaceData(LyricMetadata &other) {
	m_artist = other.m_artist;
	m_album = other.m_album;
	m_title = other.m_title;
	m_author = other.m_author;
	m_length = other.m_length;
	m_by = other.m_by;
	m_offset = other.m_offset;
	m_creator = other.m_creator;
	m_version = other.m_version;
	m_isSynced = other.m_isSynced;
}

LyricMetadata LyricMetadata::fromJson(QJsonObject source) {
	LyricMetadata instance;
	instance.setFromJson(source);
	return instance;
}


void LyricMetadata::setFromJson(QJsonObject source) {
	m_artist = Jellyfin::Support::fromJsonValue<QString>(source["Artist"]);
	m_album = Jellyfin::Support::fromJsonValue<QString>(source["Album"]);
	m_title = Jellyfin::Support::fromJsonValue<QString>(source["Title"]);
	m_author = Jellyfin::Support::fromJsonValue<QString>(source["Author"]);
	m_length = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["Length"]);
	m_by = Jellyfin::Support::fromJsonValue<QString>(source["By"]);
	m_offset = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["Offset"]);
	m_creator = Jellyfin::Support::fromJsonValue<QString>(source["Creator"]);
	m_version = Jellyfin::Support::fromJsonValue<QString>(source["Version"]);
	m_isSynced = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsSynced"]);

}
	
QJsonObject LyricMetadata::toJson() const {
	QJsonObject result;
	
	
	if (!(m_artist.isNull())) {
		result["Artist"] = Jellyfin::Support::toJsonValue<QString>(m_artist);
	}
			
	
	if (!(m_album.isNull())) {
		result["Album"] = Jellyfin::Support::toJsonValue<QString>(m_album);
	}
			
	
	if (!(m_title.isNull())) {
		result["Title"] = Jellyfin::Support::toJsonValue<QString>(m_title);
	}
			
	
	if (!(m_author.isNull())) {
		result["Author"] = Jellyfin::Support::toJsonValue<QString>(m_author);
	}
			
	
	if (!(!m_length.has_value())) {
		result["Length"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_length);
	}
			
	
	if (!(m_by.isNull())) {
		result["By"] = Jellyfin::Support::toJsonValue<QString>(m_by);
	}
			
	
	if (!(!m_offset.has_value())) {
		result["Offset"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_offset);
	}
			
	
	if (!(m_creator.isNull())) {
		result["Creator"] = Jellyfin::Support::toJsonValue<QString>(m_creator);
	}
			
	
	if (!(m_version.isNull())) {
		result["Version"] = Jellyfin::Support::toJsonValue<QString>(m_version);
	}
			
	
	if (!(!m_isSynced.has_value())) {
		result["IsSynced"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isSynced);
	}
		
	return result;
}

QString LyricMetadata::artist() const { return m_artist; }

void LyricMetadata::setArtist(QString newArtist) {
	m_artist = newArtist;
}
bool LyricMetadata::artistNull() const {
	return m_artist.isNull();
}

void LyricMetadata::setArtistNull() {
	m_artist.clear();

}
QString LyricMetadata::album() const { return m_album; }

void LyricMetadata::setAlbum(QString newAlbum) {
	m_album = newAlbum;
}
bool LyricMetadata::albumNull() const {
	return m_album.isNull();
}

void LyricMetadata::setAlbumNull() {
	m_album.clear();

}
QString LyricMetadata::title() const { return m_title; }

void LyricMetadata::setTitle(QString newTitle) {
	m_title = newTitle;
}
bool LyricMetadata::titleNull() const {
	return m_title.isNull();
}

void LyricMetadata::setTitleNull() {
	m_title.clear();

}
QString LyricMetadata::author() const { return m_author; }

void LyricMetadata::setAuthor(QString newAuthor) {
	m_author = newAuthor;
}
bool LyricMetadata::authorNull() const {
	return m_author.isNull();
}

void LyricMetadata::setAuthorNull() {
	m_author.clear();

}
std::optional<qint64> LyricMetadata::length() const { return m_length; }

void LyricMetadata::setLength(std::optional<qint64> newLength) {
	m_length = newLength;
}
bool LyricMetadata::lengthNull() const {
	return !m_length.has_value();
}

void LyricMetadata::setLengthNull() {
	m_length = std::nullopt;

}
QString LyricMetadata::by() const { return m_by; }

void LyricMetadata::setBy(QString newBy) {
	m_by = newBy;
}
bool LyricMetadata::byNull() const {
	return m_by.isNull();
}

void LyricMetadata::setByNull() {
	m_by.clear();

}
std::optional<qint64> LyricMetadata::offset() const { return m_offset; }

void LyricMetadata::setOffset(std::optional<qint64> newOffset) {
	m_offset = newOffset;
}
bool LyricMetadata::offsetNull() const {
	return !m_offset.has_value();
}

void LyricMetadata::setOffsetNull() {
	m_offset = std::nullopt;

}
QString LyricMetadata::creator() const { return m_creator; }

void LyricMetadata::setCreator(QString newCreator) {
	m_creator = newCreator;
}
bool LyricMetadata::creatorNull() const {
	return m_creator.isNull();
}

void LyricMetadata::setCreatorNull() {
	m_creator.clear();

}
QString LyricMetadata::version() const { return m_version; }

void LyricMetadata::setVersion(QString newVersion) {
	m_version = newVersion;
}
bool LyricMetadata::versionNull() const {
	return m_version.isNull();
}

void LyricMetadata::setVersionNull() {
	m_version.clear();

}
std::optional<bool> LyricMetadata::isSynced() const { return m_isSynced; }

void LyricMetadata::setIsSynced(std::optional<bool> newIsSynced) {
	m_isSynced = newIsSynced;
}
bool LyricMetadata::isSyncedNull() const {
	return !m_isSynced.has_value();
}

void LyricMetadata::setIsSyncedNull() {
	m_isSynced = std::nullopt;

}

} // NS DTO

namespace Support {

using LyricMetadata = Jellyfin::DTO::LyricMetadata;

template <>
LyricMetadata fromJsonValue(const QJsonValue &source, convertType<LyricMetadata>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return LyricMetadata::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const LyricMetadata &source, convertType<LyricMetadata>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

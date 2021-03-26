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

#include <JellyfinQt/dto/albuminfo.h>

namespace Jellyfin {
namespace DTO {

AlbumInfo::AlbumInfo() {}

AlbumInfo::AlbumInfo(const AlbumInfo &other) :

	m_name(other.m_name),
	m_path(other.m_path),
	m_metadataLanguage(other.m_metadataLanguage),
	m_metadataCountryCode(other.m_metadataCountryCode),
	m_providerIds(other.m_providerIds),
	m_year(other.m_year),
	m_indexNumber(other.m_indexNumber),
	m_parentIndexNumber(other.m_parentIndexNumber),
	m_premiereDate(other.m_premiereDate),
	m_isAutomated(other.m_isAutomated),
	m_albumArtists(other.m_albumArtists),
	m_artistProviderIds(other.m_artistProviderIds),
	m_songInfos(other.m_songInfos){}


void AlbumInfo::replaceData(AlbumInfo &other) {
	m_name = other.m_name;
	m_path = other.m_path;
	m_metadataLanguage = other.m_metadataLanguage;
	m_metadataCountryCode = other.m_metadataCountryCode;
	m_providerIds = other.m_providerIds;
	m_year = other.m_year;
	m_indexNumber = other.m_indexNumber;
	m_parentIndexNumber = other.m_parentIndexNumber;
	m_premiereDate = other.m_premiereDate;
	m_isAutomated = other.m_isAutomated;
	m_albumArtists = other.m_albumArtists;
	m_artistProviderIds = other.m_artistProviderIds;
	m_songInfos = other.m_songInfos;
}

AlbumInfo AlbumInfo::fromJson(QJsonObject source) {
	AlbumInfo instance;
	instance.setFromJson(source);
	return instance;
}


void AlbumInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_metadataLanguage = Jellyfin::Support::fromJsonValue<QString>(source["MetadataLanguage"]);
	m_metadataCountryCode = Jellyfin::Support::fromJsonValue<QString>(source["MetadataCountryCode"]);
	m_providerIds = Jellyfin::Support::fromJsonValue<std::optional<QJsonObject>>(source["ProviderIds"]);
	m_year = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Year"]);
	m_indexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["IndexNumber"]);
	m_parentIndexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ParentIndexNumber"]);
	m_premiereDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["PremiereDate"]);
	m_isAutomated = Jellyfin::Support::fromJsonValue<bool>(source["IsAutomated"]);
	m_albumArtists = Jellyfin::Support::fromJsonValue<QStringList>(source["AlbumArtists"]);
	m_artistProviderIds = Jellyfin::Support::fromJsonValue<std::optional<QJsonObject>>(source["ArtistProviderIds"]);
	m_songInfos = Jellyfin::Support::fromJsonValue<QList<SongInfo>>(source["SongInfos"]);

}
	
QJsonObject AlbumInfo::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	result["MetadataLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_metadataLanguage);
	result["MetadataCountryCode"] = Jellyfin::Support::toJsonValue<QString>(m_metadataCountryCode);
	result["ProviderIds"] = Jellyfin::Support::toJsonValue<std::optional<QJsonObject>>(m_providerIds);
	result["Year"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_year);
	result["IndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_indexNumber);
	result["ParentIndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_parentIndexNumber);
	result["PremiereDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_premiereDate);
	result["IsAutomated"] = Jellyfin::Support::toJsonValue<bool>(m_isAutomated);
	result["AlbumArtists"] = Jellyfin::Support::toJsonValue<QStringList>(m_albumArtists);
	result["ArtistProviderIds"] = Jellyfin::Support::toJsonValue<std::optional<QJsonObject>>(m_artistProviderIds);
	result["SongInfos"] = Jellyfin::Support::toJsonValue<QList<SongInfo>>(m_songInfos);

	return result;
}

QString AlbumInfo::name() const { return m_name; }

void AlbumInfo::setName(QString newName) {
	m_name = newName;
}
bool AlbumInfo::nameNull() const {
	return m_name.isNull();
}

void AlbumInfo::setNameNull() {
	m_name.clear();

}
QString AlbumInfo::path() const { return m_path; }

void AlbumInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool AlbumInfo::pathNull() const {
	return m_path.isNull();
}

void AlbumInfo::setPathNull() {
	m_path.clear();

}
QString AlbumInfo::metadataLanguage() const { return m_metadataLanguage; }

void AlbumInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
bool AlbumInfo::metadataLanguageNull() const {
	return m_metadataLanguage.isNull();
}

void AlbumInfo::setMetadataLanguageNull() {
	m_metadataLanguage.clear();

}
QString AlbumInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void AlbumInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool AlbumInfo::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void AlbumInfo::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
std::optional<QJsonObject> AlbumInfo::providerIds() const { return m_providerIds; }

void AlbumInfo::setProviderIds(std::optional<QJsonObject> newProviderIds) {
	m_providerIds = newProviderIds;
}
bool AlbumInfo::providerIdsNull() const {
	return !m_providerIds.has_value();
}

void AlbumInfo::setProviderIdsNull() {
	m_providerIds = std::nullopt;

}
std::optional<qint32> AlbumInfo::year() const { return m_year; }

void AlbumInfo::setYear(std::optional<qint32> newYear) {
	m_year = newYear;
}
bool AlbumInfo::yearNull() const {
	return !m_year.has_value();
}

void AlbumInfo::setYearNull() {
	m_year = std::nullopt;

}
std::optional<qint32> AlbumInfo::indexNumber() const { return m_indexNumber; }

void AlbumInfo::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool AlbumInfo::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void AlbumInfo::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> AlbumInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void AlbumInfo::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool AlbumInfo::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void AlbumInfo::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QDateTime AlbumInfo::premiereDate() const { return m_premiereDate; }

void AlbumInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool AlbumInfo::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void AlbumInfo::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
bool AlbumInfo::isAutomated() const { return m_isAutomated; }

void AlbumInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}

QStringList AlbumInfo::albumArtists() const { return m_albumArtists; }

void AlbumInfo::setAlbumArtists(QStringList newAlbumArtists) {
	m_albumArtists = newAlbumArtists;
}
bool AlbumInfo::albumArtistsNull() const {
	return m_albumArtists.size() == 0;
}

void AlbumInfo::setAlbumArtistsNull() {
	m_albumArtists.clear();

}
std::optional<QJsonObject> AlbumInfo::artistProviderIds() const { return m_artistProviderIds; }

void AlbumInfo::setArtistProviderIds(std::optional<QJsonObject> newArtistProviderIds) {
	m_artistProviderIds = newArtistProviderIds;
}
bool AlbumInfo::artistProviderIdsNull() const {
	return !m_artistProviderIds.has_value();
}

void AlbumInfo::setArtistProviderIdsNull() {
	m_artistProviderIds = std::nullopt;

}
QList<SongInfo> AlbumInfo::songInfos() const { return m_songInfos; }

void AlbumInfo::setSongInfos(QList<SongInfo> newSongInfos) {
	m_songInfos = newSongInfos;
}
bool AlbumInfo::songInfosNull() const {
	return m_songInfos.size() == 0;
}

void AlbumInfo::setSongInfosNull() {
	m_songInfos.clear();

}

} // NS DTO

namespace Support {

using AlbumInfo = Jellyfin::DTO::AlbumInfo;

template <>
AlbumInfo fromJsonValue<AlbumInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return AlbumInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

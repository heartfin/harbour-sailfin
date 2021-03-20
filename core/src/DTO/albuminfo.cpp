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

#include <JellyfinQt/DTO/albuminfo.h>

namespace Jellyfin {
namespace DTO {

AlbumInfo::AlbumInfo() {}

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
	m_providerIds = Jellyfin::Support::fromJsonValue<QJsonObject>(source["ProviderIds"]);
	m_year = Jellyfin::Support::fromJsonValue<qint32>(source["Year"]);
	m_indexNumber = Jellyfin::Support::fromJsonValue<qint32>(source["IndexNumber"]);
	m_parentIndexNumber = Jellyfin::Support::fromJsonValue<qint32>(source["ParentIndexNumber"]);
	m_premiereDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["PremiereDate"]);
	m_isAutomated = Jellyfin::Support::fromJsonValue<bool>(source["IsAutomated"]);
	m_albumArtists = Jellyfin::Support::fromJsonValue<QStringList>(source["AlbumArtists"]);
	m_artistProviderIds = Jellyfin::Support::fromJsonValue<QJsonObject>(source["ArtistProviderIds"]);
	m_songInfos = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<SongInfo>>>(source["SongInfos"]);

}
	
QJsonObject AlbumInfo::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	result["MetadataLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_metadataLanguage);
	result["MetadataCountryCode"] = Jellyfin::Support::toJsonValue<QString>(m_metadataCountryCode);
	result["ProviderIds"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_providerIds);
	result["Year"] = Jellyfin::Support::toJsonValue<qint32>(m_year);
	result["IndexNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_indexNumber);
	result["ParentIndexNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_parentIndexNumber);
	result["PremiereDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_premiereDate);
	result["IsAutomated"] = Jellyfin::Support::toJsonValue<bool>(m_isAutomated);
	result["AlbumArtists"] = Jellyfin::Support::toJsonValue<QStringList>(m_albumArtists);
	result["ArtistProviderIds"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_artistProviderIds);
	result["SongInfos"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<SongInfo>>>(m_songInfos);

	return result;
}

QString AlbumInfo::name() const { return m_name; }

void AlbumInfo::setName(QString newName) {
	m_name = newName;
}
QString AlbumInfo::path() const { return m_path; }

void AlbumInfo::setPath(QString newPath) {
	m_path = newPath;
}
QString AlbumInfo::metadataLanguage() const { return m_metadataLanguage; }

void AlbumInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
QString AlbumInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void AlbumInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
QJsonObject AlbumInfo::providerIds() const { return m_providerIds; }

void AlbumInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
qint32 AlbumInfo::year() const { return m_year; }

void AlbumInfo::setYear(qint32 newYear) {
	m_year = newYear;
}
qint32 AlbumInfo::indexNumber() const { return m_indexNumber; }

void AlbumInfo::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
qint32 AlbumInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void AlbumInfo::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
QDateTime AlbumInfo::premiereDate() const { return m_premiereDate; }

void AlbumInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool AlbumInfo::isAutomated() const { return m_isAutomated; }

void AlbumInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}
QStringList AlbumInfo::albumArtists() const { return m_albumArtists; }

void AlbumInfo::setAlbumArtists(QStringList newAlbumArtists) {
	m_albumArtists = newAlbumArtists;
}
QJsonObject AlbumInfo::artistProviderIds() const { return m_artistProviderIds; }

void AlbumInfo::setArtistProviderIds(QJsonObject newArtistProviderIds) {
	m_artistProviderIds = newArtistProviderIds;
}
QList<QSharedPointer<SongInfo>> AlbumInfo::songInfos() const { return m_songInfos; }

void AlbumInfo::setSongInfos(QList<QSharedPointer<SongInfo>> newSongInfos) {
	m_songInfos = newSongInfos;
}

} // NS DTO

namespace Support {

using AlbumInfo = Jellyfin::DTO::AlbumInfo;

template <>
AlbumInfo fromJsonValue<AlbumInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return AlbumInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

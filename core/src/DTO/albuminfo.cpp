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

AlbumInfo::AlbumInfo(QObject *parent) {}

AlbumInfo AlbumInfo::fromJson(QJsonObject source) {AlbumInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void AlbumInfo::setFromJson(QJsonObject source) {
	m_name = fromJsonValue<QString>(source["Name"]);
	m_path = fromJsonValue<QString>(source["Path"]);
	m_metadataLanguage = fromJsonValue<QString>(source["MetadataLanguage"]);
	m_metadataCountryCode = fromJsonValue<QString>(source["MetadataCountryCode"]);
	m_providerIds = fromJsonValue<QJsonObject>(source["ProviderIds"]);
	m_year = fromJsonValue<qint32>(source["Year"]);
	m_indexNumber = fromJsonValue<qint32>(source["IndexNumber"]);
	m_parentIndexNumber = fromJsonValue<qint32>(source["ParentIndexNumber"]);
	m_premiereDate = fromJsonValue<QDateTime>(source["PremiereDate"]);
	m_isAutomated = fromJsonValue<bool>(source["IsAutomated"]);
	m_albumArtists = fromJsonValue<QStringList>(source["AlbumArtists"]);
	m_artistProviderIds = fromJsonValue<QJsonObject>(source["ArtistProviderIds"]);
	m_songInfos = fromJsonValue<QList<QSharedPointer<SongInfo>>>(source["SongInfos"]);

}
	
QJsonObject AlbumInfo::toJson() {
	QJsonObject result;
	result["Name"] = toJsonValue<QString>(m_name);
	result["Path"] = toJsonValue<QString>(m_path);
	result["MetadataLanguage"] = toJsonValue<QString>(m_metadataLanguage);
	result["MetadataCountryCode"] = toJsonValue<QString>(m_metadataCountryCode);
	result["ProviderIds"] = toJsonValue<QJsonObject>(m_providerIds);
	result["Year"] = toJsonValue<qint32>(m_year);
	result["IndexNumber"] = toJsonValue<qint32>(m_indexNumber);
	result["ParentIndexNumber"] = toJsonValue<qint32>(m_parentIndexNumber);
	result["PremiereDate"] = toJsonValue<QDateTime>(m_premiereDate);
	result["IsAutomated"] = toJsonValue<bool>(m_isAutomated);
	result["AlbumArtists"] = toJsonValue<QStringList>(m_albumArtists);
	result["ArtistProviderIds"] = toJsonValue<QJsonObject>(m_artistProviderIds);
	result["SongInfos"] = toJsonValue<QList<QSharedPointer<SongInfo>>>(m_songInfos);

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


} // NS Jellyfin
} // NS DTO

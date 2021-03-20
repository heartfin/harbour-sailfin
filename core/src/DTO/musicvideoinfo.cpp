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

#include <JellyfinQt/DTO/musicvideoinfo.h>

namespace Jellyfin {
namespace DTO {

MusicVideoInfo::MusicVideoInfo(QObject *parent) {}

MusicVideoInfo MusicVideoInfo::fromJson(QJsonObject source) {MusicVideoInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void MusicVideoInfo::setFromJson(QJsonObject source) {
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
	m_artists = fromJsonValue<QStringList>(source["Artists"]);

}
	
QJsonObject MusicVideoInfo::toJson() {
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
	result["Artists"] = toJsonValue<QStringList>(m_artists);

	return result;
}

QString MusicVideoInfo::name() const { return m_name; }

void MusicVideoInfo::setName(QString newName) {
	m_name = newName;
}
QString MusicVideoInfo::path() const { return m_path; }

void MusicVideoInfo::setPath(QString newPath) {
	m_path = newPath;
}
QString MusicVideoInfo::metadataLanguage() const { return m_metadataLanguage; }

void MusicVideoInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
QString MusicVideoInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void MusicVideoInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
QJsonObject MusicVideoInfo::providerIds() const { return m_providerIds; }

void MusicVideoInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
qint32 MusicVideoInfo::year() const { return m_year; }

void MusicVideoInfo::setYear(qint32 newYear) {
	m_year = newYear;
}
qint32 MusicVideoInfo::indexNumber() const { return m_indexNumber; }

void MusicVideoInfo::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
qint32 MusicVideoInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void MusicVideoInfo::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
QDateTime MusicVideoInfo::premiereDate() const { return m_premiereDate; }

void MusicVideoInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool MusicVideoInfo::isAutomated() const { return m_isAutomated; }

void MusicVideoInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}
QStringList MusicVideoInfo::artists() const { return m_artists; }

void MusicVideoInfo::setArtists(QStringList newArtists) {
	m_artists = newArtists;
}


} // NS Jellyfin
} // NS DTO

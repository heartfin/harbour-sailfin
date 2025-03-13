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

#include <JellyfinQt/dto/songinfo.h>

namespace Jellyfin {
namespace DTO {

SongInfo::SongInfo() {}
SongInfo::SongInfo (
		bool isAutomated 
		) :
	m_isAutomated(isAutomated) { }



SongInfo::SongInfo(const SongInfo &other) :

	m_name(other.m_name),
	m_originalTitle(other.m_originalTitle),
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
	m_album(other.m_album),
	m_artists(other.m_artists){}


void SongInfo::replaceData(SongInfo &other) {
	m_name = other.m_name;
	m_originalTitle = other.m_originalTitle;
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
	m_album = other.m_album;
	m_artists = other.m_artists;
}

SongInfo SongInfo::fromJson(QJsonObject source) {
	SongInfo instance;
	instance.setFromJson(source);
	return instance;
}


void SongInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_originalTitle = Jellyfin::Support::fromJsonValue<QString>(source["OriginalTitle"]);
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_metadataLanguage = Jellyfin::Support::fromJsonValue<QString>(source["MetadataLanguage"]);
	m_metadataCountryCode = Jellyfin::Support::fromJsonValue<QString>(source["MetadataCountryCode"]);
	m_providerIds = Jellyfin::Support::fromJsonValue<QJsonObject>(source["ProviderIds"]);
	m_year = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Year"]);
	m_indexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["IndexNumber"]);
	m_parentIndexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ParentIndexNumber"]);
	m_premiereDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["PremiereDate"]);
	m_isAutomated = Jellyfin::Support::fromJsonValue<bool>(source["IsAutomated"]);
	m_albumArtists = Jellyfin::Support::fromJsonValue<QStringList>(source["AlbumArtists"]);
	m_album = Jellyfin::Support::fromJsonValue<QString>(source["Album"]);
	m_artists = Jellyfin::Support::fromJsonValue<QStringList>(source["Artists"]);

}
	
QJsonObject SongInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_originalTitle.isNull())) {
		result["OriginalTitle"] = Jellyfin::Support::toJsonValue<QString>(m_originalTitle);
	}
			
	
	if (!(m_path.isNull())) {
		result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	}
			
	
	if (!(m_metadataLanguage.isNull())) {
		result["MetadataLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_metadataLanguage);
	}
			
	
	if (!(m_metadataCountryCode.isNull())) {
		result["MetadataCountryCode"] = Jellyfin::Support::toJsonValue<QString>(m_metadataCountryCode);
	}
			
	
	if (!(m_providerIds.isEmpty())) {
		result["ProviderIds"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_providerIds);
	}
			
	
	if (!(!m_year.has_value())) {
		result["Year"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_year);
	}
			
	
	if (!(!m_indexNumber.has_value())) {
		result["IndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_indexNumber);
	}
			
	
	if (!(!m_parentIndexNumber.has_value())) {
		result["ParentIndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_parentIndexNumber);
	}
			
	
	if (!(m_premiereDate.isNull())) {
		result["PremiereDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_premiereDate);
	}
			
	result["IsAutomated"] = Jellyfin::Support::toJsonValue<bool>(m_isAutomated);		
	
	if (!(m_albumArtists.size() == 0)) {
		result["AlbumArtists"] = Jellyfin::Support::toJsonValue<QStringList>(m_albumArtists);
	}
			
	
	if (!(m_album.isNull())) {
		result["Album"] = Jellyfin::Support::toJsonValue<QString>(m_album);
	}
			
	
	if (!(m_artists.size() == 0)) {
		result["Artists"] = Jellyfin::Support::toJsonValue<QStringList>(m_artists);
	}
		
	return result;
}

QString SongInfo::name() const { return m_name; }

void SongInfo::setName(QString newName) {
	m_name = newName;
}
bool SongInfo::nameNull() const {
	return m_name.isNull();
}

void SongInfo::setNameNull() {
	m_name.clear();

}
QString SongInfo::originalTitle() const { return m_originalTitle; }

void SongInfo::setOriginalTitle(QString newOriginalTitle) {
	m_originalTitle = newOriginalTitle;
}
bool SongInfo::originalTitleNull() const {
	return m_originalTitle.isNull();
}

void SongInfo::setOriginalTitleNull() {
	m_originalTitle.clear();

}
QString SongInfo::path() const { return m_path; }

void SongInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool SongInfo::pathNull() const {
	return m_path.isNull();
}

void SongInfo::setPathNull() {
	m_path.clear();

}
QString SongInfo::metadataLanguage() const { return m_metadataLanguage; }

void SongInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
bool SongInfo::metadataLanguageNull() const {
	return m_metadataLanguage.isNull();
}

void SongInfo::setMetadataLanguageNull() {
	m_metadataLanguage.clear();

}
QString SongInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void SongInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool SongInfo::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void SongInfo::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
QJsonObject SongInfo::providerIds() const { return m_providerIds; }

void SongInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
bool SongInfo::providerIdsNull() const {
	return m_providerIds.isEmpty();
}

void SongInfo::setProviderIdsNull() {
	m_providerIds= QJsonObject();

}
std::optional<qint32> SongInfo::year() const { return m_year; }

void SongInfo::setYear(std::optional<qint32> newYear) {
	m_year = newYear;
}
bool SongInfo::yearNull() const {
	return !m_year.has_value();
}

void SongInfo::setYearNull() {
	m_year = std::nullopt;

}
std::optional<qint32> SongInfo::indexNumber() const { return m_indexNumber; }

void SongInfo::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool SongInfo::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void SongInfo::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> SongInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void SongInfo::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool SongInfo::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void SongInfo::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QDateTime SongInfo::premiereDate() const { return m_premiereDate; }

void SongInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool SongInfo::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void SongInfo::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
bool SongInfo::isAutomated() const { return m_isAutomated; }

void SongInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}

QStringList SongInfo::albumArtists() const { return m_albumArtists; }

void SongInfo::setAlbumArtists(QStringList newAlbumArtists) {
	m_albumArtists = newAlbumArtists;
}
bool SongInfo::albumArtistsNull() const {
	return m_albumArtists.size() == 0;
}

void SongInfo::setAlbumArtistsNull() {
	m_albumArtists.clear();

}
QString SongInfo::album() const { return m_album; }

void SongInfo::setAlbum(QString newAlbum) {
	m_album = newAlbum;
}
bool SongInfo::albumNull() const {
	return m_album.isNull();
}

void SongInfo::setAlbumNull() {
	m_album.clear();

}
QStringList SongInfo::artists() const { return m_artists; }

void SongInfo::setArtists(QStringList newArtists) {
	m_artists = newArtists;
}
bool SongInfo::artistsNull() const {
	return m_artists.size() == 0;
}

void SongInfo::setArtistsNull() {
	m_artists.clear();

}

} // NS DTO

namespace Support {

using SongInfo = Jellyfin::DTO::SongInfo;

template <>
SongInfo fromJsonValue(const QJsonValue &source, convertType<SongInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SongInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SongInfo &source, convertType<SongInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

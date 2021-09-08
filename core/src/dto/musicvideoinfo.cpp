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

#include <JellyfinQt/dto/musicvideoinfo.h>

namespace Jellyfin {
namespace DTO {

MusicVideoInfo::MusicVideoInfo() {}

MusicVideoInfo::MusicVideoInfo(const MusicVideoInfo &other) :

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
	m_artists(other.m_artists){}


void MusicVideoInfo::replaceData(MusicVideoInfo &other) {
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
	m_artists = other.m_artists;
}

MusicVideoInfo MusicVideoInfo::fromJson(QJsonObject source) {
	MusicVideoInfo instance;
	instance.setFromJson(source);
	return instance;
}


void MusicVideoInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_metadataLanguage = Jellyfin::Support::fromJsonValue<QString>(source["MetadataLanguage"]);
	m_metadataCountryCode = Jellyfin::Support::fromJsonValue<QString>(source["MetadataCountryCode"]);
	m_providerIds = Jellyfin::Support::fromJsonValue<QJsonObject>(source["ProviderIds"]);
	m_year = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Year"]);
	m_indexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["IndexNumber"]);
	m_parentIndexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ParentIndexNumber"]);
	m_premiereDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["PremiereDate"]);
	m_isAutomated = Jellyfin::Support::fromJsonValue<bool>(source["IsAutomated"]);
	m_artists = Jellyfin::Support::fromJsonValue<QStringList>(source["Artists"]);

}
	
QJsonObject MusicVideoInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
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
	
	if (!(m_artists.size() == 0)) {
		result["Artists"] = Jellyfin::Support::toJsonValue<QStringList>(m_artists);
	}
		
	return result;
}

QString MusicVideoInfo::name() const { return m_name; }

void MusicVideoInfo::setName(QString newName) {
	m_name = newName;
}
bool MusicVideoInfo::nameNull() const {
	return m_name.isNull();
}

void MusicVideoInfo::setNameNull() {
	m_name.clear();

}
QString MusicVideoInfo::path() const { return m_path; }

void MusicVideoInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool MusicVideoInfo::pathNull() const {
	return m_path.isNull();
}

void MusicVideoInfo::setPathNull() {
	m_path.clear();

}
QString MusicVideoInfo::metadataLanguage() const { return m_metadataLanguage; }

void MusicVideoInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
bool MusicVideoInfo::metadataLanguageNull() const {
	return m_metadataLanguage.isNull();
}

void MusicVideoInfo::setMetadataLanguageNull() {
	m_metadataLanguage.clear();

}
QString MusicVideoInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void MusicVideoInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool MusicVideoInfo::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void MusicVideoInfo::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
QJsonObject MusicVideoInfo::providerIds() const { return m_providerIds; }

void MusicVideoInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
bool MusicVideoInfo::providerIdsNull() const {
	return m_providerIds.isEmpty();
}

void MusicVideoInfo::setProviderIdsNull() {
	m_providerIds= QJsonObject();

}
std::optional<qint32> MusicVideoInfo::year() const { return m_year; }

void MusicVideoInfo::setYear(std::optional<qint32> newYear) {
	m_year = newYear;
}
bool MusicVideoInfo::yearNull() const {
	return !m_year.has_value();
}

void MusicVideoInfo::setYearNull() {
	m_year = std::nullopt;

}
std::optional<qint32> MusicVideoInfo::indexNumber() const { return m_indexNumber; }

void MusicVideoInfo::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool MusicVideoInfo::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void MusicVideoInfo::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> MusicVideoInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void MusicVideoInfo::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool MusicVideoInfo::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void MusicVideoInfo::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QDateTime MusicVideoInfo::premiereDate() const { return m_premiereDate; }

void MusicVideoInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool MusicVideoInfo::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void MusicVideoInfo::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
bool MusicVideoInfo::isAutomated() const { return m_isAutomated; }

void MusicVideoInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}

QStringList MusicVideoInfo::artists() const { return m_artists; }

void MusicVideoInfo::setArtists(QStringList newArtists) {
	m_artists = newArtists;
}
bool MusicVideoInfo::artistsNull() const {
	return m_artists.size() == 0;
}

void MusicVideoInfo::setArtistsNull() {
	m_artists.clear();

}

} // NS DTO

namespace Support {

using MusicVideoInfo = Jellyfin::DTO::MusicVideoInfo;

template <>
MusicVideoInfo fromJsonValue(const QJsonValue &source, convertType<MusicVideoInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MusicVideoInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MusicVideoInfo &source, convertType<MusicVideoInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

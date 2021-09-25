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

#include <JellyfinQt/dto/artistinfo.h>

namespace Jellyfin {
namespace DTO {

ArtistInfo::ArtistInfo() {}
ArtistInfo::ArtistInfo (
		bool isAutomated 
		) :
	m_isAutomated(isAutomated) { }



ArtistInfo::ArtistInfo(const ArtistInfo &other) :

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
	m_songInfos(other.m_songInfos){}


void ArtistInfo::replaceData(ArtistInfo &other) {
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
	m_songInfos = other.m_songInfos;
}

ArtistInfo ArtistInfo::fromJson(QJsonObject source) {
	ArtistInfo instance;
	instance.setFromJson(source);
	return instance;
}


void ArtistInfo::setFromJson(QJsonObject source) {
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
	m_songInfos = Jellyfin::Support::fromJsonValue<QList<SongInfo>>(source["SongInfos"]);

}
	
QJsonObject ArtistInfo::toJson() const {
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
	
	if (!(m_songInfos.size() == 0)) {
		result["SongInfos"] = Jellyfin::Support::toJsonValue<QList<SongInfo>>(m_songInfos);
	}
		
	return result;
}

QString ArtistInfo::name() const { return m_name; }

void ArtistInfo::setName(QString newName) {
	m_name = newName;
}
bool ArtistInfo::nameNull() const {
	return m_name.isNull();
}

void ArtistInfo::setNameNull() {
	m_name.clear();

}
QString ArtistInfo::path() const { return m_path; }

void ArtistInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool ArtistInfo::pathNull() const {
	return m_path.isNull();
}

void ArtistInfo::setPathNull() {
	m_path.clear();

}
QString ArtistInfo::metadataLanguage() const { return m_metadataLanguage; }

void ArtistInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
bool ArtistInfo::metadataLanguageNull() const {
	return m_metadataLanguage.isNull();
}

void ArtistInfo::setMetadataLanguageNull() {
	m_metadataLanguage.clear();

}
QString ArtistInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void ArtistInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool ArtistInfo::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void ArtistInfo::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
QJsonObject ArtistInfo::providerIds() const { return m_providerIds; }

void ArtistInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
bool ArtistInfo::providerIdsNull() const {
	return m_providerIds.isEmpty();
}

void ArtistInfo::setProviderIdsNull() {
	m_providerIds= QJsonObject();

}
std::optional<qint32> ArtistInfo::year() const { return m_year; }

void ArtistInfo::setYear(std::optional<qint32> newYear) {
	m_year = newYear;
}
bool ArtistInfo::yearNull() const {
	return !m_year.has_value();
}

void ArtistInfo::setYearNull() {
	m_year = std::nullopt;

}
std::optional<qint32> ArtistInfo::indexNumber() const { return m_indexNumber; }

void ArtistInfo::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool ArtistInfo::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void ArtistInfo::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> ArtistInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void ArtistInfo::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool ArtistInfo::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void ArtistInfo::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QDateTime ArtistInfo::premiereDate() const { return m_premiereDate; }

void ArtistInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool ArtistInfo::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void ArtistInfo::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
bool ArtistInfo::isAutomated() const { return m_isAutomated; }

void ArtistInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}

QList<SongInfo> ArtistInfo::songInfos() const { return m_songInfos; }

void ArtistInfo::setSongInfos(QList<SongInfo> newSongInfos) {
	m_songInfos = newSongInfos;
}
bool ArtistInfo::songInfosNull() const {
	return m_songInfos.size() == 0;
}

void ArtistInfo::setSongInfosNull() {
	m_songInfos.clear();

}

} // NS DTO

namespace Support {

using ArtistInfo = Jellyfin::DTO::ArtistInfo;

template <>
ArtistInfo fromJsonValue(const QJsonValue &source, convertType<ArtistInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ArtistInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ArtistInfo &source, convertType<ArtistInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

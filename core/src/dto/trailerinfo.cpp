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

#include <JellyfinQt/dto/trailerinfo.h>

namespace Jellyfin {
namespace DTO {

TrailerInfo::TrailerInfo() {}
TrailerInfo::TrailerInfo (
		bool isAutomated 
		) :
	m_isAutomated(isAutomated) { }



TrailerInfo::TrailerInfo(const TrailerInfo &other) :

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
	m_isAutomated(other.m_isAutomated){}


void TrailerInfo::replaceData(TrailerInfo &other) {
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
}

TrailerInfo TrailerInfo::fromJson(QJsonObject source) {
	TrailerInfo instance;
	instance.setFromJson(source);
	return instance;
}


void TrailerInfo::setFromJson(QJsonObject source) {
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

}
	
QJsonObject TrailerInfo::toJson() const {
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
	return result;
}

QString TrailerInfo::name() const { return m_name; }

void TrailerInfo::setName(QString newName) {
	m_name = newName;
}
bool TrailerInfo::nameNull() const {
	return m_name.isNull();
}

void TrailerInfo::setNameNull() {
	m_name.clear();

}
QString TrailerInfo::originalTitle() const { return m_originalTitle; }

void TrailerInfo::setOriginalTitle(QString newOriginalTitle) {
	m_originalTitle = newOriginalTitle;
}
bool TrailerInfo::originalTitleNull() const {
	return m_originalTitle.isNull();
}

void TrailerInfo::setOriginalTitleNull() {
	m_originalTitle.clear();

}
QString TrailerInfo::path() const { return m_path; }

void TrailerInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool TrailerInfo::pathNull() const {
	return m_path.isNull();
}

void TrailerInfo::setPathNull() {
	m_path.clear();

}
QString TrailerInfo::metadataLanguage() const { return m_metadataLanguage; }

void TrailerInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
bool TrailerInfo::metadataLanguageNull() const {
	return m_metadataLanguage.isNull();
}

void TrailerInfo::setMetadataLanguageNull() {
	m_metadataLanguage.clear();

}
QString TrailerInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void TrailerInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool TrailerInfo::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void TrailerInfo::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
QJsonObject TrailerInfo::providerIds() const { return m_providerIds; }

void TrailerInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
bool TrailerInfo::providerIdsNull() const {
	return m_providerIds.isEmpty();
}

void TrailerInfo::setProviderIdsNull() {
	m_providerIds= QJsonObject();

}
std::optional<qint32> TrailerInfo::year() const { return m_year; }

void TrailerInfo::setYear(std::optional<qint32> newYear) {
	m_year = newYear;
}
bool TrailerInfo::yearNull() const {
	return !m_year.has_value();
}

void TrailerInfo::setYearNull() {
	m_year = std::nullopt;

}
std::optional<qint32> TrailerInfo::indexNumber() const { return m_indexNumber; }

void TrailerInfo::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool TrailerInfo::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void TrailerInfo::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> TrailerInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void TrailerInfo::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool TrailerInfo::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void TrailerInfo::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QDateTime TrailerInfo::premiereDate() const { return m_premiereDate; }

void TrailerInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool TrailerInfo::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void TrailerInfo::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
bool TrailerInfo::isAutomated() const { return m_isAutomated; }

void TrailerInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}


} // NS DTO

namespace Support {

using TrailerInfo = Jellyfin::DTO::TrailerInfo;

template <>
TrailerInfo fromJsonValue(const QJsonValue &source, convertType<TrailerInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return TrailerInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const TrailerInfo &source, convertType<TrailerInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

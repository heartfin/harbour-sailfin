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

#include <JellyfinQt/dto/personlookupinfo.h>

namespace Jellyfin {
namespace DTO {

PersonLookupInfo::PersonLookupInfo() {}

PersonLookupInfo::PersonLookupInfo(const PersonLookupInfo &other) :

	m_name(other.m_name),
	m_path(other.m_path),
	m_metadataLanguage(other.m_metadataLanguage),
	m_metadataCountryCode(other.m_metadataCountryCode),
	m_providerIds(other.m_providerIds),
	m_year(other.m_year),
	m_indexNumber(other.m_indexNumber),
	m_parentIndexNumber(other.m_parentIndexNumber),
	m_premiereDate(other.m_premiereDate),
	m_isAutomated(other.m_isAutomated){}


void PersonLookupInfo::replaceData(PersonLookupInfo &other) {
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
}

PersonLookupInfo PersonLookupInfo::fromJson(QJsonObject source) {
	PersonLookupInfo instance;
	instance.setFromJson(source);
	return instance;
}


void PersonLookupInfo::setFromJson(QJsonObject source) {
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

}
	
QJsonObject PersonLookupInfo::toJson() const {
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
	return result;
}

QString PersonLookupInfo::name() const { return m_name; }

void PersonLookupInfo::setName(QString newName) {
	m_name = newName;
}
bool PersonLookupInfo::nameNull() const {
	return m_name.isNull();
}

void PersonLookupInfo::setNameNull() {
	m_name.clear();

}
QString PersonLookupInfo::path() const { return m_path; }

void PersonLookupInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool PersonLookupInfo::pathNull() const {
	return m_path.isNull();
}

void PersonLookupInfo::setPathNull() {
	m_path.clear();

}
QString PersonLookupInfo::metadataLanguage() const { return m_metadataLanguage; }

void PersonLookupInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
bool PersonLookupInfo::metadataLanguageNull() const {
	return m_metadataLanguage.isNull();
}

void PersonLookupInfo::setMetadataLanguageNull() {
	m_metadataLanguage.clear();

}
QString PersonLookupInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void PersonLookupInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool PersonLookupInfo::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void PersonLookupInfo::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
QJsonObject PersonLookupInfo::providerIds() const { return m_providerIds; }

void PersonLookupInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
bool PersonLookupInfo::providerIdsNull() const {
	return m_providerIds.isEmpty();
}

void PersonLookupInfo::setProviderIdsNull() {
	m_providerIds= QJsonObject();

}
std::optional<qint32> PersonLookupInfo::year() const { return m_year; }

void PersonLookupInfo::setYear(std::optional<qint32> newYear) {
	m_year = newYear;
}
bool PersonLookupInfo::yearNull() const {
	return !m_year.has_value();
}

void PersonLookupInfo::setYearNull() {
	m_year = std::nullopt;

}
std::optional<qint32> PersonLookupInfo::indexNumber() const { return m_indexNumber; }

void PersonLookupInfo::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool PersonLookupInfo::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void PersonLookupInfo::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> PersonLookupInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void PersonLookupInfo::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool PersonLookupInfo::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void PersonLookupInfo::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QDateTime PersonLookupInfo::premiereDate() const { return m_premiereDate; }

void PersonLookupInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool PersonLookupInfo::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void PersonLookupInfo::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
bool PersonLookupInfo::isAutomated() const { return m_isAutomated; }

void PersonLookupInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}


} // NS DTO

namespace Support {

using PersonLookupInfo = Jellyfin::DTO::PersonLookupInfo;

template <>
PersonLookupInfo fromJsonValue(const QJsonValue &source, convertType<PersonLookupInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PersonLookupInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PersonLookupInfo &source, convertType<PersonLookupInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

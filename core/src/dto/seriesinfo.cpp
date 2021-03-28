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

#include <JellyfinQt/dto/seriesinfo.h>

namespace Jellyfin {
namespace DTO {

SeriesInfo::SeriesInfo() {}

SeriesInfo::SeriesInfo(const SeriesInfo &other) :

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


void SeriesInfo::replaceData(SeriesInfo &other) {
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

SeriesInfo SeriesInfo::fromJson(QJsonObject source) {
	SeriesInfo instance;
	instance.setFromJson(source);
	return instance;
}


void SeriesInfo::setFromJson(QJsonObject source) {
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
	
QJsonObject SeriesInfo::toJson() const {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	result["MetadataLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_metadataLanguage);
	result["MetadataCountryCode"] = Jellyfin::Support::toJsonValue<QString>(m_metadataCountryCode);
	result["ProviderIds"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_providerIds);
	result["Year"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_year);
	result["IndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_indexNumber);
	result["ParentIndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_parentIndexNumber);
	result["PremiereDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_premiereDate);
	result["IsAutomated"] = Jellyfin::Support::toJsonValue<bool>(m_isAutomated);

	return result;
}

QString SeriesInfo::name() const { return m_name; }

void SeriesInfo::setName(QString newName) {
	m_name = newName;
}
bool SeriesInfo::nameNull() const {
	return m_name.isNull();
}

void SeriesInfo::setNameNull() {
	m_name.clear();

}
QString SeriesInfo::path() const { return m_path; }

void SeriesInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool SeriesInfo::pathNull() const {
	return m_path.isNull();
}

void SeriesInfo::setPathNull() {
	m_path.clear();

}
QString SeriesInfo::metadataLanguage() const { return m_metadataLanguage; }

void SeriesInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
bool SeriesInfo::metadataLanguageNull() const {
	return m_metadataLanguage.isNull();
}

void SeriesInfo::setMetadataLanguageNull() {
	m_metadataLanguage.clear();

}
QString SeriesInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void SeriesInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool SeriesInfo::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void SeriesInfo::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
QJsonObject SeriesInfo::providerIds() const { return m_providerIds; }

void SeriesInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
bool SeriesInfo::providerIdsNull() const {
	return m_providerIds.isEmpty();
}

void SeriesInfo::setProviderIdsNull() {
	m_providerIds= QJsonObject();

}
std::optional<qint32> SeriesInfo::year() const { return m_year; }

void SeriesInfo::setYear(std::optional<qint32> newYear) {
	m_year = newYear;
}
bool SeriesInfo::yearNull() const {
	return !m_year.has_value();
}

void SeriesInfo::setYearNull() {
	m_year = std::nullopt;

}
std::optional<qint32> SeriesInfo::indexNumber() const { return m_indexNumber; }

void SeriesInfo::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool SeriesInfo::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void SeriesInfo::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> SeriesInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void SeriesInfo::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool SeriesInfo::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void SeriesInfo::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QDateTime SeriesInfo::premiereDate() const { return m_premiereDate; }

void SeriesInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool SeriesInfo::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void SeriesInfo::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
bool SeriesInfo::isAutomated() const { return m_isAutomated; }

void SeriesInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}


} // NS DTO

namespace Support {

using SeriesInfo = Jellyfin::DTO::SeriesInfo;

template <>
SeriesInfo fromJsonValue(const QJsonValue &source, convertType<SeriesInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SeriesInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SeriesInfo &source, convertType<SeriesInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

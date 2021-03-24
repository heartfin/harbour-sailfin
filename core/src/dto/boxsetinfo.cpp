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

#include <JellyfinQt/dto/boxsetinfo.h>

namespace Jellyfin {
namespace DTO {

BoxSetInfo::BoxSetInfo() {}

BoxSetInfo::BoxSetInfo(const BoxSetInfo &other) :

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


void BoxSetInfo::replaceData(BoxSetInfo &other) {
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

BoxSetInfo BoxSetInfo::fromJson(QJsonObject source) {
	BoxSetInfo instance;
	instance.setFromJson(source);
	return instance;
}


void BoxSetInfo::setFromJson(QJsonObject source) {
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

}
	
QJsonObject BoxSetInfo::toJson() {
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

	return result;
}

QString BoxSetInfo::name() const { return m_name; }

void BoxSetInfo::setName(QString newName) {
	m_name = newName;
}
bool BoxSetInfo::nameNull() const {
	return m_name.isNull();
}

void BoxSetInfo::setNameNull() {
	m_name.clear();

}
QString BoxSetInfo::path() const { return m_path; }

void BoxSetInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool BoxSetInfo::pathNull() const {
	return m_path.isNull();
}

void BoxSetInfo::setPathNull() {
	m_path.clear();

}
QString BoxSetInfo::metadataLanguage() const { return m_metadataLanguage; }

void BoxSetInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
bool BoxSetInfo::metadataLanguageNull() const {
	return m_metadataLanguage.isNull();
}

void BoxSetInfo::setMetadataLanguageNull() {
	m_metadataLanguage.clear();

}
QString BoxSetInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void BoxSetInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool BoxSetInfo::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void BoxSetInfo::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
std::optional<QJsonObject> BoxSetInfo::providerIds() const { return m_providerIds; }

void BoxSetInfo::setProviderIds(std::optional<QJsonObject> newProviderIds) {
	m_providerIds = newProviderIds;
}
bool BoxSetInfo::providerIdsNull() const {
	return !m_providerIds.has_value();
}

void BoxSetInfo::setProviderIdsNull() {
	m_providerIds = std::nullopt;

}
std::optional<qint32> BoxSetInfo::year() const { return m_year; }

void BoxSetInfo::setYear(std::optional<qint32> newYear) {
	m_year = newYear;
}
bool BoxSetInfo::yearNull() const {
	return !m_year.has_value();
}

void BoxSetInfo::setYearNull() {
	m_year = std::nullopt;

}
std::optional<qint32> BoxSetInfo::indexNumber() const { return m_indexNumber; }

void BoxSetInfo::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool BoxSetInfo::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void BoxSetInfo::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> BoxSetInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void BoxSetInfo::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool BoxSetInfo::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void BoxSetInfo::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QDateTime BoxSetInfo::premiereDate() const { return m_premiereDate; }

void BoxSetInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool BoxSetInfo::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void BoxSetInfo::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
bool BoxSetInfo::isAutomated() const { return m_isAutomated; }

void BoxSetInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}


} // NS DTO

namespace Support {

using BoxSetInfo = Jellyfin::DTO::BoxSetInfo;

template <>
BoxSetInfo fromJsonValue<BoxSetInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return BoxSetInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

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

#include <JellyfinQt/dto/bookinfo.h>

namespace Jellyfin {
namespace DTO {

BookInfo::BookInfo() {}

BookInfo::BookInfo(const BookInfo &other) :

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
	m_seriesName(other.m_seriesName){}


void BookInfo::replaceData(BookInfo &other) {
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
	m_seriesName = other.m_seriesName;
}

BookInfo BookInfo::fromJson(QJsonObject source) {
	BookInfo instance;
	instance.setFromJson(source);
	return instance;
}


void BookInfo::setFromJson(QJsonObject source) {
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
	m_seriesName = Jellyfin::Support::fromJsonValue<QString>(source["SeriesName"]);

}
	
QJsonObject BookInfo::toJson() const {
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
	result["SeriesName"] = Jellyfin::Support::toJsonValue<QString>(m_seriesName);

	return result;
}

QString BookInfo::name() const { return m_name; }

void BookInfo::setName(QString newName) {
	m_name = newName;
}
bool BookInfo::nameNull() const {
	return m_name.isNull();
}

void BookInfo::setNameNull() {
	m_name.clear();

}
QString BookInfo::path() const { return m_path; }

void BookInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool BookInfo::pathNull() const {
	return m_path.isNull();
}

void BookInfo::setPathNull() {
	m_path.clear();

}
QString BookInfo::metadataLanguage() const { return m_metadataLanguage; }

void BookInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
bool BookInfo::metadataLanguageNull() const {
	return m_metadataLanguage.isNull();
}

void BookInfo::setMetadataLanguageNull() {
	m_metadataLanguage.clear();

}
QString BookInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void BookInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool BookInfo::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void BookInfo::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
QJsonObject BookInfo::providerIds() const { return m_providerIds; }

void BookInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
bool BookInfo::providerIdsNull() const {
	return m_providerIds.isEmpty();
}

void BookInfo::setProviderIdsNull() {
	m_providerIds= QJsonObject();

}
std::optional<qint32> BookInfo::year() const { return m_year; }

void BookInfo::setYear(std::optional<qint32> newYear) {
	m_year = newYear;
}
bool BookInfo::yearNull() const {
	return !m_year.has_value();
}

void BookInfo::setYearNull() {
	m_year = std::nullopt;

}
std::optional<qint32> BookInfo::indexNumber() const { return m_indexNumber; }

void BookInfo::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool BookInfo::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void BookInfo::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> BookInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void BookInfo::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool BookInfo::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void BookInfo::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QDateTime BookInfo::premiereDate() const { return m_premiereDate; }

void BookInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool BookInfo::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void BookInfo::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
bool BookInfo::isAutomated() const { return m_isAutomated; }

void BookInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}

QString BookInfo::seriesName() const { return m_seriesName; }

void BookInfo::setSeriesName(QString newSeriesName) {
	m_seriesName = newSeriesName;
}
bool BookInfo::seriesNameNull() const {
	return m_seriesName.isNull();
}

void BookInfo::setSeriesNameNull() {
	m_seriesName.clear();

}

} // NS DTO

namespace Support {

using BookInfo = Jellyfin::DTO::BookInfo;

template <>
BookInfo fromJsonValue(const QJsonValue &source, convertType<BookInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return BookInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const BookInfo &source, convertType<BookInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

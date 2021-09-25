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

#include <JellyfinQt/dto/movieinfo.h>

namespace Jellyfin {
namespace DTO {

MovieInfo::MovieInfo() {}
MovieInfo::MovieInfo (
		bool isAutomated 
		) :
	m_isAutomated(isAutomated) { }



MovieInfo::MovieInfo(const MovieInfo &other) :

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


void MovieInfo::replaceData(MovieInfo &other) {
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

MovieInfo MovieInfo::fromJson(QJsonObject source) {
	MovieInfo instance;
	instance.setFromJson(source);
	return instance;
}


void MovieInfo::setFromJson(QJsonObject source) {
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
	
QJsonObject MovieInfo::toJson() const {
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

QString MovieInfo::name() const { return m_name; }

void MovieInfo::setName(QString newName) {
	m_name = newName;
}
bool MovieInfo::nameNull() const {
	return m_name.isNull();
}

void MovieInfo::setNameNull() {
	m_name.clear();

}
QString MovieInfo::path() const { return m_path; }

void MovieInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool MovieInfo::pathNull() const {
	return m_path.isNull();
}

void MovieInfo::setPathNull() {
	m_path.clear();

}
QString MovieInfo::metadataLanguage() const { return m_metadataLanguage; }

void MovieInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
}
bool MovieInfo::metadataLanguageNull() const {
	return m_metadataLanguage.isNull();
}

void MovieInfo::setMetadataLanguageNull() {
	m_metadataLanguage.clear();

}
QString MovieInfo::metadataCountryCode() const { return m_metadataCountryCode; }

void MovieInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool MovieInfo::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void MovieInfo::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
QJsonObject MovieInfo::providerIds() const { return m_providerIds; }

void MovieInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
bool MovieInfo::providerIdsNull() const {
	return m_providerIds.isEmpty();
}

void MovieInfo::setProviderIdsNull() {
	m_providerIds= QJsonObject();

}
std::optional<qint32> MovieInfo::year() const { return m_year; }

void MovieInfo::setYear(std::optional<qint32> newYear) {
	m_year = newYear;
}
bool MovieInfo::yearNull() const {
	return !m_year.has_value();
}

void MovieInfo::setYearNull() {
	m_year = std::nullopt;

}
std::optional<qint32> MovieInfo::indexNumber() const { return m_indexNumber; }

void MovieInfo::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool MovieInfo::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void MovieInfo::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> MovieInfo::parentIndexNumber() const { return m_parentIndexNumber; }

void MovieInfo::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool MovieInfo::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void MovieInfo::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QDateTime MovieInfo::premiereDate() const { return m_premiereDate; }

void MovieInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool MovieInfo::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void MovieInfo::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
bool MovieInfo::isAutomated() const { return m_isAutomated; }

void MovieInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
}


} // NS DTO

namespace Support {

using MovieInfo = Jellyfin::DTO::MovieInfo;

template <>
MovieInfo fromJsonValue(const QJsonValue &source, convertType<MovieInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MovieInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MovieInfo &source, convertType<MovieInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

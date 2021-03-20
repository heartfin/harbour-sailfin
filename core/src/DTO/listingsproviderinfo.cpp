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

#include <JellyfinQt/DTO/listingsproviderinfo.h>

namespace Jellyfin {
namespace DTO {

ListingsProviderInfo::ListingsProviderInfo(QObject *parent) {}

ListingsProviderInfo ListingsProviderInfo::fromJson(QJsonObject source) {ListingsProviderInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void ListingsProviderInfo::setFromJson(QJsonObject source) {
	m_jellyfinId = fromJsonValue<QString>(source["Id"]);
	m_type = fromJsonValue<QString>(source["Type"]);
	m_username = fromJsonValue<QString>(source["Username"]);
	m_password = fromJsonValue<QString>(source["Password"]);
	m_listingsId = fromJsonValue<QString>(source["ListingsId"]);
	m_zipCode = fromJsonValue<QString>(source["ZipCode"]);
	m_country = fromJsonValue<QString>(source["Country"]);
	m_path = fromJsonValue<QString>(source["Path"]);
	m_enabledTuners = fromJsonValue<QStringList>(source["EnabledTuners"]);
	m_enableAllTuners = fromJsonValue<bool>(source["EnableAllTuners"]);
	m_newsCategories = fromJsonValue<QStringList>(source["NewsCategories"]);
	m_sportsCategories = fromJsonValue<QStringList>(source["SportsCategories"]);
	m_kidsCategories = fromJsonValue<QStringList>(source["KidsCategories"]);
	m_movieCategories = fromJsonValue<QStringList>(source["MovieCategories"]);
	m_channelMappings = fromJsonValue<QList<QSharedPointer<NameValuePair>>>(source["ChannelMappings"]);
	m_moviePrefix = fromJsonValue<QString>(source["MoviePrefix"]);
	m_preferredLanguage = fromJsonValue<QString>(source["PreferredLanguage"]);
	m_userAgent = fromJsonValue<QString>(source["UserAgent"]);

}
	
QJsonObject ListingsProviderInfo::toJson() {
	QJsonObject result;
	result["Id"] = toJsonValue<QString>(m_jellyfinId);
	result["Type"] = toJsonValue<QString>(m_type);
	result["Username"] = toJsonValue<QString>(m_username);
	result["Password"] = toJsonValue<QString>(m_password);
	result["ListingsId"] = toJsonValue<QString>(m_listingsId);
	result["ZipCode"] = toJsonValue<QString>(m_zipCode);
	result["Country"] = toJsonValue<QString>(m_country);
	result["Path"] = toJsonValue<QString>(m_path);
	result["EnabledTuners"] = toJsonValue<QStringList>(m_enabledTuners);
	result["EnableAllTuners"] = toJsonValue<bool>(m_enableAllTuners);
	result["NewsCategories"] = toJsonValue<QStringList>(m_newsCategories);
	result["SportsCategories"] = toJsonValue<QStringList>(m_sportsCategories);
	result["KidsCategories"] = toJsonValue<QStringList>(m_kidsCategories);
	result["MovieCategories"] = toJsonValue<QStringList>(m_movieCategories);
	result["ChannelMappings"] = toJsonValue<QList<QSharedPointer<NameValuePair>>>(m_channelMappings);
	result["MoviePrefix"] = toJsonValue<QString>(m_moviePrefix);
	result["PreferredLanguage"] = toJsonValue<QString>(m_preferredLanguage);
	result["UserAgent"] = toJsonValue<QString>(m_userAgent);

	return result;
}

QString ListingsProviderInfo::jellyfinId() const { return m_jellyfinId; }

void ListingsProviderInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString ListingsProviderInfo::type() const { return m_type; }

void ListingsProviderInfo::setType(QString newType) {
	m_type = newType;
}
QString ListingsProviderInfo::username() const { return m_username; }

void ListingsProviderInfo::setUsername(QString newUsername) {
	m_username = newUsername;
}
QString ListingsProviderInfo::password() const { return m_password; }

void ListingsProviderInfo::setPassword(QString newPassword) {
	m_password = newPassword;
}
QString ListingsProviderInfo::listingsId() const { return m_listingsId; }

void ListingsProviderInfo::setListingsId(QString newListingsId) {
	m_listingsId = newListingsId;
}
QString ListingsProviderInfo::zipCode() const { return m_zipCode; }

void ListingsProviderInfo::setZipCode(QString newZipCode) {
	m_zipCode = newZipCode;
}
QString ListingsProviderInfo::country() const { return m_country; }

void ListingsProviderInfo::setCountry(QString newCountry) {
	m_country = newCountry;
}
QString ListingsProviderInfo::path() const { return m_path; }

void ListingsProviderInfo::setPath(QString newPath) {
	m_path = newPath;
}
QStringList ListingsProviderInfo::enabledTuners() const { return m_enabledTuners; }

void ListingsProviderInfo::setEnabledTuners(QStringList newEnabledTuners) {
	m_enabledTuners = newEnabledTuners;
}
bool ListingsProviderInfo::enableAllTuners() const { return m_enableAllTuners; }

void ListingsProviderInfo::setEnableAllTuners(bool newEnableAllTuners) {
	m_enableAllTuners = newEnableAllTuners;
}
QStringList ListingsProviderInfo::newsCategories() const { return m_newsCategories; }

void ListingsProviderInfo::setNewsCategories(QStringList newNewsCategories) {
	m_newsCategories = newNewsCategories;
}
QStringList ListingsProviderInfo::sportsCategories() const { return m_sportsCategories; }

void ListingsProviderInfo::setSportsCategories(QStringList newSportsCategories) {
	m_sportsCategories = newSportsCategories;
}
QStringList ListingsProviderInfo::kidsCategories() const { return m_kidsCategories; }

void ListingsProviderInfo::setKidsCategories(QStringList newKidsCategories) {
	m_kidsCategories = newKidsCategories;
}
QStringList ListingsProviderInfo::movieCategories() const { return m_movieCategories; }

void ListingsProviderInfo::setMovieCategories(QStringList newMovieCategories) {
	m_movieCategories = newMovieCategories;
}
QList<QSharedPointer<NameValuePair>> ListingsProviderInfo::channelMappings() const { return m_channelMappings; }

void ListingsProviderInfo::setChannelMappings(QList<QSharedPointer<NameValuePair>> newChannelMappings) {
	m_channelMappings = newChannelMappings;
}
QString ListingsProviderInfo::moviePrefix() const { return m_moviePrefix; }

void ListingsProviderInfo::setMoviePrefix(QString newMoviePrefix) {
	m_moviePrefix = newMoviePrefix;
}
QString ListingsProviderInfo::preferredLanguage() const { return m_preferredLanguage; }

void ListingsProviderInfo::setPreferredLanguage(QString newPreferredLanguage) {
	m_preferredLanguage = newPreferredLanguage;
}
QString ListingsProviderInfo::userAgent() const { return m_userAgent; }

void ListingsProviderInfo::setUserAgent(QString newUserAgent) {
	m_userAgent = newUserAgent;
}


} // NS Jellyfin
} // NS DTO

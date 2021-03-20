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

ListingsProviderInfo::ListingsProviderInfo() {}

ListingsProviderInfo ListingsProviderInfo::fromJson(QJsonObject source) {
	ListingsProviderInfo instance;
	instance.setFromJson(source);
	return instance;
}


void ListingsProviderInfo::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_username = Jellyfin::Support::fromJsonValue<QString>(source["Username"]);
	m_password = Jellyfin::Support::fromJsonValue<QString>(source["Password"]);
	m_listingsId = Jellyfin::Support::fromJsonValue<QString>(source["ListingsId"]);
	m_zipCode = Jellyfin::Support::fromJsonValue<QString>(source["ZipCode"]);
	m_country = Jellyfin::Support::fromJsonValue<QString>(source["Country"]);
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_enabledTuners = Jellyfin::Support::fromJsonValue<QStringList>(source["EnabledTuners"]);
	m_enableAllTuners = Jellyfin::Support::fromJsonValue<bool>(source["EnableAllTuners"]);
	m_newsCategories = Jellyfin::Support::fromJsonValue<QStringList>(source["NewsCategories"]);
	m_sportsCategories = Jellyfin::Support::fromJsonValue<QStringList>(source["SportsCategories"]);
	m_kidsCategories = Jellyfin::Support::fromJsonValue<QStringList>(source["KidsCategories"]);
	m_movieCategories = Jellyfin::Support::fromJsonValue<QStringList>(source["MovieCategories"]);
	m_channelMappings = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<NameValuePair>>>(source["ChannelMappings"]);
	m_moviePrefix = Jellyfin::Support::fromJsonValue<QString>(source["MoviePrefix"]);
	m_preferredLanguage = Jellyfin::Support::fromJsonValue<QString>(source["PreferredLanguage"]);
	m_userAgent = Jellyfin::Support::fromJsonValue<QString>(source["UserAgent"]);

}
	
QJsonObject ListingsProviderInfo::toJson() {
	QJsonObject result;
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	result["Username"] = Jellyfin::Support::toJsonValue<QString>(m_username);
	result["Password"] = Jellyfin::Support::toJsonValue<QString>(m_password);
	result["ListingsId"] = Jellyfin::Support::toJsonValue<QString>(m_listingsId);
	result["ZipCode"] = Jellyfin::Support::toJsonValue<QString>(m_zipCode);
	result["Country"] = Jellyfin::Support::toJsonValue<QString>(m_country);
	result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	result["EnabledTuners"] = Jellyfin::Support::toJsonValue<QStringList>(m_enabledTuners);
	result["EnableAllTuners"] = Jellyfin::Support::toJsonValue<bool>(m_enableAllTuners);
	result["NewsCategories"] = Jellyfin::Support::toJsonValue<QStringList>(m_newsCategories);
	result["SportsCategories"] = Jellyfin::Support::toJsonValue<QStringList>(m_sportsCategories);
	result["KidsCategories"] = Jellyfin::Support::toJsonValue<QStringList>(m_kidsCategories);
	result["MovieCategories"] = Jellyfin::Support::toJsonValue<QStringList>(m_movieCategories);
	result["ChannelMappings"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<NameValuePair>>>(m_channelMappings);
	result["MoviePrefix"] = Jellyfin::Support::toJsonValue<QString>(m_moviePrefix);
	result["PreferredLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_preferredLanguage);
	result["UserAgent"] = Jellyfin::Support::toJsonValue<QString>(m_userAgent);

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

} // NS DTO

namespace Support {

using ListingsProviderInfo = Jellyfin::DTO::ListingsProviderInfo;

template <>
ListingsProviderInfo fromJsonValue<ListingsProviderInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ListingsProviderInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

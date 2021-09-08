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

#include <JellyfinQt/dto/listingsproviderinfo.h>

namespace Jellyfin {
namespace DTO {

ListingsProviderInfo::ListingsProviderInfo() {}

ListingsProviderInfo::ListingsProviderInfo(const ListingsProviderInfo &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_type(other.m_type),
	m_username(other.m_username),
	m_password(other.m_password),
	m_listingsId(other.m_listingsId),
	m_zipCode(other.m_zipCode),
	m_country(other.m_country),
	m_path(other.m_path),
	m_enabledTuners(other.m_enabledTuners),
	m_enableAllTuners(other.m_enableAllTuners),
	m_newsCategories(other.m_newsCategories),
	m_sportsCategories(other.m_sportsCategories),
	m_kidsCategories(other.m_kidsCategories),
	m_movieCategories(other.m_movieCategories),
	m_channelMappings(other.m_channelMappings),
	m_moviePrefix(other.m_moviePrefix),
	m_preferredLanguage(other.m_preferredLanguage),
	m_userAgent(other.m_userAgent){}


void ListingsProviderInfo::replaceData(ListingsProviderInfo &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_type = other.m_type;
	m_username = other.m_username;
	m_password = other.m_password;
	m_listingsId = other.m_listingsId;
	m_zipCode = other.m_zipCode;
	m_country = other.m_country;
	m_path = other.m_path;
	m_enabledTuners = other.m_enabledTuners;
	m_enableAllTuners = other.m_enableAllTuners;
	m_newsCategories = other.m_newsCategories;
	m_sportsCategories = other.m_sportsCategories;
	m_kidsCategories = other.m_kidsCategories;
	m_movieCategories = other.m_movieCategories;
	m_channelMappings = other.m_channelMappings;
	m_moviePrefix = other.m_moviePrefix;
	m_preferredLanguage = other.m_preferredLanguage;
	m_userAgent = other.m_userAgent;
}

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
	m_channelMappings = Jellyfin::Support::fromJsonValue<QList<NameValuePair>>(source["ChannelMappings"]);
	m_moviePrefix = Jellyfin::Support::fromJsonValue<QString>(source["MoviePrefix"]);
	m_preferredLanguage = Jellyfin::Support::fromJsonValue<QString>(source["PreferredLanguage"]);
	m_userAgent = Jellyfin::Support::fromJsonValue<QString>(source["UserAgent"]);

}
	
QJsonObject ListingsProviderInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_jellyfinId.isNull())) {
		result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	}
			
	
	if (!(m_type.isNull())) {
		result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	}
			
	
	if (!(m_username.isNull())) {
		result["Username"] = Jellyfin::Support::toJsonValue<QString>(m_username);
	}
			
	
	if (!(m_password.isNull())) {
		result["Password"] = Jellyfin::Support::toJsonValue<QString>(m_password);
	}
			
	
	if (!(m_listingsId.isNull())) {
		result["ListingsId"] = Jellyfin::Support::toJsonValue<QString>(m_listingsId);
	}
			
	
	if (!(m_zipCode.isNull())) {
		result["ZipCode"] = Jellyfin::Support::toJsonValue<QString>(m_zipCode);
	}
			
	
	if (!(m_country.isNull())) {
		result["Country"] = Jellyfin::Support::toJsonValue<QString>(m_country);
	}
			
	
	if (!(m_path.isNull())) {
		result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	}
			
	
	if (!(m_enabledTuners.size() == 0)) {
		result["EnabledTuners"] = Jellyfin::Support::toJsonValue<QStringList>(m_enabledTuners);
	}
			
	result["EnableAllTuners"] = Jellyfin::Support::toJsonValue<bool>(m_enableAllTuners);		
	
	if (!(m_newsCategories.size() == 0)) {
		result["NewsCategories"] = Jellyfin::Support::toJsonValue<QStringList>(m_newsCategories);
	}
			
	
	if (!(m_sportsCategories.size() == 0)) {
		result["SportsCategories"] = Jellyfin::Support::toJsonValue<QStringList>(m_sportsCategories);
	}
			
	
	if (!(m_kidsCategories.size() == 0)) {
		result["KidsCategories"] = Jellyfin::Support::toJsonValue<QStringList>(m_kidsCategories);
	}
			
	
	if (!(m_movieCategories.size() == 0)) {
		result["MovieCategories"] = Jellyfin::Support::toJsonValue<QStringList>(m_movieCategories);
	}
			
	
	if (!(m_channelMappings.size() == 0)) {
		result["ChannelMappings"] = Jellyfin::Support::toJsonValue<QList<NameValuePair>>(m_channelMappings);
	}
			
	
	if (!(m_moviePrefix.isNull())) {
		result["MoviePrefix"] = Jellyfin::Support::toJsonValue<QString>(m_moviePrefix);
	}
			
	
	if (!(m_preferredLanguage.isNull())) {
		result["PreferredLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_preferredLanguage);
	}
			
	
	if (!(m_userAgent.isNull())) {
		result["UserAgent"] = Jellyfin::Support::toJsonValue<QString>(m_userAgent);
	}
		
	return result;
}

QString ListingsProviderInfo::jellyfinId() const { return m_jellyfinId; }

void ListingsProviderInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool ListingsProviderInfo::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void ListingsProviderInfo::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString ListingsProviderInfo::type() const { return m_type; }

void ListingsProviderInfo::setType(QString newType) {
	m_type = newType;
}
bool ListingsProviderInfo::typeNull() const {
	return m_type.isNull();
}

void ListingsProviderInfo::setTypeNull() {
	m_type.clear();

}
QString ListingsProviderInfo::username() const { return m_username; }

void ListingsProviderInfo::setUsername(QString newUsername) {
	m_username = newUsername;
}
bool ListingsProviderInfo::usernameNull() const {
	return m_username.isNull();
}

void ListingsProviderInfo::setUsernameNull() {
	m_username.clear();

}
QString ListingsProviderInfo::password() const { return m_password; }

void ListingsProviderInfo::setPassword(QString newPassword) {
	m_password = newPassword;
}
bool ListingsProviderInfo::passwordNull() const {
	return m_password.isNull();
}

void ListingsProviderInfo::setPasswordNull() {
	m_password.clear();

}
QString ListingsProviderInfo::listingsId() const { return m_listingsId; }

void ListingsProviderInfo::setListingsId(QString newListingsId) {
	m_listingsId = newListingsId;
}
bool ListingsProviderInfo::listingsIdNull() const {
	return m_listingsId.isNull();
}

void ListingsProviderInfo::setListingsIdNull() {
	m_listingsId.clear();

}
QString ListingsProviderInfo::zipCode() const { return m_zipCode; }

void ListingsProviderInfo::setZipCode(QString newZipCode) {
	m_zipCode = newZipCode;
}
bool ListingsProviderInfo::zipCodeNull() const {
	return m_zipCode.isNull();
}

void ListingsProviderInfo::setZipCodeNull() {
	m_zipCode.clear();

}
QString ListingsProviderInfo::country() const { return m_country; }

void ListingsProviderInfo::setCountry(QString newCountry) {
	m_country = newCountry;
}
bool ListingsProviderInfo::countryNull() const {
	return m_country.isNull();
}

void ListingsProviderInfo::setCountryNull() {
	m_country.clear();

}
QString ListingsProviderInfo::path() const { return m_path; }

void ListingsProviderInfo::setPath(QString newPath) {
	m_path = newPath;
}
bool ListingsProviderInfo::pathNull() const {
	return m_path.isNull();
}

void ListingsProviderInfo::setPathNull() {
	m_path.clear();

}
QStringList ListingsProviderInfo::enabledTuners() const { return m_enabledTuners; }

void ListingsProviderInfo::setEnabledTuners(QStringList newEnabledTuners) {
	m_enabledTuners = newEnabledTuners;
}
bool ListingsProviderInfo::enabledTunersNull() const {
	return m_enabledTuners.size() == 0;
}

void ListingsProviderInfo::setEnabledTunersNull() {
	m_enabledTuners.clear();

}
bool ListingsProviderInfo::enableAllTuners() const { return m_enableAllTuners; }

void ListingsProviderInfo::setEnableAllTuners(bool newEnableAllTuners) {
	m_enableAllTuners = newEnableAllTuners;
}

QStringList ListingsProviderInfo::newsCategories() const { return m_newsCategories; }

void ListingsProviderInfo::setNewsCategories(QStringList newNewsCategories) {
	m_newsCategories = newNewsCategories;
}
bool ListingsProviderInfo::newsCategoriesNull() const {
	return m_newsCategories.size() == 0;
}

void ListingsProviderInfo::setNewsCategoriesNull() {
	m_newsCategories.clear();

}
QStringList ListingsProviderInfo::sportsCategories() const { return m_sportsCategories; }

void ListingsProviderInfo::setSportsCategories(QStringList newSportsCategories) {
	m_sportsCategories = newSportsCategories;
}
bool ListingsProviderInfo::sportsCategoriesNull() const {
	return m_sportsCategories.size() == 0;
}

void ListingsProviderInfo::setSportsCategoriesNull() {
	m_sportsCategories.clear();

}
QStringList ListingsProviderInfo::kidsCategories() const { return m_kidsCategories; }

void ListingsProviderInfo::setKidsCategories(QStringList newKidsCategories) {
	m_kidsCategories = newKidsCategories;
}
bool ListingsProviderInfo::kidsCategoriesNull() const {
	return m_kidsCategories.size() == 0;
}

void ListingsProviderInfo::setKidsCategoriesNull() {
	m_kidsCategories.clear();

}
QStringList ListingsProviderInfo::movieCategories() const { return m_movieCategories; }

void ListingsProviderInfo::setMovieCategories(QStringList newMovieCategories) {
	m_movieCategories = newMovieCategories;
}
bool ListingsProviderInfo::movieCategoriesNull() const {
	return m_movieCategories.size() == 0;
}

void ListingsProviderInfo::setMovieCategoriesNull() {
	m_movieCategories.clear();

}
QList<NameValuePair> ListingsProviderInfo::channelMappings() const { return m_channelMappings; }

void ListingsProviderInfo::setChannelMappings(QList<NameValuePair> newChannelMappings) {
	m_channelMappings = newChannelMappings;
}
bool ListingsProviderInfo::channelMappingsNull() const {
	return m_channelMappings.size() == 0;
}

void ListingsProviderInfo::setChannelMappingsNull() {
	m_channelMappings.clear();

}
QString ListingsProviderInfo::moviePrefix() const { return m_moviePrefix; }

void ListingsProviderInfo::setMoviePrefix(QString newMoviePrefix) {
	m_moviePrefix = newMoviePrefix;
}
bool ListingsProviderInfo::moviePrefixNull() const {
	return m_moviePrefix.isNull();
}

void ListingsProviderInfo::setMoviePrefixNull() {
	m_moviePrefix.clear();

}
QString ListingsProviderInfo::preferredLanguage() const { return m_preferredLanguage; }

void ListingsProviderInfo::setPreferredLanguage(QString newPreferredLanguage) {
	m_preferredLanguage = newPreferredLanguage;
}
bool ListingsProviderInfo::preferredLanguageNull() const {
	return m_preferredLanguage.isNull();
}

void ListingsProviderInfo::setPreferredLanguageNull() {
	m_preferredLanguage.clear();

}
QString ListingsProviderInfo::userAgent() const { return m_userAgent; }

void ListingsProviderInfo::setUserAgent(QString newUserAgent) {
	m_userAgent = newUserAgent;
}
bool ListingsProviderInfo::userAgentNull() const {
	return m_userAgent.isNull();
}

void ListingsProviderInfo::setUserAgentNull() {
	m_userAgent.clear();

}

} // NS DTO

namespace Support {

using ListingsProviderInfo = Jellyfin::DTO::ListingsProviderInfo;

template <>
ListingsProviderInfo fromJsonValue(const QJsonValue &source, convertType<ListingsProviderInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ListingsProviderInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ListingsProviderInfo &source, convertType<ListingsProviderInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

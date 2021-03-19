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

ListingsProviderInfo::ListingsProviderInfo(QObject *parent) : QObject(parent) {}

ListingsProviderInfo *ListingsProviderInfo::fromJSON(QJsonObject source, QObject *parent) {
	ListingsProviderInfo *instance = new ListingsProviderInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ListingsProviderInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ListingsProviderInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString ListingsProviderInfo::jellyfinId() const { return m_jellyfinId; }
void ListingsProviderInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString ListingsProviderInfo::type() const { return m_type; }
void ListingsProviderInfo::setType(QString newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString ListingsProviderInfo::username() const { return m_username; }
void ListingsProviderInfo::setUsername(QString newUsername) {
	m_username = newUsername;
	emit usernameChanged(newUsername);
}

QString ListingsProviderInfo::password() const { return m_password; }
void ListingsProviderInfo::setPassword(QString newPassword) {
	m_password = newPassword;
	emit passwordChanged(newPassword);
}

QString ListingsProviderInfo::listingsId() const { return m_listingsId; }
void ListingsProviderInfo::setListingsId(QString newListingsId) {
	m_listingsId = newListingsId;
	emit listingsIdChanged(newListingsId);
}

QString ListingsProviderInfo::zipCode() const { return m_zipCode; }
void ListingsProviderInfo::setZipCode(QString newZipCode) {
	m_zipCode = newZipCode;
	emit zipCodeChanged(newZipCode);
}

QString ListingsProviderInfo::country() const { return m_country; }
void ListingsProviderInfo::setCountry(QString newCountry) {
	m_country = newCountry;
	emit countryChanged(newCountry);
}

QString ListingsProviderInfo::path() const { return m_path; }
void ListingsProviderInfo::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

QStringList ListingsProviderInfo::enabledTuners() const { return m_enabledTuners; }
void ListingsProviderInfo::setEnabledTuners(QStringList newEnabledTuners) {
	m_enabledTuners = newEnabledTuners;
	emit enabledTunersChanged(newEnabledTuners);
}

bool ListingsProviderInfo::enableAllTuners() const { return m_enableAllTuners; }
void ListingsProviderInfo::setEnableAllTuners(bool newEnableAllTuners) {
	m_enableAllTuners = newEnableAllTuners;
	emit enableAllTunersChanged(newEnableAllTuners);
}

QStringList ListingsProviderInfo::newsCategories() const { return m_newsCategories; }
void ListingsProviderInfo::setNewsCategories(QStringList newNewsCategories) {
	m_newsCategories = newNewsCategories;
	emit newsCategoriesChanged(newNewsCategories);
}

QStringList ListingsProviderInfo::sportsCategories() const { return m_sportsCategories; }
void ListingsProviderInfo::setSportsCategories(QStringList newSportsCategories) {
	m_sportsCategories = newSportsCategories;
	emit sportsCategoriesChanged(newSportsCategories);
}

QStringList ListingsProviderInfo::kidsCategories() const { return m_kidsCategories; }
void ListingsProviderInfo::setKidsCategories(QStringList newKidsCategories) {
	m_kidsCategories = newKidsCategories;
	emit kidsCategoriesChanged(newKidsCategories);
}

QStringList ListingsProviderInfo::movieCategories() const { return m_movieCategories; }
void ListingsProviderInfo::setMovieCategories(QStringList newMovieCategories) {
	m_movieCategories = newMovieCategories;
	emit movieCategoriesChanged(newMovieCategories);
}

QList<NameValuePair *> ListingsProviderInfo::channelMappings() const { return m_channelMappings; }
void ListingsProviderInfo::setChannelMappings(QList<NameValuePair *> newChannelMappings) {
	m_channelMappings = newChannelMappings;
	emit channelMappingsChanged(newChannelMappings);
}

QString ListingsProviderInfo::moviePrefix() const { return m_moviePrefix; }
void ListingsProviderInfo::setMoviePrefix(QString newMoviePrefix) {
	m_moviePrefix = newMoviePrefix;
	emit moviePrefixChanged(newMoviePrefix);
}

QString ListingsProviderInfo::preferredLanguage() const { return m_preferredLanguage; }
void ListingsProviderInfo::setPreferredLanguage(QString newPreferredLanguage) {
	m_preferredLanguage = newPreferredLanguage;
	emit preferredLanguageChanged(newPreferredLanguage);
}

QString ListingsProviderInfo::userAgent() const { return m_userAgent; }
void ListingsProviderInfo::setUserAgent(QString newUserAgent) {
	m_userAgent = newUserAgent;
	emit userAgentChanged(newUserAgent);
}


} // NS Jellyfin
} // NS DTO

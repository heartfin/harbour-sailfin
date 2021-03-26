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

#ifndef JELLYFIN_DTO_LISTINGSPROVIDERINFO_H
#define JELLYFIN_DTO_LISTINGSPROVIDERINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/namevaluepair.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class ListingsProviderInfo {
public:
	ListingsProviderInfo();
	ListingsProviderInfo(const ListingsProviderInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ListingsProviderInfo &other);
	
	static ListingsProviderInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	QString jellyfinId() const;

	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();


	QString type() const;

	void setType(QString newType);
	bool typeNull() const;
	void setTypeNull();


	QString username() const;

	void setUsername(QString newUsername);
	bool usernameNull() const;
	void setUsernameNull();


	QString password() const;

	void setPassword(QString newPassword);
	bool passwordNull() const;
	void setPasswordNull();


	QString listingsId() const;

	void setListingsId(QString newListingsId);
	bool listingsIdNull() const;
	void setListingsIdNull();


	QString zipCode() const;

	void setZipCode(QString newZipCode);
	bool zipCodeNull() const;
	void setZipCodeNull();


	QString country() const;

	void setCountry(QString newCountry);
	bool countryNull() const;
	void setCountryNull();


	QString path() const;

	void setPath(QString newPath);
	bool pathNull() const;
	void setPathNull();


	QStringList enabledTuners() const;

	void setEnabledTuners(QStringList newEnabledTuners);
	bool enabledTunersNull() const;
	void setEnabledTunersNull();


	bool enableAllTuners() const;

	void setEnableAllTuners(bool newEnableAllTuners);


	QStringList newsCategories() const;

	void setNewsCategories(QStringList newNewsCategories);
	bool newsCategoriesNull() const;
	void setNewsCategoriesNull();


	QStringList sportsCategories() const;

	void setSportsCategories(QStringList newSportsCategories);
	bool sportsCategoriesNull() const;
	void setSportsCategoriesNull();


	QStringList kidsCategories() const;

	void setKidsCategories(QStringList newKidsCategories);
	bool kidsCategoriesNull() const;
	void setKidsCategoriesNull();


	QStringList movieCategories() const;

	void setMovieCategories(QStringList newMovieCategories);
	bool movieCategoriesNull() const;
	void setMovieCategoriesNull();


	QList<NameValuePair> channelMappings() const;

	void setChannelMappings(QList<NameValuePair> newChannelMappings);
	bool channelMappingsNull() const;
	void setChannelMappingsNull();


	QString moviePrefix() const;

	void setMoviePrefix(QString newMoviePrefix);
	bool moviePrefixNull() const;
	void setMoviePrefixNull();


	QString preferredLanguage() const;

	void setPreferredLanguage(QString newPreferredLanguage);
	bool preferredLanguageNull() const;
	void setPreferredLanguageNull();


	QString userAgent() const;

	void setUserAgent(QString newUserAgent);
	bool userAgentNull() const;
	void setUserAgentNull();


protected:
	QString m_jellyfinId;
	QString m_type;
	QString m_username;
	QString m_password;
	QString m_listingsId;
	QString m_zipCode;
	QString m_country;
	QString m_path;
	QStringList m_enabledTuners;
	bool m_enableAllTuners;
	QStringList m_newsCategories;
	QStringList m_sportsCategories;
	QStringList m_kidsCategories;
	QStringList m_movieCategories;
	QList<NameValuePair> m_channelMappings;
	QString m_moviePrefix;
	QString m_preferredLanguage;
	QString m_userAgent;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_LISTINGSPROVIDERINFO_H

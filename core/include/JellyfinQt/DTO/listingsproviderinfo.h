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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class NameValuePair;

class ListingsProviderInfo : public QObject {
	Q_OBJECT
public:
	explicit ListingsProviderInfo(QObject *parent = nullptr);
	static ListingsProviderInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
	Q_PROPERTY(QString username READ username WRITE setUsername NOTIFY usernameChanged)
	Q_PROPERTY(QString password READ password WRITE setPassword NOTIFY passwordChanged)
	Q_PROPERTY(QString listingsId READ listingsId WRITE setListingsId NOTIFY listingsIdChanged)
	Q_PROPERTY(QString zipCode READ zipCode WRITE setZipCode NOTIFY zipCodeChanged)
	Q_PROPERTY(QString country READ country WRITE setCountry NOTIFY countryChanged)
	Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged)
	Q_PROPERTY(QStringList enabledTuners READ enabledTuners WRITE setEnabledTuners NOTIFY enabledTunersChanged)
	Q_PROPERTY(bool enableAllTuners READ enableAllTuners WRITE setEnableAllTuners NOTIFY enableAllTunersChanged)
	Q_PROPERTY(QStringList newsCategories READ newsCategories WRITE setNewsCategories NOTIFY newsCategoriesChanged)
	Q_PROPERTY(QStringList sportsCategories READ sportsCategories WRITE setSportsCategories NOTIFY sportsCategoriesChanged)
	Q_PROPERTY(QStringList kidsCategories READ kidsCategories WRITE setKidsCategories NOTIFY kidsCategoriesChanged)
	Q_PROPERTY(QStringList movieCategories READ movieCategories WRITE setMovieCategories NOTIFY movieCategoriesChanged)
	Q_PROPERTY(QList<NameValuePair *> channelMappings READ channelMappings WRITE setChannelMappings NOTIFY channelMappingsChanged)
	Q_PROPERTY(QString moviePrefix READ moviePrefix WRITE setMoviePrefix NOTIFY moviePrefixChanged)
	Q_PROPERTY(QString preferredLanguage READ preferredLanguage WRITE setPreferredLanguage NOTIFY preferredLanguageChanged)
	Q_PROPERTY(QString userAgent READ userAgent WRITE setUserAgent NOTIFY userAgentChanged)

	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString type() const;
	void setType(QString newType);
	
	QString username() const;
	void setUsername(QString newUsername);
	
	QString password() const;
	void setPassword(QString newPassword);
	
	QString listingsId() const;
	void setListingsId(QString newListingsId);
	
	QString zipCode() const;
	void setZipCode(QString newZipCode);
	
	QString country() const;
	void setCountry(QString newCountry);
	
	QString path() const;
	void setPath(QString newPath);
	
	QStringList enabledTuners() const;
	void setEnabledTuners(QStringList newEnabledTuners);
	
	bool enableAllTuners() const;
	void setEnableAllTuners(bool newEnableAllTuners);
	
	QStringList newsCategories() const;
	void setNewsCategories(QStringList newNewsCategories);
	
	QStringList sportsCategories() const;
	void setSportsCategories(QStringList newSportsCategories);
	
	QStringList kidsCategories() const;
	void setKidsCategories(QStringList newKidsCategories);
	
	QStringList movieCategories() const;
	void setMovieCategories(QStringList newMovieCategories);
	
	QList<NameValuePair *> channelMappings() const;
	void setChannelMappings(QList<NameValuePair *> newChannelMappings);
	
	QString moviePrefix() const;
	void setMoviePrefix(QString newMoviePrefix);
	
	QString preferredLanguage() const;
	void setPreferredLanguage(QString newPreferredLanguage);
	
	QString userAgent() const;
	void setUserAgent(QString newUserAgent);
	
signals:
	void jellyfinIdChanged(QString newJellyfinId);
	void typeChanged(QString newType);
	void usernameChanged(QString newUsername);
	void passwordChanged(QString newPassword);
	void listingsIdChanged(QString newListingsId);
	void zipCodeChanged(QString newZipCode);
	void countryChanged(QString newCountry);
	void pathChanged(QString newPath);
	void enabledTunersChanged(QStringList newEnabledTuners);
	void enableAllTunersChanged(bool newEnableAllTuners);
	void newsCategoriesChanged(QStringList newNewsCategories);
	void sportsCategoriesChanged(QStringList newSportsCategories);
	void kidsCategoriesChanged(QStringList newKidsCategories);
	void movieCategoriesChanged(QStringList newMovieCategories);
	void channelMappingsChanged(QList<NameValuePair *> newChannelMappings);
	void moviePrefixChanged(QString newMoviePrefix);
	void preferredLanguageChanged(QString newPreferredLanguage);
	void userAgentChanged(QString newUserAgent);
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
	QList<NameValuePair *> m_channelMappings;
	QString m_moviePrefix;
	QString m_preferredLanguage;
	QString m_userAgent;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_LISTINGSPROVIDERINFO_H

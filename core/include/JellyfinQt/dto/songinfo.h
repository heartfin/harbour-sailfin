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

#ifndef JELLYFIN_DTO_SONGINFO_H
#define JELLYFIN_DTO_SONGINFO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class SongInfo {
public:
	SongInfo(																					
		bool isAutomated								
	);

	SongInfo(const SongInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(SongInfo &other);
	
	static SongInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

	/**
	 * @brief Gets or sets the original title.
	 */
	QString originalTitle() const;
	/**
	* @brief Gets or sets the original title.
	*/
	void setOriginalTitle(QString newOriginalTitle);
	bool originalTitleNull() const;
	void setOriginalTitleNull();

	/**
	 * @brief Gets or sets the path.
	 */
	QString path() const;
	/**
	* @brief Gets or sets the path.
	*/
	void setPath(QString newPath);
	bool pathNull() const;
	void setPathNull();

	/**
	 * @brief Gets or sets the metadata language.
	 */
	QString metadataLanguage() const;
	/**
	* @brief Gets or sets the metadata language.
	*/
	void setMetadataLanguage(QString newMetadataLanguage);
	bool metadataLanguageNull() const;
	void setMetadataLanguageNull();

	/**
	 * @brief Gets or sets the metadata country code.
	 */
	QString metadataCountryCode() const;
	/**
	* @brief Gets or sets the metadata country code.
	*/
	void setMetadataCountryCode(QString newMetadataCountryCode);
	bool metadataCountryCodeNull() const;
	void setMetadataCountryCodeNull();

	/**
	 * @brief Gets or sets the provider ids.
	 */
	QJsonObject providerIds() const;
	/**
	* @brief Gets or sets the provider ids.
	*/
	void setProviderIds(QJsonObject newProviderIds);
	bool providerIdsNull() const;
	void setProviderIdsNull();

	/**
	 * @brief Gets or sets the year.
	 */
	std::optional<qint32> year() const;
	/**
	* @brief Gets or sets the year.
	*/
	void setYear(std::optional<qint32> newYear);
	bool yearNull() const;
	void setYearNull();


	std::optional<qint32> indexNumber() const;

	void setIndexNumber(std::optional<qint32> newIndexNumber);
	bool indexNumberNull() const;
	void setIndexNumberNull();


	std::optional<qint32> parentIndexNumber() const;

	void setParentIndexNumber(std::optional<qint32> newParentIndexNumber);
	bool parentIndexNumberNull() const;
	void setParentIndexNumberNull();


	QDateTime premiereDate() const;

	void setPremiereDate(QDateTime newPremiereDate);
	bool premiereDateNull() const;
	void setPremiereDateNull();


	bool isAutomated() const;

	void setIsAutomated(bool newIsAutomated);


	QStringList albumArtists() const;

	void setAlbumArtists(QStringList newAlbumArtists);
	bool albumArtistsNull() const;
	void setAlbumArtistsNull();


	QString album() const;

	void setAlbum(QString newAlbum);
	bool albumNull() const;
	void setAlbumNull();


	QStringList artists() const;

	void setArtists(QStringList newArtists);
	bool artistsNull() const;
	void setArtistsNull();


protected:
	QString m_name;
	QString m_originalTitle;
	QString m_path;
	QString m_metadataLanguage;
	QString m_metadataCountryCode;
	QJsonObject m_providerIds;
	std::optional<qint32> m_year = std::nullopt;
	std::optional<qint32> m_indexNumber = std::nullopt;
	std::optional<qint32> m_parentIndexNumber = std::nullopt;
	QDateTime m_premiereDate;
	bool m_isAutomated;
	QStringList m_albumArtists;
	QString m_album;
	QStringList m_artists;

private:
	// Private constructor which generates an invalid object, for use withing SongInfo::fromJson();
	SongInfo();
};


} // NS DTO

namespace Support {

using SongInfo = Jellyfin::DTO::SongInfo;

template <>
SongInfo fromJsonValue(const QJsonValue &source, convertType<SongInfo>);

template<>
QJsonValue toJsonValue(const SongInfo &source, convertType<SongInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SONGINFO_H

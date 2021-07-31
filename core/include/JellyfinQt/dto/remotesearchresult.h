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

#ifndef JELLYFIN_DTO_REMOTESEARCHRESULT_H
#define JELLYFIN_DTO_REMOTESEARCHRESULT_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
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


class RemoteSearchResult {
public:
	RemoteSearchResult();
	RemoteSearchResult(const RemoteSearchResult &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(RemoteSearchResult &other);
	
	static RemoteSearchResult fromJson(QJsonObject source);
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
	std::optional<qint32> productionYear() const;
	/**
	* @brief Gets or sets the year.
	*/
	void setProductionYear(std::optional<qint32> newProductionYear);
	bool productionYearNull() const;
	void setProductionYearNull();


	std::optional<qint32> indexNumber() const;

	void setIndexNumber(std::optional<qint32> newIndexNumber);
	bool indexNumberNull() const;
	void setIndexNumberNull();


	std::optional<qint32> indexNumberEnd() const;

	void setIndexNumberEnd(std::optional<qint32> newIndexNumberEnd);
	bool indexNumberEndNull() const;
	void setIndexNumberEndNull();


	std::optional<qint32> parentIndexNumber() const;

	void setParentIndexNumber(std::optional<qint32> newParentIndexNumber);
	bool parentIndexNumberNull() const;
	void setParentIndexNumberNull();


	QDateTime premiereDate() const;

	void setPremiereDate(QDateTime newPremiereDate);
	bool premiereDateNull() const;
	void setPremiereDateNull();


	QString imageUrl() const;

	void setImageUrl(QString newImageUrl);
	bool imageUrlNull() const;
	void setImageUrlNull();


	QString searchProviderName() const;

	void setSearchProviderName(QString newSearchProviderName);
	bool searchProviderNameNull() const;
	void setSearchProviderNameNull();


	QString overview() const;

	void setOverview(QString newOverview);
	bool overviewNull() const;
	void setOverviewNull();


	QSharedPointer<RemoteSearchResult> albumArtist() const;

	void setAlbumArtist(QSharedPointer<RemoteSearchResult> newAlbumArtist);


	QList<RemoteSearchResult> artists() const;

	void setArtists(QList<RemoteSearchResult> newArtists);
	bool artistsNull() const;
	void setArtistsNull();


protected:
	QString m_name;
	QJsonObject m_providerIds;
	std::optional<qint32> m_productionYear = std::nullopt;
	std::optional<qint32> m_indexNumber = std::nullopt;
	std::optional<qint32> m_indexNumberEnd = std::nullopt;
	std::optional<qint32> m_parentIndexNumber = std::nullopt;
	QDateTime m_premiereDate;
	QString m_imageUrl;
	QString m_searchProviderName;
	QString m_overview;
	QSharedPointer<RemoteSearchResult> m_albumArtist = QSharedPointer<RemoteSearchResult>();
	QList<RemoteSearchResult> m_artists;
};

} // NS DTO

namespace Support {

using RemoteSearchResult = Jellyfin::DTO::RemoteSearchResult;

template <>
RemoteSearchResult fromJsonValue(const QJsonValue &source, convertType<RemoteSearchResult>);

template<>
QJsonValue toJsonValue(const RemoteSearchResult &source, convertType<RemoteSearchResult>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_REMOTESEARCHRESULT_H

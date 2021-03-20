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
namespace DTO {


class RemoteSearchResult {
public:
	explicit RemoteSearchResult();
	static RemoteSearchResult fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	/**
	 * @brief Gets or sets the provider ids.
	 */
	QJsonObject providerIds() const;
	/**
	* @brief Gets or sets the provider ids.
	*/
	void setProviderIds(QJsonObject newProviderIds);
	/**
	 * @brief Gets or sets the year.
	 */
	qint32 productionYear() const;
	/**
	* @brief Gets or sets the year.
	*/
	void setProductionYear(qint32 newProductionYear);

	qint32 indexNumber() const;

	void setIndexNumber(qint32 newIndexNumber);

	qint32 indexNumberEnd() const;

	void setIndexNumberEnd(qint32 newIndexNumberEnd);

	qint32 parentIndexNumber() const;

	void setParentIndexNumber(qint32 newParentIndexNumber);

	QDateTime premiereDate() const;

	void setPremiereDate(QDateTime newPremiereDate);

	QString imageUrl() const;

	void setImageUrl(QString newImageUrl);

	QString searchProviderName() const;

	void setSearchProviderName(QString newSearchProviderName);

	QString overview() const;

	void setOverview(QString newOverview);

	QSharedPointer<RemoteSearchResult> albumArtist() const;

	void setAlbumArtist(QSharedPointer<RemoteSearchResult> newAlbumArtist);

	QList<QSharedPointer<RemoteSearchResult>> artists() const;

	void setArtists(QList<QSharedPointer<RemoteSearchResult>> newArtists);

protected:
	QString m_name;
	QJsonObject m_providerIds;
	qint32 m_productionYear;
	qint32 m_indexNumber;
	qint32 m_indexNumberEnd;
	qint32 m_parentIndexNumber;
	QDateTime m_premiereDate;
	QString m_imageUrl;
	QString m_searchProviderName;
	QString m_overview;
	QSharedPointer<RemoteSearchResult> m_albumArtist = nullptr;
	QList<QSharedPointer<RemoteSearchResult>> m_artists;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_REMOTESEARCHRESULT_H

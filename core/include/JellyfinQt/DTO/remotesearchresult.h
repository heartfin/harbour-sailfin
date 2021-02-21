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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {


class RemoteSearchResult : public QObject {
	Q_OBJECT
public:
	explicit RemoteSearchResult(QObject *parent = nullptr);
	static RemoteSearchResult *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the provider ids.
	 */
	Q_PROPERTY(QJsonObject providerIds READ providerIds WRITE setProviderIds NOTIFY providerIdsChanged)
	/**
	 * @brief Gets or sets the year.
	 */
	Q_PROPERTY(qint32 productionYear READ productionYear WRITE setProductionYear NOTIFY productionYearChanged)
	Q_PROPERTY(qint32 indexNumber READ indexNumber WRITE setIndexNumber NOTIFY indexNumberChanged)
	Q_PROPERTY(qint32 indexNumberEnd READ indexNumberEnd WRITE setIndexNumberEnd NOTIFY indexNumberEndChanged)
	Q_PROPERTY(qint32 parentIndexNumber READ parentIndexNumber WRITE setParentIndexNumber NOTIFY parentIndexNumberChanged)
	Q_PROPERTY(QDateTime premiereDate READ premiereDate WRITE setPremiereDate NOTIFY premiereDateChanged)
	Q_PROPERTY(QString imageUrl READ imageUrl WRITE setImageUrl NOTIFY imageUrlChanged)
	Q_PROPERTY(QString searchProviderName READ searchProviderName WRITE setSearchProviderName NOTIFY searchProviderNameChanged)
	Q_PROPERTY(QString overview READ overview WRITE setOverview NOTIFY overviewChanged)
	Q_PROPERTY(RemoteSearchResult * albumArtist READ albumArtist WRITE setAlbumArtist NOTIFY albumArtistChanged)
	Q_PROPERTY(QList<RemoteSearchResult *> artists READ artists WRITE setArtists NOTIFY artistsChanged)

	QString name() const;
	void setName(QString newName);
	
	QJsonObject providerIds() const;
	void setProviderIds(QJsonObject newProviderIds);
	
	qint32 productionYear() const;
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
	
	RemoteSearchResult * albumArtist() const;
	void setAlbumArtist(RemoteSearchResult * newAlbumArtist);
	
	QList<RemoteSearchResult *> artists() const;
	void setArtists(QList<RemoteSearchResult *> newArtists);
	
signals:
	void nameChanged(QString newName);
	void providerIdsChanged(QJsonObject newProviderIds);
	void productionYearChanged(qint32 newProductionYear);
	void indexNumberChanged(qint32 newIndexNumber);
	void indexNumberEndChanged(qint32 newIndexNumberEnd);
	void parentIndexNumberChanged(qint32 newParentIndexNumber);
	void premiereDateChanged(QDateTime newPremiereDate);
	void imageUrlChanged(QString newImageUrl);
	void searchProviderNameChanged(QString newSearchProviderName);
	void overviewChanged(QString newOverview);
	void albumArtistChanged(RemoteSearchResult * newAlbumArtist);
	void artistsChanged(QList<RemoteSearchResult *> newArtists);
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
	RemoteSearchResult * m_albumArtist = nullptr;
	QList<RemoteSearchResult *> m_artists;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_REMOTESEARCHRESULT_H

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

#include <JellyfinQt/DTO/remotesearchresult.h>

namespace Jellyfin {
namespace DTO {

RemoteSearchResult::RemoteSearchResult(QObject *parent) : QObject(parent) {}

RemoteSearchResult *RemoteSearchResult::fromJSON(QJsonObject source, QObject *parent) {
	RemoteSearchResult *instance = new RemoteSearchResult(parent);
	instance->updateFromJSON(source);
	return instance;
}

void RemoteSearchResult::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject RemoteSearchResult::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString RemoteSearchResult::name() const { return m_name; }
void RemoteSearchResult::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QJsonObject RemoteSearchResult::providerIds() const { return m_providerIds; }
void RemoteSearchResult::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
	emit providerIdsChanged(newProviderIds);
}

qint32 RemoteSearchResult::productionYear() const { return m_productionYear; }
void RemoteSearchResult::setProductionYear(qint32 newProductionYear) {
	m_productionYear = newProductionYear;
	emit productionYearChanged(newProductionYear);
}

qint32 RemoteSearchResult::indexNumber() const { return m_indexNumber; }
void RemoteSearchResult::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
	emit indexNumberChanged(newIndexNumber);
}

qint32 RemoteSearchResult::indexNumberEnd() const { return m_indexNumberEnd; }
void RemoteSearchResult::setIndexNumberEnd(qint32 newIndexNumberEnd) {
	m_indexNumberEnd = newIndexNumberEnd;
	emit indexNumberEndChanged(newIndexNumberEnd);
}

qint32 RemoteSearchResult::parentIndexNumber() const { return m_parentIndexNumber; }
void RemoteSearchResult::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
	emit parentIndexNumberChanged(newParentIndexNumber);
}

QDateTime RemoteSearchResult::premiereDate() const { return m_premiereDate; }
void RemoteSearchResult::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
	emit premiereDateChanged(newPremiereDate);
}

QString RemoteSearchResult::imageUrl() const { return m_imageUrl; }
void RemoteSearchResult::setImageUrl(QString newImageUrl) {
	m_imageUrl = newImageUrl;
	emit imageUrlChanged(newImageUrl);
}

QString RemoteSearchResult::searchProviderName() const { return m_searchProviderName; }
void RemoteSearchResult::setSearchProviderName(QString newSearchProviderName) {
	m_searchProviderName = newSearchProviderName;
	emit searchProviderNameChanged(newSearchProviderName);
}

QString RemoteSearchResult::overview() const { return m_overview; }
void RemoteSearchResult::setOverview(QString newOverview) {
	m_overview = newOverview;
	emit overviewChanged(newOverview);
}

RemoteSearchResult * RemoteSearchResult::albumArtist() const { return m_albumArtist; }
void RemoteSearchResult::setAlbumArtist(RemoteSearchResult * newAlbumArtist) {
	m_albumArtist = newAlbumArtist;
	emit albumArtistChanged(newAlbumArtist);
}

QList<RemoteSearchResult *> RemoteSearchResult::artists() const { return m_artists; }
void RemoteSearchResult::setArtists(QList<RemoteSearchResult *> newArtists) {
	m_artists = newArtists;
	emit artistsChanged(newArtists);
}


} // NS Jellyfin
} // NS DTO

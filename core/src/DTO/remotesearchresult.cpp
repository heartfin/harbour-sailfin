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

RemoteSearchResult::RemoteSearchResult() {}

RemoteSearchResult RemoteSearchResult::fromJson(QJsonObject source) {
	RemoteSearchResult instance;
	instance.setFromJson(source);
	return instance;
}


void RemoteSearchResult::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_providerIds = Jellyfin::Support::fromJsonValue<QJsonObject>(source["ProviderIds"]);
	m_productionYear = Jellyfin::Support::fromJsonValue<qint32>(source["ProductionYear"]);
	m_indexNumber = Jellyfin::Support::fromJsonValue<qint32>(source["IndexNumber"]);
	m_indexNumberEnd = Jellyfin::Support::fromJsonValue<qint32>(source["IndexNumberEnd"]);
	m_parentIndexNumber = Jellyfin::Support::fromJsonValue<qint32>(source["ParentIndexNumber"]);
	m_premiereDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["PremiereDate"]);
	m_imageUrl = Jellyfin::Support::fromJsonValue<QString>(source["ImageUrl"]);
	m_searchProviderName = Jellyfin::Support::fromJsonValue<QString>(source["SearchProviderName"]);
	m_overview = Jellyfin::Support::fromJsonValue<QString>(source["Overview"]);
	m_albumArtist = Jellyfin::Support::fromJsonValue<QSharedPointer<RemoteSearchResult>>(source["AlbumArtist"]);
	m_artists = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<RemoteSearchResult>>>(source["Artists"]);

}
	
QJsonObject RemoteSearchResult::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["ProviderIds"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_providerIds);
	result["ProductionYear"] = Jellyfin::Support::toJsonValue<qint32>(m_productionYear);
	result["IndexNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_indexNumber);
	result["IndexNumberEnd"] = Jellyfin::Support::toJsonValue<qint32>(m_indexNumberEnd);
	result["ParentIndexNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_parentIndexNumber);
	result["PremiereDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_premiereDate);
	result["ImageUrl"] = Jellyfin::Support::toJsonValue<QString>(m_imageUrl);
	result["SearchProviderName"] = Jellyfin::Support::toJsonValue<QString>(m_searchProviderName);
	result["Overview"] = Jellyfin::Support::toJsonValue<QString>(m_overview);
	result["AlbumArtist"] = Jellyfin::Support::toJsonValue<QSharedPointer<RemoteSearchResult>>(m_albumArtist);
	result["Artists"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<RemoteSearchResult>>>(m_artists);

	return result;
}

QString RemoteSearchResult::name() const { return m_name; }

void RemoteSearchResult::setName(QString newName) {
	m_name = newName;
}
QJsonObject RemoteSearchResult::providerIds() const { return m_providerIds; }

void RemoteSearchResult::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
qint32 RemoteSearchResult::productionYear() const { return m_productionYear; }

void RemoteSearchResult::setProductionYear(qint32 newProductionYear) {
	m_productionYear = newProductionYear;
}
qint32 RemoteSearchResult::indexNumber() const { return m_indexNumber; }

void RemoteSearchResult::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
qint32 RemoteSearchResult::indexNumberEnd() const { return m_indexNumberEnd; }

void RemoteSearchResult::setIndexNumberEnd(qint32 newIndexNumberEnd) {
	m_indexNumberEnd = newIndexNumberEnd;
}
qint32 RemoteSearchResult::parentIndexNumber() const { return m_parentIndexNumber; }

void RemoteSearchResult::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
QDateTime RemoteSearchResult::premiereDate() const { return m_premiereDate; }

void RemoteSearchResult::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
QString RemoteSearchResult::imageUrl() const { return m_imageUrl; }

void RemoteSearchResult::setImageUrl(QString newImageUrl) {
	m_imageUrl = newImageUrl;
}
QString RemoteSearchResult::searchProviderName() const { return m_searchProviderName; }

void RemoteSearchResult::setSearchProviderName(QString newSearchProviderName) {
	m_searchProviderName = newSearchProviderName;
}
QString RemoteSearchResult::overview() const { return m_overview; }

void RemoteSearchResult::setOverview(QString newOverview) {
	m_overview = newOverview;
}
QSharedPointer<RemoteSearchResult> RemoteSearchResult::albumArtist() const { return m_albumArtist; }

void RemoteSearchResult::setAlbumArtist(QSharedPointer<RemoteSearchResult> newAlbumArtist) {
	m_albumArtist = newAlbumArtist;
}
QList<QSharedPointer<RemoteSearchResult>> RemoteSearchResult::artists() const { return m_artists; }

void RemoteSearchResult::setArtists(QList<QSharedPointer<RemoteSearchResult>> newArtists) {
	m_artists = newArtists;
}

} // NS DTO

namespace Support {

using RemoteSearchResult = Jellyfin::DTO::RemoteSearchResult;

template <>
RemoteSearchResult fromJsonValue<RemoteSearchResult>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return RemoteSearchResult::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

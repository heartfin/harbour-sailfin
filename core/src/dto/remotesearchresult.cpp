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

#include <JellyfinQt/dto/remotesearchresult.h>

namespace Jellyfin {
namespace DTO {

RemoteSearchResult::RemoteSearchResult() {}

RemoteSearchResult::RemoteSearchResult(const RemoteSearchResult &other) :

	m_name(other.m_name),
	m_providerIds(other.m_providerIds),
	m_productionYear(other.m_productionYear),
	m_indexNumber(other.m_indexNumber),
	m_indexNumberEnd(other.m_indexNumberEnd),
	m_parentIndexNumber(other.m_parentIndexNumber),
	m_premiereDate(other.m_premiereDate),
	m_imageUrl(other.m_imageUrl),
	m_searchProviderName(other.m_searchProviderName),
	m_overview(other.m_overview),
	m_albumArtist(other.m_albumArtist),
	m_artists(other.m_artists){}


void RemoteSearchResult::replaceData(RemoteSearchResult &other) {
	m_name = other.m_name;
	m_providerIds = other.m_providerIds;
	m_productionYear = other.m_productionYear;
	m_indexNumber = other.m_indexNumber;
	m_indexNumberEnd = other.m_indexNumberEnd;
	m_parentIndexNumber = other.m_parentIndexNumber;
	m_premiereDate = other.m_premiereDate;
	m_imageUrl = other.m_imageUrl;
	m_searchProviderName = other.m_searchProviderName;
	m_overview = other.m_overview;
	m_albumArtist = other.m_albumArtist;
	m_artists = other.m_artists;
}

RemoteSearchResult RemoteSearchResult::fromJson(QJsonObject source) {
	RemoteSearchResult instance;
	instance.setFromJson(source);
	return instance;
}


void RemoteSearchResult::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_providerIds = Jellyfin::Support::fromJsonValue<std::optional<QJsonObject>>(source["ProviderIds"]);
	m_productionYear = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ProductionYear"]);
	m_indexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["IndexNumber"]);
	m_indexNumberEnd = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["IndexNumberEnd"]);
	m_parentIndexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ParentIndexNumber"]);
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
	result["ProviderIds"] = Jellyfin::Support::toJsonValue<std::optional<QJsonObject>>(m_providerIds);
	result["ProductionYear"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_productionYear);
	result["IndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_indexNumber);
	result["IndexNumberEnd"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_indexNumberEnd);
	result["ParentIndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_parentIndexNumber);
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
bool RemoteSearchResult::nameNull() const {
	return m_name.isNull();
}

void RemoteSearchResult::setNameNull() {
	m_name.clear();

}
std::optional<QJsonObject> RemoteSearchResult::providerIds() const { return m_providerIds; }

void RemoteSearchResult::setProviderIds(std::optional<QJsonObject> newProviderIds) {
	m_providerIds = newProviderIds;
}
bool RemoteSearchResult::providerIdsNull() const {
	return !m_providerIds.has_value();
}

void RemoteSearchResult::setProviderIdsNull() {
	m_providerIds = std::nullopt;

}
std::optional<qint32> RemoteSearchResult::productionYear() const { return m_productionYear; }

void RemoteSearchResult::setProductionYear(std::optional<qint32> newProductionYear) {
	m_productionYear = newProductionYear;
}
bool RemoteSearchResult::productionYearNull() const {
	return !m_productionYear.has_value();
}

void RemoteSearchResult::setProductionYearNull() {
	m_productionYear = std::nullopt;

}
std::optional<qint32> RemoteSearchResult::indexNumber() const { return m_indexNumber; }

void RemoteSearchResult::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool RemoteSearchResult::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void RemoteSearchResult::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> RemoteSearchResult::indexNumberEnd() const { return m_indexNumberEnd; }

void RemoteSearchResult::setIndexNumberEnd(std::optional<qint32> newIndexNumberEnd) {
	m_indexNumberEnd = newIndexNumberEnd;
}
bool RemoteSearchResult::indexNumberEndNull() const {
	return !m_indexNumberEnd.has_value();
}

void RemoteSearchResult::setIndexNumberEndNull() {
	m_indexNumberEnd = std::nullopt;

}
std::optional<qint32> RemoteSearchResult::parentIndexNumber() const { return m_parentIndexNumber; }

void RemoteSearchResult::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool RemoteSearchResult::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void RemoteSearchResult::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QDateTime RemoteSearchResult::premiereDate() const { return m_premiereDate; }

void RemoteSearchResult::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool RemoteSearchResult::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void RemoteSearchResult::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
QString RemoteSearchResult::imageUrl() const { return m_imageUrl; }

void RemoteSearchResult::setImageUrl(QString newImageUrl) {
	m_imageUrl = newImageUrl;
}
bool RemoteSearchResult::imageUrlNull() const {
	return m_imageUrl.isNull();
}

void RemoteSearchResult::setImageUrlNull() {
	m_imageUrl.clear();

}
QString RemoteSearchResult::searchProviderName() const { return m_searchProviderName; }

void RemoteSearchResult::setSearchProviderName(QString newSearchProviderName) {
	m_searchProviderName = newSearchProviderName;
}
bool RemoteSearchResult::searchProviderNameNull() const {
	return m_searchProviderName.isNull();
}

void RemoteSearchResult::setSearchProviderNameNull() {
	m_searchProviderName.clear();

}
QString RemoteSearchResult::overview() const { return m_overview; }

void RemoteSearchResult::setOverview(QString newOverview) {
	m_overview = newOverview;
}
bool RemoteSearchResult::overviewNull() const {
	return m_overview.isNull();
}

void RemoteSearchResult::setOverviewNull() {
	m_overview.clear();

}
QSharedPointer<RemoteSearchResult> RemoteSearchResult::albumArtist() const { return m_albumArtist; }

void RemoteSearchResult::setAlbumArtist(QSharedPointer<RemoteSearchResult> newAlbumArtist) {
	m_albumArtist = newAlbumArtist;
}

QList<QSharedPointer<RemoteSearchResult>> RemoteSearchResult::artists() const { return m_artists; }

void RemoteSearchResult::setArtists(QList<QSharedPointer<RemoteSearchResult>> newArtists) {
	m_artists = newArtists;
}
bool RemoteSearchResult::artistsNull() const {
	return m_artists.size() == 0;
}

void RemoteSearchResult::setArtistsNull() {
	m_artists.clear();

}

} // NS DTO

namespace Support {

using RemoteSearchResult = Jellyfin::DTO::RemoteSearchResult;

template <>
RemoteSearchResult fromJsonValue<RemoteSearchResult>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return RemoteSearchResult::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

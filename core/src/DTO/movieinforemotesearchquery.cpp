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

#include <JellyfinQt/DTO/movieinforemotesearchquery.h>

namespace Jellyfin {
namespace DTO {

MovieInfoRemoteSearchQuery::MovieInfoRemoteSearchQuery() {}

MovieInfoRemoteSearchQuery MovieInfoRemoteSearchQuery::fromJson(QJsonObject source) {
	MovieInfoRemoteSearchQuery instance;
	instance.setFromJson(source);
	return instance;
}


void MovieInfoRemoteSearchQuery::setFromJson(QJsonObject source) {
	m_searchInfo = Jellyfin::Support::fromJsonValue<QSharedPointer<MovieInfo>>(source["SearchInfo"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QUuid>(source["ItemId"]);
	m_searchProviderName = Jellyfin::Support::fromJsonValue<QString>(source["SearchProviderName"]);
	m_includeDisabledProviders = Jellyfin::Support::fromJsonValue<bool>(source["IncludeDisabledProviders"]);

}
	
QJsonObject MovieInfoRemoteSearchQuery::toJson() {
	QJsonObject result;
	result["SearchInfo"] = Jellyfin::Support::toJsonValue<QSharedPointer<MovieInfo>>(m_searchInfo);
	result["ItemId"] = Jellyfin::Support::toJsonValue<QUuid>(m_itemId);
	result["SearchProviderName"] = Jellyfin::Support::toJsonValue<QString>(m_searchProviderName);
	result["IncludeDisabledProviders"] = Jellyfin::Support::toJsonValue<bool>(m_includeDisabledProviders);

	return result;
}

QSharedPointer<MovieInfo> MovieInfoRemoteSearchQuery::searchInfo() const { return m_searchInfo; }

void MovieInfoRemoteSearchQuery::setSearchInfo(QSharedPointer<MovieInfo> newSearchInfo) {
	m_searchInfo = newSearchInfo;
}
QUuid MovieInfoRemoteSearchQuery::itemId() const { return m_itemId; }

void MovieInfoRemoteSearchQuery::setItemId(QUuid newItemId) {
	m_itemId = newItemId;
}
QString MovieInfoRemoteSearchQuery::searchProviderName() const { return m_searchProviderName; }

void MovieInfoRemoteSearchQuery::setSearchProviderName(QString newSearchProviderName) {
	m_searchProviderName = newSearchProviderName;
}
bool MovieInfoRemoteSearchQuery::includeDisabledProviders() const { return m_includeDisabledProviders; }

void MovieInfoRemoteSearchQuery::setIncludeDisabledProviders(bool newIncludeDisabledProviders) {
	m_includeDisabledProviders = newIncludeDisabledProviders;
}

} // NS DTO

namespace Support {

using MovieInfoRemoteSearchQuery = Jellyfin::DTO::MovieInfoRemoteSearchQuery;

template <>
MovieInfoRemoteSearchQuery fromJsonValue<MovieInfoRemoteSearchQuery>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return MovieInfoRemoteSearchQuery::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

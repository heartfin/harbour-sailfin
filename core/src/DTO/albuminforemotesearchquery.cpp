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

#include <JellyfinQt/DTO/albuminforemotesearchquery.h>

namespace Jellyfin {
namespace DTO {

AlbumInfoRemoteSearchQuery::AlbumInfoRemoteSearchQuery(QObject *parent) : QObject(parent) {}

AlbumInfoRemoteSearchQuery *AlbumInfoRemoteSearchQuery::fromJSON(QJsonObject source, QObject *parent) {
	AlbumInfoRemoteSearchQuery *instance = new AlbumInfoRemoteSearchQuery(parent);
	instance->updateFromJSON(source);
	return instance;
}

void AlbumInfoRemoteSearchQuery::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject AlbumInfoRemoteSearchQuery::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
AlbumInfo * AlbumInfoRemoteSearchQuery::searchInfo() const { return m_searchInfo; }
void AlbumInfoRemoteSearchQuery::setSearchInfo(AlbumInfo * newSearchInfo) {
	m_searchInfo = newSearchInfo;
	emit searchInfoChanged(newSearchInfo);
}

QString AlbumInfoRemoteSearchQuery::itemId() const { return m_itemId; }
void AlbumInfoRemoteSearchQuery::setItemId(QString newItemId) {
	m_itemId = newItemId;
	emit itemIdChanged(newItemId);
}

QString AlbumInfoRemoteSearchQuery::searchProviderName() const { return m_searchProviderName; }
void AlbumInfoRemoteSearchQuery::setSearchProviderName(QString newSearchProviderName) {
	m_searchProviderName = newSearchProviderName;
	emit searchProviderNameChanged(newSearchProviderName);
}

bool AlbumInfoRemoteSearchQuery::includeDisabledProviders() const { return m_includeDisabledProviders; }
void AlbumInfoRemoteSearchQuery::setIncludeDisabledProviders(bool newIncludeDisabledProviders) {
	m_includeDisabledProviders = newIncludeDisabledProviders;
	emit includeDisabledProvidersChanged(newIncludeDisabledProviders);
}


} // NS Jellyfin
} // NS DTO

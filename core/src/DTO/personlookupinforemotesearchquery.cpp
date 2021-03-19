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

#include <JellyfinQt/DTO/personlookupinforemotesearchquery.h>

namespace Jellyfin {
namespace DTO {

PersonLookupInfoRemoteSearchQuery::PersonLookupInfoRemoteSearchQuery(QObject *parent) : QObject(parent) {}

PersonLookupInfoRemoteSearchQuery *PersonLookupInfoRemoteSearchQuery::fromJSON(QJsonObject source, QObject *parent) {
	PersonLookupInfoRemoteSearchQuery *instance = new PersonLookupInfoRemoteSearchQuery(parent);
	instance->updateFromJSON(source);
	return instance;
}

void PersonLookupInfoRemoteSearchQuery::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject PersonLookupInfoRemoteSearchQuery::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
PersonLookupInfo * PersonLookupInfoRemoteSearchQuery::searchInfo() const { return m_searchInfo; }
void PersonLookupInfoRemoteSearchQuery::setSearchInfo(PersonLookupInfo * newSearchInfo) {
	m_searchInfo = newSearchInfo;
	emit searchInfoChanged(newSearchInfo);
}

QString PersonLookupInfoRemoteSearchQuery::itemId() const { return m_itemId; }
void PersonLookupInfoRemoteSearchQuery::setItemId(QString newItemId) {
	m_itemId = newItemId;
	emit itemIdChanged(newItemId);
}

QString PersonLookupInfoRemoteSearchQuery::searchProviderName() const { return m_searchProviderName; }
void PersonLookupInfoRemoteSearchQuery::setSearchProviderName(QString newSearchProviderName) {
	m_searchProviderName = newSearchProviderName;
	emit searchProviderNameChanged(newSearchProviderName);
}

bool PersonLookupInfoRemoteSearchQuery::includeDisabledProviders() const { return m_includeDisabledProviders; }
void PersonLookupInfoRemoteSearchQuery::setIncludeDisabledProviders(bool newIncludeDisabledProviders) {
	m_includeDisabledProviders = newIncludeDisabledProviders;
	emit includeDisabledProvidersChanged(newIncludeDisabledProviders);
}


} // NS Jellyfin
} // NS DTO

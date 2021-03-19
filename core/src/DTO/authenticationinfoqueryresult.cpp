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

#include <JellyfinQt/DTO/authenticationinfoqueryresult.h>

namespace Jellyfin {
namespace DTO {

AuthenticationInfoQueryResult::AuthenticationInfoQueryResult(QObject *parent) : QObject(parent) {}

AuthenticationInfoQueryResult *AuthenticationInfoQueryResult::fromJSON(QJsonObject source, QObject *parent) {
	AuthenticationInfoQueryResult *instance = new AuthenticationInfoQueryResult(parent);
	instance->updateFromJSON(source);
	return instance;
}

void AuthenticationInfoQueryResult::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject AuthenticationInfoQueryResult::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QList<AuthenticationInfo *> AuthenticationInfoQueryResult::items() const { return m_items; }
void AuthenticationInfoQueryResult::setItems(QList<AuthenticationInfo *> newItems) {
	m_items = newItems;
	emit itemsChanged(newItems);
}

qint32 AuthenticationInfoQueryResult::totalRecordCount() const { return m_totalRecordCount; }
void AuthenticationInfoQueryResult::setTotalRecordCount(qint32 newTotalRecordCount) {
	m_totalRecordCount = newTotalRecordCount;
	emit totalRecordCountChanged(newTotalRecordCount);
}

qint32 AuthenticationInfoQueryResult::startIndex() const { return m_startIndex; }
void AuthenticationInfoQueryResult::setStartIndex(qint32 newStartIndex) {
	m_startIndex = newStartIndex;
	emit startIndexChanged(newStartIndex);
}


} // NS Jellyfin
} // NS DTO

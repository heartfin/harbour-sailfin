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

#include <JellyfinQt/DTO/quickconnectresult.h>

namespace Jellyfin {
namespace DTO {

QuickConnectResult::QuickConnectResult(QObject *parent) {}

QuickConnectResult QuickConnectResult::fromJson(QJsonObject source) {QuickConnectResult instance;
	instance->setFromJson(source, false);
	return instance;
}


void QuickConnectResult::setFromJson(QJsonObject source) {
	m_authenticated = fromJsonValue<bool>(source["Authenticated"]);
	m_secret = fromJsonValue<QString>(source["Secret"]);
	m_code = fromJsonValue<QString>(source["Code"]);
	m_authentication = fromJsonValue<QString>(source["Authentication"]);
	m_error = fromJsonValue<QString>(source["Error"]);
	m_dateAdded = fromJsonValue<QDateTime>(source["DateAdded"]);

}
	
QJsonObject QuickConnectResult::toJson() {
	QJsonObject result;
	result["Authenticated"] = toJsonValue<bool>(m_authenticated);
	result["Secret"] = toJsonValue<QString>(m_secret);
	result["Code"] = toJsonValue<QString>(m_code);
	result["Authentication"] = toJsonValue<QString>(m_authentication);
	result["Error"] = toJsonValue<QString>(m_error);
	result["DateAdded"] = toJsonValue<QDateTime>(m_dateAdded);

	return result;
}

bool QuickConnectResult::authenticated() const { return m_authenticated; }

void QuickConnectResult::setAuthenticated(bool newAuthenticated) {
	m_authenticated = newAuthenticated;
}
QString QuickConnectResult::secret() const { return m_secret; }

void QuickConnectResult::setSecret(QString newSecret) {
	m_secret = newSecret;
}
QString QuickConnectResult::code() const { return m_code; }

void QuickConnectResult::setCode(QString newCode) {
	m_code = newCode;
}
QString QuickConnectResult::authentication() const { return m_authentication; }

void QuickConnectResult::setAuthentication(QString newAuthentication) {
	m_authentication = newAuthentication;
}
QString QuickConnectResult::error() const { return m_error; }

void QuickConnectResult::setError(QString newError) {
	m_error = newError;
}
QDateTime QuickConnectResult::dateAdded() const { return m_dateAdded; }

void QuickConnectResult::setDateAdded(QDateTime newDateAdded) {
	m_dateAdded = newDateAdded;
}


} // NS Jellyfin
} // NS DTO

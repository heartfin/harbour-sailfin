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

QuickConnectResult::QuickConnectResult(QObject *parent) : QObject(parent) {}

QuickConnectResult *QuickConnectResult::fromJSON(QJsonObject source, QObject *parent) {
	QuickConnectResult *instance = new QuickConnectResult(parent);
	instance->updateFromJSON(source);
	return instance;
}

void QuickConnectResult::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject QuickConnectResult::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
bool QuickConnectResult::authenticated() const { return m_authenticated; }
void QuickConnectResult::setAuthenticated(bool newAuthenticated) {
	m_authenticated = newAuthenticated;
	emit authenticatedChanged(newAuthenticated);
}

QString QuickConnectResult::secret() const { return m_secret; }
void QuickConnectResult::setSecret(QString newSecret) {
	m_secret = newSecret;
	emit secretChanged(newSecret);
}

QString QuickConnectResult::code() const { return m_code; }
void QuickConnectResult::setCode(QString newCode) {
	m_code = newCode;
	emit codeChanged(newCode);
}

QString QuickConnectResult::authentication() const { return m_authentication; }
void QuickConnectResult::setAuthentication(QString newAuthentication) {
	m_authentication = newAuthentication;
	emit authenticationChanged(newAuthentication);
}

QString QuickConnectResult::error() const { return m_error; }
void QuickConnectResult::setError(QString newError) {
	m_error = newError;
	emit errorChanged(newError);
}

QDateTime QuickConnectResult::dateAdded() const { return m_dateAdded; }
void QuickConnectResult::setDateAdded(QDateTime newDateAdded) {
	m_dateAdded = newDateAdded;
	emit dateAddedChanged(newDateAdded);
}


} // NS Jellyfin
} // NS DTO

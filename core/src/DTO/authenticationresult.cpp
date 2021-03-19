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

#include <JellyfinQt/DTO/authenticationresult.h>

namespace Jellyfin {
namespace DTO {

AuthenticationResult::AuthenticationResult(QObject *parent) : QObject(parent) {}

AuthenticationResult *AuthenticationResult::fromJSON(QJsonObject source, QObject *parent) {
	AuthenticationResult *instance = new AuthenticationResult(parent);
	instance->updateFromJSON(source);
	return instance;
}

void AuthenticationResult::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject AuthenticationResult::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
UserDto * AuthenticationResult::user() const { return m_user; }
void AuthenticationResult::setUser(UserDto * newUser) {
	m_user = newUser;
	emit userChanged(newUser);
}

SessionInfo * AuthenticationResult::sessionInfo() const { return m_sessionInfo; }
void AuthenticationResult::setSessionInfo(SessionInfo * newSessionInfo) {
	m_sessionInfo = newSessionInfo;
	emit sessionInfoChanged(newSessionInfo);
}

QString AuthenticationResult::accessToken() const { return m_accessToken; }
void AuthenticationResult::setAccessToken(QString newAccessToken) {
	m_accessToken = newAccessToken;
	emit accessTokenChanged(newAccessToken);
}

QString AuthenticationResult::serverId() const { return m_serverId; }
void AuthenticationResult::setServerId(QString newServerId) {
	m_serverId = newServerId;
	emit serverIdChanged(newServerId);
}


} // NS Jellyfin
} // NS DTO

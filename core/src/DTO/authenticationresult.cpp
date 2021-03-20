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

AuthenticationResult::AuthenticationResult() {}

AuthenticationResult AuthenticationResult::fromJson(QJsonObject source) {
	AuthenticationResult instance;
	instance.setFromJson(source);
	return instance;
}


void AuthenticationResult::setFromJson(QJsonObject source) {
	m_user = Jellyfin::Support::fromJsonValue<QSharedPointer<UserDto>>(source["User"]);
	m_sessionInfo = Jellyfin::Support::fromJsonValue<QSharedPointer<SessionInfo>>(source["SessionInfo"]);
	m_accessToken = Jellyfin::Support::fromJsonValue<QString>(source["AccessToken"]);
	m_serverId = Jellyfin::Support::fromJsonValue<QString>(source["ServerId"]);

}
	
QJsonObject AuthenticationResult::toJson() {
	QJsonObject result;
	result["User"] = Jellyfin::Support::toJsonValue<QSharedPointer<UserDto>>(m_user);
	result["SessionInfo"] = Jellyfin::Support::toJsonValue<QSharedPointer<SessionInfo>>(m_sessionInfo);
	result["AccessToken"] = Jellyfin::Support::toJsonValue<QString>(m_accessToken);
	result["ServerId"] = Jellyfin::Support::toJsonValue<QString>(m_serverId);

	return result;
}

QSharedPointer<UserDto> AuthenticationResult::user() const { return m_user; }

void AuthenticationResult::setUser(QSharedPointer<UserDto> newUser) {
	m_user = newUser;
}
QSharedPointer<SessionInfo> AuthenticationResult::sessionInfo() const { return m_sessionInfo; }

void AuthenticationResult::setSessionInfo(QSharedPointer<SessionInfo> newSessionInfo) {
	m_sessionInfo = newSessionInfo;
}
QString AuthenticationResult::accessToken() const { return m_accessToken; }

void AuthenticationResult::setAccessToken(QString newAccessToken) {
	m_accessToken = newAccessToken;
}
QString AuthenticationResult::serverId() const { return m_serverId; }

void AuthenticationResult::setServerId(QString newServerId) {
	m_serverId = newServerId;
}

} // NS DTO

namespace Support {

using AuthenticationResult = Jellyfin::DTO::AuthenticationResult;

template <>
AuthenticationResult fromJsonValue<AuthenticationResult>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return AuthenticationResult::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

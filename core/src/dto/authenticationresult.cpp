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

#include <JellyfinQt/dto/authenticationresult.h>

namespace Jellyfin {
namespace DTO {

AuthenticationResult::AuthenticationResult() {}
AuthenticationResult::AuthenticationResult (
		QSharedPointer<UserDto> user, 
		QSharedPointer<SessionInfo> sessionInfo 
		) :
	m_user(user),
	m_sessionInfo(sessionInfo) { }



AuthenticationResult::AuthenticationResult(const AuthenticationResult &other) :

	m_user(other.m_user),
	m_sessionInfo(other.m_sessionInfo),
	m_accessToken(other.m_accessToken),
	m_serverId(other.m_serverId){}


void AuthenticationResult::replaceData(AuthenticationResult &other) {
	m_user = other.m_user;
	m_sessionInfo = other.m_sessionInfo;
	m_accessToken = other.m_accessToken;
	m_serverId = other.m_serverId;
}

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
	
QJsonObject AuthenticationResult::toJson() const {
	QJsonObject result;
	
	result["User"] = Jellyfin::Support::toJsonValue<QSharedPointer<UserDto>>(m_user);		
	result["SessionInfo"] = Jellyfin::Support::toJsonValue<QSharedPointer<SessionInfo>>(m_sessionInfo);		
	
	if (!(m_accessToken.isNull())) {
		result["AccessToken"] = Jellyfin::Support::toJsonValue<QString>(m_accessToken);
	}
			
	
	if (!(m_serverId.isNull())) {
		result["ServerId"] = Jellyfin::Support::toJsonValue<QString>(m_serverId);
	}
		
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
bool AuthenticationResult::accessTokenNull() const {
	return m_accessToken.isNull();
}

void AuthenticationResult::setAccessTokenNull() {
	m_accessToken.clear();

}
QString AuthenticationResult::serverId() const { return m_serverId; }

void AuthenticationResult::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
bool AuthenticationResult::serverIdNull() const {
	return m_serverId.isNull();
}

void AuthenticationResult::setServerIdNull() {
	m_serverId.clear();

}

} // NS DTO

namespace Support {

using AuthenticationResult = Jellyfin::DTO::AuthenticationResult;

template <>
AuthenticationResult fromJsonValue(const QJsonValue &source, convertType<AuthenticationResult>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return AuthenticationResult::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const AuthenticationResult &source, convertType<AuthenticationResult>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

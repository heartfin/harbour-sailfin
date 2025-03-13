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

#include <JellyfinQt/dto/authenticateuserbyname.h>

namespace Jellyfin {
namespace DTO {

AuthenticateUserByName::AuthenticateUserByName() {}

AuthenticateUserByName::AuthenticateUserByName(const AuthenticateUserByName &other) :

	m_username(other.m_username),
	m_pw(other.m_pw){}


void AuthenticateUserByName::replaceData(AuthenticateUserByName &other) {
	m_username = other.m_username;
	m_pw = other.m_pw;
}

AuthenticateUserByName AuthenticateUserByName::fromJson(QJsonObject source) {
	AuthenticateUserByName instance;
	instance.setFromJson(source);
	return instance;
}


void AuthenticateUserByName::setFromJson(QJsonObject source) {
	m_username = Jellyfin::Support::fromJsonValue<QString>(source["Username"]);
	m_pw = Jellyfin::Support::fromJsonValue<QString>(source["Pw"]);

}
	
QJsonObject AuthenticateUserByName::toJson() const {
	QJsonObject result;
	
	
	if (!(m_username.isNull())) {
		result["Username"] = Jellyfin::Support::toJsonValue<QString>(m_username);
	}
			
	
	if (!(m_pw.isNull())) {
		result["Pw"] = Jellyfin::Support::toJsonValue<QString>(m_pw);
	}
		
	return result;
}

QString AuthenticateUserByName::username() const { return m_username; }

void AuthenticateUserByName::setUsername(QString newUsername) {
	m_username = newUsername;
}
bool AuthenticateUserByName::usernameNull() const {
	return m_username.isNull();
}

void AuthenticateUserByName::setUsernameNull() {
	m_username.clear();

}
QString AuthenticateUserByName::pw() const { return m_pw; }

void AuthenticateUserByName::setPw(QString newPw) {
	m_pw = newPw;
}
bool AuthenticateUserByName::pwNull() const {
	return m_pw.isNull();
}

void AuthenticateUserByName::setPwNull() {
	m_pw.clear();

}

} // NS DTO

namespace Support {

using AuthenticateUserByName = Jellyfin::DTO::AuthenticateUserByName;

template <>
AuthenticateUserByName fromJsonValue(const QJsonValue &source, convertType<AuthenticateUserByName>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return AuthenticateUserByName::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const AuthenticateUserByName &source, convertType<AuthenticateUserByName>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

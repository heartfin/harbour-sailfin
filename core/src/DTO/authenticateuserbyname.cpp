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

#include <JellyfinQt/DTO/authenticateuserbyname.h>

namespace Jellyfin {
namespace DTO {

AuthenticateUserByName::AuthenticateUserByName() {}

AuthenticateUserByName AuthenticateUserByName::fromJson(QJsonObject source) {
	AuthenticateUserByName instance;
	instance.setFromJson(source);
	return instance;
}


void AuthenticateUserByName::setFromJson(QJsonObject source) {
	m_username = Jellyfin::Support::fromJsonValue<QString>(source["Username"]);
	m_pw = Jellyfin::Support::fromJsonValue<QString>(source["Pw"]);
	m_password = Jellyfin::Support::fromJsonValue<QString>(source["Password"]);

}
	
QJsonObject AuthenticateUserByName::toJson() {
	QJsonObject result;
	result["Username"] = Jellyfin::Support::toJsonValue<QString>(m_username);
	result["Pw"] = Jellyfin::Support::toJsonValue<QString>(m_pw);
	result["Password"] = Jellyfin::Support::toJsonValue<QString>(m_password);

	return result;
}

QString AuthenticateUserByName::username() const { return m_username; }

void AuthenticateUserByName::setUsername(QString newUsername) {
	m_username = newUsername;
}
QString AuthenticateUserByName::pw() const { return m_pw; }

void AuthenticateUserByName::setPw(QString newPw) {
	m_pw = newPw;
}
QString AuthenticateUserByName::password() const { return m_password; }

void AuthenticateUserByName::setPassword(QString newPassword) {
	m_password = newPassword;
}

} // NS DTO

namespace Support {

using AuthenticateUserByName = Jellyfin::DTO::AuthenticateUserByName;

template <>
AuthenticateUserByName fromJsonValue<AuthenticateUserByName>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return AuthenticateUserByName::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

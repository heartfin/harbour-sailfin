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

#include <JellyfinQt/dto/updateusereasypassword.h>

namespace Jellyfin {
namespace DTO {

UpdateUserEasyPassword::UpdateUserEasyPassword() {}

UpdateUserEasyPassword::UpdateUserEasyPassword(const UpdateUserEasyPassword &other) :

	m_newPassword(other.m_newPassword),
	m_newPw(other.m_newPw),
	m_resetPassword(other.m_resetPassword){}


void UpdateUserEasyPassword::replaceData(UpdateUserEasyPassword &other) {
	m_newPassword = other.m_newPassword;
	m_newPw = other.m_newPw;
	m_resetPassword = other.m_resetPassword;
}

UpdateUserEasyPassword UpdateUserEasyPassword::fromJson(QJsonObject source) {
	UpdateUserEasyPassword instance;
	instance.setFromJson(source);
	return instance;
}


void UpdateUserEasyPassword::setFromJson(QJsonObject source) {
	m_newPassword = Jellyfin::Support::fromJsonValue<QString>(source["NewPassword"]);
	m_newPw = Jellyfin::Support::fromJsonValue<QString>(source["NewPw"]);
	m_resetPassword = Jellyfin::Support::fromJsonValue<bool>(source["ResetPassword"]);

}
	
QJsonObject UpdateUserEasyPassword::toJson() {
	QJsonObject result;
	result["NewPassword"] = Jellyfin::Support::toJsonValue<QString>(m_newPassword);
	result["NewPw"] = Jellyfin::Support::toJsonValue<QString>(m_newPw);
	result["ResetPassword"] = Jellyfin::Support::toJsonValue<bool>(m_resetPassword);

	return result;
}

QString UpdateUserEasyPassword::newPassword() const { return m_newPassword; }

void UpdateUserEasyPassword::setNewPassword(QString newNewPassword) {
	m_newPassword = newNewPassword;
}
bool UpdateUserEasyPassword::newPasswordNull() const {
	return m_newPassword.isNull();
}

void UpdateUserEasyPassword::setNewPasswordNull() {
	m_newPassword.clear();

}
QString UpdateUserEasyPassword::newPw() const { return m_newPw; }

void UpdateUserEasyPassword::setNewPw(QString newNewPw) {
	m_newPw = newNewPw;
}
bool UpdateUserEasyPassword::newPwNull() const {
	return m_newPw.isNull();
}

void UpdateUserEasyPassword::setNewPwNull() {
	m_newPw.clear();

}
bool UpdateUserEasyPassword::resetPassword() const { return m_resetPassword; }

void UpdateUserEasyPassword::setResetPassword(bool newResetPassword) {
	m_resetPassword = newResetPassword;
}


} // NS DTO

namespace Support {

using UpdateUserEasyPassword = Jellyfin::DTO::UpdateUserEasyPassword;

template <>
UpdateUserEasyPassword fromJsonValue<UpdateUserEasyPassword>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return UpdateUserEasyPassword::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

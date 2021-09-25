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

#include <JellyfinQt/dto/updateuserpassword.h>

namespace Jellyfin {
namespace DTO {

UpdateUserPassword::UpdateUserPassword() {}
UpdateUserPassword::UpdateUserPassword (
		bool resetPassword 
		) :
	m_resetPassword(resetPassword) { }



UpdateUserPassword::UpdateUserPassword(const UpdateUserPassword &other) :

	m_currentPassword(other.m_currentPassword),
	m_currentPw(other.m_currentPw),
	m_newPw(other.m_newPw),
	m_resetPassword(other.m_resetPassword){}


void UpdateUserPassword::replaceData(UpdateUserPassword &other) {
	m_currentPassword = other.m_currentPassword;
	m_currentPw = other.m_currentPw;
	m_newPw = other.m_newPw;
	m_resetPassword = other.m_resetPassword;
}

UpdateUserPassword UpdateUserPassword::fromJson(QJsonObject source) {
	UpdateUserPassword instance;
	instance.setFromJson(source);
	return instance;
}


void UpdateUserPassword::setFromJson(QJsonObject source) {
	m_currentPassword = Jellyfin::Support::fromJsonValue<QString>(source["CurrentPassword"]);
	m_currentPw = Jellyfin::Support::fromJsonValue<QString>(source["CurrentPw"]);
	m_newPw = Jellyfin::Support::fromJsonValue<QString>(source["NewPw"]);
	m_resetPassword = Jellyfin::Support::fromJsonValue<bool>(source["ResetPassword"]);

}
	
QJsonObject UpdateUserPassword::toJson() const {
	QJsonObject result;
	
	
	if (!(m_currentPassword.isNull())) {
		result["CurrentPassword"] = Jellyfin::Support::toJsonValue<QString>(m_currentPassword);
	}
			
	
	if (!(m_currentPw.isNull())) {
		result["CurrentPw"] = Jellyfin::Support::toJsonValue<QString>(m_currentPw);
	}
			
	
	if (!(m_newPw.isNull())) {
		result["NewPw"] = Jellyfin::Support::toJsonValue<QString>(m_newPw);
	}
			
	result["ResetPassword"] = Jellyfin::Support::toJsonValue<bool>(m_resetPassword);	
	return result;
}

QString UpdateUserPassword::currentPassword() const { return m_currentPassword; }

void UpdateUserPassword::setCurrentPassword(QString newCurrentPassword) {
	m_currentPassword = newCurrentPassword;
}
bool UpdateUserPassword::currentPasswordNull() const {
	return m_currentPassword.isNull();
}

void UpdateUserPassword::setCurrentPasswordNull() {
	m_currentPassword.clear();

}
QString UpdateUserPassword::currentPw() const { return m_currentPw; }

void UpdateUserPassword::setCurrentPw(QString newCurrentPw) {
	m_currentPw = newCurrentPw;
}
bool UpdateUserPassword::currentPwNull() const {
	return m_currentPw.isNull();
}

void UpdateUserPassword::setCurrentPwNull() {
	m_currentPw.clear();

}
QString UpdateUserPassword::newPw() const { return m_newPw; }

void UpdateUserPassword::setNewPw(QString newNewPw) {
	m_newPw = newNewPw;
}
bool UpdateUserPassword::newPwNull() const {
	return m_newPw.isNull();
}

void UpdateUserPassword::setNewPwNull() {
	m_newPw.clear();

}
bool UpdateUserPassword::resetPassword() const { return m_resetPassword; }

void UpdateUserPassword::setResetPassword(bool newResetPassword) {
	m_resetPassword = newResetPassword;
}


} // NS DTO

namespace Support {

using UpdateUserPassword = Jellyfin::DTO::UpdateUserPassword;

template <>
UpdateUserPassword fromJsonValue(const QJsonValue &source, convertType<UpdateUserPassword>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return UpdateUserPassword::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const UpdateUserPassword &source, convertType<UpdateUserPassword>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

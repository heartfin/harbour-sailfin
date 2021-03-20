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

#include <JellyfinQt/DTO/updateuserpassword.h>

namespace Jellyfin {
namespace DTO {

UpdateUserPassword::UpdateUserPassword(QObject *parent) {}

UpdateUserPassword UpdateUserPassword::fromJson(QJsonObject source) {UpdateUserPassword instance;
	instance->setFromJson(source, false);
	return instance;
}


void UpdateUserPassword::setFromJson(QJsonObject source) {
	m_currentPassword = fromJsonValue<QString>(source["CurrentPassword"]);
	m_currentPw = fromJsonValue<QString>(source["CurrentPw"]);
	m_newPw = fromJsonValue<QString>(source["NewPw"]);
	m_resetPassword = fromJsonValue<bool>(source["ResetPassword"]);

}
	
QJsonObject UpdateUserPassword::toJson() {
	QJsonObject result;
	result["CurrentPassword"] = toJsonValue<QString>(m_currentPassword);
	result["CurrentPw"] = toJsonValue<QString>(m_currentPw);
	result["NewPw"] = toJsonValue<QString>(m_newPw);
	result["ResetPassword"] = toJsonValue<bool>(m_resetPassword);

	return result;
}

QString UpdateUserPassword::currentPassword() const { return m_currentPassword; }

void UpdateUserPassword::setCurrentPassword(QString newCurrentPassword) {
	m_currentPassword = newCurrentPassword;
}
QString UpdateUserPassword::currentPw() const { return m_currentPw; }

void UpdateUserPassword::setCurrentPw(QString newCurrentPw) {
	m_currentPw = newCurrentPw;
}
QString UpdateUserPassword::newPw() const { return m_newPw; }

void UpdateUserPassword::setNewPw(QString newNewPw) {
	m_newPw = newNewPw;
}
bool UpdateUserPassword::resetPassword() const { return m_resetPassword; }

void UpdateUserPassword::setResetPassword(bool newResetPassword) {
	m_resetPassword = newResetPassword;
}


} // NS Jellyfin
} // NS DTO

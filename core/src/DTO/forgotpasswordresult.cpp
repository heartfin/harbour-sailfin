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

#include <JellyfinQt/DTO/forgotpasswordresult.h>

namespace Jellyfin {
namespace DTO {

ForgotPasswordResult::ForgotPasswordResult(QObject *parent) {}

ForgotPasswordResult ForgotPasswordResult::fromJson(QJsonObject source) {ForgotPasswordResult instance;
	instance->setFromJson(source, false);
	return instance;
}


void ForgotPasswordResult::setFromJson(QJsonObject source) {
	m_action = fromJsonValue<ForgotPasswordAction>(source["Action"]);
	m_pinFile = fromJsonValue<QString>(source["PinFile"]);
	m_pinExpirationDate = fromJsonValue<QDateTime>(source["PinExpirationDate"]);

}
	
QJsonObject ForgotPasswordResult::toJson() {
	QJsonObject result;
	result["Action"] = toJsonValue<ForgotPasswordAction>(m_action);
	result["PinFile"] = toJsonValue<QString>(m_pinFile);
	result["PinExpirationDate"] = toJsonValue<QDateTime>(m_pinExpirationDate);

	return result;
}

ForgotPasswordAction ForgotPasswordResult::action() const { return m_action; }

void ForgotPasswordResult::setAction(ForgotPasswordAction newAction) {
	m_action = newAction;
}
QString ForgotPasswordResult::pinFile() const { return m_pinFile; }

void ForgotPasswordResult::setPinFile(QString newPinFile) {
	m_pinFile = newPinFile;
}
QDateTime ForgotPasswordResult::pinExpirationDate() const { return m_pinExpirationDate; }

void ForgotPasswordResult::setPinExpirationDate(QDateTime newPinExpirationDate) {
	m_pinExpirationDate = newPinExpirationDate;
}


} // NS Jellyfin
} // NS DTO

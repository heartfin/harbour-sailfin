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

#include <JellyfinQt/dto/forgotpasswordresult.h>

namespace Jellyfin {
namespace DTO {

ForgotPasswordResult::ForgotPasswordResult() {}

ForgotPasswordResult::ForgotPasswordResult(const ForgotPasswordResult &other) :

	m_action(other.m_action),
	m_pinFile(other.m_pinFile),
	m_pinExpirationDate(other.m_pinExpirationDate){}


void ForgotPasswordResult::replaceData(ForgotPasswordResult &other) {
	m_action = other.m_action;
	m_pinFile = other.m_pinFile;
	m_pinExpirationDate = other.m_pinExpirationDate;
}

ForgotPasswordResult ForgotPasswordResult::fromJson(QJsonObject source) {
	ForgotPasswordResult instance;
	instance.setFromJson(source);
	return instance;
}


void ForgotPasswordResult::setFromJson(QJsonObject source) {
	m_action = Jellyfin::Support::fromJsonValue<ForgotPasswordAction>(source["Action"]);
	m_pinFile = Jellyfin::Support::fromJsonValue<QString>(source["PinFile"]);
	m_pinExpirationDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["PinExpirationDate"]);

}
	
QJsonObject ForgotPasswordResult::toJson() const {
	QJsonObject result;
	result["Action"] = Jellyfin::Support::toJsonValue<ForgotPasswordAction>(m_action);
	result["PinFile"] = Jellyfin::Support::toJsonValue<QString>(m_pinFile);
	result["PinExpirationDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_pinExpirationDate);

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
bool ForgotPasswordResult::pinFileNull() const {
	return m_pinFile.isNull();
}

void ForgotPasswordResult::setPinFileNull() {
	m_pinFile.clear();

}
QDateTime ForgotPasswordResult::pinExpirationDate() const { return m_pinExpirationDate; }

void ForgotPasswordResult::setPinExpirationDate(QDateTime newPinExpirationDate) {
	m_pinExpirationDate = newPinExpirationDate;
}
bool ForgotPasswordResult::pinExpirationDateNull() const {
	return m_pinExpirationDate.isNull();
}

void ForgotPasswordResult::setPinExpirationDateNull() {
	m_pinExpirationDate= QDateTime();

}

} // NS DTO

namespace Support {

using ForgotPasswordResult = Jellyfin::DTO::ForgotPasswordResult;

template <>
ForgotPasswordResult fromJsonValue(const QJsonValue &source, convertType<ForgotPasswordResult>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ForgotPasswordResult::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ForgotPasswordResult &source, convertType<ForgotPasswordResult>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

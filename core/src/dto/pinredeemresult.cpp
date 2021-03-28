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

#include <JellyfinQt/dto/pinredeemresult.h>

namespace Jellyfin {
namespace DTO {

PinRedeemResult::PinRedeemResult() {}

PinRedeemResult::PinRedeemResult(const PinRedeemResult &other) :

	m_success(other.m_success),
	m_usersReset(other.m_usersReset){}


void PinRedeemResult::replaceData(PinRedeemResult &other) {
	m_success = other.m_success;
	m_usersReset = other.m_usersReset;
}

PinRedeemResult PinRedeemResult::fromJson(QJsonObject source) {
	PinRedeemResult instance;
	instance.setFromJson(source);
	return instance;
}


void PinRedeemResult::setFromJson(QJsonObject source) {
	m_success = Jellyfin::Support::fromJsonValue<bool>(source["Success"]);
	m_usersReset = Jellyfin::Support::fromJsonValue<QStringList>(source["UsersReset"]);

}
	
QJsonObject PinRedeemResult::toJson() const {
	QJsonObject result;
	result["Success"] = Jellyfin::Support::toJsonValue<bool>(m_success);
	result["UsersReset"] = Jellyfin::Support::toJsonValue<QStringList>(m_usersReset);

	return result;
}

bool PinRedeemResult::success() const { return m_success; }

void PinRedeemResult::setSuccess(bool newSuccess) {
	m_success = newSuccess;
}

QStringList PinRedeemResult::usersReset() const { return m_usersReset; }

void PinRedeemResult::setUsersReset(QStringList newUsersReset) {
	m_usersReset = newUsersReset;
}
bool PinRedeemResult::usersResetNull() const {
	return m_usersReset.size() == 0;
}

void PinRedeemResult::setUsersResetNull() {
	m_usersReset.clear();

}

} // NS DTO

namespace Support {

using PinRedeemResult = Jellyfin::DTO::PinRedeemResult;

template <>
PinRedeemResult fromJsonValue(const QJsonValue &source, convertType<PinRedeemResult>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return PinRedeemResult::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const PinRedeemResult &source, convertType<PinRedeemResult>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

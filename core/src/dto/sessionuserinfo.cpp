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

#include <JellyfinQt/dto/sessionuserinfo.h>

namespace Jellyfin {
namespace DTO {

SessionUserInfo::SessionUserInfo() {}

SessionUserInfo::SessionUserInfo(const SessionUserInfo &other) :

	m_userId(other.m_userId),
	m_userName(other.m_userName){}


void SessionUserInfo::replaceData(SessionUserInfo &other) {
	m_userId = other.m_userId;
	m_userName = other.m_userName;
}

SessionUserInfo SessionUserInfo::fromJson(QJsonObject source) {
	SessionUserInfo instance;
	instance.setFromJson(source);
	return instance;
}


void SessionUserInfo::setFromJson(QJsonObject source) {
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_userName = Jellyfin::Support::fromJsonValue<QString>(source["UserName"]);

}
	
QJsonObject SessionUserInfo::toJson() {
	QJsonObject result;
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);
	result["UserName"] = Jellyfin::Support::toJsonValue<QString>(m_userName);

	return result;
}

QString SessionUserInfo::userId() const { return m_userId; }

void SessionUserInfo::setUserId(QString newUserId) {
	m_userId = newUserId;
}

QString SessionUserInfo::userName() const { return m_userName; }

void SessionUserInfo::setUserName(QString newUserName) {
	m_userName = newUserName;
}
bool SessionUserInfo::userNameNull() const {
	return m_userName.isNull();
}

void SessionUserInfo::setUserNameNull() {
	m_userName.clear();

}

} // NS DTO

namespace Support {

using SessionUserInfo = Jellyfin::DTO::SessionUserInfo;

template <>
SessionUserInfo fromJsonValue<SessionUserInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return SessionUserInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

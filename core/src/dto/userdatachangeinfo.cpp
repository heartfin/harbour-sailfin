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

#include <JellyfinQt/dto/userdatachangeinfo.h>

namespace Jellyfin {
namespace DTO {

UserDataChangeInfo::UserDataChangeInfo() {}
UserDataChangeInfo::UserDataChangeInfo (
		QString userId, 
		QList<UserItemDataDto> userDataList 
		) :
	m_userId(userId),
	m_userDataList(userDataList) { }



UserDataChangeInfo::UserDataChangeInfo(const UserDataChangeInfo &other) :

	m_userId(other.m_userId),
	m_userDataList(other.m_userDataList){}


void UserDataChangeInfo::replaceData(UserDataChangeInfo &other) {
	m_userId = other.m_userId;
	m_userDataList = other.m_userDataList;
}

UserDataChangeInfo UserDataChangeInfo::fromJson(QJsonObject source) {
	UserDataChangeInfo instance;
	instance.setFromJson(source);
	return instance;
}


void UserDataChangeInfo::setFromJson(QJsonObject source) {
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_userDataList = Jellyfin::Support::fromJsonValue<QList<UserItemDataDto>>(source["UserDataList"]);

}
	
QJsonObject UserDataChangeInfo::toJson() const {
	QJsonObject result;
	
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);		
	result["UserDataList"] = Jellyfin::Support::toJsonValue<QList<UserItemDataDto>>(m_userDataList);	
	return result;
}

QString UserDataChangeInfo::userId() const { return m_userId; }

void UserDataChangeInfo::setUserId(QString newUserId) {
	m_userId = newUserId;
}

QList<UserItemDataDto> UserDataChangeInfo::userDataList() const { return m_userDataList; }

void UserDataChangeInfo::setUserDataList(QList<UserItemDataDto> newUserDataList) {
	m_userDataList = newUserDataList;
}


} // NS DTO

namespace Support {

using UserDataChangeInfo = Jellyfin::DTO::UserDataChangeInfo;

template <>
UserDataChangeInfo fromJsonValue(const QJsonValue &source, convertType<UserDataChangeInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return UserDataChangeInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const UserDataChangeInfo &source, convertType<UserDataChangeInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

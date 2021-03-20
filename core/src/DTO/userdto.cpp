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

#include <JellyfinQt/DTO/userdto.h>

namespace Jellyfin {
namespace DTO {

UserDto::UserDto() {}

UserDto UserDto::fromJson(QJsonObject source) {
	UserDto instance;
	instance.setFromJson(source);
	return instance;
}


void UserDto::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_serverId = Jellyfin::Support::fromJsonValue<QString>(source["ServerId"]);
	m_serverName = Jellyfin::Support::fromJsonValue<QString>(source["ServerName"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QUuid>(source["Id"]);
	m_primaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["PrimaryImageTag"]);
	m_hasPassword = Jellyfin::Support::fromJsonValue<bool>(source["HasPassword"]);
	m_hasConfiguredPassword = Jellyfin::Support::fromJsonValue<bool>(source["HasConfiguredPassword"]);
	m_hasConfiguredEasyPassword = Jellyfin::Support::fromJsonValue<bool>(source["HasConfiguredEasyPassword"]);
	m_enableAutoLogin = Jellyfin::Support::fromJsonValue<bool>(source["EnableAutoLogin"]);
	m_lastLoginDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastLoginDate"]);
	m_lastActivityDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastActivityDate"]);
	m_configuration = Jellyfin::Support::fromJsonValue<QSharedPointer<UserConfiguration>>(source["Configuration"]);
	m_policy = Jellyfin::Support::fromJsonValue<QSharedPointer<UserPolicy>>(source["Policy"]);
	m_primaryImageAspectRatio = Jellyfin::Support::fromJsonValue<double>(source["PrimaryImageAspectRatio"]);

}
	
QJsonObject UserDto::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["ServerId"] = Jellyfin::Support::toJsonValue<QString>(m_serverId);
	result["ServerName"] = Jellyfin::Support::toJsonValue<QString>(m_serverName);
	result["Id"] = Jellyfin::Support::toJsonValue<QUuid>(m_jellyfinId);
	result["PrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_primaryImageTag);
	result["HasPassword"] = Jellyfin::Support::toJsonValue<bool>(m_hasPassword);
	result["HasConfiguredPassword"] = Jellyfin::Support::toJsonValue<bool>(m_hasConfiguredPassword);
	result["HasConfiguredEasyPassword"] = Jellyfin::Support::toJsonValue<bool>(m_hasConfiguredEasyPassword);
	result["EnableAutoLogin"] = Jellyfin::Support::toJsonValue<bool>(m_enableAutoLogin);
	result["LastLoginDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastLoginDate);
	result["LastActivityDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastActivityDate);
	result["Configuration"] = Jellyfin::Support::toJsonValue<QSharedPointer<UserConfiguration>>(m_configuration);
	result["Policy"] = Jellyfin::Support::toJsonValue<QSharedPointer<UserPolicy>>(m_policy);
	result["PrimaryImageAspectRatio"] = Jellyfin::Support::toJsonValue<double>(m_primaryImageAspectRatio);

	return result;
}

QString UserDto::name() const { return m_name; }

void UserDto::setName(QString newName) {
	m_name = newName;
}
QString UserDto::serverId() const { return m_serverId; }

void UserDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
QString UserDto::serverName() const { return m_serverName; }

void UserDto::setServerName(QString newServerName) {
	m_serverName = newServerName;
}
QUuid UserDto::jellyfinId() const { return m_jellyfinId; }

void UserDto::setJellyfinId(QUuid newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString UserDto::primaryImageTag() const { return m_primaryImageTag; }

void UserDto::setPrimaryImageTag(QString newPrimaryImageTag) {
	m_primaryImageTag = newPrimaryImageTag;
}
bool UserDto::hasPassword() const { return m_hasPassword; }

void UserDto::setHasPassword(bool newHasPassword) {
	m_hasPassword = newHasPassword;
}
bool UserDto::hasConfiguredPassword() const { return m_hasConfiguredPassword; }

void UserDto::setHasConfiguredPassword(bool newHasConfiguredPassword) {
	m_hasConfiguredPassword = newHasConfiguredPassword;
}
bool UserDto::hasConfiguredEasyPassword() const { return m_hasConfiguredEasyPassword; }

void UserDto::setHasConfiguredEasyPassword(bool newHasConfiguredEasyPassword) {
	m_hasConfiguredEasyPassword = newHasConfiguredEasyPassword;
}
bool UserDto::enableAutoLogin() const { return m_enableAutoLogin; }

void UserDto::setEnableAutoLogin(bool newEnableAutoLogin) {
	m_enableAutoLogin = newEnableAutoLogin;
}
QDateTime UserDto::lastLoginDate() const { return m_lastLoginDate; }

void UserDto::setLastLoginDate(QDateTime newLastLoginDate) {
	m_lastLoginDate = newLastLoginDate;
}
QDateTime UserDto::lastActivityDate() const { return m_lastActivityDate; }

void UserDto::setLastActivityDate(QDateTime newLastActivityDate) {
	m_lastActivityDate = newLastActivityDate;
}
QSharedPointer<UserConfiguration> UserDto::configuration() const { return m_configuration; }

void UserDto::setConfiguration(QSharedPointer<UserConfiguration> newConfiguration) {
	m_configuration = newConfiguration;
}
QSharedPointer<UserPolicy> UserDto::policy() const { return m_policy; }

void UserDto::setPolicy(QSharedPointer<UserPolicy> newPolicy) {
	m_policy = newPolicy;
}
double UserDto::primaryImageAspectRatio() const { return m_primaryImageAspectRatio; }

void UserDto::setPrimaryImageAspectRatio(double newPrimaryImageAspectRatio) {
	m_primaryImageAspectRatio = newPrimaryImageAspectRatio;
}

} // NS DTO

namespace Support {

using UserDto = Jellyfin::DTO::UserDto;

template <>
UserDto fromJsonValue<UserDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return UserDto::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

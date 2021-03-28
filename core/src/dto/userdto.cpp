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

#include <JellyfinQt/dto/userdto.h>

namespace Jellyfin {
namespace DTO {

UserDto::UserDto() {}

UserDto::UserDto(const UserDto &other) :

	m_name(other.m_name),
	m_serverId(other.m_serverId),
	m_serverName(other.m_serverName),
	m_jellyfinId(other.m_jellyfinId),
	m_primaryImageTag(other.m_primaryImageTag),
	m_hasPassword(other.m_hasPassword),
	m_hasConfiguredPassword(other.m_hasConfiguredPassword),
	m_hasConfiguredEasyPassword(other.m_hasConfiguredEasyPassword),
	m_enableAutoLogin(other.m_enableAutoLogin),
	m_lastLoginDate(other.m_lastLoginDate),
	m_lastActivityDate(other.m_lastActivityDate),
	m_configuration(other.m_configuration),
	m_policy(other.m_policy),
	m_primaryImageAspectRatio(other.m_primaryImageAspectRatio){}


void UserDto::replaceData(UserDto &other) {
	m_name = other.m_name;
	m_serverId = other.m_serverId;
	m_serverName = other.m_serverName;
	m_jellyfinId = other.m_jellyfinId;
	m_primaryImageTag = other.m_primaryImageTag;
	m_hasPassword = other.m_hasPassword;
	m_hasConfiguredPassword = other.m_hasConfiguredPassword;
	m_hasConfiguredEasyPassword = other.m_hasConfiguredEasyPassword;
	m_enableAutoLogin = other.m_enableAutoLogin;
	m_lastLoginDate = other.m_lastLoginDate;
	m_lastActivityDate = other.m_lastActivityDate;
	m_configuration = other.m_configuration;
	m_policy = other.m_policy;
	m_primaryImageAspectRatio = other.m_primaryImageAspectRatio;
}

UserDto UserDto::fromJson(QJsonObject source) {
	UserDto instance;
	instance.setFromJson(source);
	return instance;
}


void UserDto::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_serverId = Jellyfin::Support::fromJsonValue<QString>(source["ServerId"]);
	m_serverName = Jellyfin::Support::fromJsonValue<QString>(source["ServerName"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_primaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["PrimaryImageTag"]);
	m_hasPassword = Jellyfin::Support::fromJsonValue<bool>(source["HasPassword"]);
	m_hasConfiguredPassword = Jellyfin::Support::fromJsonValue<bool>(source["HasConfiguredPassword"]);
	m_hasConfiguredEasyPassword = Jellyfin::Support::fromJsonValue<bool>(source["HasConfiguredEasyPassword"]);
	m_enableAutoLogin = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["EnableAutoLogin"]);
	m_lastLoginDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastLoginDate"]);
	m_lastActivityDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastActivityDate"]);
	m_configuration = Jellyfin::Support::fromJsonValue<QSharedPointer<UserConfiguration>>(source["Configuration"]);
	m_policy = Jellyfin::Support::fromJsonValue<QSharedPointer<UserPolicy>>(source["Policy"]);
	m_primaryImageAspectRatio = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["PrimaryImageAspectRatio"]);

}
	
QJsonObject UserDto::toJson() const {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["ServerId"] = Jellyfin::Support::toJsonValue<QString>(m_serverId);
	result["ServerName"] = Jellyfin::Support::toJsonValue<QString>(m_serverName);
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["PrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_primaryImageTag);
	result["HasPassword"] = Jellyfin::Support::toJsonValue<bool>(m_hasPassword);
	result["HasConfiguredPassword"] = Jellyfin::Support::toJsonValue<bool>(m_hasConfiguredPassword);
	result["HasConfiguredEasyPassword"] = Jellyfin::Support::toJsonValue<bool>(m_hasConfiguredEasyPassword);
	result["EnableAutoLogin"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_enableAutoLogin);
	result["LastLoginDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastLoginDate);
	result["LastActivityDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastActivityDate);
	result["Configuration"] = Jellyfin::Support::toJsonValue<QSharedPointer<UserConfiguration>>(m_configuration);
	result["Policy"] = Jellyfin::Support::toJsonValue<QSharedPointer<UserPolicy>>(m_policy);
	result["PrimaryImageAspectRatio"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_primaryImageAspectRatio);

	return result;
}

QString UserDto::name() const { return m_name; }

void UserDto::setName(QString newName) {
	m_name = newName;
}
bool UserDto::nameNull() const {
	return m_name.isNull();
}

void UserDto::setNameNull() {
	m_name.clear();

}
QString UserDto::serverId() const { return m_serverId; }

void UserDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
bool UserDto::serverIdNull() const {
	return m_serverId.isNull();
}

void UserDto::setServerIdNull() {
	m_serverId.clear();

}
QString UserDto::serverName() const { return m_serverName; }

void UserDto::setServerName(QString newServerName) {
	m_serverName = newServerName;
}
bool UserDto::serverNameNull() const {
	return m_serverName.isNull();
}

void UserDto::setServerNameNull() {
	m_serverName.clear();

}
QString UserDto::jellyfinId() const { return m_jellyfinId; }

void UserDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString UserDto::primaryImageTag() const { return m_primaryImageTag; }

void UserDto::setPrimaryImageTag(QString newPrimaryImageTag) {
	m_primaryImageTag = newPrimaryImageTag;
}
bool UserDto::primaryImageTagNull() const {
	return m_primaryImageTag.isNull();
}

void UserDto::setPrimaryImageTagNull() {
	m_primaryImageTag.clear();

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

std::optional<bool> UserDto::enableAutoLogin() const { return m_enableAutoLogin; }

void UserDto::setEnableAutoLogin(std::optional<bool> newEnableAutoLogin) {
	m_enableAutoLogin = newEnableAutoLogin;
}
bool UserDto::enableAutoLoginNull() const {
	return !m_enableAutoLogin.has_value();
}

void UserDto::setEnableAutoLoginNull() {
	m_enableAutoLogin = std::nullopt;

}
QDateTime UserDto::lastLoginDate() const { return m_lastLoginDate; }

void UserDto::setLastLoginDate(QDateTime newLastLoginDate) {
	m_lastLoginDate = newLastLoginDate;
}
bool UserDto::lastLoginDateNull() const {
	return m_lastLoginDate.isNull();
}

void UserDto::setLastLoginDateNull() {
	m_lastLoginDate= QDateTime();

}
QDateTime UserDto::lastActivityDate() const { return m_lastActivityDate; }

void UserDto::setLastActivityDate(QDateTime newLastActivityDate) {
	m_lastActivityDate = newLastActivityDate;
}
bool UserDto::lastActivityDateNull() const {
	return m_lastActivityDate.isNull();
}

void UserDto::setLastActivityDateNull() {
	m_lastActivityDate= QDateTime();

}
QSharedPointer<UserConfiguration> UserDto::configuration() const { return m_configuration; }

void UserDto::setConfiguration(QSharedPointer<UserConfiguration> newConfiguration) {
	m_configuration = newConfiguration;
}

QSharedPointer<UserPolicy> UserDto::policy() const { return m_policy; }

void UserDto::setPolicy(QSharedPointer<UserPolicy> newPolicy) {
	m_policy = newPolicy;
}

std::optional<double> UserDto::primaryImageAspectRatio() const { return m_primaryImageAspectRatio; }

void UserDto::setPrimaryImageAspectRatio(std::optional<double> newPrimaryImageAspectRatio) {
	m_primaryImageAspectRatio = newPrimaryImageAspectRatio;
}
bool UserDto::primaryImageAspectRatioNull() const {
	return !m_primaryImageAspectRatio.has_value();
}

void UserDto::setPrimaryImageAspectRatioNull() {
	m_primaryImageAspectRatio = std::nullopt;

}

} // NS DTO

namespace Support {

using UserDto = Jellyfin::DTO::UserDto;

template <>
UserDto fromJsonValue(const QJsonValue &source, convertType<UserDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return UserDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const UserDto &source, convertType<UserDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

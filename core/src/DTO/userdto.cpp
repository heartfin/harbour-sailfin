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

UserDto::UserDto(QObject *parent) : QObject(parent) {}

UserDto *UserDto::fromJSON(QJsonObject source, QObject *parent) {
	UserDto *instance = new UserDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void UserDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject UserDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString UserDto::name() const { return m_name; }
void UserDto::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString UserDto::serverId() const { return m_serverId; }
void UserDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
	emit serverIdChanged(newServerId);
}

QString UserDto::serverName() const { return m_serverName; }
void UserDto::setServerName(QString newServerName) {
	m_serverName = newServerName;
	emit serverNameChanged(newServerName);
}

QString UserDto::jellyfinId() const { return m_jellyfinId; }
void UserDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString UserDto::primaryImageTag() const { return m_primaryImageTag; }
void UserDto::setPrimaryImageTag(QString newPrimaryImageTag) {
	m_primaryImageTag = newPrimaryImageTag;
	emit primaryImageTagChanged(newPrimaryImageTag);
}

bool UserDto::hasPassword() const { return m_hasPassword; }
void UserDto::setHasPassword(bool newHasPassword) {
	m_hasPassword = newHasPassword;
	emit hasPasswordChanged(newHasPassword);
}

bool UserDto::hasConfiguredPassword() const { return m_hasConfiguredPassword; }
void UserDto::setHasConfiguredPassword(bool newHasConfiguredPassword) {
	m_hasConfiguredPassword = newHasConfiguredPassword;
	emit hasConfiguredPasswordChanged(newHasConfiguredPassword);
}

bool UserDto::hasConfiguredEasyPassword() const { return m_hasConfiguredEasyPassword; }
void UserDto::setHasConfiguredEasyPassword(bool newHasConfiguredEasyPassword) {
	m_hasConfiguredEasyPassword = newHasConfiguredEasyPassword;
	emit hasConfiguredEasyPasswordChanged(newHasConfiguredEasyPassword);
}

bool UserDto::enableAutoLogin() const { return m_enableAutoLogin; }
void UserDto::setEnableAutoLogin(bool newEnableAutoLogin) {
	m_enableAutoLogin = newEnableAutoLogin;
	emit enableAutoLoginChanged(newEnableAutoLogin);
}

QDateTime UserDto::lastLoginDate() const { return m_lastLoginDate; }
void UserDto::setLastLoginDate(QDateTime newLastLoginDate) {
	m_lastLoginDate = newLastLoginDate;
	emit lastLoginDateChanged(newLastLoginDate);
}

QDateTime UserDto::lastActivityDate() const { return m_lastActivityDate; }
void UserDto::setLastActivityDate(QDateTime newLastActivityDate) {
	m_lastActivityDate = newLastActivityDate;
	emit lastActivityDateChanged(newLastActivityDate);
}

UserConfiguration * UserDto::configuration() const { return m_configuration; }
void UserDto::setConfiguration(UserConfiguration * newConfiguration) {
	m_configuration = newConfiguration;
	emit configurationChanged(newConfiguration);
}

UserPolicy * UserDto::policy() const { return m_policy; }
void UserDto::setPolicy(UserPolicy * newPolicy) {
	m_policy = newPolicy;
	emit policyChanged(newPolicy);
}

double UserDto::primaryImageAspectRatio() const { return m_primaryImageAspectRatio; }
void UserDto::setPrimaryImageAspectRatio(double newPrimaryImageAspectRatio) {
	m_primaryImageAspectRatio = newPrimaryImageAspectRatio;
	emit primaryImageAspectRatioChanged(newPrimaryImageAspectRatio);
}


} // NS Jellyfin
} // NS DTO

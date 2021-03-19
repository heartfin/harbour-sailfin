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

#ifndef JELLYFIN_DTO_USERDTO_H
#define JELLYFIN_DTO_USERDTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class UserConfiguration;
class UserPolicy;

class UserDto : public QObject {
	Q_OBJECT
public:
	explicit UserDto(QObject *parent = nullptr);
	static UserDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the server identifier.
	 */
	Q_PROPERTY(QString serverId READ serverId WRITE setServerId NOTIFY serverIdChanged)
	/**
	 * @brief Gets or sets the name of the server.
This is not used by the server and is for client-side usage only.
	 */
	Q_PROPERTY(QString serverName READ serverName WRITE setServerName NOTIFY serverNameChanged)
	/**
	 * @brief Gets or sets the id.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the primary image tag.
	 */
	Q_PROPERTY(QString primaryImageTag READ primaryImageTag WRITE setPrimaryImageTag NOTIFY primaryImageTagChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance has password.
	 */
	Q_PROPERTY(bool hasPassword READ hasPassword WRITE setHasPassword NOTIFY hasPasswordChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance has configured password.
	 */
	Q_PROPERTY(bool hasConfiguredPassword READ hasConfiguredPassword WRITE setHasConfiguredPassword NOTIFY hasConfiguredPasswordChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance has configured easy password.
	 */
	Q_PROPERTY(bool hasConfiguredEasyPassword READ hasConfiguredEasyPassword WRITE setHasConfiguredEasyPassword NOTIFY hasConfiguredEasyPasswordChanged)
	/**
	 * @brief Gets or sets whether async login is enabled or not.
	 */
	Q_PROPERTY(bool enableAutoLogin READ enableAutoLogin WRITE setEnableAutoLogin NOTIFY enableAutoLoginChanged)
	/**
	 * @brief Gets or sets the last login date.
	 */
	Q_PROPERTY(QDateTime lastLoginDate READ lastLoginDate WRITE setLastLoginDate NOTIFY lastLoginDateChanged)
	/**
	 * @brief Gets or sets the last activity date.
	 */
	Q_PROPERTY(QDateTime lastActivityDate READ lastActivityDate WRITE setLastActivityDate NOTIFY lastActivityDateChanged)
	Q_PROPERTY(UserConfiguration * configuration READ configuration WRITE setConfiguration NOTIFY configurationChanged)
	Q_PROPERTY(UserPolicy * policy READ policy WRITE setPolicy NOTIFY policyChanged)
	/**
	 * @brief Gets or sets the primary image aspect ratio.
	 */
	Q_PROPERTY(double primaryImageAspectRatio READ primaryImageAspectRatio WRITE setPrimaryImageAspectRatio NOTIFY primaryImageAspectRatioChanged)

	QString name() const;
	void setName(QString newName);
	
	QString serverId() const;
	void setServerId(QString newServerId);
	
	QString serverName() const;
	void setServerName(QString newServerName);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString primaryImageTag() const;
	void setPrimaryImageTag(QString newPrimaryImageTag);
	
	bool hasPassword() const;
	void setHasPassword(bool newHasPassword);
	
	bool hasConfiguredPassword() const;
	void setHasConfiguredPassword(bool newHasConfiguredPassword);
	
	bool hasConfiguredEasyPassword() const;
	void setHasConfiguredEasyPassword(bool newHasConfiguredEasyPassword);
	
	bool enableAutoLogin() const;
	void setEnableAutoLogin(bool newEnableAutoLogin);
	
	QDateTime lastLoginDate() const;
	void setLastLoginDate(QDateTime newLastLoginDate);
	
	QDateTime lastActivityDate() const;
	void setLastActivityDate(QDateTime newLastActivityDate);
	
	UserConfiguration * configuration() const;
	void setConfiguration(UserConfiguration * newConfiguration);
	
	UserPolicy * policy() const;
	void setPolicy(UserPolicy * newPolicy);
	
	double primaryImageAspectRatio() const;
	void setPrimaryImageAspectRatio(double newPrimaryImageAspectRatio);
	
signals:
	void nameChanged(QString newName);
	void serverIdChanged(QString newServerId);
	void serverNameChanged(QString newServerName);
	void jellyfinIdChanged(QString newJellyfinId);
	void primaryImageTagChanged(QString newPrimaryImageTag);
	void hasPasswordChanged(bool newHasPassword);
	void hasConfiguredPasswordChanged(bool newHasConfiguredPassword);
	void hasConfiguredEasyPasswordChanged(bool newHasConfiguredEasyPassword);
	void enableAutoLoginChanged(bool newEnableAutoLogin);
	void lastLoginDateChanged(QDateTime newLastLoginDate);
	void lastActivityDateChanged(QDateTime newLastActivityDate);
	void configurationChanged(UserConfiguration * newConfiguration);
	void policyChanged(UserPolicy * newPolicy);
	void primaryImageAspectRatioChanged(double newPrimaryImageAspectRatio);
protected:
	QString m_name;
	QString m_serverId;
	QString m_serverName;
	QString m_jellyfinId;
	QString m_primaryImageTag;
	bool m_hasPassword;
	bool m_hasConfiguredPassword;
	bool m_hasConfiguredEasyPassword;
	bool m_enableAutoLogin;
	QDateTime m_lastLoginDate;
	QDateTime m_lastActivityDate;
	UserConfiguration * m_configuration = nullptr;
	UserPolicy * m_policy = nullptr;
	double m_primaryImageAspectRatio;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_USERDTO_H

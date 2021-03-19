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

#ifndef JELLYFIN_DTO_AUTHENTICATEUSERBYNAME_H
#define JELLYFIN_DTO_AUTHENTICATEUSERBYNAME_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class AuthenticateUserByName : public QObject {
	Q_OBJECT
public:
	explicit AuthenticateUserByName(QObject *parent = nullptr);
	static AuthenticateUserByName *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the username.
	 */
	Q_PROPERTY(QString username READ username WRITE setUsername NOTIFY usernameChanged)
	/**
	 * @brief Gets or sets the plain text password.
	 */
	Q_PROPERTY(QString pw READ pw WRITE setPw NOTIFY pwChanged)
	/**
	 * @brief Gets or sets the sha1-hashed password.
	 */
	Q_PROPERTY(QString password READ password WRITE setPassword NOTIFY passwordChanged)

	QString username() const;
	void setUsername(QString newUsername);
	
	QString pw() const;
	void setPw(QString newPw);
	
	QString password() const;
	void setPassword(QString newPassword);
	
signals:
	void usernameChanged(QString newUsername);
	void pwChanged(QString newPw);
	void passwordChanged(QString newPassword);
protected:
	QString m_username;
	QString m_pw;
	QString m_password;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_AUTHENTICATEUSERBYNAME_H

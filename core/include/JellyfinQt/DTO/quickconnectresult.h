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

#ifndef JELLYFIN_DTO_QUICKCONNECTRESULT_H
#define JELLYFIN_DTO_QUICKCONNECTRESULT_H

#include <QDateTime>
#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class QuickConnectResult : public QObject {
	Q_OBJECT
public:
	explicit QuickConnectResult(QObject *parent = nullptr);
	static QuickConnectResult *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets a value indicating whether this request is authorized.
	 */
	Q_PROPERTY(bool authenticated READ authenticated WRITE setAuthenticated NOTIFY authenticatedChanged)
	/**
	 * @brief Gets or sets the secret value used to uniquely identify this request. Can be used to retrieve authentication information.
	 */
	Q_PROPERTY(QString secret READ secret WRITE setSecret NOTIFY secretChanged)
	/**
	 * @brief Gets or sets the user facing code used so the user can quickly differentiate this request from others.
	 */
	Q_PROPERTY(QString code READ code WRITE setCode NOTIFY codeChanged)
	/**
	 * @brief Gets or sets the private access token.
	 */
	Q_PROPERTY(QString authentication READ authentication WRITE setAuthentication NOTIFY authenticationChanged)
	/**
	 * @brief Gets or sets an error message.
	 */
	Q_PROPERTY(QString error READ error WRITE setError NOTIFY errorChanged)
	/**
	 * @brief Gets or sets the DateTime that this request was created.
	 */
	Q_PROPERTY(QDateTime dateAdded READ dateAdded WRITE setDateAdded NOTIFY dateAddedChanged)

	bool authenticated() const;
	void setAuthenticated(bool newAuthenticated);
	
	QString secret() const;
	void setSecret(QString newSecret);
	
	QString code() const;
	void setCode(QString newCode);
	
	QString authentication() const;
	void setAuthentication(QString newAuthentication);
	
	QString error() const;
	void setError(QString newError);
	
	QDateTime dateAdded() const;
	void setDateAdded(QDateTime newDateAdded);
	
signals:
	void authenticatedChanged(bool newAuthenticated);
	void secretChanged(QString newSecret);
	void codeChanged(QString newCode);
	void authenticationChanged(QString newAuthentication);
	void errorChanged(QString newError);
	void dateAddedChanged(QDateTime newDateAdded);
protected:
	bool m_authenticated;
	QString m_secret;
	QString m_code;
	QString m_authentication;
	QString m_error;
	QDateTime m_dateAdded;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_QUICKCONNECTRESULT_H

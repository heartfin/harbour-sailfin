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

#ifndef JELLYFIN_DTO_SESSIONUSERINFO_H
#define JELLYFIN_DTO_SESSIONUSERINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class SessionUserInfo : public QObject {
	Q_OBJECT
public:
	explicit SessionUserInfo(QObject *parent = nullptr);
	static SessionUserInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the user identifier.
	 */
	Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)
	/**
	 * @brief Gets or sets the name of the user.
	 */
	Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)

	QString userId() const;
	void setUserId(QString newUserId);
	
	QString userName() const;
	void setUserName(QString newUserName);
	
signals:
	void userIdChanged(QString newUserId);
	void userNameChanged(QString newUserName);
protected:
	QString m_userId;
	QString m_userName;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_SESSIONUSERINFO_H

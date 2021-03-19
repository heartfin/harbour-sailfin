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

#ifndef JELLYFIN_DTO_NOTIFICATIONDTO_H
#define JELLYFIN_DTO_NOTIFICATIONDTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/notificationlevel.h"

namespace Jellyfin {
namespace DTO {

class NotificationDto : public QObject {
	Q_OBJECT
public:
	explicit NotificationDto(QObject *parent = nullptr);
	static NotificationDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the notification ID. Defaults to an empty string.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the notification's user ID. Defaults to an empty string.
	 */
	Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)
	/**
	 * @brief Gets or sets the notification date.
	 */
	Q_PROPERTY(QDateTime date READ date WRITE setDate NOTIFY dateChanged)
	/**
	 * @brief Gets or sets a value indicating whether the notification has been read. Defaults to false.
	 */
	Q_PROPERTY(bool isRead READ isRead WRITE setIsRead NOTIFY isReadChanged)
	/**
	 * @brief Gets or sets the notification's name. Defaults to an empty string.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the notification's description. Defaults to an empty string.
	 */
	Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
	/**
	 * @brief Gets or sets the notification's URL. Defaults to an empty string.
	 */
	Q_PROPERTY(QString url READ url WRITE setUrl NOTIFY urlChanged)
	Q_PROPERTY(NotificationLevel level READ level WRITE setLevel NOTIFY levelChanged)

	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString userId() const;
	void setUserId(QString newUserId);
	
	QDateTime date() const;
	void setDate(QDateTime newDate);
	
	bool isRead() const;
	void setIsRead(bool newIsRead);
	
	QString name() const;
	void setName(QString newName);
	
	QString description() const;
	void setDescription(QString newDescription);
	
	QString url() const;
	void setUrl(QString newUrl);
	
	NotificationLevel level() const;
	void setLevel(NotificationLevel newLevel);
	
signals:
	void jellyfinIdChanged(QString newJellyfinId);
	void userIdChanged(QString newUserId);
	void dateChanged(QDateTime newDate);
	void isReadChanged(bool newIsRead);
	void nameChanged(QString newName);
	void descriptionChanged(QString newDescription);
	void urlChanged(QString newUrl);
	void levelChanged(NotificationLevel newLevel);
protected:
	QString m_jellyfinId;
	QString m_userId;
	QDateTime m_date;
	bool m_isRead;
	QString m_name;
	QString m_description;
	QString m_url;
	NotificationLevel m_level;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_NOTIFICATIONDTO_H

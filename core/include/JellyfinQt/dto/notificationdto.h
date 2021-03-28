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
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/notificationlevel.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class NotificationDto {
public:
	NotificationDto();
	NotificationDto(const NotificationDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(NotificationDto &other);
	
	static NotificationDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the notification ID. Defaults to an empty string.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the notification ID. Defaults to an empty string.
	*/
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();

	/**
	 * @brief Gets or sets the notification's user ID. Defaults to an empty string.
	 */
	QString userId() const;
	/**
	* @brief Gets or sets the notification's user ID. Defaults to an empty string.
	*/
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();

	/**
	 * @brief Gets or sets the notification date.
	 */
	QDateTime date() const;
	/**
	* @brief Gets or sets the notification date.
	*/
	void setDate(QDateTime newDate);

	/**
	 * @brief Gets or sets a value indicating whether the notification has been read. Defaults to false.
	 */
	bool isRead() const;
	/**
	* @brief Gets or sets a value indicating whether the notification has been read. Defaults to false.
	*/
	void setIsRead(bool newIsRead);

	/**
	 * @brief Gets or sets the notification's name. Defaults to an empty string.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the notification's name. Defaults to an empty string.
	*/
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

	/**
	 * @brief Gets or sets the notification's description. Defaults to an empty string.
	 */
	QString description() const;
	/**
	* @brief Gets or sets the notification's description. Defaults to an empty string.
	*/
	void setDescription(QString newDescription);
	bool descriptionNull() const;
	void setDescriptionNull();

	/**
	 * @brief Gets or sets the notification's URL. Defaults to an empty string.
	 */
	QString url() const;
	/**
	* @brief Gets or sets the notification's URL. Defaults to an empty string.
	*/
	void setUrl(QString newUrl);
	bool urlNull() const;
	void setUrlNull();


	NotificationLevel level() const;

	void setLevel(NotificationLevel newLevel);


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

} // NS DTO

namespace Support {

using NotificationDto = Jellyfin::DTO::NotificationDto;

template <>
NotificationDto fromJsonValue(const QJsonValue &source, convertType<NotificationDto>);

template<>
QJsonValue toJsonValue(const NotificationDto &source, convertType<NotificationDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_NOTIFICATIONDTO_H

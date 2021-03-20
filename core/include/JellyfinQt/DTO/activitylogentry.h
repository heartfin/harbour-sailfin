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

#ifndef JELLYFIN_DTO_ACTIVITYLOGENTRY_H
#define JELLYFIN_DTO_ACTIVITYLOGENTRY_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/loglevel.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class ActivityLogEntry {
public:
	explicit ActivityLogEntry();
	static ActivityLogEntry fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the identifier.
	 */
	qint64 jellyfinId() const;
	/**
	* @brief Gets or sets the identifier.
	*/
	void setJellyfinId(qint64 newJellyfinId);
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	/**
	 * @brief Gets or sets the overview.
	 */
	QString overview() const;
	/**
	* @brief Gets or sets the overview.
	*/
	void setOverview(QString newOverview);
	/**
	 * @brief Gets or sets the short overview.
	 */
	QString shortOverview() const;
	/**
	* @brief Gets or sets the short overview.
	*/
	void setShortOverview(QString newShortOverview);
	/**
	 * @brief Gets or sets the type.
	 */
	QString type() const;
	/**
	* @brief Gets or sets the type.
	*/
	void setType(QString newType);
	/**
	 * @brief Gets or sets the item identifier.
	 */
	QString itemId() const;
	/**
	* @brief Gets or sets the item identifier.
	*/
	void setItemId(QString newItemId);
	/**
	 * @brief Gets or sets the date.
	 */
	QDateTime date() const;
	/**
	* @brief Gets or sets the date.
	*/
	void setDate(QDateTime newDate);
	/**
	 * @brief Gets or sets the user identifier.
	 */
	QUuid userId() const;
	/**
	* @brief Gets or sets the user identifier.
	*/
	void setUserId(QUuid newUserId);
	/**
	 * @brief Gets or sets the user primary image tag.
	 */
	QString userPrimaryImageTag() const;
	/**
	* @brief Gets or sets the user primary image tag.
	*/
	void setUserPrimaryImageTag(QString newUserPrimaryImageTag);

	LogLevel severity() const;

	void setSeverity(LogLevel newSeverity);

protected:
	qint64 m_jellyfinId;
	QString m_name;
	QString m_overview;
	QString m_shortOverview;
	QString m_type;
	QString m_itemId;
	QDateTime m_date;
	QUuid m_userId;
	QString m_userPrimaryImageTag;
	LogLevel m_severity;
};

} // NS DTO

namespace Support {

using ActivityLogEntry = Jellyfin::DTO::ActivityLogEntry;

template <>
ActivityLogEntry fromJsonValue<ActivityLogEntry>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ActivityLogEntry::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_ACTIVITYLOGENTRY_H

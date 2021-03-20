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

#ifndef JELLYFIN_DTO_TASKRESULT_H
#define JELLYFIN_DTO_TASKRESULT_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/DTO/taskcompletionstatus.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class TaskResult {
public:
	explicit TaskResult();
	static TaskResult fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the start time UTC.
	 */
	QDateTime startTimeUtc() const;
	/**
	* @brief Gets or sets the start time UTC.
	*/
	void setStartTimeUtc(QDateTime newStartTimeUtc);
	/**
	 * @brief Gets or sets the end time UTC.
	 */
	QDateTime endTimeUtc() const;
	/**
	* @brief Gets or sets the end time UTC.
	*/
	void setEndTimeUtc(QDateTime newEndTimeUtc);

	TaskCompletionStatus status() const;

	void setStatus(TaskCompletionStatus newStatus);
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	/**
	 * @brief Gets or sets the key.
	 */
	QString key() const;
	/**
	* @brief Gets or sets the key.
	*/
	void setKey(QString newKey);
	/**
	 * @brief Gets or sets the id.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the id.
	*/
	void setJellyfinId(QString newJellyfinId);
	/**
	 * @brief Gets or sets the error message.
	 */
	QString errorMessage() const;
	/**
	* @brief Gets or sets the error message.
	*/
	void setErrorMessage(QString newErrorMessage);
	/**
	 * @brief Gets or sets the long error message.
	 */
	QString longErrorMessage() const;
	/**
	* @brief Gets or sets the long error message.
	*/
	void setLongErrorMessage(QString newLongErrorMessage);

protected:
	QDateTime m_startTimeUtc;
	QDateTime m_endTimeUtc;
	TaskCompletionStatus m_status;
	QString m_name;
	QString m_key;
	QString m_jellyfinId;
	QString m_errorMessage;
	QString m_longErrorMessage;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TASKRESULT_H

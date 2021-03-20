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

#ifndef JELLYFIN_DTO_TASKINFO_H
#define JELLYFIN_DTO_TASKINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/taskresult.h"
#include "JellyfinQt/DTO/taskstate.h"
#include "JellyfinQt/DTO/tasktriggerinfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class TaskInfo {
public:
	explicit TaskInfo();
	static TaskInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);

	TaskState state() const;

	void setState(TaskState newState);
	/**
	 * @brief Gets or sets the progress.
	 */
	double currentProgressPercentage() const;
	/**
	* @brief Gets or sets the progress.
	*/
	void setCurrentProgressPercentage(double newCurrentProgressPercentage);
	/**
	 * @brief Gets or sets the id.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the id.
	*/
	void setJellyfinId(QString newJellyfinId);

	QSharedPointer<TaskResult> lastExecutionResult() const;

	void setLastExecutionResult(QSharedPointer<TaskResult> newLastExecutionResult);
	/**
	 * @brief Gets or sets the triggers.
	 */
	QList<QSharedPointer<TaskTriggerInfo>> triggers() const;
	/**
	* @brief Gets or sets the triggers.
	*/
	void setTriggers(QList<QSharedPointer<TaskTriggerInfo>> newTriggers);
	/**
	 * @brief Gets or sets the description.
	 */
	QString description() const;
	/**
	* @brief Gets or sets the description.
	*/
	void setDescription(QString newDescription);
	/**
	 * @brief Gets or sets the category.
	 */
	QString category() const;
	/**
	* @brief Gets or sets the category.
	*/
	void setCategory(QString newCategory);
	/**
	 * @brief Gets or sets a value indicating whether this instance is hidden.
	 */
	bool isHidden() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is hidden.
	*/
	void setIsHidden(bool newIsHidden);
	/**
	 * @brief Gets or sets the key.
	 */
	QString key() const;
	/**
	* @brief Gets or sets the key.
	*/
	void setKey(QString newKey);

protected:
	QString m_name;
	TaskState m_state;
	double m_currentProgressPercentage;
	QString m_jellyfinId;
	QSharedPointer<TaskResult> m_lastExecutionResult = nullptr;
	QList<QSharedPointer<TaskTriggerInfo>> m_triggers;
	QString m_description;
	QString m_category;
	bool m_isHidden;
	QString m_key;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TASKINFO_H

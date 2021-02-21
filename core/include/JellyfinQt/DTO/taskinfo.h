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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/taskstate.h"

namespace Jellyfin {
namespace DTO {

class TaskResult;
class TaskTriggerInfo;

class TaskInfo : public QObject {
	Q_OBJECT
public:
	explicit TaskInfo(QObject *parent = nullptr);
	static TaskInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	Q_PROPERTY(TaskState state READ state WRITE setState NOTIFY stateChanged)
	/**
	 * @brief Gets or sets the progress.
	 */
	Q_PROPERTY(double currentProgressPercentage READ currentProgressPercentage WRITE setCurrentProgressPercentage NOTIFY currentProgressPercentageChanged)
	/**
	 * @brief Gets or sets the id.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	Q_PROPERTY(TaskResult * lastExecutionResult READ lastExecutionResult WRITE setLastExecutionResult NOTIFY lastExecutionResultChanged)
	/**
	 * @brief Gets or sets the triggers.
	 */
	Q_PROPERTY(QList<TaskTriggerInfo *> triggers READ triggers WRITE setTriggers NOTIFY triggersChanged)
	/**
	 * @brief Gets or sets the description.
	 */
	Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
	/**
	 * @brief Gets or sets the category.
	 */
	Q_PROPERTY(QString category READ category WRITE setCategory NOTIFY categoryChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is hidden.
	 */
	Q_PROPERTY(bool isHidden READ isHidden WRITE setIsHidden NOTIFY isHiddenChanged)
	/**
	 * @brief Gets or sets the key.
	 */
	Q_PROPERTY(QString key READ key WRITE setKey NOTIFY keyChanged)

	QString name() const;
	void setName(QString newName);
	
	TaskState state() const;
	void setState(TaskState newState);
	
	double currentProgressPercentage() const;
	void setCurrentProgressPercentage(double newCurrentProgressPercentage);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	TaskResult * lastExecutionResult() const;
	void setLastExecutionResult(TaskResult * newLastExecutionResult);
	
	QList<TaskTriggerInfo *> triggers() const;
	void setTriggers(QList<TaskTriggerInfo *> newTriggers);
	
	QString description() const;
	void setDescription(QString newDescription);
	
	QString category() const;
	void setCategory(QString newCategory);
	
	bool isHidden() const;
	void setIsHidden(bool newIsHidden);
	
	QString key() const;
	void setKey(QString newKey);
	
signals:
	void nameChanged(QString newName);
	void stateChanged(TaskState newState);
	void currentProgressPercentageChanged(double newCurrentProgressPercentage);
	void jellyfinIdChanged(QString newJellyfinId);
	void lastExecutionResultChanged(TaskResult * newLastExecutionResult);
	void triggersChanged(QList<TaskTriggerInfo *> newTriggers);
	void descriptionChanged(QString newDescription);
	void categoryChanged(QString newCategory);
	void isHiddenChanged(bool newIsHidden);
	void keyChanged(QString newKey);
protected:
	QString m_name;
	TaskState m_state;
	double m_currentProgressPercentage;
	QString m_jellyfinId;
	TaskResult * m_lastExecutionResult = nullptr;
	QList<TaskTriggerInfo *> m_triggers;
	QString m_description;
	QString m_category;
	bool m_isHidden;
	QString m_key;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TASKINFO_H

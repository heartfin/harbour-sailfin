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

#include <JellyfinQt/DTO/taskinfo.h>

namespace Jellyfin {
namespace DTO {

TaskInfo::TaskInfo(QObject *parent) {}

TaskInfo TaskInfo::fromJson(QJsonObject source) {TaskInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void TaskInfo::setFromJson(QJsonObject source) {
	m_name = fromJsonValue<QString>(source["Name"]);
	m_state = fromJsonValue<TaskState>(source["State"]);
	m_currentProgressPercentage = fromJsonValue<double>(source["CurrentProgressPercentage"]);
	m_jellyfinId = fromJsonValue<QString>(source["Id"]);
	m_lastExecutionResult = fromJsonValue<QSharedPointer<TaskResult>>(source["LastExecutionResult"]);
	m_triggers = fromJsonValue<QList<QSharedPointer<TaskTriggerInfo>>>(source["Triggers"]);
	m_description = fromJsonValue<QString>(source["Description"]);
	m_category = fromJsonValue<QString>(source["Category"]);
	m_isHidden = fromJsonValue<bool>(source["IsHidden"]);
	m_key = fromJsonValue<QString>(source["Key"]);

}
	
QJsonObject TaskInfo::toJson() {
	QJsonObject result;
	result["Name"] = toJsonValue<QString>(m_name);
	result["State"] = toJsonValue<TaskState>(m_state);
	result["CurrentProgressPercentage"] = toJsonValue<double>(m_currentProgressPercentage);
	result["Id"] = toJsonValue<QString>(m_jellyfinId);
	result["LastExecutionResult"] = toJsonValue<QSharedPointer<TaskResult>>(m_lastExecutionResult);
	result["Triggers"] = toJsonValue<QList<QSharedPointer<TaskTriggerInfo>>>(m_triggers);
	result["Description"] = toJsonValue<QString>(m_description);
	result["Category"] = toJsonValue<QString>(m_category);
	result["IsHidden"] = toJsonValue<bool>(m_isHidden);
	result["Key"] = toJsonValue<QString>(m_key);

	return result;
}

QString TaskInfo::name() const { return m_name; }

void TaskInfo::setName(QString newName) {
	m_name = newName;
}
TaskState TaskInfo::state() const { return m_state; }

void TaskInfo::setState(TaskState newState) {
	m_state = newState;
}
double TaskInfo::currentProgressPercentage() const { return m_currentProgressPercentage; }

void TaskInfo::setCurrentProgressPercentage(double newCurrentProgressPercentage) {
	m_currentProgressPercentage = newCurrentProgressPercentage;
}
QString TaskInfo::jellyfinId() const { return m_jellyfinId; }

void TaskInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QSharedPointer<TaskResult> TaskInfo::lastExecutionResult() const { return m_lastExecutionResult; }

void TaskInfo::setLastExecutionResult(QSharedPointer<TaskResult> newLastExecutionResult) {
	m_lastExecutionResult = newLastExecutionResult;
}
QList<QSharedPointer<TaskTriggerInfo>> TaskInfo::triggers() const { return m_triggers; }

void TaskInfo::setTriggers(QList<QSharedPointer<TaskTriggerInfo>> newTriggers) {
	m_triggers = newTriggers;
}
QString TaskInfo::description() const { return m_description; }

void TaskInfo::setDescription(QString newDescription) {
	m_description = newDescription;
}
QString TaskInfo::category() const { return m_category; }

void TaskInfo::setCategory(QString newCategory) {
	m_category = newCategory;
}
bool TaskInfo::isHidden() const { return m_isHidden; }

void TaskInfo::setIsHidden(bool newIsHidden) {
	m_isHidden = newIsHidden;
}
QString TaskInfo::key() const { return m_key; }

void TaskInfo::setKey(QString newKey) {
	m_key = newKey;
}


} // NS Jellyfin
} // NS DTO

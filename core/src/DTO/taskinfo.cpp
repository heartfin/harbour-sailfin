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

#include <JellyfinQt/DTO/taskstate.h>

namespace Jellyfin {
namespace DTO {

TaskInfo::TaskInfo(QObject *parent) : QObject(parent) {}

TaskInfo *TaskInfo::fromJSON(QJsonObject source, QObject *parent) {
	TaskInfo *instance = new TaskInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void TaskInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject TaskInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString TaskInfo::name() const { return m_name; }
void TaskInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

TaskState TaskInfo::state() const { return m_state; }
void TaskInfo::setState(TaskState newState) {
	m_state = newState;
	emit stateChanged(newState);
}

double TaskInfo::currentProgressPercentage() const { return m_currentProgressPercentage; }
void TaskInfo::setCurrentProgressPercentage(double newCurrentProgressPercentage) {
	m_currentProgressPercentage = newCurrentProgressPercentage;
	emit currentProgressPercentageChanged(newCurrentProgressPercentage);
}

QString TaskInfo::jellyfinId() const { return m_jellyfinId; }
void TaskInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

TaskResult * TaskInfo::lastExecutionResult() const { return m_lastExecutionResult; }
void TaskInfo::setLastExecutionResult(TaskResult * newLastExecutionResult) {
	m_lastExecutionResult = newLastExecutionResult;
	emit lastExecutionResultChanged(newLastExecutionResult);
}

QList<TaskTriggerInfo *> TaskInfo::triggers() const { return m_triggers; }
void TaskInfo::setTriggers(QList<TaskTriggerInfo *> newTriggers) {
	m_triggers = newTriggers;
	emit triggersChanged(newTriggers);
}

QString TaskInfo::description() const { return m_description; }
void TaskInfo::setDescription(QString newDescription) {
	m_description = newDescription;
	emit descriptionChanged(newDescription);
}

QString TaskInfo::category() const { return m_category; }
void TaskInfo::setCategory(QString newCategory) {
	m_category = newCategory;
	emit categoryChanged(newCategory);
}

bool TaskInfo::isHidden() const { return m_isHidden; }
void TaskInfo::setIsHidden(bool newIsHidden) {
	m_isHidden = newIsHidden;
	emit isHiddenChanged(newIsHidden);
}

QString TaskInfo::key() const { return m_key; }
void TaskInfo::setKey(QString newKey) {
	m_key = newKey;
	emit keyChanged(newKey);
}


} // NS Jellyfin
} // NS DTO

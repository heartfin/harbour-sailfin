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

#include <JellyfinQt/dto/taskinfo.h>

namespace Jellyfin {
namespace DTO {

TaskInfo::TaskInfo() {}

TaskInfo::TaskInfo(const TaskInfo &other) :

	m_name(other.m_name),
	m_state(other.m_state),
	m_currentProgressPercentage(other.m_currentProgressPercentage),
	m_jellyfinId(other.m_jellyfinId),
	m_lastExecutionResult(other.m_lastExecutionResult),
	m_triggers(other.m_triggers),
	m_description(other.m_description),
	m_category(other.m_category),
	m_isHidden(other.m_isHidden),
	m_key(other.m_key){}


void TaskInfo::replaceData(TaskInfo &other) {
	m_name = other.m_name;
	m_state = other.m_state;
	m_currentProgressPercentage = other.m_currentProgressPercentage;
	m_jellyfinId = other.m_jellyfinId;
	m_lastExecutionResult = other.m_lastExecutionResult;
	m_triggers = other.m_triggers;
	m_description = other.m_description;
	m_category = other.m_category;
	m_isHidden = other.m_isHidden;
	m_key = other.m_key;
}

TaskInfo TaskInfo::fromJson(QJsonObject source) {
	TaskInfo instance;
	instance.setFromJson(source);
	return instance;
}


void TaskInfo::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_state = Jellyfin::Support::fromJsonValue<TaskState>(source["State"]);
	m_currentProgressPercentage = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["CurrentProgressPercentage"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_lastExecutionResult = Jellyfin::Support::fromJsonValue<QSharedPointer<TaskResult>>(source["LastExecutionResult"]);
	m_triggers = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<TaskTriggerInfo>>>(source["Triggers"]);
	m_description = Jellyfin::Support::fromJsonValue<QString>(source["Description"]);
	m_category = Jellyfin::Support::fromJsonValue<QString>(source["Category"]);
	m_isHidden = Jellyfin::Support::fromJsonValue<bool>(source["IsHidden"]);
	m_key = Jellyfin::Support::fromJsonValue<QString>(source["Key"]);

}
	
QJsonObject TaskInfo::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["State"] = Jellyfin::Support::toJsonValue<TaskState>(m_state);
	result["CurrentProgressPercentage"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_currentProgressPercentage);
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["LastExecutionResult"] = Jellyfin::Support::toJsonValue<QSharedPointer<TaskResult>>(m_lastExecutionResult);
	result["Triggers"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<TaskTriggerInfo>>>(m_triggers);
	result["Description"] = Jellyfin::Support::toJsonValue<QString>(m_description);
	result["Category"] = Jellyfin::Support::toJsonValue<QString>(m_category);
	result["IsHidden"] = Jellyfin::Support::toJsonValue<bool>(m_isHidden);
	result["Key"] = Jellyfin::Support::toJsonValue<QString>(m_key);

	return result;
}

QString TaskInfo::name() const { return m_name; }

void TaskInfo::setName(QString newName) {
	m_name = newName;
}
bool TaskInfo::nameNull() const {
	return m_name.isNull();
}

void TaskInfo::setNameNull() {
	m_name.clear();

}
TaskState TaskInfo::state() const { return m_state; }

void TaskInfo::setState(TaskState newState) {
	m_state = newState;
}

std::optional<double> TaskInfo::currentProgressPercentage() const { return m_currentProgressPercentage; }

void TaskInfo::setCurrentProgressPercentage(std::optional<double> newCurrentProgressPercentage) {
	m_currentProgressPercentage = newCurrentProgressPercentage;
}
bool TaskInfo::currentProgressPercentageNull() const {
	return !m_currentProgressPercentage.has_value();
}

void TaskInfo::setCurrentProgressPercentageNull() {
	m_currentProgressPercentage = std::nullopt;

}
QString TaskInfo::jellyfinId() const { return m_jellyfinId; }

void TaskInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool TaskInfo::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void TaskInfo::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QSharedPointer<TaskResult> TaskInfo::lastExecutionResult() const { return m_lastExecutionResult; }

void TaskInfo::setLastExecutionResult(QSharedPointer<TaskResult> newLastExecutionResult) {
	m_lastExecutionResult = newLastExecutionResult;
}

QList<QSharedPointer<TaskTriggerInfo>> TaskInfo::triggers() const { return m_triggers; }

void TaskInfo::setTriggers(QList<QSharedPointer<TaskTriggerInfo>> newTriggers) {
	m_triggers = newTriggers;
}
bool TaskInfo::triggersNull() const {
	return m_triggers.size() == 0;
}

void TaskInfo::setTriggersNull() {
	m_triggers.clear();

}
QString TaskInfo::description() const { return m_description; }

void TaskInfo::setDescription(QString newDescription) {
	m_description = newDescription;
}
bool TaskInfo::descriptionNull() const {
	return m_description.isNull();
}

void TaskInfo::setDescriptionNull() {
	m_description.clear();

}
QString TaskInfo::category() const { return m_category; }

void TaskInfo::setCategory(QString newCategory) {
	m_category = newCategory;
}
bool TaskInfo::categoryNull() const {
	return m_category.isNull();
}

void TaskInfo::setCategoryNull() {
	m_category.clear();

}
bool TaskInfo::isHidden() const { return m_isHidden; }

void TaskInfo::setIsHidden(bool newIsHidden) {
	m_isHidden = newIsHidden;
}

QString TaskInfo::key() const { return m_key; }

void TaskInfo::setKey(QString newKey) {
	m_key = newKey;
}
bool TaskInfo::keyNull() const {
	return m_key.isNull();
}

void TaskInfo::setKeyNull() {
	m_key.clear();

}

} // NS DTO

namespace Support {

using TaskInfo = Jellyfin::DTO::TaskInfo;

template <>
TaskInfo fromJsonValue<TaskInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return TaskInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

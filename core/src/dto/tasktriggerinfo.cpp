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

#include <JellyfinQt/dto/tasktriggerinfo.h>

namespace Jellyfin {
namespace DTO {

TaskTriggerInfo::TaskTriggerInfo() {}

TaskTriggerInfo::TaskTriggerInfo(const TaskTriggerInfo &other) :

	m_type(other.m_type),
	m_timeOfDayTicks(other.m_timeOfDayTicks),
	m_intervalTicks(other.m_intervalTicks),
	m_dayOfWeek(other.m_dayOfWeek),
	m_maxRuntimeTicks(other.m_maxRuntimeTicks){}


void TaskTriggerInfo::replaceData(TaskTriggerInfo &other) {
	m_type = other.m_type;
	m_timeOfDayTicks = other.m_timeOfDayTicks;
	m_intervalTicks = other.m_intervalTicks;
	m_dayOfWeek = other.m_dayOfWeek;
	m_maxRuntimeTicks = other.m_maxRuntimeTicks;
}

TaskTriggerInfo TaskTriggerInfo::fromJson(QJsonObject source) {
	TaskTriggerInfo instance;
	instance.setFromJson(source);
	return instance;
}


void TaskTriggerInfo::setFromJson(QJsonObject source) {
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_timeOfDayTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["TimeOfDayTicks"]);
	m_intervalTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["IntervalTicks"]);
	m_dayOfWeek = Jellyfin::Support::fromJsonValue<DayOfWeek>(source["DayOfWeek"]);
	m_maxRuntimeTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["MaxRuntimeTicks"]);

}
	
QJsonObject TaskTriggerInfo::toJson() const {
	QJsonObject result;
	result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	result["TimeOfDayTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_timeOfDayTicks);
	result["IntervalTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_intervalTicks);
	result["DayOfWeek"] = Jellyfin::Support::toJsonValue<DayOfWeek>(m_dayOfWeek);
	result["MaxRuntimeTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_maxRuntimeTicks);

	return result;
}

QString TaskTriggerInfo::type() const { return m_type; }

void TaskTriggerInfo::setType(QString newType) {
	m_type = newType;
}
bool TaskTriggerInfo::typeNull() const {
	return m_type.isNull();
}

void TaskTriggerInfo::setTypeNull() {
	m_type.clear();

}
std::optional<qint64> TaskTriggerInfo::timeOfDayTicks() const { return m_timeOfDayTicks; }

void TaskTriggerInfo::setTimeOfDayTicks(std::optional<qint64> newTimeOfDayTicks) {
	m_timeOfDayTicks = newTimeOfDayTicks;
}
bool TaskTriggerInfo::timeOfDayTicksNull() const {
	return !m_timeOfDayTicks.has_value();
}

void TaskTriggerInfo::setTimeOfDayTicksNull() {
	m_timeOfDayTicks = std::nullopt;

}
std::optional<qint64> TaskTriggerInfo::intervalTicks() const { return m_intervalTicks; }

void TaskTriggerInfo::setIntervalTicks(std::optional<qint64> newIntervalTicks) {
	m_intervalTicks = newIntervalTicks;
}
bool TaskTriggerInfo::intervalTicksNull() const {
	return !m_intervalTicks.has_value();
}

void TaskTriggerInfo::setIntervalTicksNull() {
	m_intervalTicks = std::nullopt;

}
DayOfWeek TaskTriggerInfo::dayOfWeek() const { return m_dayOfWeek; }

void TaskTriggerInfo::setDayOfWeek(DayOfWeek newDayOfWeek) {
	m_dayOfWeek = newDayOfWeek;
}

std::optional<qint64> TaskTriggerInfo::maxRuntimeTicks() const { return m_maxRuntimeTicks; }

void TaskTriggerInfo::setMaxRuntimeTicks(std::optional<qint64> newMaxRuntimeTicks) {
	m_maxRuntimeTicks = newMaxRuntimeTicks;
}
bool TaskTriggerInfo::maxRuntimeTicksNull() const {
	return !m_maxRuntimeTicks.has_value();
}

void TaskTriggerInfo::setMaxRuntimeTicksNull() {
	m_maxRuntimeTicks = std::nullopt;

}

} // NS DTO

namespace Support {

using TaskTriggerInfo = Jellyfin::DTO::TaskTriggerInfo;

template <>
TaskTriggerInfo fromJsonValue(const QJsonValue &source, convertType<TaskTriggerInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return TaskTriggerInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const TaskTriggerInfo &source, convertType<TaskTriggerInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

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

#ifndef JELLYFIN_DTO_TASKTRIGGERINFO_H
#define JELLYFIN_DTO_TASKTRIGGERINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/dayofweek.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class TaskTriggerInfo {
public:
	TaskTriggerInfo();
	TaskTriggerInfo(const TaskTriggerInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(TaskTriggerInfo &other);
	
	static TaskTriggerInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the type.
	 */
	QString type() const;
	/**
	* @brief Gets or sets the type.
	*/
	void setType(QString newType);
	bool typeNull() const;
	void setTypeNull();

	/**
	 * @brief Gets or sets the time of day.
	 */
	std::optional<qint64> timeOfDayTicks() const;
	/**
	* @brief Gets or sets the time of day.
	*/
	void setTimeOfDayTicks(std::optional<qint64> newTimeOfDayTicks);
	bool timeOfDayTicksNull() const;
	void setTimeOfDayTicksNull();

	/**
	 * @brief Gets or sets the interval.
	 */
	std::optional<qint64> intervalTicks() const;
	/**
	* @brief Gets or sets the interval.
	*/
	void setIntervalTicks(std::optional<qint64> newIntervalTicks);
	bool intervalTicksNull() const;
	void setIntervalTicksNull();


	DayOfWeek dayOfWeek() const;

	void setDayOfWeek(DayOfWeek newDayOfWeek);

	/**
	 * @brief Gets or sets the maximum runtime ticks.
	 */
	std::optional<qint64> maxRuntimeTicks() const;
	/**
	* @brief Gets or sets the maximum runtime ticks.
	*/
	void setMaxRuntimeTicks(std::optional<qint64> newMaxRuntimeTicks);
	bool maxRuntimeTicksNull() const;
	void setMaxRuntimeTicksNull();


protected:
	QString m_type;
	std::optional<qint64> m_timeOfDayTicks = std::nullopt;
	std::optional<qint64> m_intervalTicks = std::nullopt;
	DayOfWeek m_dayOfWeek;
	std::optional<qint64> m_maxRuntimeTicks = std::nullopt;
};

} // NS DTO

namespace Support {

using TaskTriggerInfo = Jellyfin::DTO::TaskTriggerInfo;

template <>
TaskTriggerInfo fromJsonValue(const QJsonValue &source, convertType<TaskTriggerInfo>);

template<>
QJsonValue toJsonValue(const TaskTriggerInfo &source, convertType<TaskTriggerInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_TASKTRIGGERINFO_H

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
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/dayofweek.h"

namespace Jellyfin {
namespace DTO {

class TaskTriggerInfo : public QObject {
	Q_OBJECT
public:
	explicit TaskTriggerInfo(QObject *parent = nullptr);
	static TaskTriggerInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the type.
	 */
	Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
	/**
	 * @brief Gets or sets the time of day.
	 */
	Q_PROPERTY(qint64 timeOfDayTicks READ timeOfDayTicks WRITE setTimeOfDayTicks NOTIFY timeOfDayTicksChanged)
	/**
	 * @brief Gets or sets the interval.
	 */
	Q_PROPERTY(qint64 intervalTicks READ intervalTicks WRITE setIntervalTicks NOTIFY intervalTicksChanged)
	Q_PROPERTY(DayOfWeek dayOfWeek READ dayOfWeek WRITE setDayOfWeek NOTIFY dayOfWeekChanged)
	/**
	 * @brief Gets or sets the maximum runtime ticks.
	 */
	Q_PROPERTY(qint64 maxRuntimeTicks READ maxRuntimeTicks WRITE setMaxRuntimeTicks NOTIFY maxRuntimeTicksChanged)

	QString type() const;
	void setType(QString newType);
	
	qint64 timeOfDayTicks() const;
	void setTimeOfDayTicks(qint64 newTimeOfDayTicks);
	
	qint64 intervalTicks() const;
	void setIntervalTicks(qint64 newIntervalTicks);
	
	DayOfWeek dayOfWeek() const;
	void setDayOfWeek(DayOfWeek newDayOfWeek);
	
	qint64 maxRuntimeTicks() const;
	void setMaxRuntimeTicks(qint64 newMaxRuntimeTicks);
	
signals:
	void typeChanged(QString newType);
	void timeOfDayTicksChanged(qint64 newTimeOfDayTicks);
	void intervalTicksChanged(qint64 newIntervalTicks);
	void dayOfWeekChanged(DayOfWeek newDayOfWeek);
	void maxRuntimeTicksChanged(qint64 newMaxRuntimeTicks);
protected:
	QString m_type;
	qint64 m_timeOfDayTicks;
	qint64 m_intervalTicks;
	DayOfWeek m_dayOfWeek;
	qint64 m_maxRuntimeTicks;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TASKTRIGGERINFO_H

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

#ifndef JELLYFIN_DTO_ACCESSSCHEDULE_H
#define JELLYFIN_DTO_ACCESSSCHEDULE_H

#include <QJsonObject>
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/dynamicdayofweek.h"

namespace Jellyfin {
namespace DTO {

class AccessSchedule : public QObject {
	Q_OBJECT
public:
	explicit AccessSchedule(QObject *parent = nullptr);
	static AccessSchedule *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the id of this instance.
	 */
	Q_PROPERTY(qint32 jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the id of the associated user.
	 */
	Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)
	Q_PROPERTY(DynamicDayOfWeek dayOfWeek READ dayOfWeek WRITE setDayOfWeek NOTIFY dayOfWeekChanged)
	/**
	 * @brief Gets or sets the start hour.
	 */
	Q_PROPERTY(double startHour READ startHour WRITE setStartHour NOTIFY startHourChanged)
	/**
	 * @brief Gets or sets the end hour.
	 */
	Q_PROPERTY(double endHour READ endHour WRITE setEndHour NOTIFY endHourChanged)

	qint32 jellyfinId() const;
	void setJellyfinId(qint32 newJellyfinId);
	
	QString userId() const;
	void setUserId(QString newUserId);
	
	DynamicDayOfWeek dayOfWeek() const;
	void setDayOfWeek(DynamicDayOfWeek newDayOfWeek);
	
	double startHour() const;
	void setStartHour(double newStartHour);
	
	double endHour() const;
	void setEndHour(double newEndHour);
	
signals:
	void jellyfinIdChanged(qint32 newJellyfinId);
	void userIdChanged(QString newUserId);
	void dayOfWeekChanged(DynamicDayOfWeek newDayOfWeek);
	void startHourChanged(double newStartHour);
	void endHourChanged(double newEndHour);
protected:
	qint32 m_jellyfinId;
	QString m_userId;
	DynamicDayOfWeek m_dayOfWeek;
	double m_startHour;
	double m_endHour;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_ACCESSSCHEDULE_H

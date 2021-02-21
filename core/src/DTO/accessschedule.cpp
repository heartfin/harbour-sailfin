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

#include <JellyfinQt/DTO/accessschedule.h>

#include <JellyfinQt/DTO/dynamicdayofweek.h>

namespace Jellyfin {
namespace DTO {

AccessSchedule::AccessSchedule(QObject *parent) : QObject(parent) {}

AccessSchedule *AccessSchedule::fromJSON(QJsonObject source, QObject *parent) {
	AccessSchedule *instance = new AccessSchedule(parent);
	instance->updateFromJSON(source);
	return instance;
}

void AccessSchedule::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject AccessSchedule::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
qint32 AccessSchedule::jellyfinId() const { return m_jellyfinId; }
void AccessSchedule::setJellyfinId(qint32 newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString AccessSchedule::userId() const { return m_userId; }
void AccessSchedule::setUserId(QString newUserId) {
	m_userId = newUserId;
	emit userIdChanged(newUserId);
}

DynamicDayOfWeek AccessSchedule::dayOfWeek() const { return m_dayOfWeek; }
void AccessSchedule::setDayOfWeek(DynamicDayOfWeek newDayOfWeek) {
	m_dayOfWeek = newDayOfWeek;
	emit dayOfWeekChanged(newDayOfWeek);
}

double AccessSchedule::startHour() const { return m_startHour; }
void AccessSchedule::setStartHour(double newStartHour) {
	m_startHour = newStartHour;
	emit startHourChanged(newStartHour);
}

double AccessSchedule::endHour() const { return m_endHour; }
void AccessSchedule::setEndHour(double newEndHour) {
	m_endHour = newEndHour;
	emit endHourChanged(newEndHour);
}


} // NS Jellyfin
} // NS DTO

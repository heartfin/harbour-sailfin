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

#include <JellyfinQt/dto/accessschedule.h>

namespace Jellyfin {
namespace DTO {

AccessSchedule::AccessSchedule() {}

AccessSchedule::AccessSchedule(const AccessSchedule &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_userId(other.m_userId),
	m_dayOfWeek(other.m_dayOfWeek),
	m_startHour(other.m_startHour),
	m_endHour(other.m_endHour){}


void AccessSchedule::replaceData(AccessSchedule &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_userId = other.m_userId;
	m_dayOfWeek = other.m_dayOfWeek;
	m_startHour = other.m_startHour;
	m_endHour = other.m_endHour;
}

AccessSchedule AccessSchedule::fromJson(QJsonObject source) {
	AccessSchedule instance;
	instance.setFromJson(source);
	return instance;
}


void AccessSchedule::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<qint32>(source["Id"]);
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_dayOfWeek = Jellyfin::Support::fromJsonValue<DynamicDayOfWeek>(source["DayOfWeek"]);
	m_startHour = Jellyfin::Support::fromJsonValue<double>(source["StartHour"]);
	m_endHour = Jellyfin::Support::fromJsonValue<double>(source["EndHour"]);

}
	
QJsonObject AccessSchedule::toJson() const {
	QJsonObject result;
	
	result["Id"] = Jellyfin::Support::toJsonValue<qint32>(m_jellyfinId);		
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);		
	result["DayOfWeek"] = Jellyfin::Support::toJsonValue<DynamicDayOfWeek>(m_dayOfWeek);		
	result["StartHour"] = Jellyfin::Support::toJsonValue<double>(m_startHour);		
	result["EndHour"] = Jellyfin::Support::toJsonValue<double>(m_endHour);	
	return result;
}

qint32 AccessSchedule::jellyfinId() const { return m_jellyfinId; }

void AccessSchedule::setJellyfinId(qint32 newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString AccessSchedule::userId() const { return m_userId; }

void AccessSchedule::setUserId(QString newUserId) {
	m_userId = newUserId;
}

DynamicDayOfWeek AccessSchedule::dayOfWeek() const { return m_dayOfWeek; }

void AccessSchedule::setDayOfWeek(DynamicDayOfWeek newDayOfWeek) {
	m_dayOfWeek = newDayOfWeek;
}

double AccessSchedule::startHour() const { return m_startHour; }

void AccessSchedule::setStartHour(double newStartHour) {
	m_startHour = newStartHour;
}

double AccessSchedule::endHour() const { return m_endHour; }

void AccessSchedule::setEndHour(double newEndHour) {
	m_endHour = newEndHour;
}


} // NS DTO

namespace Support {

using AccessSchedule = Jellyfin::DTO::AccessSchedule;

template <>
AccessSchedule fromJsonValue(const QJsonValue &source, convertType<AccessSchedule>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return AccessSchedule::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const AccessSchedule &source, convertType<AccessSchedule>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

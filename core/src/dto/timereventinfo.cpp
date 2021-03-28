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

#include <JellyfinQt/dto/timereventinfo.h>

namespace Jellyfin {
namespace DTO {

TimerEventInfo::TimerEventInfo() {}

TimerEventInfo::TimerEventInfo(const TimerEventInfo &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_programId(other.m_programId){}


void TimerEventInfo::replaceData(TimerEventInfo &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_programId = other.m_programId;
}

TimerEventInfo TimerEventInfo::fromJson(QJsonObject source) {
	TimerEventInfo instance;
	instance.setFromJson(source);
	return instance;
}


void TimerEventInfo::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_programId = Jellyfin::Support::fromJsonValue<QString>(source["ProgramId"]);

}
	
QJsonObject TimerEventInfo::toJson() const {
	QJsonObject result;
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["ProgramId"] = Jellyfin::Support::toJsonValue<QString>(m_programId);

	return result;
}

QString TimerEventInfo::jellyfinId() const { return m_jellyfinId; }

void TimerEventInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool TimerEventInfo::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void TimerEventInfo::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString TimerEventInfo::programId() const { return m_programId; }

void TimerEventInfo::setProgramId(QString newProgramId) {
	m_programId = newProgramId;
}
bool TimerEventInfo::programIdNull() const {
	return m_programId.isNull();
}

void TimerEventInfo::setProgramIdNull() {
	m_programId.clear();

}

} // NS DTO

namespace Support {

using TimerEventInfo = Jellyfin::DTO::TimerEventInfo;

template <>
TimerEventInfo fromJsonValue(const QJsonValue &source, convertType<TimerEventInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return TimerEventInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const TimerEventInfo &source, convertType<TimerEventInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

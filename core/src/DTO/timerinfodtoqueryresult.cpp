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

#include <JellyfinQt/DTO/timerinfodtoqueryresult.h>

namespace Jellyfin {
namespace DTO {

TimerInfoDtoQueryResult::TimerInfoDtoQueryResult() {}

TimerInfoDtoQueryResult TimerInfoDtoQueryResult::fromJson(QJsonObject source) {
	TimerInfoDtoQueryResult instance;
	instance.setFromJson(source);
	return instance;
}


void TimerInfoDtoQueryResult::setFromJson(QJsonObject source) {
	m_items = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<TimerInfoDto>>>(source["Items"]);
	m_totalRecordCount = Jellyfin::Support::fromJsonValue<qint32>(source["TotalRecordCount"]);
	m_startIndex = Jellyfin::Support::fromJsonValue<qint32>(source["StartIndex"]);

}
	
QJsonObject TimerInfoDtoQueryResult::toJson() {
	QJsonObject result;
	result["Items"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<TimerInfoDto>>>(m_items);
	result["TotalRecordCount"] = Jellyfin::Support::toJsonValue<qint32>(m_totalRecordCount);
	result["StartIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_startIndex);

	return result;
}

QList<QSharedPointer<TimerInfoDto>> TimerInfoDtoQueryResult::items() const { return m_items; }

void TimerInfoDtoQueryResult::setItems(QList<QSharedPointer<TimerInfoDto>> newItems) {
	m_items = newItems;
}
qint32 TimerInfoDtoQueryResult::totalRecordCount() const { return m_totalRecordCount; }

void TimerInfoDtoQueryResult::setTotalRecordCount(qint32 newTotalRecordCount) {
	m_totalRecordCount = newTotalRecordCount;
}
qint32 TimerInfoDtoQueryResult::startIndex() const { return m_startIndex; }

void TimerInfoDtoQueryResult::setStartIndex(qint32 newStartIndex) {
	m_startIndex = newStartIndex;
}

} // NS DTO

namespace Support {

using TimerInfoDtoQueryResult = Jellyfin::DTO::TimerInfoDtoQueryResult;

template <>
TimerInfoDtoQueryResult fromJsonValue<TimerInfoDtoQueryResult>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return TimerInfoDtoQueryResult::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

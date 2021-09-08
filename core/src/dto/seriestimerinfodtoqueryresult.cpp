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

#include <JellyfinQt/dto/seriestimerinfodtoqueryresult.h>

namespace Jellyfin {
namespace DTO {

SeriesTimerInfoDtoQueryResult::SeriesTimerInfoDtoQueryResult() {}

SeriesTimerInfoDtoQueryResult::SeriesTimerInfoDtoQueryResult(const SeriesTimerInfoDtoQueryResult &other) :

	m_items(other.m_items),
	m_totalRecordCount(other.m_totalRecordCount),
	m_startIndex(other.m_startIndex){}


void SeriesTimerInfoDtoQueryResult::replaceData(SeriesTimerInfoDtoQueryResult &other) {
	m_items = other.m_items;
	m_totalRecordCount = other.m_totalRecordCount;
	m_startIndex = other.m_startIndex;
}

SeriesTimerInfoDtoQueryResult SeriesTimerInfoDtoQueryResult::fromJson(QJsonObject source) {
	SeriesTimerInfoDtoQueryResult instance;
	instance.setFromJson(source);
	return instance;
}


void SeriesTimerInfoDtoQueryResult::setFromJson(QJsonObject source) {
	m_items = Jellyfin::Support::fromJsonValue<QList<SeriesTimerInfoDto>>(source["Items"]);
	m_totalRecordCount = Jellyfin::Support::fromJsonValue<qint32>(source["TotalRecordCount"]);
	m_startIndex = Jellyfin::Support::fromJsonValue<qint32>(source["StartIndex"]);

}
	
QJsonObject SeriesTimerInfoDtoQueryResult::toJson() const {
	QJsonObject result;
	
	
	if (!(m_items.size() == 0)) {
		result["Items"] = Jellyfin::Support::toJsonValue<QList<SeriesTimerInfoDto>>(m_items);
	}
			
	result["TotalRecordCount"] = Jellyfin::Support::toJsonValue<qint32>(m_totalRecordCount);		
	result["StartIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_startIndex);	
	return result;
}

QList<SeriesTimerInfoDto> SeriesTimerInfoDtoQueryResult::items() const { return m_items; }

void SeriesTimerInfoDtoQueryResult::setItems(QList<SeriesTimerInfoDto> newItems) {
	m_items = newItems;
}
bool SeriesTimerInfoDtoQueryResult::itemsNull() const {
	return m_items.size() == 0;
}

void SeriesTimerInfoDtoQueryResult::setItemsNull() {
	m_items.clear();

}
qint32 SeriesTimerInfoDtoQueryResult::totalRecordCount() const { return m_totalRecordCount; }

void SeriesTimerInfoDtoQueryResult::setTotalRecordCount(qint32 newTotalRecordCount) {
	m_totalRecordCount = newTotalRecordCount;
}

qint32 SeriesTimerInfoDtoQueryResult::startIndex() const { return m_startIndex; }

void SeriesTimerInfoDtoQueryResult::setStartIndex(qint32 newStartIndex) {
	m_startIndex = newStartIndex;
}


} // NS DTO

namespace Support {

using SeriesTimerInfoDtoQueryResult = Jellyfin::DTO::SeriesTimerInfoDtoQueryResult;

template <>
SeriesTimerInfoDtoQueryResult fromJsonValue(const QJsonValue &source, convertType<SeriesTimerInfoDtoQueryResult>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SeriesTimerInfoDtoQueryResult::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SeriesTimerInfoDtoQueryResult &source, convertType<SeriesTimerInfoDtoQueryResult>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

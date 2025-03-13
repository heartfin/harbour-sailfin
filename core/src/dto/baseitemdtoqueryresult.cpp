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

#include <JellyfinQt/dto/baseitemdtoqueryresult.h>

namespace Jellyfin {
namespace DTO {

BaseItemDtoQueryResult::BaseItemDtoQueryResult() {}
BaseItemDtoQueryResult::BaseItemDtoQueryResult (
		QList<BaseItemDto> items, 
		qint32 totalRecordCount, 
		qint32 startIndex 
		) :
	m_items(items),
	m_totalRecordCount(totalRecordCount),
	m_startIndex(startIndex) { }



BaseItemDtoQueryResult::BaseItemDtoQueryResult(const BaseItemDtoQueryResult &other) :

	m_items(other.m_items),
	m_totalRecordCount(other.m_totalRecordCount),
	m_startIndex(other.m_startIndex){}


void BaseItemDtoQueryResult::replaceData(BaseItemDtoQueryResult &other) {
	m_items = other.m_items;
	m_totalRecordCount = other.m_totalRecordCount;
	m_startIndex = other.m_startIndex;
}

BaseItemDtoQueryResult BaseItemDtoQueryResult::fromJson(QJsonObject source) {
	BaseItemDtoQueryResult instance;
	instance.setFromJson(source);
	return instance;
}


void BaseItemDtoQueryResult::setFromJson(QJsonObject source) {
	m_items = Jellyfin::Support::fromJsonValue<QList<BaseItemDto>>(source["Items"]);
	m_totalRecordCount = Jellyfin::Support::fromJsonValue<qint32>(source["TotalRecordCount"]);
	m_startIndex = Jellyfin::Support::fromJsonValue<qint32>(source["StartIndex"]);

}
	
QJsonObject BaseItemDtoQueryResult::toJson() const {
	QJsonObject result;
	
	result["Items"] = Jellyfin::Support::toJsonValue<QList<BaseItemDto>>(m_items);		
	result["TotalRecordCount"] = Jellyfin::Support::toJsonValue<qint32>(m_totalRecordCount);		
	result["StartIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_startIndex);	
	return result;
}

QList<BaseItemDto> BaseItemDtoQueryResult::items() const { return m_items; }

void BaseItemDtoQueryResult::setItems(QList<BaseItemDto> newItems) {
	m_items = newItems;
}

qint32 BaseItemDtoQueryResult::totalRecordCount() const { return m_totalRecordCount; }

void BaseItemDtoQueryResult::setTotalRecordCount(qint32 newTotalRecordCount) {
	m_totalRecordCount = newTotalRecordCount;
}

qint32 BaseItemDtoQueryResult::startIndex() const { return m_startIndex; }

void BaseItemDtoQueryResult::setStartIndex(qint32 newStartIndex) {
	m_startIndex = newStartIndex;
}


} // NS DTO

namespace Support {

using BaseItemDtoQueryResult = Jellyfin::DTO::BaseItemDtoQueryResult;

template <>
BaseItemDtoQueryResult fromJsonValue(const QJsonValue &source, convertType<BaseItemDtoQueryResult>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return BaseItemDtoQueryResult::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const BaseItemDtoQueryResult &source, convertType<BaseItemDtoQueryResult>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

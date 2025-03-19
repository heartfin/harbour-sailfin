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

#include <JellyfinQt/dto/queuerequestdto.h>

namespace Jellyfin {
namespace DTO {

QueueRequestDto::QueueRequestDto() {}
QueueRequestDto::QueueRequestDto (
		QStringList itemIds, 
		GroupQueueMode mode 
		) :
	m_itemIds(itemIds),
	m_mode(mode) { }



QueueRequestDto::QueueRequestDto(const QueueRequestDto &other) :

	m_itemIds(other.m_itemIds),
	m_mode(other.m_mode){}


void QueueRequestDto::replaceData(QueueRequestDto &other) {
	m_itemIds = other.m_itemIds;
	m_mode = other.m_mode;
}

QueueRequestDto QueueRequestDto::fromJson(QJsonObject source) {
	QueueRequestDto instance;
	instance.setFromJson(source);
	return instance;
}


void QueueRequestDto::setFromJson(QJsonObject source) {
	m_itemIds = Jellyfin::Support::fromJsonValue<QStringList>(source["ItemIds"]);
	m_mode = Jellyfin::Support::fromJsonValue<GroupQueueMode>(source["Mode"]);

}
	
QJsonObject QueueRequestDto::toJson() const {
	QJsonObject result;
	
	result["ItemIds"] = Jellyfin::Support::toJsonValue<QStringList>(m_itemIds);		
	result["Mode"] = Jellyfin::Support::toJsonValue<GroupQueueMode>(m_mode);	
	return result;
}

QStringList QueueRequestDto::itemIds() const { return m_itemIds; }

void QueueRequestDto::setItemIds(QStringList newItemIds) {
	m_itemIds = newItemIds;
}

GroupQueueMode QueueRequestDto::mode() const { return m_mode; }

void QueueRequestDto::setMode(GroupQueueMode newMode) {
	m_mode = newMode;
}


} // NS DTO

namespace Support {

using QueueRequestDto = Jellyfin::DTO::QueueRequestDto;

template <>
QueueRequestDto fromJsonValue(const QJsonValue &source, convertType<QueueRequestDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return QueueRequestDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const QueueRequestDto &source, convertType<QueueRequestDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

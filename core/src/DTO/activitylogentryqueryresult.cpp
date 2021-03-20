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

#include <JellyfinQt/DTO/activitylogentryqueryresult.h>

namespace Jellyfin {
namespace DTO {

ActivityLogEntryQueryResult::ActivityLogEntryQueryResult(QObject *parent) {}

ActivityLogEntryQueryResult ActivityLogEntryQueryResult::fromJson(QJsonObject source) {ActivityLogEntryQueryResult instance;
	instance->setFromJson(source, false);
	return instance;
}


void ActivityLogEntryQueryResult::setFromJson(QJsonObject source) {
	m_items = fromJsonValue<QList<QSharedPointer<ActivityLogEntry>>>(source["Items"]);
	m_totalRecordCount = fromJsonValue<qint32>(source["TotalRecordCount"]);
	m_startIndex = fromJsonValue<qint32>(source["StartIndex"]);

}
	
QJsonObject ActivityLogEntryQueryResult::toJson() {
	QJsonObject result;
	result["Items"] = toJsonValue<QList<QSharedPointer<ActivityLogEntry>>>(m_items);
	result["TotalRecordCount"] = toJsonValue<qint32>(m_totalRecordCount);
	result["StartIndex"] = toJsonValue<qint32>(m_startIndex);

	return result;
}

QList<QSharedPointer<ActivityLogEntry>> ActivityLogEntryQueryResult::items() const { return m_items; }

void ActivityLogEntryQueryResult::setItems(QList<QSharedPointer<ActivityLogEntry>> newItems) {
	m_items = newItems;
}
qint32 ActivityLogEntryQueryResult::totalRecordCount() const { return m_totalRecordCount; }

void ActivityLogEntryQueryResult::setTotalRecordCount(qint32 newTotalRecordCount) {
	m_totalRecordCount = newTotalRecordCount;
}
qint32 ActivityLogEntryQueryResult::startIndex() const { return m_startIndex; }

void ActivityLogEntryQueryResult::setStartIndex(qint32 newStartIndex) {
	m_startIndex = newStartIndex;
}


} // NS Jellyfin
} // NS DTO

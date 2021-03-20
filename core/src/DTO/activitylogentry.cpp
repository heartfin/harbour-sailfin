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

#include <JellyfinQt/DTO/activitylogentry.h>

namespace Jellyfin {
namespace DTO {

ActivityLogEntry::ActivityLogEntry() {}

ActivityLogEntry ActivityLogEntry::fromJson(QJsonObject source) {
	ActivityLogEntry instance;
	instance.setFromJson(source);
	return instance;
}


void ActivityLogEntry::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<qint64>(source["Id"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_overview = Jellyfin::Support::fromJsonValue<QString>(source["Overview"]);
	m_shortOverview = Jellyfin::Support::fromJsonValue<QString>(source["ShortOverview"]);
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);
	m_date = Jellyfin::Support::fromJsonValue<QDateTime>(source["Date"]);
	m_userId = Jellyfin::Support::fromJsonValue<QUuid>(source["UserId"]);
	m_userPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["UserPrimaryImageTag"]);
	m_severity = Jellyfin::Support::fromJsonValue<LogLevel>(source["Severity"]);

}
	
QJsonObject ActivityLogEntry::toJson() {
	QJsonObject result;
	result["Id"] = Jellyfin::Support::toJsonValue<qint64>(m_jellyfinId);
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Overview"] = Jellyfin::Support::toJsonValue<QString>(m_overview);
	result["ShortOverview"] = Jellyfin::Support::toJsonValue<QString>(m_shortOverview);
	result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);
	result["Date"] = Jellyfin::Support::toJsonValue<QDateTime>(m_date);
	result["UserId"] = Jellyfin::Support::toJsonValue<QUuid>(m_userId);
	result["UserPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_userPrimaryImageTag);
	result["Severity"] = Jellyfin::Support::toJsonValue<LogLevel>(m_severity);

	return result;
}

qint64 ActivityLogEntry::jellyfinId() const { return m_jellyfinId; }

void ActivityLogEntry::setJellyfinId(qint64 newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString ActivityLogEntry::name() const { return m_name; }

void ActivityLogEntry::setName(QString newName) {
	m_name = newName;
}
QString ActivityLogEntry::overview() const { return m_overview; }

void ActivityLogEntry::setOverview(QString newOverview) {
	m_overview = newOverview;
}
QString ActivityLogEntry::shortOverview() const { return m_shortOverview; }

void ActivityLogEntry::setShortOverview(QString newShortOverview) {
	m_shortOverview = newShortOverview;
}
QString ActivityLogEntry::type() const { return m_type; }

void ActivityLogEntry::setType(QString newType) {
	m_type = newType;
}
QString ActivityLogEntry::itemId() const { return m_itemId; }

void ActivityLogEntry::setItemId(QString newItemId) {
	m_itemId = newItemId;
}
QDateTime ActivityLogEntry::date() const { return m_date; }

void ActivityLogEntry::setDate(QDateTime newDate) {
	m_date = newDate;
}
QUuid ActivityLogEntry::userId() const { return m_userId; }

void ActivityLogEntry::setUserId(QUuid newUserId) {
	m_userId = newUserId;
}
QString ActivityLogEntry::userPrimaryImageTag() const { return m_userPrimaryImageTag; }

void ActivityLogEntry::setUserPrimaryImageTag(QString newUserPrimaryImageTag) {
	m_userPrimaryImageTag = newUserPrimaryImageTag;
}
LogLevel ActivityLogEntry::severity() const { return m_severity; }

void ActivityLogEntry::setSeverity(LogLevel newSeverity) {
	m_severity = newSeverity;
}

} // NS DTO

namespace Support {

using ActivityLogEntry = Jellyfin::DTO::ActivityLogEntry;

template <>
ActivityLogEntry fromJsonValue<ActivityLogEntry>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ActivityLogEntry::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

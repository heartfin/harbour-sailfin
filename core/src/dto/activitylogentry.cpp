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

#include <JellyfinQt/dto/activitylogentry.h>

namespace Jellyfin {
namespace DTO {

ActivityLogEntry::ActivityLogEntry() {}
ActivityLogEntry::ActivityLogEntry (
		qint64 jellyfinId, 
		QDateTime date, 
		QString userId, 
		LogLevel severity 
		) :
	m_jellyfinId(jellyfinId),
	m_date(date),
	m_userId(userId),
	m_severity(severity) { }



ActivityLogEntry::ActivityLogEntry(const ActivityLogEntry &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_name(other.m_name),
	m_overview(other.m_overview),
	m_shortOverview(other.m_shortOverview),
	m_type(other.m_type),
	m_itemId(other.m_itemId),
	m_date(other.m_date),
	m_userId(other.m_userId),
	m_userPrimaryImageTag(other.m_userPrimaryImageTag),
	m_severity(other.m_severity){}


void ActivityLogEntry::replaceData(ActivityLogEntry &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_name = other.m_name;
	m_overview = other.m_overview;
	m_shortOverview = other.m_shortOverview;
	m_type = other.m_type;
	m_itemId = other.m_itemId;
	m_date = other.m_date;
	m_userId = other.m_userId;
	m_userPrimaryImageTag = other.m_userPrimaryImageTag;
	m_severity = other.m_severity;
}

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
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_userPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["UserPrimaryImageTag"]);
	m_severity = Jellyfin::Support::fromJsonValue<LogLevel>(source["Severity"]);

}
	
QJsonObject ActivityLogEntry::toJson() const {
	QJsonObject result;
	
	result["Id"] = Jellyfin::Support::toJsonValue<qint64>(m_jellyfinId);		
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_overview.isNull())) {
		result["Overview"] = Jellyfin::Support::toJsonValue<QString>(m_overview);
	}
			
	
	if (!(m_shortOverview.isNull())) {
		result["ShortOverview"] = Jellyfin::Support::toJsonValue<QString>(m_shortOverview);
	}
			
	
	if (!(m_type.isNull())) {
		result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	}
			
	
	if (!(m_itemId.isNull())) {
		result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);
	}
			
	result["Date"] = Jellyfin::Support::toJsonValue<QDateTime>(m_date);		
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);		
	
	if (!(m_userPrimaryImageTag.isNull())) {
		result["UserPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_userPrimaryImageTag);
	}
			
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
bool ActivityLogEntry::nameNull() const {
	return m_name.isNull();
}

void ActivityLogEntry::setNameNull() {
	m_name.clear();

}
QString ActivityLogEntry::overview() const { return m_overview; }

void ActivityLogEntry::setOverview(QString newOverview) {
	m_overview = newOverview;
}
bool ActivityLogEntry::overviewNull() const {
	return m_overview.isNull();
}

void ActivityLogEntry::setOverviewNull() {
	m_overview.clear();

}
QString ActivityLogEntry::shortOverview() const { return m_shortOverview; }

void ActivityLogEntry::setShortOverview(QString newShortOverview) {
	m_shortOverview = newShortOverview;
}
bool ActivityLogEntry::shortOverviewNull() const {
	return m_shortOverview.isNull();
}

void ActivityLogEntry::setShortOverviewNull() {
	m_shortOverview.clear();

}
QString ActivityLogEntry::type() const { return m_type; }

void ActivityLogEntry::setType(QString newType) {
	m_type = newType;
}
bool ActivityLogEntry::typeNull() const {
	return m_type.isNull();
}

void ActivityLogEntry::setTypeNull() {
	m_type.clear();

}
QString ActivityLogEntry::itemId() const { return m_itemId; }

void ActivityLogEntry::setItemId(QString newItemId) {
	m_itemId = newItemId;
}
bool ActivityLogEntry::itemIdNull() const {
	return m_itemId.isNull();
}

void ActivityLogEntry::setItemIdNull() {
	m_itemId.clear();

}
QDateTime ActivityLogEntry::date() const { return m_date; }

void ActivityLogEntry::setDate(QDateTime newDate) {
	m_date = newDate;
}

QString ActivityLogEntry::userId() const { return m_userId; }

void ActivityLogEntry::setUserId(QString newUserId) {
	m_userId = newUserId;
}

QString ActivityLogEntry::userPrimaryImageTag() const { return m_userPrimaryImageTag; }

void ActivityLogEntry::setUserPrimaryImageTag(QString newUserPrimaryImageTag) {
	m_userPrimaryImageTag = newUserPrimaryImageTag;
}
bool ActivityLogEntry::userPrimaryImageTagNull() const {
	return m_userPrimaryImageTag.isNull();
}

void ActivityLogEntry::setUserPrimaryImageTagNull() {
	m_userPrimaryImageTag.clear();

}
LogLevel ActivityLogEntry::severity() const { return m_severity; }

void ActivityLogEntry::setSeverity(LogLevel newSeverity) {
	m_severity = newSeverity;
}


} // NS DTO

namespace Support {

using ActivityLogEntry = Jellyfin::DTO::ActivityLogEntry;

template <>
ActivityLogEntry fromJsonValue(const QJsonValue &source, convertType<ActivityLogEntry>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ActivityLogEntry::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ActivityLogEntry &source, convertType<ActivityLogEntry>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

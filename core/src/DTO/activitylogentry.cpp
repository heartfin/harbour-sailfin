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

#include <JellyfinQt/DTO/loglevel.h>

namespace Jellyfin {
namespace DTO {

ActivityLogEntry::ActivityLogEntry(QObject *parent) : QObject(parent) {}

ActivityLogEntry *ActivityLogEntry::fromJSON(QJsonObject source, QObject *parent) {
	ActivityLogEntry *instance = new ActivityLogEntry(parent);
	instance->updateFromJSON(source);
	return instance;
}

void ActivityLogEntry::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject ActivityLogEntry::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
qint64 ActivityLogEntry::jellyfinId() const { return m_jellyfinId; }
void ActivityLogEntry::setJellyfinId(qint64 newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString ActivityLogEntry::name() const { return m_name; }
void ActivityLogEntry::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString ActivityLogEntry::overview() const { return m_overview; }
void ActivityLogEntry::setOverview(QString newOverview) {
	m_overview = newOverview;
	emit overviewChanged(newOverview);
}

QString ActivityLogEntry::shortOverview() const { return m_shortOverview; }
void ActivityLogEntry::setShortOverview(QString newShortOverview) {
	m_shortOverview = newShortOverview;
	emit shortOverviewChanged(newShortOverview);
}

QString ActivityLogEntry::type() const { return m_type; }
void ActivityLogEntry::setType(QString newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QString ActivityLogEntry::itemId() const { return m_itemId; }
void ActivityLogEntry::setItemId(QString newItemId) {
	m_itemId = newItemId;
	emit itemIdChanged(newItemId);
}

QDateTime ActivityLogEntry::date() const { return m_date; }
void ActivityLogEntry::setDate(QDateTime newDate) {
	m_date = newDate;
	emit dateChanged(newDate);
}

QString ActivityLogEntry::userId() const { return m_userId; }
void ActivityLogEntry::setUserId(QString newUserId) {
	m_userId = newUserId;
	emit userIdChanged(newUserId);
}

QString ActivityLogEntry::userPrimaryImageTag() const { return m_userPrimaryImageTag; }
void ActivityLogEntry::setUserPrimaryImageTag(QString newUserPrimaryImageTag) {
	m_userPrimaryImageTag = newUserPrimaryImageTag;
	emit userPrimaryImageTagChanged(newUserPrimaryImageTag);
}

LogLevel ActivityLogEntry::severity() const { return m_severity; }
void ActivityLogEntry::setSeverity(LogLevel newSeverity) {
	m_severity = newSeverity;
	emit severityChanged(newSeverity);
}


} // NS Jellyfin
} // NS DTO

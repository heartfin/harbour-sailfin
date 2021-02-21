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

#include <JellyfinQt/DTO/notificationdto.h>

#include <JellyfinQt/DTO/notificationlevel.h>

namespace Jellyfin {
namespace DTO {

NotificationDto::NotificationDto(QObject *parent) : QObject(parent) {}

NotificationDto *NotificationDto::fromJSON(QJsonObject source, QObject *parent) {
	NotificationDto *instance = new NotificationDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void NotificationDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject NotificationDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString NotificationDto::jellyfinId() const { return m_jellyfinId; }
void NotificationDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString NotificationDto::userId() const { return m_userId; }
void NotificationDto::setUserId(QString newUserId) {
	m_userId = newUserId;
	emit userIdChanged(newUserId);
}

QDateTime NotificationDto::date() const { return m_date; }
void NotificationDto::setDate(QDateTime newDate) {
	m_date = newDate;
	emit dateChanged(newDate);
}

bool NotificationDto::isRead() const { return m_isRead; }
void NotificationDto::setIsRead(bool newIsRead) {
	m_isRead = newIsRead;
	emit isReadChanged(newIsRead);
}

QString NotificationDto::name() const { return m_name; }
void NotificationDto::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString NotificationDto::description() const { return m_description; }
void NotificationDto::setDescription(QString newDescription) {
	m_description = newDescription;
	emit descriptionChanged(newDescription);
}

QString NotificationDto::url() const { return m_url; }
void NotificationDto::setUrl(QString newUrl) {
	m_url = newUrl;
	emit urlChanged(newUrl);
}

NotificationLevel NotificationDto::level() const { return m_level; }
void NotificationDto::setLevel(NotificationLevel newLevel) {
	m_level = newLevel;
	emit levelChanged(newLevel);
}


} // NS Jellyfin
} // NS DTO

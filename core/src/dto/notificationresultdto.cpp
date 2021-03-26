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

#include <JellyfinQt/dto/notificationresultdto.h>

namespace Jellyfin {
namespace DTO {

NotificationResultDto::NotificationResultDto() {}

NotificationResultDto::NotificationResultDto(const NotificationResultDto &other) :

	m_notifications(other.m_notifications),
	m_totalRecordCount(other.m_totalRecordCount){}


void NotificationResultDto::replaceData(NotificationResultDto &other) {
	m_notifications = other.m_notifications;
	m_totalRecordCount = other.m_totalRecordCount;
}

NotificationResultDto NotificationResultDto::fromJson(QJsonObject source) {
	NotificationResultDto instance;
	instance.setFromJson(source);
	return instance;
}


void NotificationResultDto::setFromJson(QJsonObject source) {
	m_notifications = Jellyfin::Support::fromJsonValue<QList<NotificationDto>>(source["Notifications"]);
	m_totalRecordCount = Jellyfin::Support::fromJsonValue<qint32>(source["TotalRecordCount"]);

}
	
QJsonObject NotificationResultDto::toJson() {
	QJsonObject result;
	result["Notifications"] = Jellyfin::Support::toJsonValue<QList<NotificationDto>>(m_notifications);
	result["TotalRecordCount"] = Jellyfin::Support::toJsonValue<qint32>(m_totalRecordCount);

	return result;
}

QList<NotificationDto> NotificationResultDto::notifications() const { return m_notifications; }

void NotificationResultDto::setNotifications(QList<NotificationDto> newNotifications) {
	m_notifications = newNotifications;
}
bool NotificationResultDto::notificationsNull() const {
	return m_notifications.size() == 0;
}

void NotificationResultDto::setNotificationsNull() {
	m_notifications.clear();

}
qint32 NotificationResultDto::totalRecordCount() const { return m_totalRecordCount; }

void NotificationResultDto::setTotalRecordCount(qint32 newTotalRecordCount) {
	m_totalRecordCount = newTotalRecordCount;
}


} // NS DTO

namespace Support {

using NotificationResultDto = Jellyfin::DTO::NotificationResultDto;

template <>
NotificationResultDto fromJsonValue<NotificationResultDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return NotificationResultDto::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

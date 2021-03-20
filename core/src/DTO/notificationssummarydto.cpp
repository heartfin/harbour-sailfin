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

#include <JellyfinQt/DTO/notificationssummarydto.h>

namespace Jellyfin {
namespace DTO {

NotificationsSummaryDto::NotificationsSummaryDto(QObject *parent) {}

NotificationsSummaryDto NotificationsSummaryDto::fromJson(QJsonObject source) {NotificationsSummaryDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void NotificationsSummaryDto::setFromJson(QJsonObject source) {
	m_unreadCount = fromJsonValue<qint32>(source["UnreadCount"]);
	m_maxUnreadNotificationLevel = fromJsonValue<NotificationLevel>(source["MaxUnreadNotificationLevel"]);

}
	
QJsonObject NotificationsSummaryDto::toJson() {
	QJsonObject result;
	result["UnreadCount"] = toJsonValue<qint32>(m_unreadCount);
	result["MaxUnreadNotificationLevel"] = toJsonValue<NotificationLevel>(m_maxUnreadNotificationLevel);

	return result;
}

qint32 NotificationsSummaryDto::unreadCount() const { return m_unreadCount; }

void NotificationsSummaryDto::setUnreadCount(qint32 newUnreadCount) {
	m_unreadCount = newUnreadCount;
}
NotificationLevel NotificationsSummaryDto::maxUnreadNotificationLevel() const { return m_maxUnreadNotificationLevel; }

void NotificationsSummaryDto::setMaxUnreadNotificationLevel(NotificationLevel newMaxUnreadNotificationLevel) {
	m_maxUnreadNotificationLevel = newMaxUnreadNotificationLevel;
}


} // NS Jellyfin
} // NS DTO

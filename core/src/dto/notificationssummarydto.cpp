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

#include <JellyfinQt/dto/notificationssummarydto.h>

namespace Jellyfin {
namespace DTO {

NotificationsSummaryDto::NotificationsSummaryDto() {}

NotificationsSummaryDto::NotificationsSummaryDto(const NotificationsSummaryDto &other) :

	m_unreadCount(other.m_unreadCount),
	m_maxUnreadNotificationLevel(other.m_maxUnreadNotificationLevel){}


void NotificationsSummaryDto::replaceData(NotificationsSummaryDto &other) {
	m_unreadCount = other.m_unreadCount;
	m_maxUnreadNotificationLevel = other.m_maxUnreadNotificationLevel;
}

NotificationsSummaryDto NotificationsSummaryDto::fromJson(QJsonObject source) {
	NotificationsSummaryDto instance;
	instance.setFromJson(source);
	return instance;
}


void NotificationsSummaryDto::setFromJson(QJsonObject source) {
	m_unreadCount = Jellyfin::Support::fromJsonValue<qint32>(source["UnreadCount"]);
	m_maxUnreadNotificationLevel = Jellyfin::Support::fromJsonValue<NotificationLevel>(source["MaxUnreadNotificationLevel"]);

}
	
QJsonObject NotificationsSummaryDto::toJson() {
	QJsonObject result;
	result["UnreadCount"] = Jellyfin::Support::toJsonValue<qint32>(m_unreadCount);
	result["MaxUnreadNotificationLevel"] = Jellyfin::Support::toJsonValue<NotificationLevel>(m_maxUnreadNotificationLevel);

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


} // NS DTO

namespace Support {

using NotificationsSummaryDto = Jellyfin::DTO::NotificationsSummaryDto;

template <>
NotificationsSummaryDto fromJsonValue<NotificationsSummaryDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return NotificationsSummaryDto::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

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

#include <JellyfinQt/dto/notificationdto.h>

namespace Jellyfin {
namespace DTO {

NotificationDto::NotificationDto() {}

NotificationDto::NotificationDto(const NotificationDto &other) :

	m_jellyfinId(other.m_jellyfinId),
	m_userId(other.m_userId),
	m_date(other.m_date),
	m_isRead(other.m_isRead),
	m_name(other.m_name),
	m_description(other.m_description),
	m_url(other.m_url),
	m_level(other.m_level){}


void NotificationDto::replaceData(NotificationDto &other) {
	m_jellyfinId = other.m_jellyfinId;
	m_userId = other.m_userId;
	m_date = other.m_date;
	m_isRead = other.m_isRead;
	m_name = other.m_name;
	m_description = other.m_description;
	m_url = other.m_url;
	m_level = other.m_level;
}

NotificationDto NotificationDto::fromJson(QJsonObject source) {
	NotificationDto instance;
	instance.setFromJson(source);
	return instance;
}


void NotificationDto::setFromJson(QJsonObject source) {
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_date = Jellyfin::Support::fromJsonValue<QDateTime>(source["Date"]);
	m_isRead = Jellyfin::Support::fromJsonValue<bool>(source["IsRead"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_description = Jellyfin::Support::fromJsonValue<QString>(source["Description"]);
	m_url = Jellyfin::Support::fromJsonValue<QString>(source["Url"]);
	m_level = Jellyfin::Support::fromJsonValue<NotificationLevel>(source["Level"]);

}
	
QJsonObject NotificationDto::toJson() {
	QJsonObject result;
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);
	result["Date"] = Jellyfin::Support::toJsonValue<QDateTime>(m_date);
	result["IsRead"] = Jellyfin::Support::toJsonValue<bool>(m_isRead);
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Description"] = Jellyfin::Support::toJsonValue<QString>(m_description);
	result["Url"] = Jellyfin::Support::toJsonValue<QString>(m_url);
	result["Level"] = Jellyfin::Support::toJsonValue<NotificationLevel>(m_level);

	return result;
}

QString NotificationDto::jellyfinId() const { return m_jellyfinId; }

void NotificationDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool NotificationDto::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void NotificationDto::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString NotificationDto::userId() const { return m_userId; }

void NotificationDto::setUserId(QString newUserId) {
	m_userId = newUserId;
}
bool NotificationDto::userIdNull() const {
	return m_userId.isNull();
}

void NotificationDto::setUserIdNull() {
	m_userId.clear();

}
QDateTime NotificationDto::date() const { return m_date; }

void NotificationDto::setDate(QDateTime newDate) {
	m_date = newDate;
}

bool NotificationDto::isRead() const { return m_isRead; }

void NotificationDto::setIsRead(bool newIsRead) {
	m_isRead = newIsRead;
}

QString NotificationDto::name() const { return m_name; }

void NotificationDto::setName(QString newName) {
	m_name = newName;
}
bool NotificationDto::nameNull() const {
	return m_name.isNull();
}

void NotificationDto::setNameNull() {
	m_name.clear();

}
QString NotificationDto::description() const { return m_description; }

void NotificationDto::setDescription(QString newDescription) {
	m_description = newDescription;
}
bool NotificationDto::descriptionNull() const {
	return m_description.isNull();
}

void NotificationDto::setDescriptionNull() {
	m_description.clear();

}
QString NotificationDto::url() const { return m_url; }

void NotificationDto::setUrl(QString newUrl) {
	m_url = newUrl;
}
bool NotificationDto::urlNull() const {
	return m_url.isNull();
}

void NotificationDto::setUrlNull() {
	m_url.clear();

}
NotificationLevel NotificationDto::level() const { return m_level; }

void NotificationDto::setLevel(NotificationLevel newLevel) {
	m_level = newLevel;
}


} // NS DTO

namespace Support {

using NotificationDto = Jellyfin::DTO::NotificationDto;

template <>
NotificationDto fromJsonValue<NotificationDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return NotificationDto::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

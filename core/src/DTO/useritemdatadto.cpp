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

#include <JellyfinQt/DTO/useritemdatadto.h>

namespace Jellyfin {
namespace DTO {

UserItemDataDto::UserItemDataDto() {}

UserItemDataDto UserItemDataDto::fromJson(QJsonObject source) {
	UserItemDataDto instance;
	instance.setFromJson(source);
	return instance;
}


void UserItemDataDto::setFromJson(QJsonObject source) {
	m_rating = Jellyfin::Support::fromJsonValue<double>(source["Rating"]);
	m_playedPercentage = Jellyfin::Support::fromJsonValue<double>(source["PlayedPercentage"]);
	m_unplayedItemCount = Jellyfin::Support::fromJsonValue<qint32>(source["UnplayedItemCount"]);
	m_playbackPositionTicks = Jellyfin::Support::fromJsonValue<qint64>(source["PlaybackPositionTicks"]);
	m_playCount = Jellyfin::Support::fromJsonValue<qint32>(source["PlayCount"]);
	m_isFavorite = Jellyfin::Support::fromJsonValue<bool>(source["IsFavorite"]);
	m_likes = Jellyfin::Support::fromJsonValue<bool>(source["Likes"]);
	m_lastPlayedDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastPlayedDate"]);
	m_played = Jellyfin::Support::fromJsonValue<bool>(source["Played"]);
	m_key = Jellyfin::Support::fromJsonValue<QString>(source["Key"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);

}
	
QJsonObject UserItemDataDto::toJson() {
	QJsonObject result;
	result["Rating"] = Jellyfin::Support::toJsonValue<double>(m_rating);
	result["PlayedPercentage"] = Jellyfin::Support::toJsonValue<double>(m_playedPercentage);
	result["UnplayedItemCount"] = Jellyfin::Support::toJsonValue<qint32>(m_unplayedItemCount);
	result["PlaybackPositionTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_playbackPositionTicks);
	result["PlayCount"] = Jellyfin::Support::toJsonValue<qint32>(m_playCount);
	result["IsFavorite"] = Jellyfin::Support::toJsonValue<bool>(m_isFavorite);
	result["Likes"] = Jellyfin::Support::toJsonValue<bool>(m_likes);
	result["LastPlayedDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastPlayedDate);
	result["Played"] = Jellyfin::Support::toJsonValue<bool>(m_played);
	result["Key"] = Jellyfin::Support::toJsonValue<QString>(m_key);
	result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);

	return result;
}

double UserItemDataDto::rating() const { return m_rating; }

void UserItemDataDto::setRating(double newRating) {
	m_rating = newRating;
}
double UserItemDataDto::playedPercentage() const { return m_playedPercentage; }

void UserItemDataDto::setPlayedPercentage(double newPlayedPercentage) {
	m_playedPercentage = newPlayedPercentage;
}
qint32 UserItemDataDto::unplayedItemCount() const { return m_unplayedItemCount; }

void UserItemDataDto::setUnplayedItemCount(qint32 newUnplayedItemCount) {
	m_unplayedItemCount = newUnplayedItemCount;
}
qint64 UserItemDataDto::playbackPositionTicks() const { return m_playbackPositionTicks; }

void UserItemDataDto::setPlaybackPositionTicks(qint64 newPlaybackPositionTicks) {
	m_playbackPositionTicks = newPlaybackPositionTicks;
}
qint32 UserItemDataDto::playCount() const { return m_playCount; }

void UserItemDataDto::setPlayCount(qint32 newPlayCount) {
	m_playCount = newPlayCount;
}
bool UserItemDataDto::isFavorite() const { return m_isFavorite; }

void UserItemDataDto::setIsFavorite(bool newIsFavorite) {
	m_isFavorite = newIsFavorite;
}
bool UserItemDataDto::likes() const { return m_likes; }

void UserItemDataDto::setLikes(bool newLikes) {
	m_likes = newLikes;
}
QDateTime UserItemDataDto::lastPlayedDate() const { return m_lastPlayedDate; }

void UserItemDataDto::setLastPlayedDate(QDateTime newLastPlayedDate) {
	m_lastPlayedDate = newLastPlayedDate;
}
bool UserItemDataDto::played() const { return m_played; }

void UserItemDataDto::setPlayed(bool newPlayed) {
	m_played = newPlayed;
}
QString UserItemDataDto::key() const { return m_key; }

void UserItemDataDto::setKey(QString newKey) {
	m_key = newKey;
}
QString UserItemDataDto::itemId() const { return m_itemId; }

void UserItemDataDto::setItemId(QString newItemId) {
	m_itemId = newItemId;
}

} // NS DTO

namespace Support {

using UserItemDataDto = Jellyfin::DTO::UserItemDataDto;

template <>
UserItemDataDto fromJsonValue<UserItemDataDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return UserItemDataDto::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

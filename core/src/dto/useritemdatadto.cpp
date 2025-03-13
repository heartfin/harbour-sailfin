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

#include <JellyfinQt/dto/useritemdatadto.h>

namespace Jellyfin {
namespace DTO {

UserItemDataDto::UserItemDataDto() {}
UserItemDataDto::UserItemDataDto (
		qint64 playbackPositionTicks, 
		qint32 playCount, 
		bool isFavorite, 
		bool played, 
		QString key, 
		QString itemId 
		) :
	m_playbackPositionTicks(playbackPositionTicks),
	m_playCount(playCount),
	m_isFavorite(isFavorite),
	m_played(played),
	m_key(key),
	m_itemId(itemId) { }



UserItemDataDto::UserItemDataDto(const UserItemDataDto &other) :

	m_rating(other.m_rating),
	m_playedPercentage(other.m_playedPercentage),
	m_unplayedItemCount(other.m_unplayedItemCount),
	m_playbackPositionTicks(other.m_playbackPositionTicks),
	m_playCount(other.m_playCount),
	m_isFavorite(other.m_isFavorite),
	m_likes(other.m_likes),
	m_lastPlayedDate(other.m_lastPlayedDate),
	m_played(other.m_played),
	m_key(other.m_key),
	m_itemId(other.m_itemId){}


void UserItemDataDto::replaceData(UserItemDataDto &other) {
	m_rating = other.m_rating;
	m_playedPercentage = other.m_playedPercentage;
	m_unplayedItemCount = other.m_unplayedItemCount;
	m_playbackPositionTicks = other.m_playbackPositionTicks;
	m_playCount = other.m_playCount;
	m_isFavorite = other.m_isFavorite;
	m_likes = other.m_likes;
	m_lastPlayedDate = other.m_lastPlayedDate;
	m_played = other.m_played;
	m_key = other.m_key;
	m_itemId = other.m_itemId;
}

UserItemDataDto UserItemDataDto::fromJson(QJsonObject source) {
	UserItemDataDto instance;
	instance.setFromJson(source);
	return instance;
}


void UserItemDataDto::setFromJson(QJsonObject source) {
	m_rating = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["Rating"]);
	m_playedPercentage = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["PlayedPercentage"]);
	m_unplayedItemCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["UnplayedItemCount"]);
	m_playbackPositionTicks = Jellyfin::Support::fromJsonValue<qint64>(source["PlaybackPositionTicks"]);
	m_playCount = Jellyfin::Support::fromJsonValue<qint32>(source["PlayCount"]);
	m_isFavorite = Jellyfin::Support::fromJsonValue<bool>(source["IsFavorite"]);
	m_likes = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["Likes"]);
	m_lastPlayedDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastPlayedDate"]);
	m_played = Jellyfin::Support::fromJsonValue<bool>(source["Played"]);
	m_key = Jellyfin::Support::fromJsonValue<QString>(source["Key"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);

}
	
QJsonObject UserItemDataDto::toJson() const {
	QJsonObject result;
	
	
	if (!(!m_rating.has_value())) {
		result["Rating"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_rating);
	}
			
	
	if (!(!m_playedPercentage.has_value())) {
		result["PlayedPercentage"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_playedPercentage);
	}
			
	
	if (!(!m_unplayedItemCount.has_value())) {
		result["UnplayedItemCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_unplayedItemCount);
	}
			
	result["PlaybackPositionTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_playbackPositionTicks);		
	result["PlayCount"] = Jellyfin::Support::toJsonValue<qint32>(m_playCount);		
	result["IsFavorite"] = Jellyfin::Support::toJsonValue<bool>(m_isFavorite);		
	
	if (!(!m_likes.has_value())) {
		result["Likes"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_likes);
	}
			
	
	if (!(m_lastPlayedDate.isNull())) {
		result["LastPlayedDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastPlayedDate);
	}
			
	result["Played"] = Jellyfin::Support::toJsonValue<bool>(m_played);		
	result["Key"] = Jellyfin::Support::toJsonValue<QString>(m_key);		
	result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);	
	return result;
}

std::optional<double> UserItemDataDto::rating() const { return m_rating; }

void UserItemDataDto::setRating(std::optional<double> newRating) {
	m_rating = newRating;
}
bool UserItemDataDto::ratingNull() const {
	return !m_rating.has_value();
}

void UserItemDataDto::setRatingNull() {
	m_rating = std::nullopt;

}
std::optional<double> UserItemDataDto::playedPercentage() const { return m_playedPercentage; }

void UserItemDataDto::setPlayedPercentage(std::optional<double> newPlayedPercentage) {
	m_playedPercentage = newPlayedPercentage;
}
bool UserItemDataDto::playedPercentageNull() const {
	return !m_playedPercentage.has_value();
}

void UserItemDataDto::setPlayedPercentageNull() {
	m_playedPercentage = std::nullopt;

}
std::optional<qint32> UserItemDataDto::unplayedItemCount() const { return m_unplayedItemCount; }

void UserItemDataDto::setUnplayedItemCount(std::optional<qint32> newUnplayedItemCount) {
	m_unplayedItemCount = newUnplayedItemCount;
}
bool UserItemDataDto::unplayedItemCountNull() const {
	return !m_unplayedItemCount.has_value();
}

void UserItemDataDto::setUnplayedItemCountNull() {
	m_unplayedItemCount = std::nullopt;

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

std::optional<bool> UserItemDataDto::likes() const { return m_likes; }

void UserItemDataDto::setLikes(std::optional<bool> newLikes) {
	m_likes = newLikes;
}
bool UserItemDataDto::likesNull() const {
	return !m_likes.has_value();
}

void UserItemDataDto::setLikesNull() {
	m_likes = std::nullopt;

}
QDateTime UserItemDataDto::lastPlayedDate() const { return m_lastPlayedDate; }

void UserItemDataDto::setLastPlayedDate(QDateTime newLastPlayedDate) {
	m_lastPlayedDate = newLastPlayedDate;
}
bool UserItemDataDto::lastPlayedDateNull() const {
	return m_lastPlayedDate.isNull();
}

void UserItemDataDto::setLastPlayedDateNull() {
	m_lastPlayedDate= QDateTime();

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
UserItemDataDto fromJsonValue(const QJsonValue &source, convertType<UserItemDataDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return UserItemDataDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const UserItemDataDto &source, convertType<UserItemDataDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

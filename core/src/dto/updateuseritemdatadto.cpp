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

#include <JellyfinQt/dto/updateuseritemdatadto.h>

namespace Jellyfin {
namespace DTO {

UpdateUserItemDataDto::UpdateUserItemDataDto() {}

UpdateUserItemDataDto::UpdateUserItemDataDto(const UpdateUserItemDataDto &other) :

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


void UpdateUserItemDataDto::replaceData(UpdateUserItemDataDto &other) {
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

UpdateUserItemDataDto UpdateUserItemDataDto::fromJson(QJsonObject source) {
	UpdateUserItemDataDto instance;
	instance.setFromJson(source);
	return instance;
}


void UpdateUserItemDataDto::setFromJson(QJsonObject source) {
	m_rating = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["Rating"]);
	m_playedPercentage = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["PlayedPercentage"]);
	m_unplayedItemCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["UnplayedItemCount"]);
	m_playbackPositionTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["PlaybackPositionTicks"]);
	m_playCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["PlayCount"]);
	m_isFavorite = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsFavorite"]);
	m_likes = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["Likes"]);
	m_lastPlayedDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastPlayedDate"]);
	m_played = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["Played"]);
	m_key = Jellyfin::Support::fromJsonValue<QString>(source["Key"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);

}
	
QJsonObject UpdateUserItemDataDto::toJson() const {
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
			
	
	if (!(!m_playbackPositionTicks.has_value())) {
		result["PlaybackPositionTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_playbackPositionTicks);
	}
			
	
	if (!(!m_playCount.has_value())) {
		result["PlayCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_playCount);
	}
			
	
	if (!(!m_isFavorite.has_value())) {
		result["IsFavorite"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isFavorite);
	}
			
	
	if (!(!m_likes.has_value())) {
		result["Likes"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_likes);
	}
			
	
	if (!(m_lastPlayedDate.isNull())) {
		result["LastPlayedDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastPlayedDate);
	}
			
	
	if (!(!m_played.has_value())) {
		result["Played"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_played);
	}
			
	
	if (!(m_key.isNull())) {
		result["Key"] = Jellyfin::Support::toJsonValue<QString>(m_key);
	}
			
	
	if (!(m_itemId.isNull())) {
		result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);
	}
		
	return result;
}

std::optional<double> UpdateUserItemDataDto::rating() const { return m_rating; }

void UpdateUserItemDataDto::setRating(std::optional<double> newRating) {
	m_rating = newRating;
}
bool UpdateUserItemDataDto::ratingNull() const {
	return !m_rating.has_value();
}

void UpdateUserItemDataDto::setRatingNull() {
	m_rating = std::nullopt;

}
std::optional<double> UpdateUserItemDataDto::playedPercentage() const { return m_playedPercentage; }

void UpdateUserItemDataDto::setPlayedPercentage(std::optional<double> newPlayedPercentage) {
	m_playedPercentage = newPlayedPercentage;
}
bool UpdateUserItemDataDto::playedPercentageNull() const {
	return !m_playedPercentage.has_value();
}

void UpdateUserItemDataDto::setPlayedPercentageNull() {
	m_playedPercentage = std::nullopt;

}
std::optional<qint32> UpdateUserItemDataDto::unplayedItemCount() const { return m_unplayedItemCount; }

void UpdateUserItemDataDto::setUnplayedItemCount(std::optional<qint32> newUnplayedItemCount) {
	m_unplayedItemCount = newUnplayedItemCount;
}
bool UpdateUserItemDataDto::unplayedItemCountNull() const {
	return !m_unplayedItemCount.has_value();
}

void UpdateUserItemDataDto::setUnplayedItemCountNull() {
	m_unplayedItemCount = std::nullopt;

}
std::optional<qint64> UpdateUserItemDataDto::playbackPositionTicks() const { return m_playbackPositionTicks; }

void UpdateUserItemDataDto::setPlaybackPositionTicks(std::optional<qint64> newPlaybackPositionTicks) {
	m_playbackPositionTicks = newPlaybackPositionTicks;
}
bool UpdateUserItemDataDto::playbackPositionTicksNull() const {
	return !m_playbackPositionTicks.has_value();
}

void UpdateUserItemDataDto::setPlaybackPositionTicksNull() {
	m_playbackPositionTicks = std::nullopt;

}
std::optional<qint32> UpdateUserItemDataDto::playCount() const { return m_playCount; }

void UpdateUserItemDataDto::setPlayCount(std::optional<qint32> newPlayCount) {
	m_playCount = newPlayCount;
}
bool UpdateUserItemDataDto::playCountNull() const {
	return !m_playCount.has_value();
}

void UpdateUserItemDataDto::setPlayCountNull() {
	m_playCount = std::nullopt;

}
std::optional<bool> UpdateUserItemDataDto::isFavorite() const { return m_isFavorite; }

void UpdateUserItemDataDto::setIsFavorite(std::optional<bool> newIsFavorite) {
	m_isFavorite = newIsFavorite;
}
bool UpdateUserItemDataDto::isFavoriteNull() const {
	return !m_isFavorite.has_value();
}

void UpdateUserItemDataDto::setIsFavoriteNull() {
	m_isFavorite = std::nullopt;

}
std::optional<bool> UpdateUserItemDataDto::likes() const { return m_likes; }

void UpdateUserItemDataDto::setLikes(std::optional<bool> newLikes) {
	m_likes = newLikes;
}
bool UpdateUserItemDataDto::likesNull() const {
	return !m_likes.has_value();
}

void UpdateUserItemDataDto::setLikesNull() {
	m_likes = std::nullopt;

}
QDateTime UpdateUserItemDataDto::lastPlayedDate() const { return m_lastPlayedDate; }

void UpdateUserItemDataDto::setLastPlayedDate(QDateTime newLastPlayedDate) {
	m_lastPlayedDate = newLastPlayedDate;
}
bool UpdateUserItemDataDto::lastPlayedDateNull() const {
	return m_lastPlayedDate.isNull();
}

void UpdateUserItemDataDto::setLastPlayedDateNull() {
	m_lastPlayedDate= QDateTime();

}
std::optional<bool> UpdateUserItemDataDto::played() const { return m_played; }

void UpdateUserItemDataDto::setPlayed(std::optional<bool> newPlayed) {
	m_played = newPlayed;
}
bool UpdateUserItemDataDto::playedNull() const {
	return !m_played.has_value();
}

void UpdateUserItemDataDto::setPlayedNull() {
	m_played = std::nullopt;

}
QString UpdateUserItemDataDto::key() const { return m_key; }

void UpdateUserItemDataDto::setKey(QString newKey) {
	m_key = newKey;
}
bool UpdateUserItemDataDto::keyNull() const {
	return m_key.isNull();
}

void UpdateUserItemDataDto::setKeyNull() {
	m_key.clear();

}
QString UpdateUserItemDataDto::itemId() const { return m_itemId; }

void UpdateUserItemDataDto::setItemId(QString newItemId) {
	m_itemId = newItemId;
}
bool UpdateUserItemDataDto::itemIdNull() const {
	return m_itemId.isNull();
}

void UpdateUserItemDataDto::setItemIdNull() {
	m_itemId.clear();

}

} // NS DTO

namespace Support {

using UpdateUserItemDataDto = Jellyfin::DTO::UpdateUserItemDataDto;

template <>
UpdateUserItemDataDto fromJsonValue(const QJsonValue &source, convertType<UpdateUserItemDataDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return UpdateUserItemDataDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const UpdateUserItemDataDto &source, convertType<UpdateUserItemDataDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

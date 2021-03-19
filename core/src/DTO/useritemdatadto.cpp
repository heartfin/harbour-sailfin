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

UserItemDataDto::UserItemDataDto(QObject *parent) : QObject(parent) {}

UserItemDataDto *UserItemDataDto::fromJSON(QJsonObject source, QObject *parent) {
	UserItemDataDto *instance = new UserItemDataDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void UserItemDataDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject UserItemDataDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
double UserItemDataDto::rating() const { return m_rating; }
void UserItemDataDto::setRating(double newRating) {
	m_rating = newRating;
	emit ratingChanged(newRating);
}

double UserItemDataDto::playedPercentage() const { return m_playedPercentage; }
void UserItemDataDto::setPlayedPercentage(double newPlayedPercentage) {
	m_playedPercentage = newPlayedPercentage;
	emit playedPercentageChanged(newPlayedPercentage);
}

qint32 UserItemDataDto::unplayedItemCount() const { return m_unplayedItemCount; }
void UserItemDataDto::setUnplayedItemCount(qint32 newUnplayedItemCount) {
	m_unplayedItemCount = newUnplayedItemCount;
	emit unplayedItemCountChanged(newUnplayedItemCount);
}

qint64 UserItemDataDto::playbackPositionTicks() const { return m_playbackPositionTicks; }
void UserItemDataDto::setPlaybackPositionTicks(qint64 newPlaybackPositionTicks) {
	m_playbackPositionTicks = newPlaybackPositionTicks;
	emit playbackPositionTicksChanged(newPlaybackPositionTicks);
}

qint32 UserItemDataDto::playCount() const { return m_playCount; }
void UserItemDataDto::setPlayCount(qint32 newPlayCount) {
	m_playCount = newPlayCount;
	emit playCountChanged(newPlayCount);
}

bool UserItemDataDto::isFavorite() const { return m_isFavorite; }
void UserItemDataDto::setIsFavorite(bool newIsFavorite) {
	m_isFavorite = newIsFavorite;
	emit isFavoriteChanged(newIsFavorite);
}

bool UserItemDataDto::likes() const { return m_likes; }
void UserItemDataDto::setLikes(bool newLikes) {
	m_likes = newLikes;
	emit likesChanged(newLikes);
}

QDateTime UserItemDataDto::lastPlayedDate() const { return m_lastPlayedDate; }
void UserItemDataDto::setLastPlayedDate(QDateTime newLastPlayedDate) {
	m_lastPlayedDate = newLastPlayedDate;
	emit lastPlayedDateChanged(newLastPlayedDate);
}

bool UserItemDataDto::played() const { return m_played; }
void UserItemDataDto::setPlayed(bool newPlayed) {
	m_played = newPlayed;
	emit playedChanged(newPlayed);
}

QString UserItemDataDto::key() const { return m_key; }
void UserItemDataDto::setKey(QString newKey) {
	m_key = newKey;
	emit keyChanged(newKey);
}

QString UserItemDataDto::itemId() const { return m_itemId; }
void UserItemDataDto::setItemId(QString newItemId) {
	m_itemId = newItemId;
	emit itemIdChanged(newItemId);
}


} // NS Jellyfin
} // NS DTO

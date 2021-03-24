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

#ifndef JELLYFIN_DTO_USERITEMDATADTO_H
#define JELLYFIN_DTO_USERITEMDATADTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class UserItemDataDto {
public:UserItemDataDto();UserItemDataDto(const UserItemDataDto &other);
	
	static UserItemDataDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the rating.
	 */
	double rating() const;
	/**
	* @brief Gets or sets the rating.
	*/
	void setRating(double newRating);
	/**
	 * @brief Gets or sets the played percentage.
	 */
	double playedPercentage() const;
	/**
	* @brief Gets or sets the played percentage.
	*/
	void setPlayedPercentage(double newPlayedPercentage);
	/**
	 * @brief Gets or sets the unplayed item count.
	 */
	qint32 unplayedItemCount() const;
	/**
	* @brief Gets or sets the unplayed item count.
	*/
	void setUnplayedItemCount(qint32 newUnplayedItemCount);
	/**
	 * @brief Gets or sets the playback position ticks.
	 */
	qint64 playbackPositionTicks() const;
	/**
	* @brief Gets or sets the playback position ticks.
	*/
	void setPlaybackPositionTicks(qint64 newPlaybackPositionTicks);
	/**
	 * @brief Gets or sets the play count.
	 */
	qint32 playCount() const;
	/**
	* @brief Gets or sets the play count.
	*/
	void setPlayCount(qint32 newPlayCount);
	/**
	 * @brief Gets or sets a value indicating whether this instance is favorite.
	 */
	bool isFavorite() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is favorite.
	*/
	void setIsFavorite(bool newIsFavorite);
	/**
	 * @brief Gets or sets a value indicating whether this MediaBrowser.Model.Dto.UserItemDataDto is likes.
	 */
	bool likes() const;
	/**
	* @brief Gets or sets a value indicating whether this MediaBrowser.Model.Dto.UserItemDataDto is likes.
	*/
	void setLikes(bool newLikes);
	/**
	 * @brief Gets or sets the last played date.
	 */
	QDateTime lastPlayedDate() const;
	/**
	* @brief Gets or sets the last played date.
	*/
	void setLastPlayedDate(QDateTime newLastPlayedDate);
	/**
	 * @brief Gets or sets a value indicating whether this MediaBrowser.Model.Dto.UserItemDataDto is played.
	 */
	bool played() const;
	/**
	* @brief Gets or sets a value indicating whether this MediaBrowser.Model.Dto.UserItemDataDto is played.
	*/
	void setPlayed(bool newPlayed);
	/**
	 * @brief Gets or sets the key.
	 */
	QString key() const;
	/**
	* @brief Gets or sets the key.
	*/
	void setKey(QString newKey);
	/**
	 * @brief Gets or sets the item identifier.
	 */
	QString itemId() const;
	/**
	* @brief Gets or sets the item identifier.
	*/
	void setItemId(QString newItemId);

protected:
	double m_rating;
	double m_playedPercentage;
	qint32 m_unplayedItemCount;
	qint64 m_playbackPositionTicks;
	qint32 m_playCount;
	bool m_isFavorite;
	bool m_likes;
	QDateTime m_lastPlayedDate;
	bool m_played;
	QString m_key;
	QString m_itemId;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_USERITEMDATADTO_H

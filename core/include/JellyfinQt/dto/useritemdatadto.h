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
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class UserItemDataDto {
public:
	UserItemDataDto();
	UserItemDataDto(const UserItemDataDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(UserItemDataDto &other);
	
	static UserItemDataDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the rating.
	 */
	std::optional<double> rating() const;
	/**
	* @brief Gets or sets the rating.
	*/
	void setRating(std::optional<double> newRating);
	bool ratingNull() const;
	void setRatingNull();

	/**
	 * @brief Gets or sets the played percentage.
	 */
	std::optional<double> playedPercentage() const;
	/**
	* @brief Gets or sets the played percentage.
	*/
	void setPlayedPercentage(std::optional<double> newPlayedPercentage);
	bool playedPercentageNull() const;
	void setPlayedPercentageNull();

	/**
	 * @brief Gets or sets the unplayed item count.
	 */
	std::optional<qint32> unplayedItemCount() const;
	/**
	* @brief Gets or sets the unplayed item count.
	*/
	void setUnplayedItemCount(std::optional<qint32> newUnplayedItemCount);
	bool unplayedItemCountNull() const;
	void setUnplayedItemCountNull();

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
	std::optional<bool> likes() const;
	/**
	* @brief Gets or sets a value indicating whether this MediaBrowser.Model.Dto.UserItemDataDto is likes.
	*/
	void setLikes(std::optional<bool> newLikes);
	bool likesNull() const;
	void setLikesNull();

	/**
	 * @brief Gets or sets the last played date.
	 */
	QDateTime lastPlayedDate() const;
	/**
	* @brief Gets or sets the last played date.
	*/
	void setLastPlayedDate(QDateTime newLastPlayedDate);
	bool lastPlayedDateNull() const;
	void setLastPlayedDateNull();

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
	bool keyNull() const;
	void setKeyNull();

	/**
	 * @brief Gets or sets the item identifier.
	 */
	QString itemId() const;
	/**
	* @brief Gets or sets the item identifier.
	*/
	void setItemId(QString newItemId);
	bool itemIdNull() const;
	void setItemIdNull();


protected:
	std::optional<double> m_rating = std::nullopt;
	std::optional<double> m_playedPercentage = std::nullopt;
	std::optional<qint32> m_unplayedItemCount = std::nullopt;
	qint64 m_playbackPositionTicks;
	qint32 m_playCount;
	bool m_isFavorite;
	std::optional<bool> m_likes = std::nullopt;
	QDateTime m_lastPlayedDate;
	bool m_played;
	QString m_key;
	QString m_itemId;
};

} // NS DTO

namespace Support {

using UserItemDataDto = Jellyfin::DTO::UserItemDataDto;

template <>
UserItemDataDto fromJsonValue(const QJsonValue &source, convertType<UserItemDataDto>);

template<>
QJsonValue toJsonValue(const UserItemDataDto &source, convertType<UserItemDataDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_USERITEMDATADTO_H

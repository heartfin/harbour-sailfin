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
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class UserItemDataDto : public QObject {
	Q_OBJECT
public:
	explicit UserItemDataDto(QObject *parent = nullptr);
	static UserItemDataDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the rating.
	 */
	Q_PROPERTY(double rating READ rating WRITE setRating NOTIFY ratingChanged)
	/**
	 * @brief Gets or sets the played percentage.
	 */
	Q_PROPERTY(double playedPercentage READ playedPercentage WRITE setPlayedPercentage NOTIFY playedPercentageChanged)
	/**
	 * @brief Gets or sets the unplayed item count.
	 */
	Q_PROPERTY(qint32 unplayedItemCount READ unplayedItemCount WRITE setUnplayedItemCount NOTIFY unplayedItemCountChanged)
	/**
	 * @brief Gets or sets the playback position ticks.
	 */
	Q_PROPERTY(qint64 playbackPositionTicks READ playbackPositionTicks WRITE setPlaybackPositionTicks NOTIFY playbackPositionTicksChanged)
	/**
	 * @brief Gets or sets the play count.
	 */
	Q_PROPERTY(qint32 playCount READ playCount WRITE setPlayCount NOTIFY playCountChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is favorite.
	 */
	Q_PROPERTY(bool isFavorite READ isFavorite WRITE setIsFavorite NOTIFY isFavoriteChanged)
	/**
	 * @brief Gets or sets a value indicating whether this MediaBrowser.Model.Dto.UserItemDataDto is likes.
	 */
	Q_PROPERTY(bool likes READ likes WRITE setLikes NOTIFY likesChanged)
	/**
	 * @brief Gets or sets the last played date.
	 */
	Q_PROPERTY(QDateTime lastPlayedDate READ lastPlayedDate WRITE setLastPlayedDate NOTIFY lastPlayedDateChanged)
	/**
	 * @brief Gets or sets a value indicating whether this MediaBrowser.Model.Dto.UserItemDataDto is played.
	 */
	Q_PROPERTY(bool played READ played WRITE setPlayed NOTIFY playedChanged)
	/**
	 * @brief Gets or sets the key.
	 */
	Q_PROPERTY(QString key READ key WRITE setKey NOTIFY keyChanged)
	/**
	 * @brief Gets or sets the item identifier.
	 */
	Q_PROPERTY(QString itemId READ itemId WRITE setItemId NOTIFY itemIdChanged)

	double rating() const;
	void setRating(double newRating);
	
	double playedPercentage() const;
	void setPlayedPercentage(double newPlayedPercentage);
	
	qint32 unplayedItemCount() const;
	void setUnplayedItemCount(qint32 newUnplayedItemCount);
	
	qint64 playbackPositionTicks() const;
	void setPlaybackPositionTicks(qint64 newPlaybackPositionTicks);
	
	qint32 playCount() const;
	void setPlayCount(qint32 newPlayCount);
	
	bool isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	
	bool likes() const;
	void setLikes(bool newLikes);
	
	QDateTime lastPlayedDate() const;
	void setLastPlayedDate(QDateTime newLastPlayedDate);
	
	bool played() const;
	void setPlayed(bool newPlayed);
	
	QString key() const;
	void setKey(QString newKey);
	
	QString itemId() const;
	void setItemId(QString newItemId);
	
signals:
	void ratingChanged(double newRating);
	void playedPercentageChanged(double newPlayedPercentage);
	void unplayedItemCountChanged(qint32 newUnplayedItemCount);
	void playbackPositionTicksChanged(qint64 newPlaybackPositionTicks);
	void playCountChanged(qint32 newPlayCount);
	void isFavoriteChanged(bool newIsFavorite);
	void likesChanged(bool newLikes);
	void lastPlayedDateChanged(QDateTime newLastPlayedDate);
	void playedChanged(bool newPlayed);
	void keyChanged(QString newKey);
	void itemIdChanged(QString newItemId);
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

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

#ifndef JELLYFIN_DTO_PLAYQUEUEUPDATE_H
#define JELLYFIN_DTO_PLAYQUEUEUPDATE_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/grouprepeatmode.h"
#include "JellyfinQt/dto/groupshufflemode.h"
#include "JellyfinQt/dto/playqueueupdatereason.h"
#include "JellyfinQt/dto/syncplayqueueitem.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class PlayQueueUpdate {
public:
	PlayQueueUpdate(	
		PlayQueueUpdateReason reason,			
		QDateTime lastUpdate,			
		QList<SyncPlayQueueItem> playlist,			
		qint32 playingItemIndex,			
		qint64 startPositionTicks,			
		bool isPlaying,			
		GroupShuffleMode shuffleMode,			
		GroupRepeatMode repeatMode		
	);

	PlayQueueUpdate(const PlayQueueUpdate &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(PlayQueueUpdate &other);
	
	static PlayQueueUpdate fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	PlayQueueUpdateReason reason() const;

	void setReason(PlayQueueUpdateReason newReason);

	/**
	 * @brief Gets the UTC time of the last change to the playing queue.
	 */
	QDateTime lastUpdate() const;
	/**
	* @brief Gets the UTC time of the last change to the playing queue.
	*/
	void setLastUpdate(QDateTime newLastUpdate);

	/**
	 * @brief Gets the playlist.
	 */
	QList<SyncPlayQueueItem> playlist() const;
	/**
	* @brief Gets the playlist.
	*/
	void setPlaylist(QList<SyncPlayQueueItem> newPlaylist);

	/**
	 * @brief Gets the playing item index in the playlist.
	 */
	qint32 playingItemIndex() const;
	/**
	* @brief Gets the playing item index in the playlist.
	*/
	void setPlayingItemIndex(qint32 newPlayingItemIndex);

	/**
	 * @brief Gets the start position ticks.
	 */
	qint64 startPositionTicks() const;
	/**
	* @brief Gets the start position ticks.
	*/
	void setStartPositionTicks(qint64 newStartPositionTicks);

	/**
	 * @brief Gets a value indicating whether the current item is playing.
	 */
	bool isPlaying() const;
	/**
	* @brief Gets a value indicating whether the current item is playing.
	*/
	void setIsPlaying(bool newIsPlaying);


	GroupShuffleMode shuffleMode() const;

	void setShuffleMode(GroupShuffleMode newShuffleMode);


	GroupRepeatMode repeatMode() const;

	void setRepeatMode(GroupRepeatMode newRepeatMode);


protected:
	PlayQueueUpdateReason m_reason;
	QDateTime m_lastUpdate;
	QList<SyncPlayQueueItem> m_playlist;
	qint32 m_playingItemIndex;
	qint64 m_startPositionTicks;
	bool m_isPlaying;
	GroupShuffleMode m_shuffleMode;
	GroupRepeatMode m_repeatMode;

private:
	// Private constructor which generates an invalid object, for use withing PlayQueueUpdate::fromJson();
	PlayQueueUpdate();
};


} // NS DTO

namespace Support {

using PlayQueueUpdate = Jellyfin::DTO::PlayQueueUpdate;

template <>
PlayQueueUpdate fromJsonValue(const QJsonValue &source, convertType<PlayQueueUpdate>);

template<>
QJsonValue toJsonValue(const PlayQueueUpdate &source, convertType<PlayQueueUpdate>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_PLAYQUEUEUPDATE_H

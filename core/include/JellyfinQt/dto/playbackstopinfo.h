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

#ifndef JELLYFIN_DTO_PLAYBACKSTOPINFO_H
#define JELLYFIN_DTO_PLAYBACKSTOPINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/queueitem.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class PlaybackStopInfo {
public:
	PlaybackStopInfo();
	PlaybackStopInfo(const PlaybackStopInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(PlaybackStopInfo &other);
	
	static PlaybackStopInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QSharedPointer<BaseItemDto> item() const;

	void setItem(QSharedPointer<BaseItemDto> newItem);

	/**
	 * @brief Gets or sets the item identifier.
	 */
	QString itemId() const;
	/**
	* @brief Gets or sets the item identifier.
	*/
	void setItemId(QString newItemId);

	/**
	 * @brief Gets or sets the session id.
	 */
	QString sessionId() const;
	/**
	* @brief Gets or sets the session id.
	*/
	void setSessionId(QString newSessionId);
	bool sessionIdNull() const;
	void setSessionIdNull();

	/**
	 * @brief Gets or sets the media version identifier.
	 */
	QString mediaSourceId() const;
	/**
	* @brief Gets or sets the media version identifier.
	*/
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();

	/**
	 * @brief Gets or sets the position ticks.
	 */
	std::optional<qint64> positionTicks() const;
	/**
	* @brief Gets or sets the position ticks.
	*/
	void setPositionTicks(std::optional<qint64> newPositionTicks);
	bool positionTicksNull() const;
	void setPositionTicksNull();

	/**
	 * @brief Gets or sets the live stream identifier.
	 */
	QString liveStreamId() const;
	/**
	* @brief Gets or sets the live stream identifier.
	*/
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();

	/**
	 * @brief Gets or sets the play session identifier.
	 */
	QString playSessionId() const;
	/**
	* @brief Gets or sets the play session identifier.
	*/
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();

	/**
	 * @brief Gets or sets a value indicating whether this MediaBrowser.Model.Session.PlaybackStopInfo is failed.
	 */
	bool failed() const;
	/**
	* @brief Gets or sets a value indicating whether this MediaBrowser.Model.Session.PlaybackStopInfo is failed.
	*/
	void setFailed(bool newFailed);


	QString nextMediaType() const;

	void setNextMediaType(QString newNextMediaType);
	bool nextMediaTypeNull() const;
	void setNextMediaTypeNull();


	QString playlistItemId() const;

	void setPlaylistItemId(QString newPlaylistItemId);
	bool playlistItemIdNull() const;
	void setPlaylistItemIdNull();


	QList<QueueItem> nowPlayingQueue() const;

	void setNowPlayingQueue(QList<QueueItem> newNowPlayingQueue);
	bool nowPlayingQueueNull() const;
	void setNowPlayingQueueNull();


protected:
	QSharedPointer<BaseItemDto> m_item = QSharedPointer<BaseItemDto>();
	QString m_itemId;
	QString m_sessionId;
	QString m_mediaSourceId;
	std::optional<qint64> m_positionTicks = std::nullopt;
	QString m_liveStreamId;
	QString m_playSessionId;
	bool m_failed;
	QString m_nextMediaType;
	QString m_playlistItemId;
	QList<QueueItem> m_nowPlayingQueue;
};

} // NS DTO

namespace Support {

using PlaybackStopInfo = Jellyfin::DTO::PlaybackStopInfo;

template <>
PlaybackStopInfo fromJsonValue(const QJsonValue &source, convertType<PlaybackStopInfo>);

template<>
QJsonValue toJsonValue(const PlaybackStopInfo &source, convertType<PlaybackStopInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_PLAYBACKSTOPINFO_H

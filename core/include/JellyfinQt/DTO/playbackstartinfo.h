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

#ifndef JELLYFIN_DTO_PLAYBACKSTARTINFO_H
#define JELLYFIN_DTO_PLAYBACKSTARTINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/baseitemdto.h"
#include "JellyfinQt/DTO/playmethod.h"
#include "JellyfinQt/DTO/queueitem.h"
#include "JellyfinQt/DTO/repeatmode.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class PlaybackStartInfo {
public:
	explicit PlaybackStartInfo();
	static PlaybackStartInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets a value indicating whether this instance can seek.
	 */
	bool canSeek() const;
	/**
	* @brief Gets or sets a value indicating whether this instance can seek.
	*/
	void setCanSeek(bool newCanSeek);

	QSharedPointer<BaseItemDto> item() const;

	void setItem(QSharedPointer<BaseItemDto> newItem);
	/**
	 * @brief Gets or sets the item identifier.
	 */
	QUuid itemId() const;
	/**
	* @brief Gets or sets the item identifier.
	*/
	void setItemId(QUuid newItemId);
	/**
	 * @brief Gets or sets the session id.
	 */
	QString sessionId() const;
	/**
	* @brief Gets or sets the session id.
	*/
	void setSessionId(QString newSessionId);
	/**
	 * @brief Gets or sets the media version identifier.
	 */
	QString mediaSourceId() const;
	/**
	* @brief Gets or sets the media version identifier.
	*/
	void setMediaSourceId(QString newMediaSourceId);
	/**
	 * @brief Gets or sets the index of the audio stream.
	 */
	qint32 audioStreamIndex() const;
	/**
	* @brief Gets or sets the index of the audio stream.
	*/
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	/**
	 * @brief Gets or sets the index of the subtitle stream.
	 */
	qint32 subtitleStreamIndex() const;
	/**
	* @brief Gets or sets the index of the subtitle stream.
	*/
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	/**
	 * @brief Gets or sets a value indicating whether this instance is paused.
	 */
	bool isPaused() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is paused.
	*/
	void setIsPaused(bool newIsPaused);
	/**
	 * @brief Gets or sets a value indicating whether this instance is muted.
	 */
	bool isMuted() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is muted.
	*/
	void setIsMuted(bool newIsMuted);
	/**
	 * @brief Gets or sets the position ticks.
	 */
	qint64 positionTicks() const;
	/**
	* @brief Gets or sets the position ticks.
	*/
	void setPositionTicks(qint64 newPositionTicks);

	qint64 playbackStartTimeTicks() const;

	void setPlaybackStartTimeTicks(qint64 newPlaybackStartTimeTicks);
	/**
	 * @brief Gets or sets the volume level.
	 */
	qint32 volumeLevel() const;
	/**
	* @brief Gets or sets the volume level.
	*/
	void setVolumeLevel(qint32 newVolumeLevel);

	qint32 brightness() const;

	void setBrightness(qint32 newBrightness);

	QString aspectRatio() const;

	void setAspectRatio(QString newAspectRatio);

	PlayMethod playMethod() const;

	void setPlayMethod(PlayMethod newPlayMethod);
	/**
	 * @brief Gets or sets the live stream identifier.
	 */
	QString liveStreamId() const;
	/**
	* @brief Gets or sets the live stream identifier.
	*/
	void setLiveStreamId(QString newLiveStreamId);
	/**
	 * @brief Gets or sets the play session identifier.
	 */
	QString playSessionId() const;
	/**
	* @brief Gets or sets the play session identifier.
	*/
	void setPlaySessionId(QString newPlaySessionId);

	RepeatMode repeatMode() const;

	void setRepeatMode(RepeatMode newRepeatMode);

	QList<QSharedPointer<QueueItem>> nowPlayingQueue() const;

	void setNowPlayingQueue(QList<QSharedPointer<QueueItem>> newNowPlayingQueue);

	QString playlistItemId() const;

	void setPlaylistItemId(QString newPlaylistItemId);

protected:
	bool m_canSeek;
	QSharedPointer<BaseItemDto> m_item = nullptr;
	QUuid m_itemId;
	QString m_sessionId;
	QString m_mediaSourceId;
	qint32 m_audioStreamIndex;
	qint32 m_subtitleStreamIndex;
	bool m_isPaused;
	bool m_isMuted;
	qint64 m_positionTicks;
	qint64 m_playbackStartTimeTicks;
	qint32 m_volumeLevel;
	qint32 m_brightness;
	QString m_aspectRatio;
	PlayMethod m_playMethod;
	QString m_liveStreamId;
	QString m_playSessionId;
	RepeatMode m_repeatMode;
	QList<QSharedPointer<QueueItem>> m_nowPlayingQueue;
	QString m_playlistItemId;
};

} // NS DTO

namespace Support {

using PlaybackStartInfo = Jellyfin::DTO::PlaybackStartInfo;

template <>
PlaybackStartInfo fromJsonValue<PlaybackStartInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return PlaybackStartInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLAYBACKSTARTINFO_H

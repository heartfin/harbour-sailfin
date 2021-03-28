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
#include <optional>

#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/playmethod.h"
#include "JellyfinQt/dto/queueitem.h"
#include "JellyfinQt/dto/repeatmode.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class PlaybackStartInfo {
public:
	PlaybackStartInfo();
	PlaybackStartInfo(const PlaybackStartInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(PlaybackStartInfo &other);
	
	static PlaybackStartInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
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
	 * @brief Gets or sets the index of the audio stream.
	 */
	std::optional<qint32> audioStreamIndex() const;
	/**
	* @brief Gets or sets the index of the audio stream.
	*/
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();

	/**
	 * @brief Gets or sets the index of the subtitle stream.
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	/**
	* @brief Gets or sets the index of the subtitle stream.
	*/
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();

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
	std::optional<qint64> positionTicks() const;
	/**
	* @brief Gets or sets the position ticks.
	*/
	void setPositionTicks(std::optional<qint64> newPositionTicks);
	bool positionTicksNull() const;
	void setPositionTicksNull();


	std::optional<qint64> playbackStartTimeTicks() const;

	void setPlaybackStartTimeTicks(std::optional<qint64> newPlaybackStartTimeTicks);
	bool playbackStartTimeTicksNull() const;
	void setPlaybackStartTimeTicksNull();

	/**
	 * @brief Gets or sets the volume level.
	 */
	std::optional<qint32> volumeLevel() const;
	/**
	* @brief Gets or sets the volume level.
	*/
	void setVolumeLevel(std::optional<qint32> newVolumeLevel);
	bool volumeLevelNull() const;
	void setVolumeLevelNull();


	std::optional<qint32> brightness() const;

	void setBrightness(std::optional<qint32> newBrightness);
	bool brightnessNull() const;
	void setBrightnessNull();


	QString aspectRatio() const;

	void setAspectRatio(QString newAspectRatio);
	bool aspectRatioNull() const;
	void setAspectRatioNull();


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


	RepeatMode repeatMode() const;

	void setRepeatMode(RepeatMode newRepeatMode);


	QList<QueueItem> nowPlayingQueue() const;

	void setNowPlayingQueue(QList<QueueItem> newNowPlayingQueue);
	bool nowPlayingQueueNull() const;
	void setNowPlayingQueueNull();


	QString playlistItemId() const;

	void setPlaylistItemId(QString newPlaylistItemId);
	bool playlistItemIdNull() const;
	void setPlaylistItemIdNull();


protected:
	bool m_canSeek;
	QSharedPointer<BaseItemDto> m_item = nullptr;
	QString m_itemId;
	QString m_sessionId;
	QString m_mediaSourceId;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	bool m_isPaused;
	bool m_isMuted;
	std::optional<qint64> m_positionTicks = std::nullopt;
	std::optional<qint64> m_playbackStartTimeTicks = std::nullopt;
	std::optional<qint32> m_volumeLevel = std::nullopt;
	std::optional<qint32> m_brightness = std::nullopt;
	QString m_aspectRatio;
	PlayMethod m_playMethod;
	QString m_liveStreamId;
	QString m_playSessionId;
	RepeatMode m_repeatMode;
	QList<QueueItem> m_nowPlayingQueue;
	QString m_playlistItemId;
};

} // NS DTO

namespace Support {

using PlaybackStartInfo = Jellyfin::DTO::PlaybackStartInfo;

template <>
PlaybackStartInfo fromJsonValue(const QJsonValue &source, convertType<PlaybackStartInfo>);

template<>
QJsonValue toJsonValue(const PlaybackStartInfo &source, convertType<PlaybackStartInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_PLAYBACKSTARTINFO_H

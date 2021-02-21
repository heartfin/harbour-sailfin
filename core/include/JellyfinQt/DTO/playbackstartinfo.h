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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/playmethod.h"
#include "JellyfinQt/DTO/repeatmode.h"

namespace Jellyfin {
namespace DTO {

class BaseItemDto;
class QueueItem;

class PlaybackStartInfo : public QObject {
	Q_OBJECT
public:
	explicit PlaybackStartInfo(QObject *parent = nullptr);
	static PlaybackStartInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets a value indicating whether this instance can seek.
	 */
	Q_PROPERTY(bool canSeek READ canSeek WRITE setCanSeek NOTIFY canSeekChanged)
	Q_PROPERTY(BaseItemDto * item READ item WRITE setItem NOTIFY itemChanged)
	/**
	 * @brief Gets or sets the item identifier.
	 */
	Q_PROPERTY(QString itemId READ itemId WRITE setItemId NOTIFY itemIdChanged)
	/**
	 * @brief Gets or sets the session id.
	 */
	Q_PROPERTY(QString sessionId READ sessionId WRITE setSessionId NOTIFY sessionIdChanged)
	/**
	 * @brief Gets or sets the media version identifier.
	 */
	Q_PROPERTY(QString mediaSourceId READ mediaSourceId WRITE setMediaSourceId NOTIFY mediaSourceIdChanged)
	/**
	 * @brief Gets or sets the index of the audio stream.
	 */
	Q_PROPERTY(qint32 audioStreamIndex READ audioStreamIndex WRITE setAudioStreamIndex NOTIFY audioStreamIndexChanged)
	/**
	 * @brief Gets or sets the index of the subtitle stream.
	 */
	Q_PROPERTY(qint32 subtitleStreamIndex READ subtitleStreamIndex WRITE setSubtitleStreamIndex NOTIFY subtitleStreamIndexChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is paused.
	 */
	Q_PROPERTY(bool isPaused READ isPaused WRITE setIsPaused NOTIFY isPausedChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is muted.
	 */
	Q_PROPERTY(bool isMuted READ isMuted WRITE setIsMuted NOTIFY isMutedChanged)
	/**
	 * @brief Gets or sets the position ticks.
	 */
	Q_PROPERTY(qint64 positionTicks READ positionTicks WRITE setPositionTicks NOTIFY positionTicksChanged)
	Q_PROPERTY(qint64 playbackStartTimeTicks READ playbackStartTimeTicks WRITE setPlaybackStartTimeTicks NOTIFY playbackStartTimeTicksChanged)
	/**
	 * @brief Gets or sets the volume level.
	 */
	Q_PROPERTY(qint32 volumeLevel READ volumeLevel WRITE setVolumeLevel NOTIFY volumeLevelChanged)
	Q_PROPERTY(qint32 brightness READ brightness WRITE setBrightness NOTIFY brightnessChanged)
	Q_PROPERTY(QString aspectRatio READ aspectRatio WRITE setAspectRatio NOTIFY aspectRatioChanged)
	Q_PROPERTY(PlayMethod playMethod READ playMethod WRITE setPlayMethod NOTIFY playMethodChanged)
	/**
	 * @brief Gets or sets the live stream identifier.
	 */
	Q_PROPERTY(QString liveStreamId READ liveStreamId WRITE setLiveStreamId NOTIFY liveStreamIdChanged)
	/**
	 * @brief Gets or sets the play session identifier.
	 */
	Q_PROPERTY(QString playSessionId READ playSessionId WRITE setPlaySessionId NOTIFY playSessionIdChanged)
	Q_PROPERTY(RepeatMode repeatMode READ repeatMode WRITE setRepeatMode NOTIFY repeatModeChanged)
	Q_PROPERTY(QList<QueueItem *> nowPlayingQueue READ nowPlayingQueue WRITE setNowPlayingQueue NOTIFY nowPlayingQueueChanged)
	Q_PROPERTY(QString playlistItemId READ playlistItemId WRITE setPlaylistItemId NOTIFY playlistItemIdChanged)

	bool canSeek() const;
	void setCanSeek(bool newCanSeek);
	
	BaseItemDto * item() const;
	void setItem(BaseItemDto * newItem);
	
	QString itemId() const;
	void setItemId(QString newItemId);
	
	QString sessionId() const;
	void setSessionId(QString newSessionId);
	
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	
	qint32 audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	
	qint32 subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	
	bool isPaused() const;
	void setIsPaused(bool newIsPaused);
	
	bool isMuted() const;
	void setIsMuted(bool newIsMuted);
	
	qint64 positionTicks() const;
	void setPositionTicks(qint64 newPositionTicks);
	
	qint64 playbackStartTimeTicks() const;
	void setPlaybackStartTimeTicks(qint64 newPlaybackStartTimeTicks);
	
	qint32 volumeLevel() const;
	void setVolumeLevel(qint32 newVolumeLevel);
	
	qint32 brightness() const;
	void setBrightness(qint32 newBrightness);
	
	QString aspectRatio() const;
	void setAspectRatio(QString newAspectRatio);
	
	PlayMethod playMethod() const;
	void setPlayMethod(PlayMethod newPlayMethod);
	
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	
	RepeatMode repeatMode() const;
	void setRepeatMode(RepeatMode newRepeatMode);
	
	QList<QueueItem *> nowPlayingQueue() const;
	void setNowPlayingQueue(QList<QueueItem *> newNowPlayingQueue);
	
	QString playlistItemId() const;
	void setPlaylistItemId(QString newPlaylistItemId);
	
signals:
	void canSeekChanged(bool newCanSeek);
	void itemChanged(BaseItemDto * newItem);
	void itemIdChanged(QString newItemId);
	void sessionIdChanged(QString newSessionId);
	void mediaSourceIdChanged(QString newMediaSourceId);
	void audioStreamIndexChanged(qint32 newAudioStreamIndex);
	void subtitleStreamIndexChanged(qint32 newSubtitleStreamIndex);
	void isPausedChanged(bool newIsPaused);
	void isMutedChanged(bool newIsMuted);
	void positionTicksChanged(qint64 newPositionTicks);
	void playbackStartTimeTicksChanged(qint64 newPlaybackStartTimeTicks);
	void volumeLevelChanged(qint32 newVolumeLevel);
	void brightnessChanged(qint32 newBrightness);
	void aspectRatioChanged(QString newAspectRatio);
	void playMethodChanged(PlayMethod newPlayMethod);
	void liveStreamIdChanged(QString newLiveStreamId);
	void playSessionIdChanged(QString newPlaySessionId);
	void repeatModeChanged(RepeatMode newRepeatMode);
	void nowPlayingQueueChanged(QList<QueueItem *> newNowPlayingQueue);
	void playlistItemIdChanged(QString newPlaylistItemId);
protected:
	bool m_canSeek;
	BaseItemDto * m_item = nullptr;
	QString m_itemId;
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
	QList<QueueItem *> m_nowPlayingQueue;
	QString m_playlistItemId;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLAYBACKSTARTINFO_H

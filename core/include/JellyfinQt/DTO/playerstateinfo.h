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

#ifndef JELLYFIN_DTO_PLAYERSTATEINFO_H
#define JELLYFIN_DTO_PLAYERSTATEINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/playmethod.h"
#include "JellyfinQt/DTO/repeatmode.h"

namespace Jellyfin {
namespace DTO {

class PlayerStateInfo : public QObject {
	Q_OBJECT
public:
	explicit PlayerStateInfo(QObject *parent = nullptr);
	static PlayerStateInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the now playing position ticks.
	 */
	Q_PROPERTY(qint64 positionTicks READ positionTicks WRITE setPositionTicks NOTIFY positionTicksChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance can seek.
	 */
	Q_PROPERTY(bool canSeek READ canSeek WRITE setCanSeek NOTIFY canSeekChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is paused.
	 */
	Q_PROPERTY(bool isPaused READ isPaused WRITE setIsPaused NOTIFY isPausedChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is muted.
	 */
	Q_PROPERTY(bool isMuted READ isMuted WRITE setIsMuted NOTIFY isMutedChanged)
	/**
	 * @brief Gets or sets the volume level.
	 */
	Q_PROPERTY(qint32 volumeLevel READ volumeLevel WRITE setVolumeLevel NOTIFY volumeLevelChanged)
	/**
	 * @brief Gets or sets the index of the now playing audio stream.
	 */
	Q_PROPERTY(qint32 audioStreamIndex READ audioStreamIndex WRITE setAudioStreamIndex NOTIFY audioStreamIndexChanged)
	/**
	 * @brief Gets or sets the index of the now playing subtitle stream.
	 */
	Q_PROPERTY(qint32 subtitleStreamIndex READ subtitleStreamIndex WRITE setSubtitleStreamIndex NOTIFY subtitleStreamIndexChanged)
	/**
	 * @brief Gets or sets the now playing media version identifier.
	 */
	Q_PROPERTY(QString mediaSourceId READ mediaSourceId WRITE setMediaSourceId NOTIFY mediaSourceIdChanged)
	Q_PROPERTY(PlayMethod playMethod READ playMethod WRITE setPlayMethod NOTIFY playMethodChanged)
	Q_PROPERTY(RepeatMode repeatMode READ repeatMode WRITE setRepeatMode NOTIFY repeatModeChanged)

	qint64 positionTicks() const;
	void setPositionTicks(qint64 newPositionTicks);
	
	bool canSeek() const;
	void setCanSeek(bool newCanSeek);
	
	bool isPaused() const;
	void setIsPaused(bool newIsPaused);
	
	bool isMuted() const;
	void setIsMuted(bool newIsMuted);
	
	qint32 volumeLevel() const;
	void setVolumeLevel(qint32 newVolumeLevel);
	
	qint32 audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	
	qint32 subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	
	PlayMethod playMethod() const;
	void setPlayMethod(PlayMethod newPlayMethod);
	
	RepeatMode repeatMode() const;
	void setRepeatMode(RepeatMode newRepeatMode);
	
signals:
	void positionTicksChanged(qint64 newPositionTicks);
	void canSeekChanged(bool newCanSeek);
	void isPausedChanged(bool newIsPaused);
	void isMutedChanged(bool newIsMuted);
	void volumeLevelChanged(qint32 newVolumeLevel);
	void audioStreamIndexChanged(qint32 newAudioStreamIndex);
	void subtitleStreamIndexChanged(qint32 newSubtitleStreamIndex);
	void mediaSourceIdChanged(QString newMediaSourceId);
	void playMethodChanged(PlayMethod newPlayMethod);
	void repeatModeChanged(RepeatMode newRepeatMode);
protected:
	qint64 m_positionTicks;
	bool m_canSeek;
	bool m_isPaused;
	bool m_isMuted;
	qint32 m_volumeLevel;
	qint32 m_audioStreamIndex;
	qint32 m_subtitleStreamIndex;
	QString m_mediaSourceId;
	PlayMethod m_playMethod;
	RepeatMode m_repeatMode;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLAYERSTATEINFO_H

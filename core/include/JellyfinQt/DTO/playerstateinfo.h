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
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/DTO/playmethod.h"
#include "JellyfinQt/DTO/repeatmode.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class PlayerStateInfo {
public:
	explicit PlayerStateInfo();
	static PlayerStateInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the now playing position ticks.
	 */
	qint64 positionTicks() const;
	/**
	* @brief Gets or sets the now playing position ticks.
	*/
	void setPositionTicks(qint64 newPositionTicks);
	/**
	 * @brief Gets or sets a value indicating whether this instance can seek.
	 */
	bool canSeek() const;
	/**
	* @brief Gets or sets a value indicating whether this instance can seek.
	*/
	void setCanSeek(bool newCanSeek);
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
	 * @brief Gets or sets the volume level.
	 */
	qint32 volumeLevel() const;
	/**
	* @brief Gets or sets the volume level.
	*/
	void setVolumeLevel(qint32 newVolumeLevel);
	/**
	 * @brief Gets or sets the index of the now playing audio stream.
	 */
	qint32 audioStreamIndex() const;
	/**
	* @brief Gets or sets the index of the now playing audio stream.
	*/
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	/**
	 * @brief Gets or sets the index of the now playing subtitle stream.
	 */
	qint32 subtitleStreamIndex() const;
	/**
	* @brief Gets or sets the index of the now playing subtitle stream.
	*/
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	/**
	 * @brief Gets or sets the now playing media version identifier.
	 */
	QString mediaSourceId() const;
	/**
	* @brief Gets or sets the now playing media version identifier.
	*/
	void setMediaSourceId(QString newMediaSourceId);

	PlayMethod playMethod() const;

	void setPlayMethod(PlayMethod newPlayMethod);

	RepeatMode repeatMode() const;

	void setRepeatMode(RepeatMode newRepeatMode);

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

} // NS DTO

namespace Support {

using PlayerStateInfo = Jellyfin::DTO::PlayerStateInfo;

template <>
PlayerStateInfo fromJsonValue<PlayerStateInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return PlayerStateInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLAYERSTATEINFO_H

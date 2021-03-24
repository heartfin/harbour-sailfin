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

#include "JellyfinQt/dto/playmethod.h"
#include "JellyfinQt/dto/repeatmode.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class PlayerStateInfo {
public:
	PlayerStateInfo();
	PlayerStateInfo(const PlayerStateInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(PlayerStateInfo &other);
	
	static PlayerStateInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the now playing position ticks.
	 */
	std::optional<qint64> positionTicks() const;
	/**
	* @brief Gets or sets the now playing position ticks.
	*/
	void setPositionTicks(std::optional<qint64> newPositionTicks);
	bool positionTicksNull() const;
	void setPositionTicksNull();

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
	std::optional<qint32> volumeLevel() const;
	/**
	* @brief Gets or sets the volume level.
	*/
	void setVolumeLevel(std::optional<qint32> newVolumeLevel);
	bool volumeLevelNull() const;
	void setVolumeLevelNull();

	/**
	 * @brief Gets or sets the index of the now playing audio stream.
	 */
	std::optional<qint32> audioStreamIndex() const;
	/**
	* @brief Gets or sets the index of the now playing audio stream.
	*/
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();

	/**
	 * @brief Gets or sets the index of the now playing subtitle stream.
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	/**
	* @brief Gets or sets the index of the now playing subtitle stream.
	*/
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();

	/**
	 * @brief Gets or sets the now playing media version identifier.
	 */
	QString mediaSourceId() const;
	/**
	* @brief Gets or sets the now playing media version identifier.
	*/
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();


	PlayMethod playMethod() const;

	void setPlayMethod(PlayMethod newPlayMethod);


	RepeatMode repeatMode() const;

	void setRepeatMode(RepeatMode newRepeatMode);


protected:
	std::optional<qint64> m_positionTicks = std::nullopt;
	bool m_canSeek;
	bool m_isPaused;
	bool m_isMuted;
	std::optional<qint32> m_volumeLevel = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_mediaSourceId;
	PlayMethod m_playMethod;
	RepeatMode m_repeatMode;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_PLAYERSTATEINFO_H

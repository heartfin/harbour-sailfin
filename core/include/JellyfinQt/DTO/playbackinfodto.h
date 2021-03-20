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

#ifndef JELLYFIN_DTO_PLAYBACKINFODTO_H
#define JELLYFIN_DTO_PLAYBACKINFODTO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QSharedPointer>
#include <QString>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/deviceprofile.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class PlaybackInfoDto {
public:
	explicit PlaybackInfoDto();
	static PlaybackInfoDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the playback userId.
	 */
	QUuid userId() const;
	/**
	* @brief Gets or sets the playback userId.
	*/
	void setUserId(QUuid newUserId);
	/**
	 * @brief Gets or sets the max streaming bitrate.
	 */
	qint32 maxStreamingBitrate() const;
	/**
	* @brief Gets or sets the max streaming bitrate.
	*/
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	/**
	 * @brief Gets or sets the start time in ticks.
	 */
	qint64 startTimeTicks() const;
	/**
	* @brief Gets or sets the start time in ticks.
	*/
	void setStartTimeTicks(qint64 newStartTimeTicks);
	/**
	 * @brief Gets or sets the audio stream index.
	 */
	qint32 audioStreamIndex() const;
	/**
	* @brief Gets or sets the audio stream index.
	*/
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	/**
	 * @brief Gets or sets the subtitle stream index.
	 */
	qint32 subtitleStreamIndex() const;
	/**
	* @brief Gets or sets the subtitle stream index.
	*/
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	/**
	 * @brief Gets or sets the max audio channels.
	 */
	qint32 maxAudioChannels() const;
	/**
	* @brief Gets or sets the max audio channels.
	*/
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	/**
	 * @brief Gets or sets the media source id.
	 */
	QString mediaSourceId() const;
	/**
	* @brief Gets or sets the media source id.
	*/
	void setMediaSourceId(QString newMediaSourceId);
	/**
	 * @brief Gets or sets the live stream id.
	 */
	QString liveStreamId() const;
	/**
	* @brief Gets or sets the live stream id.
	*/
	void setLiveStreamId(QString newLiveStreamId);

	QSharedPointer<DeviceProfile> deviceProfile() const;

	void setDeviceProfile(QSharedPointer<DeviceProfile> newDeviceProfile);
	/**
	 * @brief Gets or sets a value indicating whether to enable direct play.
	 */
	bool enableDirectPlay() const;
	/**
	* @brief Gets or sets a value indicating whether to enable direct play.
	*/
	void setEnableDirectPlay(bool newEnableDirectPlay);
	/**
	 * @brief Gets or sets a value indicating whether to enable direct stream.
	 */
	bool enableDirectStream() const;
	/**
	* @brief Gets or sets a value indicating whether to enable direct stream.
	*/
	void setEnableDirectStream(bool newEnableDirectStream);
	/**
	 * @brief Gets or sets a value indicating whether to enable transcoding.
	 */
	bool enableTranscoding() const;
	/**
	* @brief Gets or sets a value indicating whether to enable transcoding.
	*/
	void setEnableTranscoding(bool newEnableTranscoding);
	/**
	 * @brief Gets or sets a value indicating whether to enable video stream copy.
	 */
	bool allowVideoStreamCopy() const;
	/**
	* @brief Gets or sets a value indicating whether to enable video stream copy.
	*/
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	/**
	 * @brief Gets or sets a value indicating whether to allow audio stream copy.
	 */
	bool allowAudioStreamCopy() const;
	/**
	* @brief Gets or sets a value indicating whether to allow audio stream copy.
	*/
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	/**
	 * @brief Gets or sets a value indicating whether to auto open the live stream.
	 */
	bool autoOpenLiveStream() const;
	/**
	* @brief Gets or sets a value indicating whether to auto open the live stream.
	*/
	void setAutoOpenLiveStream(bool newAutoOpenLiveStream);

protected:
	QUuid m_userId;
	qint32 m_maxStreamingBitrate;
	qint64 m_startTimeTicks;
	qint32 m_audioStreamIndex;
	qint32 m_subtitleStreamIndex;
	qint32 m_maxAudioChannels;
	QString m_mediaSourceId;
	QString m_liveStreamId;
	QSharedPointer<DeviceProfile> m_deviceProfile = nullptr;
	bool m_enableDirectPlay;
	bool m_enableDirectStream;
	bool m_enableTranscoding;
	bool m_allowVideoStreamCopy;
	bool m_allowAudioStreamCopy;
	bool m_autoOpenLiveStream;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PLAYBACKINFODTO_H

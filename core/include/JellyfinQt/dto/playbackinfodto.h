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
#include <optional>

#include "JellyfinQt/dto/deviceprofile.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class PlaybackInfoDto {
public:
	PlaybackInfoDto(																	
		QSharedPointer<DeviceProfile> deviceProfile														
	);

	PlaybackInfoDto(const PlaybackInfoDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(PlaybackInfoDto &other);
	
	static PlaybackInfoDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the playback userId.
	 */
	QString userId() const;
	/**
	* @brief Gets or sets the playback userId.
	*/
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();

	/**
	 * @brief Gets or sets the max streaming bitrate.
	 */
	std::optional<qint32> maxStreamingBitrate() const;
	/**
	* @brief Gets or sets the max streaming bitrate.
	*/
	void setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate);
	bool maxStreamingBitrateNull() const;
	void setMaxStreamingBitrateNull();

	/**
	 * @brief Gets or sets the start time in ticks.
	 */
	std::optional<qint64> startTimeTicks() const;
	/**
	* @brief Gets or sets the start time in ticks.
	*/
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();

	/**
	 * @brief Gets or sets the audio stream index.
	 */
	std::optional<qint32> audioStreamIndex() const;
	/**
	* @brief Gets or sets the audio stream index.
	*/
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();

	/**
	 * @brief Gets or sets the subtitle stream index.
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	/**
	* @brief Gets or sets the subtitle stream index.
	*/
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();

	/**
	 * @brief Gets or sets the max audio channels.
	 */
	std::optional<qint32> maxAudioChannels() const;
	/**
	* @brief Gets or sets the max audio channels.
	*/
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();

	/**
	 * @brief Gets or sets the media source id.
	 */
	QString mediaSourceId() const;
	/**
	* @brief Gets or sets the media source id.
	*/
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();

	/**
	 * @brief Gets or sets the live stream id.
	 */
	QString liveStreamId() const;
	/**
	* @brief Gets or sets the live stream id.
	*/
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();


	QSharedPointer<DeviceProfile> deviceProfile() const;

	void setDeviceProfile(QSharedPointer<DeviceProfile> newDeviceProfile);

	/**
	 * @brief Gets or sets a value indicating whether to enable direct play.
	 */
	std::optional<bool> enableDirectPlay() const;
	/**
	* @brief Gets or sets a value indicating whether to enable direct play.
	*/
	void setEnableDirectPlay(std::optional<bool> newEnableDirectPlay);
	bool enableDirectPlayNull() const;
	void setEnableDirectPlayNull();

	/**
	 * @brief Gets or sets a value indicating whether to enable direct stream.
	 */
	std::optional<bool> enableDirectStream() const;
	/**
	* @brief Gets or sets a value indicating whether to enable direct stream.
	*/
	void setEnableDirectStream(std::optional<bool> newEnableDirectStream);
	bool enableDirectStreamNull() const;
	void setEnableDirectStreamNull();

	/**
	 * @brief Gets or sets a value indicating whether to enable transcoding.
	 */
	std::optional<bool> enableTranscoding() const;
	/**
	* @brief Gets or sets a value indicating whether to enable transcoding.
	*/
	void setEnableTranscoding(std::optional<bool> newEnableTranscoding);
	bool enableTranscodingNull() const;
	void setEnableTranscodingNull();

	/**
	 * @brief Gets or sets a value indicating whether to enable video stream copy.
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	/**
	* @brief Gets or sets a value indicating whether to enable video stream copy.
	*/
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();

	/**
	 * @brief Gets or sets a value indicating whether to allow audio stream copy.
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	/**
	* @brief Gets or sets a value indicating whether to allow audio stream copy.
	*/
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();

	/**
	 * @brief Gets or sets a value indicating whether to auto open the live stream.
	 */
	std::optional<bool> autoOpenLiveStream() const;
	/**
	* @brief Gets or sets a value indicating whether to auto open the live stream.
	*/
	void setAutoOpenLiveStream(std::optional<bool> newAutoOpenLiveStream);
	bool autoOpenLiveStreamNull() const;
	void setAutoOpenLiveStreamNull();


protected:
	QString m_userId;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	QString m_mediaSourceId;
	QString m_liveStreamId;
	QSharedPointer<DeviceProfile> m_deviceProfile = QSharedPointer<DeviceProfile>();
	std::optional<bool> m_enableDirectPlay = std::nullopt;
	std::optional<bool> m_enableDirectStream = std::nullopt;
	std::optional<bool> m_enableTranscoding = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_autoOpenLiveStream = std::nullopt;

private:
	// Private constructor which generates an invalid object, for use withing PlaybackInfoDto::fromJson();
	PlaybackInfoDto();
};


} // NS DTO

namespace Support {

using PlaybackInfoDto = Jellyfin::DTO::PlaybackInfoDto;

template <>
PlaybackInfoDto fromJsonValue(const QJsonValue &source, convertType<PlaybackInfoDto>);

template<>
QJsonValue toJsonValue(const PlaybackInfoDto &source, convertType<PlaybackInfoDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_PLAYBACKINFODTO_H

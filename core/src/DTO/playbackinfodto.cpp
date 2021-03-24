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

#include <JellyfinQt/DTO/playbackinfodto.h>

namespace Jellyfin {
namespace DTO {

PlaybackInfoDto::PlaybackInfoDto() {}
PlaybackInfoDto::PlaybackInfoDto(const PlaybackInfoDto &other) :
	m_userId(other.m_userId),
	m_maxStreamingBitrate(other.m_maxStreamingBitrate),
	m_startTimeTicks(other.m_startTimeTicks),
	m_audioStreamIndex(other.m_audioStreamIndex),
	m_subtitleStreamIndex(other.m_subtitleStreamIndex),
	m_maxAudioChannels(other.m_maxAudioChannels),
	m_mediaSourceId(other.m_mediaSourceId),
	m_liveStreamId(other.m_liveStreamId),
	m_deviceProfile(other.m_deviceProfile),
	m_enableDirectPlay(other.m_enableDirectPlay),
	m_enableDirectStream(other.m_enableDirectStream),
	m_enableTranscoding(other.m_enableTranscoding),
	m_allowVideoStreamCopy(other.m_allowVideoStreamCopy),
	m_allowAudioStreamCopy(other.m_allowAudioStreamCopy),
	m_autoOpenLiveStream(other.m_autoOpenLiveStream){}

PlaybackInfoDto PlaybackInfoDto::fromJson(QJsonObject source) {
	PlaybackInfoDto instance;
	instance.setFromJson(source);
	return instance;
}


void PlaybackInfoDto::setFromJson(QJsonObject source) {
	m_userId = Jellyfin::Support::fromJsonValue<QUuid>(source["UserId"]);
	m_maxStreamingBitrate = Jellyfin::Support::fromJsonValue<qint32>(source["MaxStreamingBitrate"]);
	m_startTimeTicks = Jellyfin::Support::fromJsonValue<qint64>(source["StartTimeTicks"]);
	m_audioStreamIndex = Jellyfin::Support::fromJsonValue<qint32>(source["AudioStreamIndex"]);
	m_subtitleStreamIndex = Jellyfin::Support::fromJsonValue<qint32>(source["SubtitleStreamIndex"]);
	m_maxAudioChannels = Jellyfin::Support::fromJsonValue<qint32>(source["MaxAudioChannels"]);
	m_mediaSourceId = Jellyfin::Support::fromJsonValue<QString>(source["MediaSourceId"]);
	m_liveStreamId = Jellyfin::Support::fromJsonValue<QString>(source["LiveStreamId"]);
	m_deviceProfile = Jellyfin::Support::fromJsonValue<QSharedPointer<DeviceProfile>>(source["DeviceProfile"]);
	m_enableDirectPlay = Jellyfin::Support::fromJsonValue<bool>(source["EnableDirectPlay"]);
	m_enableDirectStream = Jellyfin::Support::fromJsonValue<bool>(source["EnableDirectStream"]);
	m_enableTranscoding = Jellyfin::Support::fromJsonValue<bool>(source["EnableTranscoding"]);
	m_allowVideoStreamCopy = Jellyfin::Support::fromJsonValue<bool>(source["AllowVideoStreamCopy"]);
	m_allowAudioStreamCopy = Jellyfin::Support::fromJsonValue<bool>(source["AllowAudioStreamCopy"]);
	m_autoOpenLiveStream = Jellyfin::Support::fromJsonValue<bool>(source["AutoOpenLiveStream"]);

}
	
QJsonObject PlaybackInfoDto::toJson() {
	QJsonObject result;
	result["UserId"] = Jellyfin::Support::toJsonValue<QUuid>(m_userId);
	result["MaxStreamingBitrate"] = Jellyfin::Support::toJsonValue<qint32>(m_maxStreamingBitrate);
	result["StartTimeTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_startTimeTicks);
	result["AudioStreamIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_audioStreamIndex);
	result["SubtitleStreamIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_subtitleStreamIndex);
	result["MaxAudioChannels"] = Jellyfin::Support::toJsonValue<qint32>(m_maxAudioChannels);
	result["MediaSourceId"] = Jellyfin::Support::toJsonValue<QString>(m_mediaSourceId);
	result["LiveStreamId"] = Jellyfin::Support::toJsonValue<QString>(m_liveStreamId);
	result["DeviceProfile"] = Jellyfin::Support::toJsonValue<QSharedPointer<DeviceProfile>>(m_deviceProfile);
	result["EnableDirectPlay"] = Jellyfin::Support::toJsonValue<bool>(m_enableDirectPlay);
	result["EnableDirectStream"] = Jellyfin::Support::toJsonValue<bool>(m_enableDirectStream);
	result["EnableTranscoding"] = Jellyfin::Support::toJsonValue<bool>(m_enableTranscoding);
	result["AllowVideoStreamCopy"] = Jellyfin::Support::toJsonValue<bool>(m_allowVideoStreamCopy);
	result["AllowAudioStreamCopy"] = Jellyfin::Support::toJsonValue<bool>(m_allowAudioStreamCopy);
	result["AutoOpenLiveStream"] = Jellyfin::Support::toJsonValue<bool>(m_autoOpenLiveStream);

	return result;
}

QUuid PlaybackInfoDto::userId() const { return m_userId; }

void PlaybackInfoDto::setUserId(QUuid newUserId) {
	m_userId = newUserId;
}
qint32 PlaybackInfoDto::maxStreamingBitrate() const { return m_maxStreamingBitrate; }

void PlaybackInfoDto::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate) {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}
qint64 PlaybackInfoDto::startTimeTicks() const { return m_startTimeTicks; }

void PlaybackInfoDto::setStartTimeTicks(qint64 newStartTimeTicks) {
	m_startTimeTicks = newStartTimeTicks;
}
qint32 PlaybackInfoDto::audioStreamIndex() const { return m_audioStreamIndex; }

void PlaybackInfoDto::setAudioStreamIndex(qint32 newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
}
qint32 PlaybackInfoDto::subtitleStreamIndex() const { return m_subtitleStreamIndex; }

void PlaybackInfoDto::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}
qint32 PlaybackInfoDto::maxAudioChannels() const { return m_maxAudioChannels; }

void PlaybackInfoDto::setMaxAudioChannels(qint32 newMaxAudioChannels) {
	m_maxAudioChannels = newMaxAudioChannels;
}
QString PlaybackInfoDto::mediaSourceId() const { return m_mediaSourceId; }

void PlaybackInfoDto::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
}
QString PlaybackInfoDto::liveStreamId() const { return m_liveStreamId; }

void PlaybackInfoDto::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
}
QSharedPointer<DeviceProfile> PlaybackInfoDto::deviceProfile() const { return m_deviceProfile; }

void PlaybackInfoDto::setDeviceProfile(QSharedPointer<DeviceProfile> newDeviceProfile) {
	m_deviceProfile = newDeviceProfile;
}
bool PlaybackInfoDto::enableDirectPlay() const { return m_enableDirectPlay; }

void PlaybackInfoDto::setEnableDirectPlay(bool newEnableDirectPlay) {
	m_enableDirectPlay = newEnableDirectPlay;
}
bool PlaybackInfoDto::enableDirectStream() const { return m_enableDirectStream; }

void PlaybackInfoDto::setEnableDirectStream(bool newEnableDirectStream) {
	m_enableDirectStream = newEnableDirectStream;
}
bool PlaybackInfoDto::enableTranscoding() const { return m_enableTranscoding; }

void PlaybackInfoDto::setEnableTranscoding(bool newEnableTranscoding) {
	m_enableTranscoding = newEnableTranscoding;
}
bool PlaybackInfoDto::allowVideoStreamCopy() const { return m_allowVideoStreamCopy; }

void PlaybackInfoDto::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy) {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
}
bool PlaybackInfoDto::allowAudioStreamCopy() const { return m_allowAudioStreamCopy; }

void PlaybackInfoDto::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy) {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
}
bool PlaybackInfoDto::autoOpenLiveStream() const { return m_autoOpenLiveStream; }

void PlaybackInfoDto::setAutoOpenLiveStream(bool newAutoOpenLiveStream) {
	m_autoOpenLiveStream = newAutoOpenLiveStream;
}

} // NS DTO

namespace Support {

using PlaybackInfoDto = Jellyfin::DTO::PlaybackInfoDto;

template <>
PlaybackInfoDto fromJsonValue<PlaybackInfoDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return PlaybackInfoDto::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

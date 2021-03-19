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

PlaybackInfoDto::PlaybackInfoDto(QObject *parent) : QObject(parent) {}

PlaybackInfoDto *PlaybackInfoDto::fromJSON(QJsonObject source, QObject *parent) {
	PlaybackInfoDto *instance = new PlaybackInfoDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void PlaybackInfoDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject PlaybackInfoDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString PlaybackInfoDto::userId() const { return m_userId; }
void PlaybackInfoDto::setUserId(QString newUserId) {
	m_userId = newUserId;
	emit userIdChanged(newUserId);
}

qint32 PlaybackInfoDto::maxStreamingBitrate() const { return m_maxStreamingBitrate; }
void PlaybackInfoDto::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate) {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
	emit maxStreamingBitrateChanged(newMaxStreamingBitrate);
}

qint64 PlaybackInfoDto::startTimeTicks() const { return m_startTimeTicks; }
void PlaybackInfoDto::setStartTimeTicks(qint64 newStartTimeTicks) {
	m_startTimeTicks = newStartTimeTicks;
	emit startTimeTicksChanged(newStartTimeTicks);
}

qint32 PlaybackInfoDto::audioStreamIndex() const { return m_audioStreamIndex; }
void PlaybackInfoDto::setAudioStreamIndex(qint32 newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
	emit audioStreamIndexChanged(newAudioStreamIndex);
}

qint32 PlaybackInfoDto::subtitleStreamIndex() const { return m_subtitleStreamIndex; }
void PlaybackInfoDto::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
	emit subtitleStreamIndexChanged(newSubtitleStreamIndex);
}

qint32 PlaybackInfoDto::maxAudioChannels() const { return m_maxAudioChannels; }
void PlaybackInfoDto::setMaxAudioChannels(qint32 newMaxAudioChannels) {
	m_maxAudioChannels = newMaxAudioChannels;
	emit maxAudioChannelsChanged(newMaxAudioChannels);
}

QString PlaybackInfoDto::mediaSourceId() const { return m_mediaSourceId; }
void PlaybackInfoDto::setMediaSourceId(QString newMediaSourceId) {
	m_mediaSourceId = newMediaSourceId;
	emit mediaSourceIdChanged(newMediaSourceId);
}

QString PlaybackInfoDto::liveStreamId() const { return m_liveStreamId; }
void PlaybackInfoDto::setLiveStreamId(QString newLiveStreamId) {
	m_liveStreamId = newLiveStreamId;
	emit liveStreamIdChanged(newLiveStreamId);
}

DeviceProfile * PlaybackInfoDto::deviceProfile() const { return m_deviceProfile; }
void PlaybackInfoDto::setDeviceProfile(DeviceProfile * newDeviceProfile) {
	m_deviceProfile = newDeviceProfile;
	emit deviceProfileChanged(newDeviceProfile);
}

bool PlaybackInfoDto::enableDirectPlay() const { return m_enableDirectPlay; }
void PlaybackInfoDto::setEnableDirectPlay(bool newEnableDirectPlay) {
	m_enableDirectPlay = newEnableDirectPlay;
	emit enableDirectPlayChanged(newEnableDirectPlay);
}

bool PlaybackInfoDto::enableDirectStream() const { return m_enableDirectStream; }
void PlaybackInfoDto::setEnableDirectStream(bool newEnableDirectStream) {
	m_enableDirectStream = newEnableDirectStream;
	emit enableDirectStreamChanged(newEnableDirectStream);
}

bool PlaybackInfoDto::enableTranscoding() const { return m_enableTranscoding; }
void PlaybackInfoDto::setEnableTranscoding(bool newEnableTranscoding) {
	m_enableTranscoding = newEnableTranscoding;
	emit enableTranscodingChanged(newEnableTranscoding);
}

bool PlaybackInfoDto::allowVideoStreamCopy() const { return m_allowVideoStreamCopy; }
void PlaybackInfoDto::setAllowVideoStreamCopy(bool newAllowVideoStreamCopy) {
	m_allowVideoStreamCopy = newAllowVideoStreamCopy;
	emit allowVideoStreamCopyChanged(newAllowVideoStreamCopy);
}

bool PlaybackInfoDto::allowAudioStreamCopy() const { return m_allowAudioStreamCopy; }
void PlaybackInfoDto::setAllowAudioStreamCopy(bool newAllowAudioStreamCopy) {
	m_allowAudioStreamCopy = newAllowAudioStreamCopy;
	emit allowAudioStreamCopyChanged(newAllowAudioStreamCopy);
}

bool PlaybackInfoDto::autoOpenLiveStream() const { return m_autoOpenLiveStream; }
void PlaybackInfoDto::setAutoOpenLiveStream(bool newAutoOpenLiveStream) {
	m_autoOpenLiveStream = newAutoOpenLiveStream;
	emit autoOpenLiveStreamChanged(newAutoOpenLiveStream);
}


} // NS Jellyfin
} // NS DTO

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

#include <JellyfinQt/DTO/openlivestreamdto.h>

namespace Jellyfin {
namespace DTO {

OpenLiveStreamDto::OpenLiveStreamDto(QObject *parent) {}

OpenLiveStreamDto OpenLiveStreamDto::fromJson(QJsonObject source) {OpenLiveStreamDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void OpenLiveStreamDto::setFromJson(QJsonObject source) {
	m_openToken = fromJsonValue<QString>(source["OpenToken"]);
	m_userId = fromJsonValue<QUuid>(source["UserId"]);
	m_playSessionId = fromJsonValue<QString>(source["PlaySessionId"]);
	m_maxStreamingBitrate = fromJsonValue<qint32>(source["MaxStreamingBitrate"]);
	m_startTimeTicks = fromJsonValue<qint64>(source["StartTimeTicks"]);
	m_audioStreamIndex = fromJsonValue<qint32>(source["AudioStreamIndex"]);
	m_subtitleStreamIndex = fromJsonValue<qint32>(source["SubtitleStreamIndex"]);
	m_maxAudioChannels = fromJsonValue<qint32>(source["MaxAudioChannels"]);
	m_itemId = fromJsonValue<QUuid>(source["ItemId"]);
	m_enableDirectPlay = fromJsonValue<bool>(source["EnableDirectPlay"]);
	m_enableDirectStream = fromJsonValue<bool>(source["EnableDirectStream"]);
	m_deviceProfile = fromJsonValue<QSharedPointer<DeviceProfile>>(source["DeviceProfile"]);
	m_directPlayProtocols = fromJsonValue<QList<MediaProtocol>>(source["DirectPlayProtocols"]);

}
	
QJsonObject OpenLiveStreamDto::toJson() {
	QJsonObject result;
	result["OpenToken"] = toJsonValue<QString>(m_openToken);
	result["UserId"] = toJsonValue<QUuid>(m_userId);
	result["PlaySessionId"] = toJsonValue<QString>(m_playSessionId);
	result["MaxStreamingBitrate"] = toJsonValue<qint32>(m_maxStreamingBitrate);
	result["StartTimeTicks"] = toJsonValue<qint64>(m_startTimeTicks);
	result["AudioStreamIndex"] = toJsonValue<qint32>(m_audioStreamIndex);
	result["SubtitleStreamIndex"] = toJsonValue<qint32>(m_subtitleStreamIndex);
	result["MaxAudioChannels"] = toJsonValue<qint32>(m_maxAudioChannels);
	result["ItemId"] = toJsonValue<QUuid>(m_itemId);
	result["EnableDirectPlay"] = toJsonValue<bool>(m_enableDirectPlay);
	result["EnableDirectStream"] = toJsonValue<bool>(m_enableDirectStream);
	result["DeviceProfile"] = toJsonValue<QSharedPointer<DeviceProfile>>(m_deviceProfile);
	result["DirectPlayProtocols"] = toJsonValue<QList<MediaProtocol>>(m_directPlayProtocols);

	return result;
}

QString OpenLiveStreamDto::openToken() const { return m_openToken; }

void OpenLiveStreamDto::setOpenToken(QString newOpenToken) {
	m_openToken = newOpenToken;
}
QUuid OpenLiveStreamDto::userId() const { return m_userId; }

void OpenLiveStreamDto::setUserId(QUuid newUserId) {
	m_userId = newUserId;
}
QString OpenLiveStreamDto::playSessionId() const { return m_playSessionId; }

void OpenLiveStreamDto::setPlaySessionId(QString newPlaySessionId) {
	m_playSessionId = newPlaySessionId;
}
qint32 OpenLiveStreamDto::maxStreamingBitrate() const { return m_maxStreamingBitrate; }

void OpenLiveStreamDto::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate) {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}
qint64 OpenLiveStreamDto::startTimeTicks() const { return m_startTimeTicks; }

void OpenLiveStreamDto::setStartTimeTicks(qint64 newStartTimeTicks) {
	m_startTimeTicks = newStartTimeTicks;
}
qint32 OpenLiveStreamDto::audioStreamIndex() const { return m_audioStreamIndex; }

void OpenLiveStreamDto::setAudioStreamIndex(qint32 newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
}
qint32 OpenLiveStreamDto::subtitleStreamIndex() const { return m_subtitleStreamIndex; }

void OpenLiveStreamDto::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}
qint32 OpenLiveStreamDto::maxAudioChannels() const { return m_maxAudioChannels; }

void OpenLiveStreamDto::setMaxAudioChannels(qint32 newMaxAudioChannels) {
	m_maxAudioChannels = newMaxAudioChannels;
}
QUuid OpenLiveStreamDto::itemId() const { return m_itemId; }

void OpenLiveStreamDto::setItemId(QUuid newItemId) {
	m_itemId = newItemId;
}
bool OpenLiveStreamDto::enableDirectPlay() const { return m_enableDirectPlay; }

void OpenLiveStreamDto::setEnableDirectPlay(bool newEnableDirectPlay) {
	m_enableDirectPlay = newEnableDirectPlay;
}
bool OpenLiveStreamDto::enableDirectStream() const { return m_enableDirectStream; }

void OpenLiveStreamDto::setEnableDirectStream(bool newEnableDirectStream) {
	m_enableDirectStream = newEnableDirectStream;
}
QSharedPointer<DeviceProfile> OpenLiveStreamDto::deviceProfile() const { return m_deviceProfile; }

void OpenLiveStreamDto::setDeviceProfile(QSharedPointer<DeviceProfile> newDeviceProfile) {
	m_deviceProfile = newDeviceProfile;
}
QList<MediaProtocol> OpenLiveStreamDto::directPlayProtocols() const { return m_directPlayProtocols; }

void OpenLiveStreamDto::setDirectPlayProtocols(QList<MediaProtocol> newDirectPlayProtocols) {
	m_directPlayProtocols = newDirectPlayProtocols;
}


} // NS Jellyfin
} // NS DTO

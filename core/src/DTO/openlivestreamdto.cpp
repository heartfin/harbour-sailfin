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

OpenLiveStreamDto::OpenLiveStreamDto() {}
OpenLiveStreamDto::OpenLiveStreamDto(const OpenLiveStreamDto &other) :
	m_openToken(other.m_openToken),
	m_userId(other.m_userId),
	m_playSessionId(other.m_playSessionId),
	m_maxStreamingBitrate(other.m_maxStreamingBitrate),
	m_startTimeTicks(other.m_startTimeTicks),
	m_audioStreamIndex(other.m_audioStreamIndex),
	m_subtitleStreamIndex(other.m_subtitleStreamIndex),
	m_maxAudioChannels(other.m_maxAudioChannels),
	m_itemId(other.m_itemId),
	m_enableDirectPlay(other.m_enableDirectPlay),
	m_enableDirectStream(other.m_enableDirectStream),
	m_deviceProfile(other.m_deviceProfile),
	m_directPlayProtocols(other.m_directPlayProtocols){}

OpenLiveStreamDto OpenLiveStreamDto::fromJson(QJsonObject source) {
	OpenLiveStreamDto instance;
	instance.setFromJson(source);
	return instance;
}


void OpenLiveStreamDto::setFromJson(QJsonObject source) {
	m_openToken = Jellyfin::Support::fromJsonValue<QString>(source["OpenToken"]);
	m_userId = Jellyfin::Support::fromJsonValue<QUuid>(source["UserId"]);
	m_playSessionId = Jellyfin::Support::fromJsonValue<QString>(source["PlaySessionId"]);
	m_maxStreamingBitrate = Jellyfin::Support::fromJsonValue<qint32>(source["MaxStreamingBitrate"]);
	m_startTimeTicks = Jellyfin::Support::fromJsonValue<qint64>(source["StartTimeTicks"]);
	m_audioStreamIndex = Jellyfin::Support::fromJsonValue<qint32>(source["AudioStreamIndex"]);
	m_subtitleStreamIndex = Jellyfin::Support::fromJsonValue<qint32>(source["SubtitleStreamIndex"]);
	m_maxAudioChannels = Jellyfin::Support::fromJsonValue<qint32>(source["MaxAudioChannels"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QUuid>(source["ItemId"]);
	m_enableDirectPlay = Jellyfin::Support::fromJsonValue<bool>(source["EnableDirectPlay"]);
	m_enableDirectStream = Jellyfin::Support::fromJsonValue<bool>(source["EnableDirectStream"]);
	m_deviceProfile = Jellyfin::Support::fromJsonValue<QSharedPointer<DeviceProfile>>(source["DeviceProfile"]);
	m_directPlayProtocols = Jellyfin::Support::fromJsonValue<QList<MediaProtocol>>(source["DirectPlayProtocols"]);

}
	
QJsonObject OpenLiveStreamDto::toJson() {
	QJsonObject result;
	result["OpenToken"] = Jellyfin::Support::toJsonValue<QString>(m_openToken);
	result["UserId"] = Jellyfin::Support::toJsonValue<QUuid>(m_userId);
	result["PlaySessionId"] = Jellyfin::Support::toJsonValue<QString>(m_playSessionId);
	result["MaxStreamingBitrate"] = Jellyfin::Support::toJsonValue<qint32>(m_maxStreamingBitrate);
	result["StartTimeTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_startTimeTicks);
	result["AudioStreamIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_audioStreamIndex);
	result["SubtitleStreamIndex"] = Jellyfin::Support::toJsonValue<qint32>(m_subtitleStreamIndex);
	result["MaxAudioChannels"] = Jellyfin::Support::toJsonValue<qint32>(m_maxAudioChannels);
	result["ItemId"] = Jellyfin::Support::toJsonValue<QUuid>(m_itemId);
	result["EnableDirectPlay"] = Jellyfin::Support::toJsonValue<bool>(m_enableDirectPlay);
	result["EnableDirectStream"] = Jellyfin::Support::toJsonValue<bool>(m_enableDirectStream);
	result["DeviceProfile"] = Jellyfin::Support::toJsonValue<QSharedPointer<DeviceProfile>>(m_deviceProfile);
	result["DirectPlayProtocols"] = Jellyfin::Support::toJsonValue<QList<MediaProtocol>>(m_directPlayProtocols);

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

} // NS DTO

namespace Support {

using OpenLiveStreamDto = Jellyfin::DTO::OpenLiveStreamDto;

template <>
OpenLiveStreamDto fromJsonValue<OpenLiveStreamDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return OpenLiveStreamDto::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

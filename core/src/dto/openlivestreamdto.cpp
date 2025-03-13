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

#include <JellyfinQt/dto/openlivestreamdto.h>

namespace Jellyfin {
namespace DTO {

OpenLiveStreamDto::OpenLiveStreamDto() {}
OpenLiveStreamDto::OpenLiveStreamDto (
		QSharedPointer<DeviceProfile> deviceProfile, 
		QList<MediaProtocol> directPlayProtocols 
		) :
	m_deviceProfile(deviceProfile),
	m_directPlayProtocols(directPlayProtocols) { }



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
	m_alwaysBurnInSubtitleWhenTranscoding(other.m_alwaysBurnInSubtitleWhenTranscoding),
	m_deviceProfile(other.m_deviceProfile),
	m_directPlayProtocols(other.m_directPlayProtocols){}


void OpenLiveStreamDto::replaceData(OpenLiveStreamDto &other) {
	m_openToken = other.m_openToken;
	m_userId = other.m_userId;
	m_playSessionId = other.m_playSessionId;
	m_maxStreamingBitrate = other.m_maxStreamingBitrate;
	m_startTimeTicks = other.m_startTimeTicks;
	m_audioStreamIndex = other.m_audioStreamIndex;
	m_subtitleStreamIndex = other.m_subtitleStreamIndex;
	m_maxAudioChannels = other.m_maxAudioChannels;
	m_itemId = other.m_itemId;
	m_enableDirectPlay = other.m_enableDirectPlay;
	m_enableDirectStream = other.m_enableDirectStream;
	m_alwaysBurnInSubtitleWhenTranscoding = other.m_alwaysBurnInSubtitleWhenTranscoding;
	m_deviceProfile = other.m_deviceProfile;
	m_directPlayProtocols = other.m_directPlayProtocols;
}

OpenLiveStreamDto OpenLiveStreamDto::fromJson(QJsonObject source) {
	OpenLiveStreamDto instance;
	instance.setFromJson(source);
	return instance;
}


void OpenLiveStreamDto::setFromJson(QJsonObject source) {
	m_openToken = Jellyfin::Support::fromJsonValue<QString>(source["OpenToken"]);
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_playSessionId = Jellyfin::Support::fromJsonValue<QString>(source["PlaySessionId"]);
	m_maxStreamingBitrate = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxStreamingBitrate"]);
	m_startTimeTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["StartTimeTicks"]);
	m_audioStreamIndex = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["AudioStreamIndex"]);
	m_subtitleStreamIndex = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["SubtitleStreamIndex"]);
	m_maxAudioChannels = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxAudioChannels"]);
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);
	m_enableDirectPlay = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["EnableDirectPlay"]);
	m_enableDirectStream = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["EnableDirectStream"]);
	m_alwaysBurnInSubtitleWhenTranscoding = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["AlwaysBurnInSubtitleWhenTranscoding"]);
	m_deviceProfile = Jellyfin::Support::fromJsonValue<QSharedPointer<DeviceProfile>>(source["DeviceProfile"]);
	m_directPlayProtocols = Jellyfin::Support::fromJsonValue<QList<MediaProtocol>>(source["DirectPlayProtocols"]);

}
	
QJsonObject OpenLiveStreamDto::toJson() const {
	QJsonObject result;
	
	
	if (!(m_openToken.isNull())) {
		result["OpenToken"] = Jellyfin::Support::toJsonValue<QString>(m_openToken);
	}
			
	
	if (!(m_userId.isNull())) {
		result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);
	}
			
	
	if (!(m_playSessionId.isNull())) {
		result["PlaySessionId"] = Jellyfin::Support::toJsonValue<QString>(m_playSessionId);
	}
			
	
	if (!(!m_maxStreamingBitrate.has_value())) {
		result["MaxStreamingBitrate"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxStreamingBitrate);
	}
			
	
	if (!(!m_startTimeTicks.has_value())) {
		result["StartTimeTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_startTimeTicks);
	}
			
	
	if (!(!m_audioStreamIndex.has_value())) {
		result["AudioStreamIndex"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_audioStreamIndex);
	}
			
	
	if (!(!m_subtitleStreamIndex.has_value())) {
		result["SubtitleStreamIndex"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_subtitleStreamIndex);
	}
			
	
	if (!(!m_maxAudioChannels.has_value())) {
		result["MaxAudioChannels"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxAudioChannels);
	}
			
	
	if (!(m_itemId.isNull())) {
		result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);
	}
			
	
	if (!(!m_enableDirectPlay.has_value())) {
		result["EnableDirectPlay"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_enableDirectPlay);
	}
			
	
	if (!(!m_enableDirectStream.has_value())) {
		result["EnableDirectStream"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_enableDirectStream);
	}
			
	
	if (!(!m_alwaysBurnInSubtitleWhenTranscoding.has_value())) {
		result["AlwaysBurnInSubtitleWhenTranscoding"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_alwaysBurnInSubtitleWhenTranscoding);
	}
			
	result["DeviceProfile"] = Jellyfin::Support::toJsonValue<QSharedPointer<DeviceProfile>>(m_deviceProfile);		
	result["DirectPlayProtocols"] = Jellyfin::Support::toJsonValue<QList<MediaProtocol>>(m_directPlayProtocols);	
	return result;
}

QString OpenLiveStreamDto::openToken() const { return m_openToken; }

void OpenLiveStreamDto::setOpenToken(QString newOpenToken) {
	m_openToken = newOpenToken;
}
bool OpenLiveStreamDto::openTokenNull() const {
	return m_openToken.isNull();
}

void OpenLiveStreamDto::setOpenTokenNull() {
	m_openToken.clear();

}
QString OpenLiveStreamDto::userId() const { return m_userId; }

void OpenLiveStreamDto::setUserId(QString newUserId) {
	m_userId = newUserId;
}
bool OpenLiveStreamDto::userIdNull() const {
	return m_userId.isNull();
}

void OpenLiveStreamDto::setUserIdNull() {
	m_userId.clear();

}
QString OpenLiveStreamDto::playSessionId() const { return m_playSessionId; }

void OpenLiveStreamDto::setPlaySessionId(QString newPlaySessionId) {
	m_playSessionId = newPlaySessionId;
}
bool OpenLiveStreamDto::playSessionIdNull() const {
	return m_playSessionId.isNull();
}

void OpenLiveStreamDto::setPlaySessionIdNull() {
	m_playSessionId.clear();

}
std::optional<qint32> OpenLiveStreamDto::maxStreamingBitrate() const { return m_maxStreamingBitrate; }

void OpenLiveStreamDto::setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate) {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
}
bool OpenLiveStreamDto::maxStreamingBitrateNull() const {
	return !m_maxStreamingBitrate.has_value();
}

void OpenLiveStreamDto::setMaxStreamingBitrateNull() {
	m_maxStreamingBitrate = std::nullopt;

}
std::optional<qint64> OpenLiveStreamDto::startTimeTicks() const { return m_startTimeTicks; }

void OpenLiveStreamDto::setStartTimeTicks(std::optional<qint64> newStartTimeTicks) {
	m_startTimeTicks = newStartTimeTicks;
}
bool OpenLiveStreamDto::startTimeTicksNull() const {
	return !m_startTimeTicks.has_value();
}

void OpenLiveStreamDto::setStartTimeTicksNull() {
	m_startTimeTicks = std::nullopt;

}
std::optional<qint32> OpenLiveStreamDto::audioStreamIndex() const { return m_audioStreamIndex; }

void OpenLiveStreamDto::setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
}
bool OpenLiveStreamDto::audioStreamIndexNull() const {
	return !m_audioStreamIndex.has_value();
}

void OpenLiveStreamDto::setAudioStreamIndexNull() {
	m_audioStreamIndex = std::nullopt;

}
std::optional<qint32> OpenLiveStreamDto::subtitleStreamIndex() const { return m_subtitleStreamIndex; }

void OpenLiveStreamDto::setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
}
bool OpenLiveStreamDto::subtitleStreamIndexNull() const {
	return !m_subtitleStreamIndex.has_value();
}

void OpenLiveStreamDto::setSubtitleStreamIndexNull() {
	m_subtitleStreamIndex = std::nullopt;

}
std::optional<qint32> OpenLiveStreamDto::maxAudioChannels() const { return m_maxAudioChannels; }

void OpenLiveStreamDto::setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) {
	m_maxAudioChannels = newMaxAudioChannels;
}
bool OpenLiveStreamDto::maxAudioChannelsNull() const {
	return !m_maxAudioChannels.has_value();
}

void OpenLiveStreamDto::setMaxAudioChannelsNull() {
	m_maxAudioChannels = std::nullopt;

}
QString OpenLiveStreamDto::itemId() const { return m_itemId; }

void OpenLiveStreamDto::setItemId(QString newItemId) {
	m_itemId = newItemId;
}
bool OpenLiveStreamDto::itemIdNull() const {
	return m_itemId.isNull();
}

void OpenLiveStreamDto::setItemIdNull() {
	m_itemId.clear();

}
std::optional<bool> OpenLiveStreamDto::enableDirectPlay() const { return m_enableDirectPlay; }

void OpenLiveStreamDto::setEnableDirectPlay(std::optional<bool> newEnableDirectPlay) {
	m_enableDirectPlay = newEnableDirectPlay;
}
bool OpenLiveStreamDto::enableDirectPlayNull() const {
	return !m_enableDirectPlay.has_value();
}

void OpenLiveStreamDto::setEnableDirectPlayNull() {
	m_enableDirectPlay = std::nullopt;

}
std::optional<bool> OpenLiveStreamDto::enableDirectStream() const { return m_enableDirectStream; }

void OpenLiveStreamDto::setEnableDirectStream(std::optional<bool> newEnableDirectStream) {
	m_enableDirectStream = newEnableDirectStream;
}
bool OpenLiveStreamDto::enableDirectStreamNull() const {
	return !m_enableDirectStream.has_value();
}

void OpenLiveStreamDto::setEnableDirectStreamNull() {
	m_enableDirectStream = std::nullopt;

}
std::optional<bool> OpenLiveStreamDto::alwaysBurnInSubtitleWhenTranscoding() const { return m_alwaysBurnInSubtitleWhenTranscoding; }

void OpenLiveStreamDto::setAlwaysBurnInSubtitleWhenTranscoding(std::optional<bool> newAlwaysBurnInSubtitleWhenTranscoding) {
	m_alwaysBurnInSubtitleWhenTranscoding = newAlwaysBurnInSubtitleWhenTranscoding;
}
bool OpenLiveStreamDto::alwaysBurnInSubtitleWhenTranscodingNull() const {
	return !m_alwaysBurnInSubtitleWhenTranscoding.has_value();
}

void OpenLiveStreamDto::setAlwaysBurnInSubtitleWhenTranscodingNull() {
	m_alwaysBurnInSubtitleWhenTranscoding = std::nullopt;

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
OpenLiveStreamDto fromJsonValue(const QJsonValue &source, convertType<OpenLiveStreamDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return OpenLiveStreamDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const OpenLiveStreamDto &source, convertType<OpenLiveStreamDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

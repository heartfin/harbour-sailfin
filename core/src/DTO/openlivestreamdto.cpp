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

#include <JellyfinQt/DTO/mediaprotocol.h>

namespace Jellyfin {
namespace DTO {

OpenLiveStreamDto::OpenLiveStreamDto(QObject *parent) : QObject(parent) {}

OpenLiveStreamDto *OpenLiveStreamDto::fromJSON(QJsonObject source, QObject *parent) {
	OpenLiveStreamDto *instance = new OpenLiveStreamDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void OpenLiveStreamDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject OpenLiveStreamDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString OpenLiveStreamDto::openToken() const { return m_openToken; }
void OpenLiveStreamDto::setOpenToken(QString newOpenToken) {
	m_openToken = newOpenToken;
	emit openTokenChanged(newOpenToken);
}

QString OpenLiveStreamDto::userId() const { return m_userId; }
void OpenLiveStreamDto::setUserId(QString newUserId) {
	m_userId = newUserId;
	emit userIdChanged(newUserId);
}

QString OpenLiveStreamDto::playSessionId() const { return m_playSessionId; }
void OpenLiveStreamDto::setPlaySessionId(QString newPlaySessionId) {
	m_playSessionId = newPlaySessionId;
	emit playSessionIdChanged(newPlaySessionId);
}

qint32 OpenLiveStreamDto::maxStreamingBitrate() const { return m_maxStreamingBitrate; }
void OpenLiveStreamDto::setMaxStreamingBitrate(qint32 newMaxStreamingBitrate) {
	m_maxStreamingBitrate = newMaxStreamingBitrate;
	emit maxStreamingBitrateChanged(newMaxStreamingBitrate);
}

qint64 OpenLiveStreamDto::startTimeTicks() const { return m_startTimeTicks; }
void OpenLiveStreamDto::setStartTimeTicks(qint64 newStartTimeTicks) {
	m_startTimeTicks = newStartTimeTicks;
	emit startTimeTicksChanged(newStartTimeTicks);
}

qint32 OpenLiveStreamDto::audioStreamIndex() const { return m_audioStreamIndex; }
void OpenLiveStreamDto::setAudioStreamIndex(qint32 newAudioStreamIndex) {
	m_audioStreamIndex = newAudioStreamIndex;
	emit audioStreamIndexChanged(newAudioStreamIndex);
}

qint32 OpenLiveStreamDto::subtitleStreamIndex() const { return m_subtitleStreamIndex; }
void OpenLiveStreamDto::setSubtitleStreamIndex(qint32 newSubtitleStreamIndex) {
	m_subtitleStreamIndex = newSubtitleStreamIndex;
	emit subtitleStreamIndexChanged(newSubtitleStreamIndex);
}

qint32 OpenLiveStreamDto::maxAudioChannels() const { return m_maxAudioChannels; }
void OpenLiveStreamDto::setMaxAudioChannels(qint32 newMaxAudioChannels) {
	m_maxAudioChannels = newMaxAudioChannels;
	emit maxAudioChannelsChanged(newMaxAudioChannels);
}

QString OpenLiveStreamDto::itemId() const { return m_itemId; }
void OpenLiveStreamDto::setItemId(QString newItemId) {
	m_itemId = newItemId;
	emit itemIdChanged(newItemId);
}

bool OpenLiveStreamDto::enableDirectPlay() const { return m_enableDirectPlay; }
void OpenLiveStreamDto::setEnableDirectPlay(bool newEnableDirectPlay) {
	m_enableDirectPlay = newEnableDirectPlay;
	emit enableDirectPlayChanged(newEnableDirectPlay);
}

bool OpenLiveStreamDto::enableDirectStream() const { return m_enableDirectStream; }
void OpenLiveStreamDto::setEnableDirectStream(bool newEnableDirectStream) {
	m_enableDirectStream = newEnableDirectStream;
	emit enableDirectStreamChanged(newEnableDirectStream);
}

DeviceProfile * OpenLiveStreamDto::deviceProfile() const { return m_deviceProfile; }
void OpenLiveStreamDto::setDeviceProfile(DeviceProfile * newDeviceProfile) {
	m_deviceProfile = newDeviceProfile;
	emit deviceProfileChanged(newDeviceProfile);
}

QList<MediaProtocol> OpenLiveStreamDto::directPlayProtocols() const { return m_directPlayProtocols; }
void OpenLiveStreamDto::setDirectPlayProtocols(QList<MediaProtocol> newDirectPlayProtocols) {
	m_directPlayProtocols = newDirectPlayProtocols;
	emit directPlayProtocolsChanged(newDirectPlayProtocols);
}


} // NS Jellyfin
} // NS DTO

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

#include <JellyfinQt/DTO/sessioninfo.h>

namespace Jellyfin {
namespace DTO {

SessionInfo::SessionInfo(QObject *parent) {}

SessionInfo SessionInfo::fromJson(QJsonObject source) {SessionInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void SessionInfo::setFromJson(QJsonObject source) {
	m_playState = fromJsonValue<QSharedPointer<PlayerStateInfo>>(source["PlayState"]);
	m_additionalUsers = fromJsonValue<QList<QSharedPointer<SessionUserInfo>>>(source["AdditionalUsers"]);
	m_capabilities = fromJsonValue<QSharedPointer<ClientCapabilities>>(source["Capabilities"]);
	m_remoteEndPoint = fromJsonValue<QString>(source["RemoteEndPoint"]);
	m_playableMediaTypes = fromJsonValue<QStringList>(source["PlayableMediaTypes"]);
	m_jellyfinId = fromJsonValue<QString>(source["Id"]);
	m_userId = fromJsonValue<QUuid>(source["UserId"]);
	m_userName = fromJsonValue<QString>(source["UserName"]);
	m_client = fromJsonValue<QString>(source["Client"]);
	m_lastActivityDate = fromJsonValue<QDateTime>(source["LastActivityDate"]);
	m_lastPlaybackCheckIn = fromJsonValue<QDateTime>(source["LastPlaybackCheckIn"]);
	m_deviceName = fromJsonValue<QString>(source["DeviceName"]);
	m_deviceType = fromJsonValue<QString>(source["DeviceType"]);
	m_nowPlayingItem = fromJsonValue<QSharedPointer<BaseItemDto>>(source["NowPlayingItem"]);
	m_fullNowPlayingItem = fromJsonValue<QSharedPointer<BaseItem>>(source["FullNowPlayingItem"]);
	m_nowViewingItem = fromJsonValue<QSharedPointer<BaseItemDto>>(source["NowViewingItem"]);
	m_deviceId = fromJsonValue<QString>(source["DeviceId"]);
	m_applicationVersion = fromJsonValue<QString>(source["ApplicationVersion"]);
	m_transcodingInfo = fromJsonValue<QSharedPointer<TranscodingInfo>>(source["TranscodingInfo"]);
	m_isActive = fromJsonValue<bool>(source["IsActive"]);
	m_supportsMediaControl = fromJsonValue<bool>(source["SupportsMediaControl"]);
	m_supportsRemoteControl = fromJsonValue<bool>(source["SupportsRemoteControl"]);
	m_nowPlayingQueue = fromJsonValue<QList<QSharedPointer<QueueItem>>>(source["NowPlayingQueue"]);
	m_hasCustomDeviceName = fromJsonValue<bool>(source["HasCustomDeviceName"]);
	m_playlistItemId = fromJsonValue<QString>(source["PlaylistItemId"]);
	m_serverId = fromJsonValue<QString>(source["ServerId"]);
	m_userPrimaryImageTag = fromJsonValue<QString>(source["UserPrimaryImageTag"]);
	m_supportedCommands = fromJsonValue<QList<GeneralCommandType>>(source["SupportedCommands"]);

}
	
QJsonObject SessionInfo::toJson() {
	QJsonObject result;
	result["PlayState"] = toJsonValue<QSharedPointer<PlayerStateInfo>>(m_playState);
	result["AdditionalUsers"] = toJsonValue<QList<QSharedPointer<SessionUserInfo>>>(m_additionalUsers);
	result["Capabilities"] = toJsonValue<QSharedPointer<ClientCapabilities>>(m_capabilities);
	result["RemoteEndPoint"] = toJsonValue<QString>(m_remoteEndPoint);
	result["PlayableMediaTypes"] = toJsonValue<QStringList>(m_playableMediaTypes);
	result["Id"] = toJsonValue<QString>(m_jellyfinId);
	result["UserId"] = toJsonValue<QUuid>(m_userId);
	result["UserName"] = toJsonValue<QString>(m_userName);
	result["Client"] = toJsonValue<QString>(m_client);
	result["LastActivityDate"] = toJsonValue<QDateTime>(m_lastActivityDate);
	result["LastPlaybackCheckIn"] = toJsonValue<QDateTime>(m_lastPlaybackCheckIn);
	result["DeviceName"] = toJsonValue<QString>(m_deviceName);
	result["DeviceType"] = toJsonValue<QString>(m_deviceType);
	result["NowPlayingItem"] = toJsonValue<QSharedPointer<BaseItemDto>>(m_nowPlayingItem);
	result["FullNowPlayingItem"] = toJsonValue<QSharedPointer<BaseItem>>(m_fullNowPlayingItem);
	result["NowViewingItem"] = toJsonValue<QSharedPointer<BaseItemDto>>(m_nowViewingItem);
	result["DeviceId"] = toJsonValue<QString>(m_deviceId);
	result["ApplicationVersion"] = toJsonValue<QString>(m_applicationVersion);
	result["TranscodingInfo"] = toJsonValue<QSharedPointer<TranscodingInfo>>(m_transcodingInfo);
	result["IsActive"] = toJsonValue<bool>(m_isActive);
	result["SupportsMediaControl"] = toJsonValue<bool>(m_supportsMediaControl);
	result["SupportsRemoteControl"] = toJsonValue<bool>(m_supportsRemoteControl);
	result["NowPlayingQueue"] = toJsonValue<QList<QSharedPointer<QueueItem>>>(m_nowPlayingQueue);
	result["HasCustomDeviceName"] = toJsonValue<bool>(m_hasCustomDeviceName);
	result["PlaylistItemId"] = toJsonValue<QString>(m_playlistItemId);
	result["ServerId"] = toJsonValue<QString>(m_serverId);
	result["UserPrimaryImageTag"] = toJsonValue<QString>(m_userPrimaryImageTag);
	result["SupportedCommands"] = toJsonValue<QList<GeneralCommandType>>(m_supportedCommands);

	return result;
}

QSharedPointer<PlayerStateInfo> SessionInfo::playState() const { return m_playState; }

void SessionInfo::setPlayState(QSharedPointer<PlayerStateInfo> newPlayState) {
	m_playState = newPlayState;
}
QList<QSharedPointer<SessionUserInfo>> SessionInfo::additionalUsers() const { return m_additionalUsers; }

void SessionInfo::setAdditionalUsers(QList<QSharedPointer<SessionUserInfo>> newAdditionalUsers) {
	m_additionalUsers = newAdditionalUsers;
}
QSharedPointer<ClientCapabilities> SessionInfo::capabilities() const { return m_capabilities; }

void SessionInfo::setCapabilities(QSharedPointer<ClientCapabilities> newCapabilities) {
	m_capabilities = newCapabilities;
}
QString SessionInfo::remoteEndPoint() const { return m_remoteEndPoint; }

void SessionInfo::setRemoteEndPoint(QString newRemoteEndPoint) {
	m_remoteEndPoint = newRemoteEndPoint;
}
QStringList SessionInfo::playableMediaTypes() const { return m_playableMediaTypes; }

void SessionInfo::setPlayableMediaTypes(QStringList newPlayableMediaTypes) {
	m_playableMediaTypes = newPlayableMediaTypes;
}
QString SessionInfo::jellyfinId() const { return m_jellyfinId; }

void SessionInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QUuid SessionInfo::userId() const { return m_userId; }

void SessionInfo::setUserId(QUuid newUserId) {
	m_userId = newUserId;
}
QString SessionInfo::userName() const { return m_userName; }

void SessionInfo::setUserName(QString newUserName) {
	m_userName = newUserName;
}
QString SessionInfo::client() const { return m_client; }

void SessionInfo::setClient(QString newClient) {
	m_client = newClient;
}
QDateTime SessionInfo::lastActivityDate() const { return m_lastActivityDate; }

void SessionInfo::setLastActivityDate(QDateTime newLastActivityDate) {
	m_lastActivityDate = newLastActivityDate;
}
QDateTime SessionInfo::lastPlaybackCheckIn() const { return m_lastPlaybackCheckIn; }

void SessionInfo::setLastPlaybackCheckIn(QDateTime newLastPlaybackCheckIn) {
	m_lastPlaybackCheckIn = newLastPlaybackCheckIn;
}
QString SessionInfo::deviceName() const { return m_deviceName; }

void SessionInfo::setDeviceName(QString newDeviceName) {
	m_deviceName = newDeviceName;
}
QString SessionInfo::deviceType() const { return m_deviceType; }

void SessionInfo::setDeviceType(QString newDeviceType) {
	m_deviceType = newDeviceType;
}
QSharedPointer<BaseItemDto> SessionInfo::nowPlayingItem() const { return m_nowPlayingItem; }

void SessionInfo::setNowPlayingItem(QSharedPointer<BaseItemDto> newNowPlayingItem) {
	m_nowPlayingItem = newNowPlayingItem;
}
QSharedPointer<BaseItem> SessionInfo::fullNowPlayingItem() const { return m_fullNowPlayingItem; }

void SessionInfo::setFullNowPlayingItem(QSharedPointer<BaseItem> newFullNowPlayingItem) {
	m_fullNowPlayingItem = newFullNowPlayingItem;
}
QSharedPointer<BaseItemDto> SessionInfo::nowViewingItem() const { return m_nowViewingItem; }

void SessionInfo::setNowViewingItem(QSharedPointer<BaseItemDto> newNowViewingItem) {
	m_nowViewingItem = newNowViewingItem;
}
QString SessionInfo::deviceId() const { return m_deviceId; }

void SessionInfo::setDeviceId(QString newDeviceId) {
	m_deviceId = newDeviceId;
}
QString SessionInfo::applicationVersion() const { return m_applicationVersion; }

void SessionInfo::setApplicationVersion(QString newApplicationVersion) {
	m_applicationVersion = newApplicationVersion;
}
QSharedPointer<TranscodingInfo> SessionInfo::transcodingInfo() const { return m_transcodingInfo; }

void SessionInfo::setTranscodingInfo(QSharedPointer<TranscodingInfo> newTranscodingInfo) {
	m_transcodingInfo = newTranscodingInfo;
}
bool SessionInfo::isActive() const { return m_isActive; }

void SessionInfo::setIsActive(bool newIsActive) {
	m_isActive = newIsActive;
}
bool SessionInfo::supportsMediaControl() const { return m_supportsMediaControl; }

void SessionInfo::setSupportsMediaControl(bool newSupportsMediaControl) {
	m_supportsMediaControl = newSupportsMediaControl;
}
bool SessionInfo::supportsRemoteControl() const { return m_supportsRemoteControl; }

void SessionInfo::setSupportsRemoteControl(bool newSupportsRemoteControl) {
	m_supportsRemoteControl = newSupportsRemoteControl;
}
QList<QSharedPointer<QueueItem>> SessionInfo::nowPlayingQueue() const { return m_nowPlayingQueue; }

void SessionInfo::setNowPlayingQueue(QList<QSharedPointer<QueueItem>> newNowPlayingQueue) {
	m_nowPlayingQueue = newNowPlayingQueue;
}
bool SessionInfo::hasCustomDeviceName() const { return m_hasCustomDeviceName; }

void SessionInfo::setHasCustomDeviceName(bool newHasCustomDeviceName) {
	m_hasCustomDeviceName = newHasCustomDeviceName;
}
QString SessionInfo::playlistItemId() const { return m_playlistItemId; }

void SessionInfo::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}
QString SessionInfo::serverId() const { return m_serverId; }

void SessionInfo::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
QString SessionInfo::userPrimaryImageTag() const { return m_userPrimaryImageTag; }

void SessionInfo::setUserPrimaryImageTag(QString newUserPrimaryImageTag) {
	m_userPrimaryImageTag = newUserPrimaryImageTag;
}
QList<GeneralCommandType> SessionInfo::supportedCommands() const { return m_supportedCommands; }

void SessionInfo::setSupportedCommands(QList<GeneralCommandType> newSupportedCommands) {
	m_supportedCommands = newSupportedCommands;
}


} // NS Jellyfin
} // NS DTO

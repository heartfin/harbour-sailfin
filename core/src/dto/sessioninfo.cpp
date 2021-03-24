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

#include <JellyfinQt/dto/sessioninfo.h>

namespace Jellyfin {
namespace DTO {

SessionInfo::SessionInfo() {}

SessionInfo::SessionInfo(const SessionInfo &other) :

	m_playState(other.m_playState),
	m_additionalUsers(other.m_additionalUsers),
	m_capabilities(other.m_capabilities),
	m_remoteEndPoint(other.m_remoteEndPoint),
	m_playableMediaTypes(other.m_playableMediaTypes),
	m_jellyfinId(other.m_jellyfinId),
	m_userId(other.m_userId),
	m_userName(other.m_userName),
	m_client(other.m_client),
	m_lastActivityDate(other.m_lastActivityDate),
	m_lastPlaybackCheckIn(other.m_lastPlaybackCheckIn),
	m_deviceName(other.m_deviceName),
	m_deviceType(other.m_deviceType),
	m_nowPlayingItem(other.m_nowPlayingItem),
	m_fullNowPlayingItem(other.m_fullNowPlayingItem),
	m_nowViewingItem(other.m_nowViewingItem),
	m_deviceId(other.m_deviceId),
	m_applicationVersion(other.m_applicationVersion),
	m_transcodingInfo(other.m_transcodingInfo),
	m_isActive(other.m_isActive),
	m_supportsMediaControl(other.m_supportsMediaControl),
	m_supportsRemoteControl(other.m_supportsRemoteControl),
	m_nowPlayingQueue(other.m_nowPlayingQueue),
	m_hasCustomDeviceName(other.m_hasCustomDeviceName),
	m_playlistItemId(other.m_playlistItemId),
	m_serverId(other.m_serverId),
	m_userPrimaryImageTag(other.m_userPrimaryImageTag),
	m_supportedCommands(other.m_supportedCommands){}


void SessionInfo::replaceData(SessionInfo &other) {
	m_playState = other.m_playState;
	m_additionalUsers = other.m_additionalUsers;
	m_capabilities = other.m_capabilities;
	m_remoteEndPoint = other.m_remoteEndPoint;
	m_playableMediaTypes = other.m_playableMediaTypes;
	m_jellyfinId = other.m_jellyfinId;
	m_userId = other.m_userId;
	m_userName = other.m_userName;
	m_client = other.m_client;
	m_lastActivityDate = other.m_lastActivityDate;
	m_lastPlaybackCheckIn = other.m_lastPlaybackCheckIn;
	m_deviceName = other.m_deviceName;
	m_deviceType = other.m_deviceType;
	m_nowPlayingItem = other.m_nowPlayingItem;
	m_fullNowPlayingItem = other.m_fullNowPlayingItem;
	m_nowViewingItem = other.m_nowViewingItem;
	m_deviceId = other.m_deviceId;
	m_applicationVersion = other.m_applicationVersion;
	m_transcodingInfo = other.m_transcodingInfo;
	m_isActive = other.m_isActive;
	m_supportsMediaControl = other.m_supportsMediaControl;
	m_supportsRemoteControl = other.m_supportsRemoteControl;
	m_nowPlayingQueue = other.m_nowPlayingQueue;
	m_hasCustomDeviceName = other.m_hasCustomDeviceName;
	m_playlistItemId = other.m_playlistItemId;
	m_serverId = other.m_serverId;
	m_userPrimaryImageTag = other.m_userPrimaryImageTag;
	m_supportedCommands = other.m_supportedCommands;
}

SessionInfo SessionInfo::fromJson(QJsonObject source) {
	SessionInfo instance;
	instance.setFromJson(source);
	return instance;
}


void SessionInfo::setFromJson(QJsonObject source) {
	m_playState = Jellyfin::Support::fromJsonValue<QSharedPointer<PlayerStateInfo>>(source["PlayState"]);
	m_additionalUsers = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<SessionUserInfo>>>(source["AdditionalUsers"]);
	m_capabilities = Jellyfin::Support::fromJsonValue<QSharedPointer<ClientCapabilities>>(source["Capabilities"]);
	m_remoteEndPoint = Jellyfin::Support::fromJsonValue<QString>(source["RemoteEndPoint"]);
	m_playableMediaTypes = Jellyfin::Support::fromJsonValue<QStringList>(source["PlayableMediaTypes"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_userName = Jellyfin::Support::fromJsonValue<QString>(source["UserName"]);
	m_client = Jellyfin::Support::fromJsonValue<QString>(source["Client"]);
	m_lastActivityDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastActivityDate"]);
	m_lastPlaybackCheckIn = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastPlaybackCheckIn"]);
	m_deviceName = Jellyfin::Support::fromJsonValue<QString>(source["DeviceName"]);
	m_deviceType = Jellyfin::Support::fromJsonValue<QString>(source["DeviceType"]);
	m_nowPlayingItem = Jellyfin::Support::fromJsonValue<QSharedPointer<BaseItemDto>>(source["NowPlayingItem"]);
	m_fullNowPlayingItem = Jellyfin::Support::fromJsonValue<QSharedPointer<BaseItem>>(source["FullNowPlayingItem"]);
	m_nowViewingItem = Jellyfin::Support::fromJsonValue<QSharedPointer<BaseItemDto>>(source["NowViewingItem"]);
	m_deviceId = Jellyfin::Support::fromJsonValue<QString>(source["DeviceId"]);
	m_applicationVersion = Jellyfin::Support::fromJsonValue<QString>(source["ApplicationVersion"]);
	m_transcodingInfo = Jellyfin::Support::fromJsonValue<QSharedPointer<TranscodingInfo>>(source["TranscodingInfo"]);
	m_isActive = Jellyfin::Support::fromJsonValue<bool>(source["IsActive"]);
	m_supportsMediaControl = Jellyfin::Support::fromJsonValue<bool>(source["SupportsMediaControl"]);
	m_supportsRemoteControl = Jellyfin::Support::fromJsonValue<bool>(source["SupportsRemoteControl"]);
	m_nowPlayingQueue = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<QueueItem>>>(source["NowPlayingQueue"]);
	m_hasCustomDeviceName = Jellyfin::Support::fromJsonValue<bool>(source["HasCustomDeviceName"]);
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QString>(source["PlaylistItemId"]);
	m_serverId = Jellyfin::Support::fromJsonValue<QString>(source["ServerId"]);
	m_userPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["UserPrimaryImageTag"]);
	m_supportedCommands = Jellyfin::Support::fromJsonValue<QList<GeneralCommandType>>(source["SupportedCommands"]);

}
	
QJsonObject SessionInfo::toJson() {
	QJsonObject result;
	result["PlayState"] = Jellyfin::Support::toJsonValue<QSharedPointer<PlayerStateInfo>>(m_playState);
	result["AdditionalUsers"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<SessionUserInfo>>>(m_additionalUsers);
	result["Capabilities"] = Jellyfin::Support::toJsonValue<QSharedPointer<ClientCapabilities>>(m_capabilities);
	result["RemoteEndPoint"] = Jellyfin::Support::toJsonValue<QString>(m_remoteEndPoint);
	result["PlayableMediaTypes"] = Jellyfin::Support::toJsonValue<QStringList>(m_playableMediaTypes);
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);
	result["UserName"] = Jellyfin::Support::toJsonValue<QString>(m_userName);
	result["Client"] = Jellyfin::Support::toJsonValue<QString>(m_client);
	result["LastActivityDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastActivityDate);
	result["LastPlaybackCheckIn"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastPlaybackCheckIn);
	result["DeviceName"] = Jellyfin::Support::toJsonValue<QString>(m_deviceName);
	result["DeviceType"] = Jellyfin::Support::toJsonValue<QString>(m_deviceType);
	result["NowPlayingItem"] = Jellyfin::Support::toJsonValue<QSharedPointer<BaseItemDto>>(m_nowPlayingItem);
	result["FullNowPlayingItem"] = Jellyfin::Support::toJsonValue<QSharedPointer<BaseItem>>(m_fullNowPlayingItem);
	result["NowViewingItem"] = Jellyfin::Support::toJsonValue<QSharedPointer<BaseItemDto>>(m_nowViewingItem);
	result["DeviceId"] = Jellyfin::Support::toJsonValue<QString>(m_deviceId);
	result["ApplicationVersion"] = Jellyfin::Support::toJsonValue<QString>(m_applicationVersion);
	result["TranscodingInfo"] = Jellyfin::Support::toJsonValue<QSharedPointer<TranscodingInfo>>(m_transcodingInfo);
	result["IsActive"] = Jellyfin::Support::toJsonValue<bool>(m_isActive);
	result["SupportsMediaControl"] = Jellyfin::Support::toJsonValue<bool>(m_supportsMediaControl);
	result["SupportsRemoteControl"] = Jellyfin::Support::toJsonValue<bool>(m_supportsRemoteControl);
	result["NowPlayingQueue"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<QueueItem>>>(m_nowPlayingQueue);
	result["HasCustomDeviceName"] = Jellyfin::Support::toJsonValue<bool>(m_hasCustomDeviceName);
	result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QString>(m_playlistItemId);
	result["ServerId"] = Jellyfin::Support::toJsonValue<QString>(m_serverId);
	result["UserPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_userPrimaryImageTag);
	result["SupportedCommands"] = Jellyfin::Support::toJsonValue<QList<GeneralCommandType>>(m_supportedCommands);

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
bool SessionInfo::additionalUsersNull() const {
	return m_additionalUsers.size() == 0;
}

void SessionInfo::setAdditionalUsersNull() {
	m_additionalUsers.clear();

}
QSharedPointer<ClientCapabilities> SessionInfo::capabilities() const { return m_capabilities; }

void SessionInfo::setCapabilities(QSharedPointer<ClientCapabilities> newCapabilities) {
	m_capabilities = newCapabilities;
}

QString SessionInfo::remoteEndPoint() const { return m_remoteEndPoint; }

void SessionInfo::setRemoteEndPoint(QString newRemoteEndPoint) {
	m_remoteEndPoint = newRemoteEndPoint;
}
bool SessionInfo::remoteEndPointNull() const {
	return m_remoteEndPoint.isNull();
}

void SessionInfo::setRemoteEndPointNull() {
	m_remoteEndPoint.clear();

}
QStringList SessionInfo::playableMediaTypes() const { return m_playableMediaTypes; }

void SessionInfo::setPlayableMediaTypes(QStringList newPlayableMediaTypes) {
	m_playableMediaTypes = newPlayableMediaTypes;
}
bool SessionInfo::playableMediaTypesNull() const {
	return m_playableMediaTypes.size() == 0;
}

void SessionInfo::setPlayableMediaTypesNull() {
	m_playableMediaTypes.clear();

}
QString SessionInfo::jellyfinId() const { return m_jellyfinId; }

void SessionInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool SessionInfo::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void SessionInfo::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString SessionInfo::userId() const { return m_userId; }

void SessionInfo::setUserId(QString newUserId) {
	m_userId = newUserId;
}

QString SessionInfo::userName() const { return m_userName; }

void SessionInfo::setUserName(QString newUserName) {
	m_userName = newUserName;
}
bool SessionInfo::userNameNull() const {
	return m_userName.isNull();
}

void SessionInfo::setUserNameNull() {
	m_userName.clear();

}
QString SessionInfo::client() const { return m_client; }

void SessionInfo::setClient(QString newClient) {
	m_client = newClient;
}
bool SessionInfo::clientNull() const {
	return m_client.isNull();
}

void SessionInfo::setClientNull() {
	m_client.clear();

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
bool SessionInfo::deviceNameNull() const {
	return m_deviceName.isNull();
}

void SessionInfo::setDeviceNameNull() {
	m_deviceName.clear();

}
QString SessionInfo::deviceType() const { return m_deviceType; }

void SessionInfo::setDeviceType(QString newDeviceType) {
	m_deviceType = newDeviceType;
}
bool SessionInfo::deviceTypeNull() const {
	return m_deviceType.isNull();
}

void SessionInfo::setDeviceTypeNull() {
	m_deviceType.clear();

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
bool SessionInfo::deviceIdNull() const {
	return m_deviceId.isNull();
}

void SessionInfo::setDeviceIdNull() {
	m_deviceId.clear();

}
QString SessionInfo::applicationVersion() const { return m_applicationVersion; }

void SessionInfo::setApplicationVersion(QString newApplicationVersion) {
	m_applicationVersion = newApplicationVersion;
}
bool SessionInfo::applicationVersionNull() const {
	return m_applicationVersion.isNull();
}

void SessionInfo::setApplicationVersionNull() {
	m_applicationVersion.clear();

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
bool SessionInfo::nowPlayingQueueNull() const {
	return m_nowPlayingQueue.size() == 0;
}

void SessionInfo::setNowPlayingQueueNull() {
	m_nowPlayingQueue.clear();

}
bool SessionInfo::hasCustomDeviceName() const { return m_hasCustomDeviceName; }

void SessionInfo::setHasCustomDeviceName(bool newHasCustomDeviceName) {
	m_hasCustomDeviceName = newHasCustomDeviceName;
}

QString SessionInfo::playlistItemId() const { return m_playlistItemId; }

void SessionInfo::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}
bool SessionInfo::playlistItemIdNull() const {
	return m_playlistItemId.isNull();
}

void SessionInfo::setPlaylistItemIdNull() {
	m_playlistItemId.clear();

}
QString SessionInfo::serverId() const { return m_serverId; }

void SessionInfo::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
bool SessionInfo::serverIdNull() const {
	return m_serverId.isNull();
}

void SessionInfo::setServerIdNull() {
	m_serverId.clear();

}
QString SessionInfo::userPrimaryImageTag() const { return m_userPrimaryImageTag; }

void SessionInfo::setUserPrimaryImageTag(QString newUserPrimaryImageTag) {
	m_userPrimaryImageTag = newUserPrimaryImageTag;
}
bool SessionInfo::userPrimaryImageTagNull() const {
	return m_userPrimaryImageTag.isNull();
}

void SessionInfo::setUserPrimaryImageTagNull() {
	m_userPrimaryImageTag.clear();

}
QList<GeneralCommandType> SessionInfo::supportedCommands() const { return m_supportedCommands; }

void SessionInfo::setSupportedCommands(QList<GeneralCommandType> newSupportedCommands) {
	m_supportedCommands = newSupportedCommands;
}
bool SessionInfo::supportedCommandsNull() const {
	return m_supportedCommands.size() == 0;
}

void SessionInfo::setSupportedCommandsNull() {
	m_supportedCommands.clear();

}

} // NS DTO

namespace Support {

using SessionInfo = Jellyfin::DTO::SessionInfo;

template <>
SessionInfo fromJsonValue<SessionInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return SessionInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

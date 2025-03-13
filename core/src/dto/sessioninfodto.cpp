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

#include <JellyfinQt/dto/sessioninfodto.h>

namespace Jellyfin {
namespace DTO {

SessionInfoDto::SessionInfoDto() {}
SessionInfoDto::SessionInfoDto (
		QSharedPointer<PlayerStateInfo> playState, 
		QSharedPointer<ClientCapabilitiesDto> capabilities, 
		QList<MediaType> playableMediaTypes, 
		QString userId, 
		QDateTime lastActivityDate, 
		QDateTime lastPlaybackCheckIn, 
		QSharedPointer<BaseItemDto> nowPlayingItem, 
		QSharedPointer<BaseItemDto> nowViewingItem, 
		QSharedPointer<TranscodingInfo> transcodingInfo, 
		bool isActive, 
		bool supportsMediaControl, 
		bool supportsRemoteControl, 
		bool hasCustomDeviceName, 
		QList<GeneralCommandType> supportedCommands 
		) :
	m_playState(playState),
	m_capabilities(capabilities),
	m_playableMediaTypes(playableMediaTypes),
	m_userId(userId),
	m_lastActivityDate(lastActivityDate),
	m_lastPlaybackCheckIn(lastPlaybackCheckIn),
	m_nowPlayingItem(nowPlayingItem),
	m_nowViewingItem(nowViewingItem),
	m_transcodingInfo(transcodingInfo),
	m_isActive(isActive),
	m_supportsMediaControl(supportsMediaControl),
	m_supportsRemoteControl(supportsRemoteControl),
	m_hasCustomDeviceName(hasCustomDeviceName),
	m_supportedCommands(supportedCommands) { }



SessionInfoDto::SessionInfoDto(const SessionInfoDto &other) :

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
	m_lastPausedDate(other.m_lastPausedDate),
	m_deviceName(other.m_deviceName),
	m_deviceType(other.m_deviceType),
	m_nowPlayingItem(other.m_nowPlayingItem),
	m_nowViewingItem(other.m_nowViewingItem),
	m_deviceId(other.m_deviceId),
	m_applicationVersion(other.m_applicationVersion),
	m_transcodingInfo(other.m_transcodingInfo),
	m_isActive(other.m_isActive),
	m_supportsMediaControl(other.m_supportsMediaControl),
	m_supportsRemoteControl(other.m_supportsRemoteControl),
	m_nowPlayingQueue(other.m_nowPlayingQueue),
	m_nowPlayingQueueFullItems(other.m_nowPlayingQueueFullItems),
	m_hasCustomDeviceName(other.m_hasCustomDeviceName),
	m_playlistItemId(other.m_playlistItemId),
	m_serverId(other.m_serverId),
	m_userPrimaryImageTag(other.m_userPrimaryImageTag),
	m_supportedCommands(other.m_supportedCommands){}


void SessionInfoDto::replaceData(SessionInfoDto &other) {
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
	m_lastPausedDate = other.m_lastPausedDate;
	m_deviceName = other.m_deviceName;
	m_deviceType = other.m_deviceType;
	m_nowPlayingItem = other.m_nowPlayingItem;
	m_nowViewingItem = other.m_nowViewingItem;
	m_deviceId = other.m_deviceId;
	m_applicationVersion = other.m_applicationVersion;
	m_transcodingInfo = other.m_transcodingInfo;
	m_isActive = other.m_isActive;
	m_supportsMediaControl = other.m_supportsMediaControl;
	m_supportsRemoteControl = other.m_supportsRemoteControl;
	m_nowPlayingQueue = other.m_nowPlayingQueue;
	m_nowPlayingQueueFullItems = other.m_nowPlayingQueueFullItems;
	m_hasCustomDeviceName = other.m_hasCustomDeviceName;
	m_playlistItemId = other.m_playlistItemId;
	m_serverId = other.m_serverId;
	m_userPrimaryImageTag = other.m_userPrimaryImageTag;
	m_supportedCommands = other.m_supportedCommands;
}

SessionInfoDto SessionInfoDto::fromJson(QJsonObject source) {
	SessionInfoDto instance;
	instance.setFromJson(source);
	return instance;
}


void SessionInfoDto::setFromJson(QJsonObject source) {
	m_playState = Jellyfin::Support::fromJsonValue<QSharedPointer<PlayerStateInfo>>(source["PlayState"]);
	m_additionalUsers = Jellyfin::Support::fromJsonValue<QList<SessionUserInfo>>(source["AdditionalUsers"]);
	m_capabilities = Jellyfin::Support::fromJsonValue<QSharedPointer<ClientCapabilitiesDto>>(source["Capabilities"]);
	m_remoteEndPoint = Jellyfin::Support::fromJsonValue<QString>(source["RemoteEndPoint"]);
	m_playableMediaTypes = Jellyfin::Support::fromJsonValue<QList<MediaType>>(source["PlayableMediaTypes"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_userId = Jellyfin::Support::fromJsonValue<QString>(source["UserId"]);
	m_userName = Jellyfin::Support::fromJsonValue<QString>(source["UserName"]);
	m_client = Jellyfin::Support::fromJsonValue<QString>(source["Client"]);
	m_lastActivityDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastActivityDate"]);
	m_lastPlaybackCheckIn = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastPlaybackCheckIn"]);
	m_lastPausedDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["LastPausedDate"]);
	m_deviceName = Jellyfin::Support::fromJsonValue<QString>(source["DeviceName"]);
	m_deviceType = Jellyfin::Support::fromJsonValue<QString>(source["DeviceType"]);
	m_nowPlayingItem = Jellyfin::Support::fromJsonValue<QSharedPointer<BaseItemDto>>(source["NowPlayingItem"]);
	m_nowViewingItem = Jellyfin::Support::fromJsonValue<QSharedPointer<BaseItemDto>>(source["NowViewingItem"]);
	m_deviceId = Jellyfin::Support::fromJsonValue<QString>(source["DeviceId"]);
	m_applicationVersion = Jellyfin::Support::fromJsonValue<QString>(source["ApplicationVersion"]);
	m_transcodingInfo = Jellyfin::Support::fromJsonValue<QSharedPointer<TranscodingInfo>>(source["TranscodingInfo"]);
	m_isActive = Jellyfin::Support::fromJsonValue<bool>(source["IsActive"]);
	m_supportsMediaControl = Jellyfin::Support::fromJsonValue<bool>(source["SupportsMediaControl"]);
	m_supportsRemoteControl = Jellyfin::Support::fromJsonValue<bool>(source["SupportsRemoteControl"]);
	m_nowPlayingQueue = Jellyfin::Support::fromJsonValue<QList<QueueItem>>(source["NowPlayingQueue"]);
	m_nowPlayingQueueFullItems = Jellyfin::Support::fromJsonValue<QList<BaseItemDto>>(source["NowPlayingQueueFullItems"]);
	m_hasCustomDeviceName = Jellyfin::Support::fromJsonValue<bool>(source["HasCustomDeviceName"]);
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QString>(source["PlaylistItemId"]);
	m_serverId = Jellyfin::Support::fromJsonValue<QString>(source["ServerId"]);
	m_userPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["UserPrimaryImageTag"]);
	m_supportedCommands = Jellyfin::Support::fromJsonValue<QList<GeneralCommandType>>(source["SupportedCommands"]);

}
	
QJsonObject SessionInfoDto::toJson() const {
	QJsonObject result;
	
	result["PlayState"] = Jellyfin::Support::toJsonValue<QSharedPointer<PlayerStateInfo>>(m_playState);		
	
	if (!(m_additionalUsers.size() == 0)) {
		result["AdditionalUsers"] = Jellyfin::Support::toJsonValue<QList<SessionUserInfo>>(m_additionalUsers);
	}
			
	result["Capabilities"] = Jellyfin::Support::toJsonValue<QSharedPointer<ClientCapabilitiesDto>>(m_capabilities);		
	
	if (!(m_remoteEndPoint.isNull())) {
		result["RemoteEndPoint"] = Jellyfin::Support::toJsonValue<QString>(m_remoteEndPoint);
	}
			
	result["PlayableMediaTypes"] = Jellyfin::Support::toJsonValue<QList<MediaType>>(m_playableMediaTypes);		
	
	if (!(m_jellyfinId.isNull())) {
		result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	}
			
	result["UserId"] = Jellyfin::Support::toJsonValue<QString>(m_userId);		
	
	if (!(m_userName.isNull())) {
		result["UserName"] = Jellyfin::Support::toJsonValue<QString>(m_userName);
	}
			
	
	if (!(m_client.isNull())) {
		result["Client"] = Jellyfin::Support::toJsonValue<QString>(m_client);
	}
			
	result["LastActivityDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastActivityDate);		
	result["LastPlaybackCheckIn"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastPlaybackCheckIn);		
	
	if (!(m_lastPausedDate.isNull())) {
		result["LastPausedDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_lastPausedDate);
	}
			
	
	if (!(m_deviceName.isNull())) {
		result["DeviceName"] = Jellyfin::Support::toJsonValue<QString>(m_deviceName);
	}
			
	
	if (!(m_deviceType.isNull())) {
		result["DeviceType"] = Jellyfin::Support::toJsonValue<QString>(m_deviceType);
	}
			
	result["NowPlayingItem"] = Jellyfin::Support::toJsonValue<QSharedPointer<BaseItemDto>>(m_nowPlayingItem);		
	result["NowViewingItem"] = Jellyfin::Support::toJsonValue<QSharedPointer<BaseItemDto>>(m_nowViewingItem);		
	
	if (!(m_deviceId.isNull())) {
		result["DeviceId"] = Jellyfin::Support::toJsonValue<QString>(m_deviceId);
	}
			
	
	if (!(m_applicationVersion.isNull())) {
		result["ApplicationVersion"] = Jellyfin::Support::toJsonValue<QString>(m_applicationVersion);
	}
			
	result["TranscodingInfo"] = Jellyfin::Support::toJsonValue<QSharedPointer<TranscodingInfo>>(m_transcodingInfo);		
	result["IsActive"] = Jellyfin::Support::toJsonValue<bool>(m_isActive);		
	result["SupportsMediaControl"] = Jellyfin::Support::toJsonValue<bool>(m_supportsMediaControl);		
	result["SupportsRemoteControl"] = Jellyfin::Support::toJsonValue<bool>(m_supportsRemoteControl);		
	
	if (!(m_nowPlayingQueue.size() == 0)) {
		result["NowPlayingQueue"] = Jellyfin::Support::toJsonValue<QList<QueueItem>>(m_nowPlayingQueue);
	}
			
	
	if (!(m_nowPlayingQueueFullItems.size() == 0)) {
		result["NowPlayingQueueFullItems"] = Jellyfin::Support::toJsonValue<QList<BaseItemDto>>(m_nowPlayingQueueFullItems);
	}
			
	result["HasCustomDeviceName"] = Jellyfin::Support::toJsonValue<bool>(m_hasCustomDeviceName);		
	
	if (!(m_playlistItemId.isNull())) {
		result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QString>(m_playlistItemId);
	}
			
	
	if (!(m_serverId.isNull())) {
		result["ServerId"] = Jellyfin::Support::toJsonValue<QString>(m_serverId);
	}
			
	
	if (!(m_userPrimaryImageTag.isNull())) {
		result["UserPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_userPrimaryImageTag);
	}
			
	result["SupportedCommands"] = Jellyfin::Support::toJsonValue<QList<GeneralCommandType>>(m_supportedCommands);	
	return result;
}

QSharedPointer<PlayerStateInfo> SessionInfoDto::playState() const { return m_playState; }

void SessionInfoDto::setPlayState(QSharedPointer<PlayerStateInfo> newPlayState) {
	m_playState = newPlayState;
}

QList<SessionUserInfo> SessionInfoDto::additionalUsers() const { return m_additionalUsers; }

void SessionInfoDto::setAdditionalUsers(QList<SessionUserInfo> newAdditionalUsers) {
	m_additionalUsers = newAdditionalUsers;
}
bool SessionInfoDto::additionalUsersNull() const {
	return m_additionalUsers.size() == 0;
}

void SessionInfoDto::setAdditionalUsersNull() {
	m_additionalUsers.clear();

}
QSharedPointer<ClientCapabilitiesDto> SessionInfoDto::capabilities() const { return m_capabilities; }

void SessionInfoDto::setCapabilities(QSharedPointer<ClientCapabilitiesDto> newCapabilities) {
	m_capabilities = newCapabilities;
}

QString SessionInfoDto::remoteEndPoint() const { return m_remoteEndPoint; }

void SessionInfoDto::setRemoteEndPoint(QString newRemoteEndPoint) {
	m_remoteEndPoint = newRemoteEndPoint;
}
bool SessionInfoDto::remoteEndPointNull() const {
	return m_remoteEndPoint.isNull();
}

void SessionInfoDto::setRemoteEndPointNull() {
	m_remoteEndPoint.clear();

}
QList<MediaType> SessionInfoDto::playableMediaTypes() const { return m_playableMediaTypes; }

void SessionInfoDto::setPlayableMediaTypes(QList<MediaType> newPlayableMediaTypes) {
	m_playableMediaTypes = newPlayableMediaTypes;
}

QString SessionInfoDto::jellyfinId() const { return m_jellyfinId; }

void SessionInfoDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool SessionInfoDto::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void SessionInfoDto::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString SessionInfoDto::userId() const { return m_userId; }

void SessionInfoDto::setUserId(QString newUserId) {
	m_userId = newUserId;
}

QString SessionInfoDto::userName() const { return m_userName; }

void SessionInfoDto::setUserName(QString newUserName) {
	m_userName = newUserName;
}
bool SessionInfoDto::userNameNull() const {
	return m_userName.isNull();
}

void SessionInfoDto::setUserNameNull() {
	m_userName.clear();

}
QString SessionInfoDto::client() const { return m_client; }

void SessionInfoDto::setClient(QString newClient) {
	m_client = newClient;
}
bool SessionInfoDto::clientNull() const {
	return m_client.isNull();
}

void SessionInfoDto::setClientNull() {
	m_client.clear();

}
QDateTime SessionInfoDto::lastActivityDate() const { return m_lastActivityDate; }

void SessionInfoDto::setLastActivityDate(QDateTime newLastActivityDate) {
	m_lastActivityDate = newLastActivityDate;
}

QDateTime SessionInfoDto::lastPlaybackCheckIn() const { return m_lastPlaybackCheckIn; }

void SessionInfoDto::setLastPlaybackCheckIn(QDateTime newLastPlaybackCheckIn) {
	m_lastPlaybackCheckIn = newLastPlaybackCheckIn;
}

QDateTime SessionInfoDto::lastPausedDate() const { return m_lastPausedDate; }

void SessionInfoDto::setLastPausedDate(QDateTime newLastPausedDate) {
	m_lastPausedDate = newLastPausedDate;
}
bool SessionInfoDto::lastPausedDateNull() const {
	return m_lastPausedDate.isNull();
}

void SessionInfoDto::setLastPausedDateNull() {
	m_lastPausedDate= QDateTime();

}
QString SessionInfoDto::deviceName() const { return m_deviceName; }

void SessionInfoDto::setDeviceName(QString newDeviceName) {
	m_deviceName = newDeviceName;
}
bool SessionInfoDto::deviceNameNull() const {
	return m_deviceName.isNull();
}

void SessionInfoDto::setDeviceNameNull() {
	m_deviceName.clear();

}
QString SessionInfoDto::deviceType() const { return m_deviceType; }

void SessionInfoDto::setDeviceType(QString newDeviceType) {
	m_deviceType = newDeviceType;
}
bool SessionInfoDto::deviceTypeNull() const {
	return m_deviceType.isNull();
}

void SessionInfoDto::setDeviceTypeNull() {
	m_deviceType.clear();

}
QSharedPointer<BaseItemDto> SessionInfoDto::nowPlayingItem() const { return m_nowPlayingItem; }

void SessionInfoDto::setNowPlayingItem(QSharedPointer<BaseItemDto> newNowPlayingItem) {
	m_nowPlayingItem = newNowPlayingItem;
}

QSharedPointer<BaseItemDto> SessionInfoDto::nowViewingItem() const { return m_nowViewingItem; }

void SessionInfoDto::setNowViewingItem(QSharedPointer<BaseItemDto> newNowViewingItem) {
	m_nowViewingItem = newNowViewingItem;
}

QString SessionInfoDto::deviceId() const { return m_deviceId; }

void SessionInfoDto::setDeviceId(QString newDeviceId) {
	m_deviceId = newDeviceId;
}
bool SessionInfoDto::deviceIdNull() const {
	return m_deviceId.isNull();
}

void SessionInfoDto::setDeviceIdNull() {
	m_deviceId.clear();

}
QString SessionInfoDto::applicationVersion() const { return m_applicationVersion; }

void SessionInfoDto::setApplicationVersion(QString newApplicationVersion) {
	m_applicationVersion = newApplicationVersion;
}
bool SessionInfoDto::applicationVersionNull() const {
	return m_applicationVersion.isNull();
}

void SessionInfoDto::setApplicationVersionNull() {
	m_applicationVersion.clear();

}
QSharedPointer<TranscodingInfo> SessionInfoDto::transcodingInfo() const { return m_transcodingInfo; }

void SessionInfoDto::setTranscodingInfo(QSharedPointer<TranscodingInfo> newTranscodingInfo) {
	m_transcodingInfo = newTranscodingInfo;
}

bool SessionInfoDto::isActive() const { return m_isActive; }

void SessionInfoDto::setIsActive(bool newIsActive) {
	m_isActive = newIsActive;
}

bool SessionInfoDto::supportsMediaControl() const { return m_supportsMediaControl; }

void SessionInfoDto::setSupportsMediaControl(bool newSupportsMediaControl) {
	m_supportsMediaControl = newSupportsMediaControl;
}

bool SessionInfoDto::supportsRemoteControl() const { return m_supportsRemoteControl; }

void SessionInfoDto::setSupportsRemoteControl(bool newSupportsRemoteControl) {
	m_supportsRemoteControl = newSupportsRemoteControl;
}

QList<QueueItem> SessionInfoDto::nowPlayingQueue() const { return m_nowPlayingQueue; }

void SessionInfoDto::setNowPlayingQueue(QList<QueueItem> newNowPlayingQueue) {
	m_nowPlayingQueue = newNowPlayingQueue;
}
bool SessionInfoDto::nowPlayingQueueNull() const {
	return m_nowPlayingQueue.size() == 0;
}

void SessionInfoDto::setNowPlayingQueueNull() {
	m_nowPlayingQueue.clear();

}
QList<BaseItemDto> SessionInfoDto::nowPlayingQueueFullItems() const { return m_nowPlayingQueueFullItems; }

void SessionInfoDto::setNowPlayingQueueFullItems(QList<BaseItemDto> newNowPlayingQueueFullItems) {
	m_nowPlayingQueueFullItems = newNowPlayingQueueFullItems;
}
bool SessionInfoDto::nowPlayingQueueFullItemsNull() const {
	return m_nowPlayingQueueFullItems.size() == 0;
}

void SessionInfoDto::setNowPlayingQueueFullItemsNull() {
	m_nowPlayingQueueFullItems.clear();

}
bool SessionInfoDto::hasCustomDeviceName() const { return m_hasCustomDeviceName; }

void SessionInfoDto::setHasCustomDeviceName(bool newHasCustomDeviceName) {
	m_hasCustomDeviceName = newHasCustomDeviceName;
}

QString SessionInfoDto::playlistItemId() const { return m_playlistItemId; }

void SessionInfoDto::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}
bool SessionInfoDto::playlistItemIdNull() const {
	return m_playlistItemId.isNull();
}

void SessionInfoDto::setPlaylistItemIdNull() {
	m_playlistItemId.clear();

}
QString SessionInfoDto::serverId() const { return m_serverId; }

void SessionInfoDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
bool SessionInfoDto::serverIdNull() const {
	return m_serverId.isNull();
}

void SessionInfoDto::setServerIdNull() {
	m_serverId.clear();

}
QString SessionInfoDto::userPrimaryImageTag() const { return m_userPrimaryImageTag; }

void SessionInfoDto::setUserPrimaryImageTag(QString newUserPrimaryImageTag) {
	m_userPrimaryImageTag = newUserPrimaryImageTag;
}
bool SessionInfoDto::userPrimaryImageTagNull() const {
	return m_userPrimaryImageTag.isNull();
}

void SessionInfoDto::setUserPrimaryImageTagNull() {
	m_userPrimaryImageTag.clear();

}
QList<GeneralCommandType> SessionInfoDto::supportedCommands() const { return m_supportedCommands; }

void SessionInfoDto::setSupportedCommands(QList<GeneralCommandType> newSupportedCommands) {
	m_supportedCommands = newSupportedCommands;
}


} // NS DTO

namespace Support {

using SessionInfoDto = Jellyfin::DTO::SessionInfoDto;

template <>
SessionInfoDto fromJsonValue(const QJsonValue &source, convertType<SessionInfoDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SessionInfoDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SessionInfoDto &source, convertType<SessionInfoDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

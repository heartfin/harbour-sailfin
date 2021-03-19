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

#include <JellyfinQt/DTO/generalcommandtype.h>

namespace Jellyfin {
namespace DTO {

SessionInfo::SessionInfo(QObject *parent) : QObject(parent) {}

SessionInfo *SessionInfo::fromJSON(QJsonObject source, QObject *parent) {
	SessionInfo *instance = new SessionInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void SessionInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject SessionInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
PlayerStateInfo * SessionInfo::playState() const { return m_playState; }
void SessionInfo::setPlayState(PlayerStateInfo * newPlayState) {
	m_playState = newPlayState;
	emit playStateChanged(newPlayState);
}

QList<SessionUserInfo *> SessionInfo::additionalUsers() const { return m_additionalUsers; }
void SessionInfo::setAdditionalUsers(QList<SessionUserInfo *> newAdditionalUsers) {
	m_additionalUsers = newAdditionalUsers;
	emit additionalUsersChanged(newAdditionalUsers);
}

ClientCapabilities * SessionInfo::capabilities() const { return m_capabilities; }
void SessionInfo::setCapabilities(ClientCapabilities * newCapabilities) {
	m_capabilities = newCapabilities;
	emit capabilitiesChanged(newCapabilities);
}

QString SessionInfo::remoteEndPoint() const { return m_remoteEndPoint; }
void SessionInfo::setRemoteEndPoint(QString newRemoteEndPoint) {
	m_remoteEndPoint = newRemoteEndPoint;
	emit remoteEndPointChanged(newRemoteEndPoint);
}

QStringList SessionInfo::playableMediaTypes() const { return m_playableMediaTypes; }
void SessionInfo::setPlayableMediaTypes(QStringList newPlayableMediaTypes) {
	m_playableMediaTypes = newPlayableMediaTypes;
	emit playableMediaTypesChanged(newPlayableMediaTypes);
}

QString SessionInfo::jellyfinId() const { return m_jellyfinId; }
void SessionInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString SessionInfo::userId() const { return m_userId; }
void SessionInfo::setUserId(QString newUserId) {
	m_userId = newUserId;
	emit userIdChanged(newUserId);
}

QString SessionInfo::userName() const { return m_userName; }
void SessionInfo::setUserName(QString newUserName) {
	m_userName = newUserName;
	emit userNameChanged(newUserName);
}

QString SessionInfo::client() const { return m_client; }
void SessionInfo::setClient(QString newClient) {
	m_client = newClient;
	emit clientChanged(newClient);
}

QDateTime SessionInfo::lastActivityDate() const { return m_lastActivityDate; }
void SessionInfo::setLastActivityDate(QDateTime newLastActivityDate) {
	m_lastActivityDate = newLastActivityDate;
	emit lastActivityDateChanged(newLastActivityDate);
}

QDateTime SessionInfo::lastPlaybackCheckIn() const { return m_lastPlaybackCheckIn; }
void SessionInfo::setLastPlaybackCheckIn(QDateTime newLastPlaybackCheckIn) {
	m_lastPlaybackCheckIn = newLastPlaybackCheckIn;
	emit lastPlaybackCheckInChanged(newLastPlaybackCheckIn);
}

QString SessionInfo::deviceName() const { return m_deviceName; }
void SessionInfo::setDeviceName(QString newDeviceName) {
	m_deviceName = newDeviceName;
	emit deviceNameChanged(newDeviceName);
}

QString SessionInfo::deviceType() const { return m_deviceType; }
void SessionInfo::setDeviceType(QString newDeviceType) {
	m_deviceType = newDeviceType;
	emit deviceTypeChanged(newDeviceType);
}

BaseItemDto * SessionInfo::nowPlayingItem() const { return m_nowPlayingItem; }
void SessionInfo::setNowPlayingItem(BaseItemDto * newNowPlayingItem) {
	m_nowPlayingItem = newNowPlayingItem;
	emit nowPlayingItemChanged(newNowPlayingItem);
}

BaseItem * SessionInfo::fullNowPlayingItem() const { return m_fullNowPlayingItem; }
void SessionInfo::setFullNowPlayingItem(BaseItem * newFullNowPlayingItem) {
	m_fullNowPlayingItem = newFullNowPlayingItem;
	emit fullNowPlayingItemChanged(newFullNowPlayingItem);
}

BaseItemDto * SessionInfo::nowViewingItem() const { return m_nowViewingItem; }
void SessionInfo::setNowViewingItem(BaseItemDto * newNowViewingItem) {
	m_nowViewingItem = newNowViewingItem;
	emit nowViewingItemChanged(newNowViewingItem);
}

QString SessionInfo::deviceId() const { return m_deviceId; }
void SessionInfo::setDeviceId(QString newDeviceId) {
	m_deviceId = newDeviceId;
	emit deviceIdChanged(newDeviceId);
}

QString SessionInfo::applicationVersion() const { return m_applicationVersion; }
void SessionInfo::setApplicationVersion(QString newApplicationVersion) {
	m_applicationVersion = newApplicationVersion;
	emit applicationVersionChanged(newApplicationVersion);
}

TranscodingInfo * SessionInfo::transcodingInfo() const { return m_transcodingInfo; }
void SessionInfo::setTranscodingInfo(TranscodingInfo * newTranscodingInfo) {
	m_transcodingInfo = newTranscodingInfo;
	emit transcodingInfoChanged(newTranscodingInfo);
}

bool SessionInfo::isActive() const { return m_isActive; }
void SessionInfo::setIsActive(bool newIsActive) {
	m_isActive = newIsActive;
	emit isActiveChanged(newIsActive);
}

bool SessionInfo::supportsMediaControl() const { return m_supportsMediaControl; }
void SessionInfo::setSupportsMediaControl(bool newSupportsMediaControl) {
	m_supportsMediaControl = newSupportsMediaControl;
	emit supportsMediaControlChanged(newSupportsMediaControl);
}

bool SessionInfo::supportsRemoteControl() const { return m_supportsRemoteControl; }
void SessionInfo::setSupportsRemoteControl(bool newSupportsRemoteControl) {
	m_supportsRemoteControl = newSupportsRemoteControl;
	emit supportsRemoteControlChanged(newSupportsRemoteControl);
}

QList<QueueItem *> SessionInfo::nowPlayingQueue() const { return m_nowPlayingQueue; }
void SessionInfo::setNowPlayingQueue(QList<QueueItem *> newNowPlayingQueue) {
	m_nowPlayingQueue = newNowPlayingQueue;
	emit nowPlayingQueueChanged(newNowPlayingQueue);
}

bool SessionInfo::hasCustomDeviceName() const { return m_hasCustomDeviceName; }
void SessionInfo::setHasCustomDeviceName(bool newHasCustomDeviceName) {
	m_hasCustomDeviceName = newHasCustomDeviceName;
	emit hasCustomDeviceNameChanged(newHasCustomDeviceName);
}

QString SessionInfo::playlistItemId() const { return m_playlistItemId; }
void SessionInfo::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
	emit playlistItemIdChanged(newPlaylistItemId);
}

QString SessionInfo::serverId() const { return m_serverId; }
void SessionInfo::setServerId(QString newServerId) {
	m_serverId = newServerId;
	emit serverIdChanged(newServerId);
}

QString SessionInfo::userPrimaryImageTag() const { return m_userPrimaryImageTag; }
void SessionInfo::setUserPrimaryImageTag(QString newUserPrimaryImageTag) {
	m_userPrimaryImageTag = newUserPrimaryImageTag;
	emit userPrimaryImageTagChanged(newUserPrimaryImageTag);
}

QList<GeneralCommandType> SessionInfo::supportedCommands() const { return m_supportedCommands; }
void SessionInfo::setSupportedCommands(QList<GeneralCommandType> newSupportedCommands) {
	m_supportedCommands = newSupportedCommands;
	emit supportedCommandsChanged(newSupportedCommands);
}


} // NS Jellyfin
} // NS DTO

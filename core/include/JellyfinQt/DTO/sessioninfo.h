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

#ifndef JELLYFIN_DTO_SESSIONINFO_H
#define JELLYFIN_DTO_SESSIONINFO_H

#include <QDateTime>
#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/generalcommandtype.h"

namespace Jellyfin {
namespace DTO {

class BaseItem;
class BaseItemDto;
class BaseItemDto;
class ClientCapabilities;
class PlayerStateInfo;
class QueueItem;
class SessionUserInfo;
class TranscodingInfo;

class SessionInfo : public QObject {
	Q_OBJECT
public:
	explicit SessionInfo(QObject *parent = nullptr);
	static SessionInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(PlayerStateInfo * playState READ playState WRITE setPlayState NOTIFY playStateChanged)
	Q_PROPERTY(QList<SessionUserInfo *> additionalUsers READ additionalUsers WRITE setAdditionalUsers NOTIFY additionalUsersChanged)
	Q_PROPERTY(ClientCapabilities * capabilities READ capabilities WRITE setCapabilities NOTIFY capabilitiesChanged)
	/**
	 * @brief Gets or sets the remote end point.
	 */
	Q_PROPERTY(QString remoteEndPoint READ remoteEndPoint WRITE setRemoteEndPoint NOTIFY remoteEndPointChanged)
	/**
	 * @brief Gets or sets the playable media types.
	 */
	Q_PROPERTY(QStringList playableMediaTypes READ playableMediaTypes WRITE setPlayableMediaTypes NOTIFY playableMediaTypesChanged)
	/**
	 * @brief Gets or sets the id.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the user id.
	 */
	Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)
	/**
	 * @brief Gets or sets the username.
	 */
	Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)
	/**
	 * @brief Gets or sets the type of the client.
	 */
	Q_PROPERTY(QString client READ client WRITE setClient NOTIFY clientChanged)
	/**
	 * @brief Gets or sets the last activity date.
	 */
	Q_PROPERTY(QDateTime lastActivityDate READ lastActivityDate WRITE setLastActivityDate NOTIFY lastActivityDateChanged)
	/**
	 * @brief Gets or sets the last playback check in.
	 */
	Q_PROPERTY(QDateTime lastPlaybackCheckIn READ lastPlaybackCheckIn WRITE setLastPlaybackCheckIn NOTIFY lastPlaybackCheckInChanged)
	/**
	 * @brief Gets or sets the name of the device.
	 */
	Q_PROPERTY(QString deviceName READ deviceName WRITE setDeviceName NOTIFY deviceNameChanged)
	/**
	 * @brief Gets or sets the type of the device.
	 */
	Q_PROPERTY(QString deviceType READ deviceType WRITE setDeviceType NOTIFY deviceTypeChanged)
	Q_PROPERTY(BaseItemDto * nowPlayingItem READ nowPlayingItem WRITE setNowPlayingItem NOTIFY nowPlayingItemChanged)
	Q_PROPERTY(BaseItem * fullNowPlayingItem READ fullNowPlayingItem WRITE setFullNowPlayingItem NOTIFY fullNowPlayingItemChanged)
	Q_PROPERTY(BaseItemDto * nowViewingItem READ nowViewingItem WRITE setNowViewingItem NOTIFY nowViewingItemChanged)
	/**
	 * @brief Gets or sets the device id.
	 */
	Q_PROPERTY(QString deviceId READ deviceId WRITE setDeviceId NOTIFY deviceIdChanged)
	/**
	 * @brief Gets or sets the application version.
	 */
	Q_PROPERTY(QString applicationVersion READ applicationVersion WRITE setApplicationVersion NOTIFY applicationVersionChanged)
	Q_PROPERTY(TranscodingInfo * transcodingInfo READ transcodingInfo WRITE setTranscodingInfo NOTIFY transcodingInfoChanged)
	/**
	 * @brief Gets a value indicating whether this instance is active.
	 */
	Q_PROPERTY(bool isActive READ isActive WRITE setIsActive NOTIFY isActiveChanged)
	Q_PROPERTY(bool supportsMediaControl READ supportsMediaControl WRITE setSupportsMediaControl NOTIFY supportsMediaControlChanged)
	Q_PROPERTY(bool supportsRemoteControl READ supportsRemoteControl WRITE setSupportsRemoteControl NOTIFY supportsRemoteControlChanged)
	Q_PROPERTY(QList<QueueItem *> nowPlayingQueue READ nowPlayingQueue WRITE setNowPlayingQueue NOTIFY nowPlayingQueueChanged)
	Q_PROPERTY(bool hasCustomDeviceName READ hasCustomDeviceName WRITE setHasCustomDeviceName NOTIFY hasCustomDeviceNameChanged)
	Q_PROPERTY(QString playlistItemId READ playlistItemId WRITE setPlaylistItemId NOTIFY playlistItemIdChanged)
	Q_PROPERTY(QString serverId READ serverId WRITE setServerId NOTIFY serverIdChanged)
	Q_PROPERTY(QString userPrimaryImageTag READ userPrimaryImageTag WRITE setUserPrimaryImageTag NOTIFY userPrimaryImageTagChanged)
	/**
	 * @brief Gets or sets the supported commands.
	 */
	Q_PROPERTY(QList<GeneralCommandType> supportedCommands READ supportedCommands WRITE setSupportedCommands NOTIFY supportedCommandsChanged)

	PlayerStateInfo * playState() const;
	void setPlayState(PlayerStateInfo * newPlayState);
	
	QList<SessionUserInfo *> additionalUsers() const;
	void setAdditionalUsers(QList<SessionUserInfo *> newAdditionalUsers);
	
	ClientCapabilities * capabilities() const;
	void setCapabilities(ClientCapabilities * newCapabilities);
	
	QString remoteEndPoint() const;
	void setRemoteEndPoint(QString newRemoteEndPoint);
	
	QStringList playableMediaTypes() const;
	void setPlayableMediaTypes(QStringList newPlayableMediaTypes);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString userId() const;
	void setUserId(QString newUserId);
	
	QString userName() const;
	void setUserName(QString newUserName);
	
	QString client() const;
	void setClient(QString newClient);
	
	QDateTime lastActivityDate() const;
	void setLastActivityDate(QDateTime newLastActivityDate);
	
	QDateTime lastPlaybackCheckIn() const;
	void setLastPlaybackCheckIn(QDateTime newLastPlaybackCheckIn);
	
	QString deviceName() const;
	void setDeviceName(QString newDeviceName);
	
	QString deviceType() const;
	void setDeviceType(QString newDeviceType);
	
	BaseItemDto * nowPlayingItem() const;
	void setNowPlayingItem(BaseItemDto * newNowPlayingItem);
	
	BaseItem * fullNowPlayingItem() const;
	void setFullNowPlayingItem(BaseItem * newFullNowPlayingItem);
	
	BaseItemDto * nowViewingItem() const;
	void setNowViewingItem(BaseItemDto * newNowViewingItem);
	
	QString deviceId() const;
	void setDeviceId(QString newDeviceId);
	
	QString applicationVersion() const;
	void setApplicationVersion(QString newApplicationVersion);
	
	TranscodingInfo * transcodingInfo() const;
	void setTranscodingInfo(TranscodingInfo * newTranscodingInfo);
	
	bool isActive() const;
	void setIsActive(bool newIsActive);
	
	bool supportsMediaControl() const;
	void setSupportsMediaControl(bool newSupportsMediaControl);
	
	bool supportsRemoteControl() const;
	void setSupportsRemoteControl(bool newSupportsRemoteControl);
	
	QList<QueueItem *> nowPlayingQueue() const;
	void setNowPlayingQueue(QList<QueueItem *> newNowPlayingQueue);
	
	bool hasCustomDeviceName() const;
	void setHasCustomDeviceName(bool newHasCustomDeviceName);
	
	QString playlistItemId() const;
	void setPlaylistItemId(QString newPlaylistItemId);
	
	QString serverId() const;
	void setServerId(QString newServerId);
	
	QString userPrimaryImageTag() const;
	void setUserPrimaryImageTag(QString newUserPrimaryImageTag);
	
	QList<GeneralCommandType> supportedCommands() const;
	void setSupportedCommands(QList<GeneralCommandType> newSupportedCommands);
	
signals:
	void playStateChanged(PlayerStateInfo * newPlayState);
	void additionalUsersChanged(QList<SessionUserInfo *> newAdditionalUsers);
	void capabilitiesChanged(ClientCapabilities * newCapabilities);
	void remoteEndPointChanged(QString newRemoteEndPoint);
	void playableMediaTypesChanged(QStringList newPlayableMediaTypes);
	void jellyfinIdChanged(QString newJellyfinId);
	void userIdChanged(QString newUserId);
	void userNameChanged(QString newUserName);
	void clientChanged(QString newClient);
	void lastActivityDateChanged(QDateTime newLastActivityDate);
	void lastPlaybackCheckInChanged(QDateTime newLastPlaybackCheckIn);
	void deviceNameChanged(QString newDeviceName);
	void deviceTypeChanged(QString newDeviceType);
	void nowPlayingItemChanged(BaseItemDto * newNowPlayingItem);
	void fullNowPlayingItemChanged(BaseItem * newFullNowPlayingItem);
	void nowViewingItemChanged(BaseItemDto * newNowViewingItem);
	void deviceIdChanged(QString newDeviceId);
	void applicationVersionChanged(QString newApplicationVersion);
	void transcodingInfoChanged(TranscodingInfo * newTranscodingInfo);
	void isActiveChanged(bool newIsActive);
	void supportsMediaControlChanged(bool newSupportsMediaControl);
	void supportsRemoteControlChanged(bool newSupportsRemoteControl);
	void nowPlayingQueueChanged(QList<QueueItem *> newNowPlayingQueue);
	void hasCustomDeviceNameChanged(bool newHasCustomDeviceName);
	void playlistItemIdChanged(QString newPlaylistItemId);
	void serverIdChanged(QString newServerId);
	void userPrimaryImageTagChanged(QString newUserPrimaryImageTag);
	void supportedCommandsChanged(QList<GeneralCommandType> newSupportedCommands);
protected:
	PlayerStateInfo * m_playState = nullptr;
	QList<SessionUserInfo *> m_additionalUsers;
	ClientCapabilities * m_capabilities = nullptr;
	QString m_remoteEndPoint;
	QStringList m_playableMediaTypes;
	QString m_jellyfinId;
	QString m_userId;
	QString m_userName;
	QString m_client;
	QDateTime m_lastActivityDate;
	QDateTime m_lastPlaybackCheckIn;
	QString m_deviceName;
	QString m_deviceType;
	BaseItemDto * m_nowPlayingItem = nullptr;
	BaseItem * m_fullNowPlayingItem = nullptr;
	BaseItemDto * m_nowViewingItem = nullptr;
	QString m_deviceId;
	QString m_applicationVersion;
	TranscodingInfo * m_transcodingInfo = nullptr;
	bool m_isActive;
	bool m_supportsMediaControl;
	bool m_supportsRemoteControl;
	QList<QueueItem *> m_nowPlayingQueue;
	bool m_hasCustomDeviceName;
	QString m_playlistItemId;
	QString m_serverId;
	QString m_userPrimaryImageTag;
	QList<GeneralCommandType> m_supportedCommands;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_SESSIONINFO_H

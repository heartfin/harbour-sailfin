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
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/baseitem.h"
#include "JellyfinQt/DTO/baseitemdto.h"
#include "JellyfinQt/DTO/clientcapabilities.h"
#include "JellyfinQt/DTO/generalcommandtype.h"
#include "JellyfinQt/DTO/playerstateinfo.h"
#include "JellyfinQt/DTO/queueitem.h"
#include "JellyfinQt/DTO/sessionuserinfo.h"
#include "JellyfinQt/DTO/transcodinginfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class SessionInfo {
public:
	explicit SessionInfo();
	static SessionInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	QSharedPointer<PlayerStateInfo> playState() const;

	void setPlayState(QSharedPointer<PlayerStateInfo> newPlayState);

	QList<QSharedPointer<SessionUserInfo>> additionalUsers() const;

	void setAdditionalUsers(QList<QSharedPointer<SessionUserInfo>> newAdditionalUsers);

	QSharedPointer<ClientCapabilities> capabilities() const;

	void setCapabilities(QSharedPointer<ClientCapabilities> newCapabilities);
	/**
	 * @brief Gets or sets the remote end point.
	 */
	QString remoteEndPoint() const;
	/**
	* @brief Gets or sets the remote end point.
	*/
	void setRemoteEndPoint(QString newRemoteEndPoint);
	/**
	 * @brief Gets or sets the playable media types.
	 */
	QStringList playableMediaTypes() const;
	/**
	* @brief Gets or sets the playable media types.
	*/
	void setPlayableMediaTypes(QStringList newPlayableMediaTypes);
	/**
	 * @brief Gets or sets the id.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the id.
	*/
	void setJellyfinId(QString newJellyfinId);
	/**
	 * @brief Gets or sets the user id.
	 */
	QUuid userId() const;
	/**
	* @brief Gets or sets the user id.
	*/
	void setUserId(QUuid newUserId);
	/**
	 * @brief Gets or sets the username.
	 */
	QString userName() const;
	/**
	* @brief Gets or sets the username.
	*/
	void setUserName(QString newUserName);
	/**
	 * @brief Gets or sets the type of the client.
	 */
	QString client() const;
	/**
	* @brief Gets or sets the type of the client.
	*/
	void setClient(QString newClient);
	/**
	 * @brief Gets or sets the last activity date.
	 */
	QDateTime lastActivityDate() const;
	/**
	* @brief Gets or sets the last activity date.
	*/
	void setLastActivityDate(QDateTime newLastActivityDate);
	/**
	 * @brief Gets or sets the last playback check in.
	 */
	QDateTime lastPlaybackCheckIn() const;
	/**
	* @brief Gets or sets the last playback check in.
	*/
	void setLastPlaybackCheckIn(QDateTime newLastPlaybackCheckIn);
	/**
	 * @brief Gets or sets the name of the device.
	 */
	QString deviceName() const;
	/**
	* @brief Gets or sets the name of the device.
	*/
	void setDeviceName(QString newDeviceName);
	/**
	 * @brief Gets or sets the type of the device.
	 */
	QString deviceType() const;
	/**
	* @brief Gets or sets the type of the device.
	*/
	void setDeviceType(QString newDeviceType);

	QSharedPointer<BaseItemDto> nowPlayingItem() const;

	void setNowPlayingItem(QSharedPointer<BaseItemDto> newNowPlayingItem);

	QSharedPointer<BaseItem> fullNowPlayingItem() const;

	void setFullNowPlayingItem(QSharedPointer<BaseItem> newFullNowPlayingItem);

	QSharedPointer<BaseItemDto> nowViewingItem() const;

	void setNowViewingItem(QSharedPointer<BaseItemDto> newNowViewingItem);
	/**
	 * @brief Gets or sets the device id.
	 */
	QString deviceId() const;
	/**
	* @brief Gets or sets the device id.
	*/
	void setDeviceId(QString newDeviceId);
	/**
	 * @brief Gets or sets the application version.
	 */
	QString applicationVersion() const;
	/**
	* @brief Gets or sets the application version.
	*/
	void setApplicationVersion(QString newApplicationVersion);

	QSharedPointer<TranscodingInfo> transcodingInfo() const;

	void setTranscodingInfo(QSharedPointer<TranscodingInfo> newTranscodingInfo);
	/**
	 * @brief Gets a value indicating whether this instance is active.
	 */
	bool isActive() const;
	/**
	* @brief Gets a value indicating whether this instance is active.
	*/
	void setIsActive(bool newIsActive);

	bool supportsMediaControl() const;

	void setSupportsMediaControl(bool newSupportsMediaControl);

	bool supportsRemoteControl() const;

	void setSupportsRemoteControl(bool newSupportsRemoteControl);

	QList<QSharedPointer<QueueItem>> nowPlayingQueue() const;

	void setNowPlayingQueue(QList<QSharedPointer<QueueItem>> newNowPlayingQueue);

	bool hasCustomDeviceName() const;

	void setHasCustomDeviceName(bool newHasCustomDeviceName);

	QString playlistItemId() const;

	void setPlaylistItemId(QString newPlaylistItemId);

	QString serverId() const;

	void setServerId(QString newServerId);

	QString userPrimaryImageTag() const;

	void setUserPrimaryImageTag(QString newUserPrimaryImageTag);
	/**
	 * @brief Gets or sets the supported commands.
	 */
	QList<GeneralCommandType> supportedCommands() const;
	/**
	* @brief Gets or sets the supported commands.
	*/
	void setSupportedCommands(QList<GeneralCommandType> newSupportedCommands);

protected:
	QSharedPointer<PlayerStateInfo> m_playState = nullptr;
	QList<QSharedPointer<SessionUserInfo>> m_additionalUsers;
	QSharedPointer<ClientCapabilities> m_capabilities = nullptr;
	QString m_remoteEndPoint;
	QStringList m_playableMediaTypes;
	QString m_jellyfinId;
	QUuid m_userId;
	QString m_userName;
	QString m_client;
	QDateTime m_lastActivityDate;
	QDateTime m_lastPlaybackCheckIn;
	QString m_deviceName;
	QString m_deviceType;
	QSharedPointer<BaseItemDto> m_nowPlayingItem = nullptr;
	QSharedPointer<BaseItem> m_fullNowPlayingItem = nullptr;
	QSharedPointer<BaseItemDto> m_nowViewingItem = nullptr;
	QString m_deviceId;
	QString m_applicationVersion;
	QSharedPointer<TranscodingInfo> m_transcodingInfo = nullptr;
	bool m_isActive;
	bool m_supportsMediaControl;
	bool m_supportsRemoteControl;
	QList<QSharedPointer<QueueItem>> m_nowPlayingQueue;
	bool m_hasCustomDeviceName;
	QString m_playlistItemId;
	QString m_serverId;
	QString m_userPrimaryImageTag;
	QList<GeneralCommandType> m_supportedCommands;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_SESSIONINFO_H

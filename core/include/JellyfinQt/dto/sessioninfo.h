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
#include <optional>

#include "JellyfinQt/dto/baseitem.h"
#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/clientcapabilities.h"
#include "JellyfinQt/dto/generalcommandtype.h"
#include "JellyfinQt/dto/playerstateinfo.h"
#include "JellyfinQt/dto/queueitem.h"
#include "JellyfinQt/dto/sessionuserinfo.h"
#include "JellyfinQt/dto/transcodinginfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class SessionInfo {
public:
	SessionInfo();
	SessionInfo(const SessionInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(SessionInfo &other);
	
	static SessionInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QSharedPointer<PlayerStateInfo> playState() const;

	void setPlayState(QSharedPointer<PlayerStateInfo> newPlayState);


	QList<SessionUserInfo> additionalUsers() const;

	void setAdditionalUsers(QList<SessionUserInfo> newAdditionalUsers);
	bool additionalUsersNull() const;
	void setAdditionalUsersNull();


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
	bool remoteEndPointNull() const;
	void setRemoteEndPointNull();

	/**
	 * @brief Gets or sets the playable media types.
	 */
	QStringList playableMediaTypes() const;
	/**
	* @brief Gets or sets the playable media types.
	*/
	void setPlayableMediaTypes(QStringList newPlayableMediaTypes);
	bool playableMediaTypesNull() const;
	void setPlayableMediaTypesNull();

	/**
	 * @brief Gets or sets the id.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the id.
	*/
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();

	/**
	 * @brief Gets or sets the user id.
	 */
	QString userId() const;
	/**
	* @brief Gets or sets the user id.
	*/
	void setUserId(QString newUserId);

	/**
	 * @brief Gets or sets the username.
	 */
	QString userName() const;
	/**
	* @brief Gets or sets the username.
	*/
	void setUserName(QString newUserName);
	bool userNameNull() const;
	void setUserNameNull();

	/**
	 * @brief Gets or sets the type of the client.
	 */
	QString client() const;
	/**
	* @brief Gets or sets the type of the client.
	*/
	void setClient(QString newClient);
	bool clientNull() const;
	void setClientNull();

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
	bool deviceNameNull() const;
	void setDeviceNameNull();

	/**
	 * @brief Gets or sets the type of the device.
	 */
	QString deviceType() const;
	/**
	* @brief Gets or sets the type of the device.
	*/
	void setDeviceType(QString newDeviceType);
	bool deviceTypeNull() const;
	void setDeviceTypeNull();


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
	bool deviceIdNull() const;
	void setDeviceIdNull();

	/**
	 * @brief Gets or sets the application version.
	 */
	QString applicationVersion() const;
	/**
	* @brief Gets or sets the application version.
	*/
	void setApplicationVersion(QString newApplicationVersion);
	bool applicationVersionNull() const;
	void setApplicationVersionNull();


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


	QList<QueueItem> nowPlayingQueue() const;

	void setNowPlayingQueue(QList<QueueItem> newNowPlayingQueue);
	bool nowPlayingQueueNull() const;
	void setNowPlayingQueueNull();


	bool hasCustomDeviceName() const;

	void setHasCustomDeviceName(bool newHasCustomDeviceName);


	QString playlistItemId() const;

	void setPlaylistItemId(QString newPlaylistItemId);
	bool playlistItemIdNull() const;
	void setPlaylistItemIdNull();


	QString serverId() const;

	void setServerId(QString newServerId);
	bool serverIdNull() const;
	void setServerIdNull();


	QString userPrimaryImageTag() const;

	void setUserPrimaryImageTag(QString newUserPrimaryImageTag);
	bool userPrimaryImageTagNull() const;
	void setUserPrimaryImageTagNull();

	/**
	 * @brief Gets or sets the supported commands.
	 */
	QList<GeneralCommandType> supportedCommands() const;
	/**
	* @brief Gets or sets the supported commands.
	*/
	void setSupportedCommands(QList<GeneralCommandType> newSupportedCommands);
	bool supportedCommandsNull() const;
	void setSupportedCommandsNull();


protected:
	QSharedPointer<PlayerStateInfo> m_playState = QSharedPointer<PlayerStateInfo>();
	QList<SessionUserInfo> m_additionalUsers;
	QSharedPointer<ClientCapabilities> m_capabilities = QSharedPointer<ClientCapabilities>();
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
	QSharedPointer<BaseItemDto> m_nowPlayingItem = QSharedPointer<BaseItemDto>();
	QSharedPointer<BaseItem> m_fullNowPlayingItem = QSharedPointer<BaseItem>();
	QSharedPointer<BaseItemDto> m_nowViewingItem = QSharedPointer<BaseItemDto>();
	QString m_deviceId;
	QString m_applicationVersion;
	QSharedPointer<TranscodingInfo> m_transcodingInfo = QSharedPointer<TranscodingInfo>();
	bool m_isActive;
	bool m_supportsMediaControl;
	bool m_supportsRemoteControl;
	QList<QueueItem> m_nowPlayingQueue;
	bool m_hasCustomDeviceName;
	QString m_playlistItemId;
	QString m_serverId;
	QString m_userPrimaryImageTag;
	QList<GeneralCommandType> m_supportedCommands;
};

} // NS DTO

namespace Support {

using SessionInfo = Jellyfin::DTO::SessionInfo;

template <>
SessionInfo fromJsonValue(const QJsonValue &source, convertType<SessionInfo>);

template<>
QJsonValue toJsonValue(const SessionInfo &source, convertType<SessionInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SESSIONINFO_H

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

#ifndef JELLYFIN_DTO_SESSIONINFODTO_H
#define JELLYFIN_DTO_SESSIONINFODTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/clientcapabilitiesdto.h"
#include "JellyfinQt/dto/generalcommandtype.h"
#include "JellyfinQt/dto/mediatype.h"
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


class SessionInfoDto {
public:
	SessionInfoDto(	
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
	);

	SessionInfoDto(const SessionInfoDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(SessionInfoDto &other);
	
	static SessionInfoDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QSharedPointer<PlayerStateInfo> playState() const;

	void setPlayState(QSharedPointer<PlayerStateInfo> newPlayState);

	/**
	 * @brief Gets or sets the additional users.
	 */
	QList<SessionUserInfo> additionalUsers() const;
	/**
	* @brief Gets or sets the additional users.
	*/
	void setAdditionalUsers(QList<SessionUserInfo> newAdditionalUsers);
	bool additionalUsersNull() const;
	void setAdditionalUsersNull();


	QSharedPointer<ClientCapabilitiesDto> capabilities() const;

	void setCapabilities(QSharedPointer<ClientCapabilitiesDto> newCapabilities);

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
	QList<MediaType> playableMediaTypes() const;
	/**
	* @brief Gets or sets the playable media types.
	*/
	void setPlayableMediaTypes(QList<MediaType> newPlayableMediaTypes);

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
	 * @brief Gets or sets the last paused date.
	 */
	QDateTime lastPausedDate() const;
	/**
	* @brief Gets or sets the last paused date.
	*/
	void setLastPausedDate(QDateTime newLastPausedDate);
	bool lastPausedDateNull() const;
	void setLastPausedDateNull();

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
	 * @brief Gets or sets a value indicating whether this session is active.
	 */
	bool isActive() const;
	/**
	* @brief Gets or sets a value indicating whether this session is active.
	*/
	void setIsActive(bool newIsActive);

	/**
	 * @brief Gets or sets a value indicating whether the session supports media control.
	 */
	bool supportsMediaControl() const;
	/**
	* @brief Gets or sets a value indicating whether the session supports media control.
	*/
	void setSupportsMediaControl(bool newSupportsMediaControl);

	/**
	 * @brief Gets or sets a value indicating whether the session supports remote control.
	 */
	bool supportsRemoteControl() const;
	/**
	* @brief Gets or sets a value indicating whether the session supports remote control.
	*/
	void setSupportsRemoteControl(bool newSupportsRemoteControl);

	/**
	 * @brief Gets or sets the now playing queue.
	 */
	QList<QueueItem> nowPlayingQueue() const;
	/**
	* @brief Gets or sets the now playing queue.
	*/
	void setNowPlayingQueue(QList<QueueItem> newNowPlayingQueue);
	bool nowPlayingQueueNull() const;
	void setNowPlayingQueueNull();

	/**
	 * @brief Gets or sets the now playing queue full items.
	 */
	QList<BaseItemDto> nowPlayingQueueFullItems() const;
	/**
	* @brief Gets or sets the now playing queue full items.
	*/
	void setNowPlayingQueueFullItems(QList<BaseItemDto> newNowPlayingQueueFullItems);
	bool nowPlayingQueueFullItemsNull() const;
	void setNowPlayingQueueFullItemsNull();

	/**
	 * @brief Gets or sets a value indicating whether the session has a custom device name.
	 */
	bool hasCustomDeviceName() const;
	/**
	* @brief Gets or sets a value indicating whether the session has a custom device name.
	*/
	void setHasCustomDeviceName(bool newHasCustomDeviceName);

	/**
	 * @brief Gets or sets the playlist item id.
	 */
	QString playlistItemId() const;
	/**
	* @brief Gets or sets the playlist item id.
	*/
	void setPlaylistItemId(QString newPlaylistItemId);
	bool playlistItemIdNull() const;
	void setPlaylistItemIdNull();

	/**
	 * @brief Gets or sets the server id.
	 */
	QString serverId() const;
	/**
	* @brief Gets or sets the server id.
	*/
	void setServerId(QString newServerId);
	bool serverIdNull() const;
	void setServerIdNull();

	/**
	 * @brief Gets or sets the user primary image tag.
	 */
	QString userPrimaryImageTag() const;
	/**
	* @brief Gets or sets the user primary image tag.
	*/
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


protected:
	QSharedPointer<PlayerStateInfo> m_playState = QSharedPointer<PlayerStateInfo>();
	QList<SessionUserInfo> m_additionalUsers;
	QSharedPointer<ClientCapabilitiesDto> m_capabilities = QSharedPointer<ClientCapabilitiesDto>();
	QString m_remoteEndPoint;
	QList<MediaType> m_playableMediaTypes;
	QString m_jellyfinId;
	QString m_userId;
	QString m_userName;
	QString m_client;
	QDateTime m_lastActivityDate;
	QDateTime m_lastPlaybackCheckIn;
	QDateTime m_lastPausedDate;
	QString m_deviceName;
	QString m_deviceType;
	QSharedPointer<BaseItemDto> m_nowPlayingItem = QSharedPointer<BaseItemDto>();
	QSharedPointer<BaseItemDto> m_nowViewingItem = QSharedPointer<BaseItemDto>();
	QString m_deviceId;
	QString m_applicationVersion;
	QSharedPointer<TranscodingInfo> m_transcodingInfo = QSharedPointer<TranscodingInfo>();
	bool m_isActive;
	bool m_supportsMediaControl;
	bool m_supportsRemoteControl;
	QList<QueueItem> m_nowPlayingQueue;
	QList<BaseItemDto> m_nowPlayingQueueFullItems;
	bool m_hasCustomDeviceName;
	QString m_playlistItemId;
	QString m_serverId;
	QString m_userPrimaryImageTag;
	QList<GeneralCommandType> m_supportedCommands;

private:
	// Private constructor which generates an invalid object, for use withing SessionInfoDto::fromJson();
	SessionInfoDto();
};


} // NS DTO

namespace Support {

using SessionInfoDto = Jellyfin::DTO::SessionInfoDto;

template <>
SessionInfoDto fromJsonValue(const QJsonValue &source, convertType<SessionInfoDto>);

template<>
QJsonValue toJsonValue(const SessionInfoDto &source, convertType<SessionInfoDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SESSIONINFODTO_H

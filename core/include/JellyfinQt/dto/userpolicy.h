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

#ifndef JELLYFIN_DTO_USERPOLICY_H
#define JELLYFIN_DTO_USERPOLICY_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/accessschedule.h"
#include "JellyfinQt/dto/syncplayuseraccesstype.h"
#include "JellyfinQt/dto/unrateditem.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class UserPolicy {
public:
	UserPolicy(	
		bool isAdministrator,			
		bool isHidden,			
		std::optional<bool> enableCollectionManagement,			
		std::optional<bool> enableSubtitleManagement,			
		std::optional<bool> enableLyricManagement,			
		bool isDisabled,									
		bool enableUserPreferenceAccess,							
		bool enableRemoteControlOfOtherUsers,			
		bool enableSharedDeviceControl,			
		bool enableRemoteAccess,			
		bool enableLiveTvManagement,			
		bool enableLiveTvAccess,			
		bool enableMediaPlayback,			
		bool enableAudioPlaybackTranscoding,			
		bool enableVideoPlaybackTranscoding,			
		bool enablePlaybackRemuxing,			
		bool forceRemoteSourceTranscoding,			
		bool enableContentDeletion,					
		bool enableContentDownloading,			
		bool enableSyncTranscoding,			
		bool enableMediaConversion,					
		bool enableAllDevices,					
		bool enableAllChannels,					
		bool enableAllFolders,			
		qint32 invalidLoginAttemptCount,			
		qint32 loginAttemptsBeforeLockout,			
		qint32 maxActiveSessions,			
		bool enablePublicSharing,							
		qint32 remoteClientBitrateLimit,			
		QString authenticationProviderId,			
		QString passwordResetProviderId,			
		SyncPlayUserAccessType syncPlayAccess		
	);

	UserPolicy(const UserPolicy &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(UserPolicy &other);
	
	static UserPolicy fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets a value indicating whether this instance is administrator.
	 */
	bool isAdministrator() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is administrator.
	*/
	void setIsAdministrator(bool newIsAdministrator);

	/**
	 * @brief Gets or sets a value indicating whether this instance is hidden.
	 */
	bool isHidden() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is hidden.
	*/
	void setIsHidden(bool newIsHidden);

	/**
	 * @brief Gets or sets a value indicating whether this instance can manage collections.
	 */
	std::optional<bool> enableCollectionManagement() const;
	/**
	* @brief Gets or sets a value indicating whether this instance can manage collections.
	*/
	void setEnableCollectionManagement(std::optional<bool> newEnableCollectionManagement);

	/**
	 * @brief Gets or sets a value indicating whether this instance can manage subtitles.
	 */
	std::optional<bool> enableSubtitleManagement() const;
	/**
	* @brief Gets or sets a value indicating whether this instance can manage subtitles.
	*/
	void setEnableSubtitleManagement(std::optional<bool> newEnableSubtitleManagement);

	/**
	 * @brief Gets or sets a value indicating whether this user can manage lyrics.
	 */
	std::optional<bool> enableLyricManagement() const;
	/**
	* @brief Gets or sets a value indicating whether this user can manage lyrics.
	*/
	void setEnableLyricManagement(std::optional<bool> newEnableLyricManagement);

	/**
	 * @brief Gets or sets a value indicating whether this instance is disabled.
	 */
	bool isDisabled() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is disabled.
	*/
	void setIsDisabled(bool newIsDisabled);

	/**
	 * @brief Gets or sets the max parental rating.
	 */
	std::optional<qint32> maxParentalRating() const;
	/**
	* @brief Gets or sets the max parental rating.
	*/
	void setMaxParentalRating(std::optional<qint32> newMaxParentalRating);
	bool maxParentalRatingNull() const;
	void setMaxParentalRatingNull();


	QStringList blockedTags() const;

	void setBlockedTags(QStringList newBlockedTags);
	bool blockedTagsNull() const;
	void setBlockedTagsNull();


	QStringList allowedTags() const;

	void setAllowedTags(QStringList newAllowedTags);
	bool allowedTagsNull() const;
	void setAllowedTagsNull();


	bool enableUserPreferenceAccess() const;

	void setEnableUserPreferenceAccess(bool newEnableUserPreferenceAccess);


	QList<AccessSchedule> accessSchedules() const;

	void setAccessSchedules(QList<AccessSchedule> newAccessSchedules);
	bool accessSchedulesNull() const;
	void setAccessSchedulesNull();


	QList<UnratedItem> blockUnratedItems() const;

	void setBlockUnratedItems(QList<UnratedItem> newBlockUnratedItems);
	bool blockUnratedItemsNull() const;
	void setBlockUnratedItemsNull();


	bool enableRemoteControlOfOtherUsers() const;

	void setEnableRemoteControlOfOtherUsers(bool newEnableRemoteControlOfOtherUsers);


	bool enableSharedDeviceControl() const;

	void setEnableSharedDeviceControl(bool newEnableSharedDeviceControl);


	bool enableRemoteAccess() const;

	void setEnableRemoteAccess(bool newEnableRemoteAccess);


	bool enableLiveTvManagement() const;

	void setEnableLiveTvManagement(bool newEnableLiveTvManagement);


	bool enableLiveTvAccess() const;

	void setEnableLiveTvAccess(bool newEnableLiveTvAccess);


	bool enableMediaPlayback() const;

	void setEnableMediaPlayback(bool newEnableMediaPlayback);


	bool enableAudioPlaybackTranscoding() const;

	void setEnableAudioPlaybackTranscoding(bool newEnableAudioPlaybackTranscoding);


	bool enableVideoPlaybackTranscoding() const;

	void setEnableVideoPlaybackTranscoding(bool newEnableVideoPlaybackTranscoding);


	bool enablePlaybackRemuxing() const;

	void setEnablePlaybackRemuxing(bool newEnablePlaybackRemuxing);


	bool forceRemoteSourceTranscoding() const;

	void setForceRemoteSourceTranscoding(bool newForceRemoteSourceTranscoding);


	bool enableContentDeletion() const;

	void setEnableContentDeletion(bool newEnableContentDeletion);


	QStringList enableContentDeletionFromFolders() const;

	void setEnableContentDeletionFromFolders(QStringList newEnableContentDeletionFromFolders);
	bool enableContentDeletionFromFoldersNull() const;
	void setEnableContentDeletionFromFoldersNull();


	bool enableContentDownloading() const;

	void setEnableContentDownloading(bool newEnableContentDownloading);

	/**
	 * @brief Gets or sets a value indicating whether [enable synchronize].
	 */
	bool enableSyncTranscoding() const;
	/**
	* @brief Gets or sets a value indicating whether [enable synchronize].
	*/
	void setEnableSyncTranscoding(bool newEnableSyncTranscoding);


	bool enableMediaConversion() const;

	void setEnableMediaConversion(bool newEnableMediaConversion);


	QStringList enabledDevices() const;

	void setEnabledDevices(QStringList newEnabledDevices);
	bool enabledDevicesNull() const;
	void setEnabledDevicesNull();


	bool enableAllDevices() const;

	void setEnableAllDevices(bool newEnableAllDevices);


	QStringList enabledChannels() const;

	void setEnabledChannels(QStringList newEnabledChannels);
	bool enabledChannelsNull() const;
	void setEnabledChannelsNull();


	bool enableAllChannels() const;

	void setEnableAllChannels(bool newEnableAllChannels);


	QStringList enabledFolders() const;

	void setEnabledFolders(QStringList newEnabledFolders);
	bool enabledFoldersNull() const;
	void setEnabledFoldersNull();


	bool enableAllFolders() const;

	void setEnableAllFolders(bool newEnableAllFolders);


	qint32 invalidLoginAttemptCount() const;

	void setInvalidLoginAttemptCount(qint32 newInvalidLoginAttemptCount);


	qint32 loginAttemptsBeforeLockout() const;

	void setLoginAttemptsBeforeLockout(qint32 newLoginAttemptsBeforeLockout);


	qint32 maxActiveSessions() const;

	void setMaxActiveSessions(qint32 newMaxActiveSessions);


	bool enablePublicSharing() const;

	void setEnablePublicSharing(bool newEnablePublicSharing);


	QStringList blockedMediaFolders() const;

	void setBlockedMediaFolders(QStringList newBlockedMediaFolders);
	bool blockedMediaFoldersNull() const;
	void setBlockedMediaFoldersNull();


	QStringList blockedChannels() const;

	void setBlockedChannels(QStringList newBlockedChannels);
	bool blockedChannelsNull() const;
	void setBlockedChannelsNull();


	qint32 remoteClientBitrateLimit() const;

	void setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit);


	QString authenticationProviderId() const;

	void setAuthenticationProviderId(QString newAuthenticationProviderId);


	QString passwordResetProviderId() const;

	void setPasswordResetProviderId(QString newPasswordResetProviderId);


	SyncPlayUserAccessType syncPlayAccess() const;

	void setSyncPlayAccess(SyncPlayUserAccessType newSyncPlayAccess);


protected:
	bool m_isAdministrator;
	bool m_isHidden;
	std::optional<bool> m_enableCollectionManagement = std::nullopt;
	std::optional<bool> m_enableSubtitleManagement = std::nullopt;
	std::optional<bool> m_enableLyricManagement = std::nullopt;
	bool m_isDisabled;
	std::optional<qint32> m_maxParentalRating = std::nullopt;
	QStringList m_blockedTags;
	QStringList m_allowedTags;
	bool m_enableUserPreferenceAccess;
	QList<AccessSchedule> m_accessSchedules;
	QList<UnratedItem> m_blockUnratedItems;
	bool m_enableRemoteControlOfOtherUsers;
	bool m_enableSharedDeviceControl;
	bool m_enableRemoteAccess;
	bool m_enableLiveTvManagement;
	bool m_enableLiveTvAccess;
	bool m_enableMediaPlayback;
	bool m_enableAudioPlaybackTranscoding;
	bool m_enableVideoPlaybackTranscoding;
	bool m_enablePlaybackRemuxing;
	bool m_forceRemoteSourceTranscoding;
	bool m_enableContentDeletion;
	QStringList m_enableContentDeletionFromFolders;
	bool m_enableContentDownloading;
	bool m_enableSyncTranscoding;
	bool m_enableMediaConversion;
	QStringList m_enabledDevices;
	bool m_enableAllDevices;
	QStringList m_enabledChannels;
	bool m_enableAllChannels;
	QStringList m_enabledFolders;
	bool m_enableAllFolders;
	qint32 m_invalidLoginAttemptCount;
	qint32 m_loginAttemptsBeforeLockout;
	qint32 m_maxActiveSessions;
	bool m_enablePublicSharing;
	QStringList m_blockedMediaFolders;
	QStringList m_blockedChannels;
	qint32 m_remoteClientBitrateLimit;
	QString m_authenticationProviderId;
	QString m_passwordResetProviderId;
	SyncPlayUserAccessType m_syncPlayAccess;

private:
	// Private constructor which generates an invalid object, for use withing UserPolicy::fromJson();
	UserPolicy();
};


} // NS DTO

namespace Support {

using UserPolicy = Jellyfin::DTO::UserPolicy;

template <>
UserPolicy fromJsonValue(const QJsonValue &source, convertType<UserPolicy>);

template<>
QJsonValue toJsonValue(const UserPolicy &source, convertType<UserPolicy>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_USERPOLICY_H

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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/syncplayuseraccesstype.h"
#include "JellyfinQt/DTO/unrateditem.h"

namespace Jellyfin {
namespace DTO {

class AccessSchedule;

class UserPolicy : public QObject {
	Q_OBJECT
public:
	explicit UserPolicy(QObject *parent = nullptr);
	static UserPolicy *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets a value indicating whether this instance is administrator.
	 */
	Q_PROPERTY(bool isAdministrator READ isAdministrator WRITE setIsAdministrator NOTIFY isAdministratorChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is hidden.
	 */
	Q_PROPERTY(bool isHidden READ isHidden WRITE setIsHidden NOTIFY isHiddenChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is disabled.
	 */
	Q_PROPERTY(bool isDisabled READ isDisabled WRITE setIsDisabled NOTIFY isDisabledChanged)
	/**
	 * @brief Gets or sets the max parental rating.
	 */
	Q_PROPERTY(qint32 maxParentalRating READ maxParentalRating WRITE setMaxParentalRating NOTIFY maxParentalRatingChanged)
	Q_PROPERTY(QStringList blockedTags READ blockedTags WRITE setBlockedTags NOTIFY blockedTagsChanged)
	Q_PROPERTY(bool enableUserPreferenceAccess READ enableUserPreferenceAccess WRITE setEnableUserPreferenceAccess NOTIFY enableUserPreferenceAccessChanged)
	Q_PROPERTY(QList<AccessSchedule *> accessSchedules READ accessSchedules WRITE setAccessSchedules NOTIFY accessSchedulesChanged)
	Q_PROPERTY(QList<UnratedItem> blockUnratedItems READ blockUnratedItems WRITE setBlockUnratedItems NOTIFY blockUnratedItemsChanged)
	Q_PROPERTY(bool enableRemoteControlOfOtherUsers READ enableRemoteControlOfOtherUsers WRITE setEnableRemoteControlOfOtherUsers NOTIFY enableRemoteControlOfOtherUsersChanged)
	Q_PROPERTY(bool enableSharedDeviceControl READ enableSharedDeviceControl WRITE setEnableSharedDeviceControl NOTIFY enableSharedDeviceControlChanged)
	Q_PROPERTY(bool enableRemoteAccess READ enableRemoteAccess WRITE setEnableRemoteAccess NOTIFY enableRemoteAccessChanged)
	Q_PROPERTY(bool enableLiveTvManagement READ enableLiveTvManagement WRITE setEnableLiveTvManagement NOTIFY enableLiveTvManagementChanged)
	Q_PROPERTY(bool enableLiveTvAccess READ enableLiveTvAccess WRITE setEnableLiveTvAccess NOTIFY enableLiveTvAccessChanged)
	Q_PROPERTY(bool enableMediaPlayback READ enableMediaPlayback WRITE setEnableMediaPlayback NOTIFY enableMediaPlaybackChanged)
	Q_PROPERTY(bool enableAudioPlaybackTranscoding READ enableAudioPlaybackTranscoding WRITE setEnableAudioPlaybackTranscoding NOTIFY enableAudioPlaybackTranscodingChanged)
	Q_PROPERTY(bool enableVideoPlaybackTranscoding READ enableVideoPlaybackTranscoding WRITE setEnableVideoPlaybackTranscoding NOTIFY enableVideoPlaybackTranscodingChanged)
	Q_PROPERTY(bool enablePlaybackRemuxing READ enablePlaybackRemuxing WRITE setEnablePlaybackRemuxing NOTIFY enablePlaybackRemuxingChanged)
	Q_PROPERTY(bool forceRemoteSourceTranscoding READ forceRemoteSourceTranscoding WRITE setForceRemoteSourceTranscoding NOTIFY forceRemoteSourceTranscodingChanged)
	Q_PROPERTY(bool enableContentDeletion READ enableContentDeletion WRITE setEnableContentDeletion NOTIFY enableContentDeletionChanged)
	Q_PROPERTY(QStringList enableContentDeletionFromFolders READ enableContentDeletionFromFolders WRITE setEnableContentDeletionFromFolders NOTIFY enableContentDeletionFromFoldersChanged)
	Q_PROPERTY(bool enableContentDownloading READ enableContentDownloading WRITE setEnableContentDownloading NOTIFY enableContentDownloadingChanged)
	/**
	 * @brief Gets or sets a value indicating whether [enable synchronize].
	 */
	Q_PROPERTY(bool enableSyncTranscoding READ enableSyncTranscoding WRITE setEnableSyncTranscoding NOTIFY enableSyncTranscodingChanged)
	Q_PROPERTY(bool enableMediaConversion READ enableMediaConversion WRITE setEnableMediaConversion NOTIFY enableMediaConversionChanged)
	Q_PROPERTY(QStringList enabledDevices READ enabledDevices WRITE setEnabledDevices NOTIFY enabledDevicesChanged)
	Q_PROPERTY(bool enableAllDevices READ enableAllDevices WRITE setEnableAllDevices NOTIFY enableAllDevicesChanged)
	Q_PROPERTY(QStringList enabledChannels READ enabledChannels WRITE setEnabledChannels NOTIFY enabledChannelsChanged)
	Q_PROPERTY(bool enableAllChannels READ enableAllChannels WRITE setEnableAllChannels NOTIFY enableAllChannelsChanged)
	Q_PROPERTY(QStringList enabledFolders READ enabledFolders WRITE setEnabledFolders NOTIFY enabledFoldersChanged)
	Q_PROPERTY(bool enableAllFolders READ enableAllFolders WRITE setEnableAllFolders NOTIFY enableAllFoldersChanged)
	Q_PROPERTY(qint32 invalidLoginAttemptCount READ invalidLoginAttemptCount WRITE setInvalidLoginAttemptCount NOTIFY invalidLoginAttemptCountChanged)
	Q_PROPERTY(qint32 loginAttemptsBeforeLockout READ loginAttemptsBeforeLockout WRITE setLoginAttemptsBeforeLockout NOTIFY loginAttemptsBeforeLockoutChanged)
	Q_PROPERTY(qint32 maxActiveSessions READ maxActiveSessions WRITE setMaxActiveSessions NOTIFY maxActiveSessionsChanged)
	Q_PROPERTY(bool enablePublicSharing READ enablePublicSharing WRITE setEnablePublicSharing NOTIFY enablePublicSharingChanged)
	Q_PROPERTY(QStringList blockedMediaFolders READ blockedMediaFolders WRITE setBlockedMediaFolders NOTIFY blockedMediaFoldersChanged)
	Q_PROPERTY(QStringList blockedChannels READ blockedChannels WRITE setBlockedChannels NOTIFY blockedChannelsChanged)
	Q_PROPERTY(qint32 remoteClientBitrateLimit READ remoteClientBitrateLimit WRITE setRemoteClientBitrateLimit NOTIFY remoteClientBitrateLimitChanged)
	Q_PROPERTY(QString authenticationProviderId READ authenticationProviderId WRITE setAuthenticationProviderId NOTIFY authenticationProviderIdChanged)
	Q_PROPERTY(QString passwordResetProviderId READ passwordResetProviderId WRITE setPasswordResetProviderId NOTIFY passwordResetProviderIdChanged)
	Q_PROPERTY(SyncPlayUserAccessType syncPlayAccess READ syncPlayAccess WRITE setSyncPlayAccess NOTIFY syncPlayAccessChanged)

	bool isAdministrator() const;
	void setIsAdministrator(bool newIsAdministrator);
	
	bool isHidden() const;
	void setIsHidden(bool newIsHidden);
	
	bool isDisabled() const;
	void setIsDisabled(bool newIsDisabled);
	
	qint32 maxParentalRating() const;
	void setMaxParentalRating(qint32 newMaxParentalRating);
	
	QStringList blockedTags() const;
	void setBlockedTags(QStringList newBlockedTags);
	
	bool enableUserPreferenceAccess() const;
	void setEnableUserPreferenceAccess(bool newEnableUserPreferenceAccess);
	
	QList<AccessSchedule *> accessSchedules() const;
	void setAccessSchedules(QList<AccessSchedule *> newAccessSchedules);
	
	QList<UnratedItem> blockUnratedItems() const;
	void setBlockUnratedItems(QList<UnratedItem> newBlockUnratedItems);
	
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
	
	bool enableContentDownloading() const;
	void setEnableContentDownloading(bool newEnableContentDownloading);
	
	bool enableSyncTranscoding() const;
	void setEnableSyncTranscoding(bool newEnableSyncTranscoding);
	
	bool enableMediaConversion() const;
	void setEnableMediaConversion(bool newEnableMediaConversion);
	
	QStringList enabledDevices() const;
	void setEnabledDevices(QStringList newEnabledDevices);
	
	bool enableAllDevices() const;
	void setEnableAllDevices(bool newEnableAllDevices);
	
	QStringList enabledChannels() const;
	void setEnabledChannels(QStringList newEnabledChannels);
	
	bool enableAllChannels() const;
	void setEnableAllChannels(bool newEnableAllChannels);
	
	QStringList enabledFolders() const;
	void setEnabledFolders(QStringList newEnabledFolders);
	
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
	
	QStringList blockedChannels() const;
	void setBlockedChannels(QStringList newBlockedChannels);
	
	qint32 remoteClientBitrateLimit() const;
	void setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit);
	
	QString authenticationProviderId() const;
	void setAuthenticationProviderId(QString newAuthenticationProviderId);
	
	QString passwordResetProviderId() const;
	void setPasswordResetProviderId(QString newPasswordResetProviderId);
	
	SyncPlayUserAccessType syncPlayAccess() const;
	void setSyncPlayAccess(SyncPlayUserAccessType newSyncPlayAccess);
	
signals:
	void isAdministratorChanged(bool newIsAdministrator);
	void isHiddenChanged(bool newIsHidden);
	void isDisabledChanged(bool newIsDisabled);
	void maxParentalRatingChanged(qint32 newMaxParentalRating);
	void blockedTagsChanged(QStringList newBlockedTags);
	void enableUserPreferenceAccessChanged(bool newEnableUserPreferenceAccess);
	void accessSchedulesChanged(QList<AccessSchedule *> newAccessSchedules);
	void blockUnratedItemsChanged(QList<UnratedItem> newBlockUnratedItems);
	void enableRemoteControlOfOtherUsersChanged(bool newEnableRemoteControlOfOtherUsers);
	void enableSharedDeviceControlChanged(bool newEnableSharedDeviceControl);
	void enableRemoteAccessChanged(bool newEnableRemoteAccess);
	void enableLiveTvManagementChanged(bool newEnableLiveTvManagement);
	void enableLiveTvAccessChanged(bool newEnableLiveTvAccess);
	void enableMediaPlaybackChanged(bool newEnableMediaPlayback);
	void enableAudioPlaybackTranscodingChanged(bool newEnableAudioPlaybackTranscoding);
	void enableVideoPlaybackTranscodingChanged(bool newEnableVideoPlaybackTranscoding);
	void enablePlaybackRemuxingChanged(bool newEnablePlaybackRemuxing);
	void forceRemoteSourceTranscodingChanged(bool newForceRemoteSourceTranscoding);
	void enableContentDeletionChanged(bool newEnableContentDeletion);
	void enableContentDeletionFromFoldersChanged(QStringList newEnableContentDeletionFromFolders);
	void enableContentDownloadingChanged(bool newEnableContentDownloading);
	void enableSyncTranscodingChanged(bool newEnableSyncTranscoding);
	void enableMediaConversionChanged(bool newEnableMediaConversion);
	void enabledDevicesChanged(QStringList newEnabledDevices);
	void enableAllDevicesChanged(bool newEnableAllDevices);
	void enabledChannelsChanged(QStringList newEnabledChannels);
	void enableAllChannelsChanged(bool newEnableAllChannels);
	void enabledFoldersChanged(QStringList newEnabledFolders);
	void enableAllFoldersChanged(bool newEnableAllFolders);
	void invalidLoginAttemptCountChanged(qint32 newInvalidLoginAttemptCount);
	void loginAttemptsBeforeLockoutChanged(qint32 newLoginAttemptsBeforeLockout);
	void maxActiveSessionsChanged(qint32 newMaxActiveSessions);
	void enablePublicSharingChanged(bool newEnablePublicSharing);
	void blockedMediaFoldersChanged(QStringList newBlockedMediaFolders);
	void blockedChannelsChanged(QStringList newBlockedChannels);
	void remoteClientBitrateLimitChanged(qint32 newRemoteClientBitrateLimit);
	void authenticationProviderIdChanged(QString newAuthenticationProviderId);
	void passwordResetProviderIdChanged(QString newPasswordResetProviderId);
	void syncPlayAccessChanged(SyncPlayUserAccessType newSyncPlayAccess);
protected:
	bool m_isAdministrator;
	bool m_isHidden;
	bool m_isDisabled;
	qint32 m_maxParentalRating;
	QStringList m_blockedTags;
	bool m_enableUserPreferenceAccess;
	QList<AccessSchedule *> m_accessSchedules;
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
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_USERPOLICY_H

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

#include <JellyfinQt/DTO/userpolicy.h>

#include <JellyfinQt/DTO/syncplayuseraccesstype.h>
#include <JellyfinQt/DTO/unrateditem.h>

namespace Jellyfin {
namespace DTO {

UserPolicy::UserPolicy(QObject *parent) : QObject(parent) {}

UserPolicy *UserPolicy::fromJSON(QJsonObject source, QObject *parent) {
	UserPolicy *instance = new UserPolicy(parent);
	instance->updateFromJSON(source);
	return instance;
}

void UserPolicy::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject UserPolicy::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
bool UserPolicy::isAdministrator() const { return m_isAdministrator; }
void UserPolicy::setIsAdministrator(bool newIsAdministrator) {
	m_isAdministrator = newIsAdministrator;
	emit isAdministratorChanged(newIsAdministrator);
}

bool UserPolicy::isHidden() const { return m_isHidden; }
void UserPolicy::setIsHidden(bool newIsHidden) {
	m_isHidden = newIsHidden;
	emit isHiddenChanged(newIsHidden);
}

bool UserPolicy::isDisabled() const { return m_isDisabled; }
void UserPolicy::setIsDisabled(bool newIsDisabled) {
	m_isDisabled = newIsDisabled;
	emit isDisabledChanged(newIsDisabled);
}

qint32 UserPolicy::maxParentalRating() const { return m_maxParentalRating; }
void UserPolicy::setMaxParentalRating(qint32 newMaxParentalRating) {
	m_maxParentalRating = newMaxParentalRating;
	emit maxParentalRatingChanged(newMaxParentalRating);
}

QStringList UserPolicy::blockedTags() const { return m_blockedTags; }
void UserPolicy::setBlockedTags(QStringList newBlockedTags) {
	m_blockedTags = newBlockedTags;
	emit blockedTagsChanged(newBlockedTags);
}

bool UserPolicy::enableUserPreferenceAccess() const { return m_enableUserPreferenceAccess; }
void UserPolicy::setEnableUserPreferenceAccess(bool newEnableUserPreferenceAccess) {
	m_enableUserPreferenceAccess = newEnableUserPreferenceAccess;
	emit enableUserPreferenceAccessChanged(newEnableUserPreferenceAccess);
}

QList<AccessSchedule *> UserPolicy::accessSchedules() const { return m_accessSchedules; }
void UserPolicy::setAccessSchedules(QList<AccessSchedule *> newAccessSchedules) {
	m_accessSchedules = newAccessSchedules;
	emit accessSchedulesChanged(newAccessSchedules);
}

QList<UnratedItem> UserPolicy::blockUnratedItems() const { return m_blockUnratedItems; }
void UserPolicy::setBlockUnratedItems(QList<UnratedItem> newBlockUnratedItems) {
	m_blockUnratedItems = newBlockUnratedItems;
	emit blockUnratedItemsChanged(newBlockUnratedItems);
}

bool UserPolicy::enableRemoteControlOfOtherUsers() const { return m_enableRemoteControlOfOtherUsers; }
void UserPolicy::setEnableRemoteControlOfOtherUsers(bool newEnableRemoteControlOfOtherUsers) {
	m_enableRemoteControlOfOtherUsers = newEnableRemoteControlOfOtherUsers;
	emit enableRemoteControlOfOtherUsersChanged(newEnableRemoteControlOfOtherUsers);
}

bool UserPolicy::enableSharedDeviceControl() const { return m_enableSharedDeviceControl; }
void UserPolicy::setEnableSharedDeviceControl(bool newEnableSharedDeviceControl) {
	m_enableSharedDeviceControl = newEnableSharedDeviceControl;
	emit enableSharedDeviceControlChanged(newEnableSharedDeviceControl);
}

bool UserPolicy::enableRemoteAccess() const { return m_enableRemoteAccess; }
void UserPolicy::setEnableRemoteAccess(bool newEnableRemoteAccess) {
	m_enableRemoteAccess = newEnableRemoteAccess;
	emit enableRemoteAccessChanged(newEnableRemoteAccess);
}

bool UserPolicy::enableLiveTvManagement() const { return m_enableLiveTvManagement; }
void UserPolicy::setEnableLiveTvManagement(bool newEnableLiveTvManagement) {
	m_enableLiveTvManagement = newEnableLiveTvManagement;
	emit enableLiveTvManagementChanged(newEnableLiveTvManagement);
}

bool UserPolicy::enableLiveTvAccess() const { return m_enableLiveTvAccess; }
void UserPolicy::setEnableLiveTvAccess(bool newEnableLiveTvAccess) {
	m_enableLiveTvAccess = newEnableLiveTvAccess;
	emit enableLiveTvAccessChanged(newEnableLiveTvAccess);
}

bool UserPolicy::enableMediaPlayback() const { return m_enableMediaPlayback; }
void UserPolicy::setEnableMediaPlayback(bool newEnableMediaPlayback) {
	m_enableMediaPlayback = newEnableMediaPlayback;
	emit enableMediaPlaybackChanged(newEnableMediaPlayback);
}

bool UserPolicy::enableAudioPlaybackTranscoding() const { return m_enableAudioPlaybackTranscoding; }
void UserPolicy::setEnableAudioPlaybackTranscoding(bool newEnableAudioPlaybackTranscoding) {
	m_enableAudioPlaybackTranscoding = newEnableAudioPlaybackTranscoding;
	emit enableAudioPlaybackTranscodingChanged(newEnableAudioPlaybackTranscoding);
}

bool UserPolicy::enableVideoPlaybackTranscoding() const { return m_enableVideoPlaybackTranscoding; }
void UserPolicy::setEnableVideoPlaybackTranscoding(bool newEnableVideoPlaybackTranscoding) {
	m_enableVideoPlaybackTranscoding = newEnableVideoPlaybackTranscoding;
	emit enableVideoPlaybackTranscodingChanged(newEnableVideoPlaybackTranscoding);
}

bool UserPolicy::enablePlaybackRemuxing() const { return m_enablePlaybackRemuxing; }
void UserPolicy::setEnablePlaybackRemuxing(bool newEnablePlaybackRemuxing) {
	m_enablePlaybackRemuxing = newEnablePlaybackRemuxing;
	emit enablePlaybackRemuxingChanged(newEnablePlaybackRemuxing);
}

bool UserPolicy::forceRemoteSourceTranscoding() const { return m_forceRemoteSourceTranscoding; }
void UserPolicy::setForceRemoteSourceTranscoding(bool newForceRemoteSourceTranscoding) {
	m_forceRemoteSourceTranscoding = newForceRemoteSourceTranscoding;
	emit forceRemoteSourceTranscodingChanged(newForceRemoteSourceTranscoding);
}

bool UserPolicy::enableContentDeletion() const { return m_enableContentDeletion; }
void UserPolicy::setEnableContentDeletion(bool newEnableContentDeletion) {
	m_enableContentDeletion = newEnableContentDeletion;
	emit enableContentDeletionChanged(newEnableContentDeletion);
}

QStringList UserPolicy::enableContentDeletionFromFolders() const { return m_enableContentDeletionFromFolders; }
void UserPolicy::setEnableContentDeletionFromFolders(QStringList newEnableContentDeletionFromFolders) {
	m_enableContentDeletionFromFolders = newEnableContentDeletionFromFolders;
	emit enableContentDeletionFromFoldersChanged(newEnableContentDeletionFromFolders);
}

bool UserPolicy::enableContentDownloading() const { return m_enableContentDownloading; }
void UserPolicy::setEnableContentDownloading(bool newEnableContentDownloading) {
	m_enableContentDownloading = newEnableContentDownloading;
	emit enableContentDownloadingChanged(newEnableContentDownloading);
}

bool UserPolicy::enableSyncTranscoding() const { return m_enableSyncTranscoding; }
void UserPolicy::setEnableSyncTranscoding(bool newEnableSyncTranscoding) {
	m_enableSyncTranscoding = newEnableSyncTranscoding;
	emit enableSyncTranscodingChanged(newEnableSyncTranscoding);
}

bool UserPolicy::enableMediaConversion() const { return m_enableMediaConversion; }
void UserPolicy::setEnableMediaConversion(bool newEnableMediaConversion) {
	m_enableMediaConversion = newEnableMediaConversion;
	emit enableMediaConversionChanged(newEnableMediaConversion);
}

QStringList UserPolicy::enabledDevices() const { return m_enabledDevices; }
void UserPolicy::setEnabledDevices(QStringList newEnabledDevices) {
	m_enabledDevices = newEnabledDevices;
	emit enabledDevicesChanged(newEnabledDevices);
}

bool UserPolicy::enableAllDevices() const { return m_enableAllDevices; }
void UserPolicy::setEnableAllDevices(bool newEnableAllDevices) {
	m_enableAllDevices = newEnableAllDevices;
	emit enableAllDevicesChanged(newEnableAllDevices);
}

QStringList UserPolicy::enabledChannels() const { return m_enabledChannels; }
void UserPolicy::setEnabledChannels(QStringList newEnabledChannels) {
	m_enabledChannels = newEnabledChannels;
	emit enabledChannelsChanged(newEnabledChannels);
}

bool UserPolicy::enableAllChannels() const { return m_enableAllChannels; }
void UserPolicy::setEnableAllChannels(bool newEnableAllChannels) {
	m_enableAllChannels = newEnableAllChannels;
	emit enableAllChannelsChanged(newEnableAllChannels);
}

QStringList UserPolicy::enabledFolders() const { return m_enabledFolders; }
void UserPolicy::setEnabledFolders(QStringList newEnabledFolders) {
	m_enabledFolders = newEnabledFolders;
	emit enabledFoldersChanged(newEnabledFolders);
}

bool UserPolicy::enableAllFolders() const { return m_enableAllFolders; }
void UserPolicy::setEnableAllFolders(bool newEnableAllFolders) {
	m_enableAllFolders = newEnableAllFolders;
	emit enableAllFoldersChanged(newEnableAllFolders);
}

qint32 UserPolicy::invalidLoginAttemptCount() const { return m_invalidLoginAttemptCount; }
void UserPolicy::setInvalidLoginAttemptCount(qint32 newInvalidLoginAttemptCount) {
	m_invalidLoginAttemptCount = newInvalidLoginAttemptCount;
	emit invalidLoginAttemptCountChanged(newInvalidLoginAttemptCount);
}

qint32 UserPolicy::loginAttemptsBeforeLockout() const { return m_loginAttemptsBeforeLockout; }
void UserPolicy::setLoginAttemptsBeforeLockout(qint32 newLoginAttemptsBeforeLockout) {
	m_loginAttemptsBeforeLockout = newLoginAttemptsBeforeLockout;
	emit loginAttemptsBeforeLockoutChanged(newLoginAttemptsBeforeLockout);
}

qint32 UserPolicy::maxActiveSessions() const { return m_maxActiveSessions; }
void UserPolicy::setMaxActiveSessions(qint32 newMaxActiveSessions) {
	m_maxActiveSessions = newMaxActiveSessions;
	emit maxActiveSessionsChanged(newMaxActiveSessions);
}

bool UserPolicy::enablePublicSharing() const { return m_enablePublicSharing; }
void UserPolicy::setEnablePublicSharing(bool newEnablePublicSharing) {
	m_enablePublicSharing = newEnablePublicSharing;
	emit enablePublicSharingChanged(newEnablePublicSharing);
}

QStringList UserPolicy::blockedMediaFolders() const { return m_blockedMediaFolders; }
void UserPolicy::setBlockedMediaFolders(QStringList newBlockedMediaFolders) {
	m_blockedMediaFolders = newBlockedMediaFolders;
	emit blockedMediaFoldersChanged(newBlockedMediaFolders);
}

QStringList UserPolicy::blockedChannels() const { return m_blockedChannels; }
void UserPolicy::setBlockedChannels(QStringList newBlockedChannels) {
	m_blockedChannels = newBlockedChannels;
	emit blockedChannelsChanged(newBlockedChannels);
}

qint32 UserPolicy::remoteClientBitrateLimit() const { return m_remoteClientBitrateLimit; }
void UserPolicy::setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit) {
	m_remoteClientBitrateLimit = newRemoteClientBitrateLimit;
	emit remoteClientBitrateLimitChanged(newRemoteClientBitrateLimit);
}

QString UserPolicy::authenticationProviderId() const { return m_authenticationProviderId; }
void UserPolicy::setAuthenticationProviderId(QString newAuthenticationProviderId) {
	m_authenticationProviderId = newAuthenticationProviderId;
	emit authenticationProviderIdChanged(newAuthenticationProviderId);
}

QString UserPolicy::passwordResetProviderId() const { return m_passwordResetProviderId; }
void UserPolicy::setPasswordResetProviderId(QString newPasswordResetProviderId) {
	m_passwordResetProviderId = newPasswordResetProviderId;
	emit passwordResetProviderIdChanged(newPasswordResetProviderId);
}

SyncPlayUserAccessType UserPolicy::syncPlayAccess() const { return m_syncPlayAccess; }
void UserPolicy::setSyncPlayAccess(SyncPlayUserAccessType newSyncPlayAccess) {
	m_syncPlayAccess = newSyncPlayAccess;
	emit syncPlayAccessChanged(newSyncPlayAccess);
}


} // NS Jellyfin
} // NS DTO

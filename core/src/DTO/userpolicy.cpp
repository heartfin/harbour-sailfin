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

namespace Jellyfin {
namespace DTO {

UserPolicy::UserPolicy(QObject *parent) {}

UserPolicy UserPolicy::fromJson(QJsonObject source) {UserPolicy instance;
	instance->setFromJson(source, false);
	return instance;
}


void UserPolicy::setFromJson(QJsonObject source) {
	m_isAdministrator = fromJsonValue<bool>(source["IsAdministrator"]);
	m_isHidden = fromJsonValue<bool>(source["IsHidden"]);
	m_isDisabled = fromJsonValue<bool>(source["IsDisabled"]);
	m_maxParentalRating = fromJsonValue<qint32>(source["MaxParentalRating"]);
	m_blockedTags = fromJsonValue<QStringList>(source["BlockedTags"]);
	m_enableUserPreferenceAccess = fromJsonValue<bool>(source["EnableUserPreferenceAccess"]);
	m_accessSchedules = fromJsonValue<QList<QSharedPointer<AccessSchedule>>>(source["AccessSchedules"]);
	m_blockUnratedItems = fromJsonValue<QList<UnratedItem>>(source["BlockUnratedItems"]);
	m_enableRemoteControlOfOtherUsers = fromJsonValue<bool>(source["EnableRemoteControlOfOtherUsers"]);
	m_enableSharedDeviceControl = fromJsonValue<bool>(source["EnableSharedDeviceControl"]);
	m_enableRemoteAccess = fromJsonValue<bool>(source["EnableRemoteAccess"]);
	m_enableLiveTvManagement = fromJsonValue<bool>(source["EnableLiveTvManagement"]);
	m_enableLiveTvAccess = fromJsonValue<bool>(source["EnableLiveTvAccess"]);
	m_enableMediaPlayback = fromJsonValue<bool>(source["EnableMediaPlayback"]);
	m_enableAudioPlaybackTranscoding = fromJsonValue<bool>(source["EnableAudioPlaybackTranscoding"]);
	m_enableVideoPlaybackTranscoding = fromJsonValue<bool>(source["EnableVideoPlaybackTranscoding"]);
	m_enablePlaybackRemuxing = fromJsonValue<bool>(source["EnablePlaybackRemuxing"]);
	m_forceRemoteSourceTranscoding = fromJsonValue<bool>(source["ForceRemoteSourceTranscoding"]);
	m_enableContentDeletion = fromJsonValue<bool>(source["EnableContentDeletion"]);
	m_enableContentDeletionFromFolders = fromJsonValue<QStringList>(source["EnableContentDeletionFromFolders"]);
	m_enableContentDownloading = fromJsonValue<bool>(source["EnableContentDownloading"]);
	m_enableSyncTranscoding = fromJsonValue<bool>(source["EnableSyncTranscoding"]);
	m_enableMediaConversion = fromJsonValue<bool>(source["EnableMediaConversion"]);
	m_enabledDevices = fromJsonValue<QStringList>(source["EnabledDevices"]);
	m_enableAllDevices = fromJsonValue<bool>(source["EnableAllDevices"]);
	m_enabledChannels = fromJsonValue<QList<QUuid>>(source["EnabledChannels"]);
	m_enableAllChannels = fromJsonValue<bool>(source["EnableAllChannels"]);
	m_enabledFolders = fromJsonValue<QList<QUuid>>(source["EnabledFolders"]);
	m_enableAllFolders = fromJsonValue<bool>(source["EnableAllFolders"]);
	m_invalidLoginAttemptCount = fromJsonValue<qint32>(source["InvalidLoginAttemptCount"]);
	m_loginAttemptsBeforeLockout = fromJsonValue<qint32>(source["LoginAttemptsBeforeLockout"]);
	m_maxActiveSessions = fromJsonValue<qint32>(source["MaxActiveSessions"]);
	m_enablePublicSharing = fromJsonValue<bool>(source["EnablePublicSharing"]);
	m_blockedMediaFolders = fromJsonValue<QList<QUuid>>(source["BlockedMediaFolders"]);
	m_blockedChannels = fromJsonValue<QList<QUuid>>(source["BlockedChannels"]);
	m_remoteClientBitrateLimit = fromJsonValue<qint32>(source["RemoteClientBitrateLimit"]);
	m_authenticationProviderId = fromJsonValue<QString>(source["AuthenticationProviderId"]);
	m_passwordResetProviderId = fromJsonValue<QString>(source["PasswordResetProviderId"]);
	m_syncPlayAccess = fromJsonValue<SyncPlayUserAccessType>(source["SyncPlayAccess"]);

}
	
QJsonObject UserPolicy::toJson() {
	QJsonObject result;
	result["IsAdministrator"] = toJsonValue<bool>(m_isAdministrator);
	result["IsHidden"] = toJsonValue<bool>(m_isHidden);
	result["IsDisabled"] = toJsonValue<bool>(m_isDisabled);
	result["MaxParentalRating"] = toJsonValue<qint32>(m_maxParentalRating);
	result["BlockedTags"] = toJsonValue<QStringList>(m_blockedTags);
	result["EnableUserPreferenceAccess"] = toJsonValue<bool>(m_enableUserPreferenceAccess);
	result["AccessSchedules"] = toJsonValue<QList<QSharedPointer<AccessSchedule>>>(m_accessSchedules);
	result["BlockUnratedItems"] = toJsonValue<QList<UnratedItem>>(m_blockUnratedItems);
	result["EnableRemoteControlOfOtherUsers"] = toJsonValue<bool>(m_enableRemoteControlOfOtherUsers);
	result["EnableSharedDeviceControl"] = toJsonValue<bool>(m_enableSharedDeviceControl);
	result["EnableRemoteAccess"] = toJsonValue<bool>(m_enableRemoteAccess);
	result["EnableLiveTvManagement"] = toJsonValue<bool>(m_enableLiveTvManagement);
	result["EnableLiveTvAccess"] = toJsonValue<bool>(m_enableLiveTvAccess);
	result["EnableMediaPlayback"] = toJsonValue<bool>(m_enableMediaPlayback);
	result["EnableAudioPlaybackTranscoding"] = toJsonValue<bool>(m_enableAudioPlaybackTranscoding);
	result["EnableVideoPlaybackTranscoding"] = toJsonValue<bool>(m_enableVideoPlaybackTranscoding);
	result["EnablePlaybackRemuxing"] = toJsonValue<bool>(m_enablePlaybackRemuxing);
	result["ForceRemoteSourceTranscoding"] = toJsonValue<bool>(m_forceRemoteSourceTranscoding);
	result["EnableContentDeletion"] = toJsonValue<bool>(m_enableContentDeletion);
	result["EnableContentDeletionFromFolders"] = toJsonValue<QStringList>(m_enableContentDeletionFromFolders);
	result["EnableContentDownloading"] = toJsonValue<bool>(m_enableContentDownloading);
	result["EnableSyncTranscoding"] = toJsonValue<bool>(m_enableSyncTranscoding);
	result["EnableMediaConversion"] = toJsonValue<bool>(m_enableMediaConversion);
	result["EnabledDevices"] = toJsonValue<QStringList>(m_enabledDevices);
	result["EnableAllDevices"] = toJsonValue<bool>(m_enableAllDevices);
	result["EnabledChannels"] = toJsonValue<QList<QUuid>>(m_enabledChannels);
	result["EnableAllChannels"] = toJsonValue<bool>(m_enableAllChannels);
	result["EnabledFolders"] = toJsonValue<QList<QUuid>>(m_enabledFolders);
	result["EnableAllFolders"] = toJsonValue<bool>(m_enableAllFolders);
	result["InvalidLoginAttemptCount"] = toJsonValue<qint32>(m_invalidLoginAttemptCount);
	result["LoginAttemptsBeforeLockout"] = toJsonValue<qint32>(m_loginAttemptsBeforeLockout);
	result["MaxActiveSessions"] = toJsonValue<qint32>(m_maxActiveSessions);
	result["EnablePublicSharing"] = toJsonValue<bool>(m_enablePublicSharing);
	result["BlockedMediaFolders"] = toJsonValue<QList<QUuid>>(m_blockedMediaFolders);
	result["BlockedChannels"] = toJsonValue<QList<QUuid>>(m_blockedChannels);
	result["RemoteClientBitrateLimit"] = toJsonValue<qint32>(m_remoteClientBitrateLimit);
	result["AuthenticationProviderId"] = toJsonValue<QString>(m_authenticationProviderId);
	result["PasswordResetProviderId"] = toJsonValue<QString>(m_passwordResetProviderId);
	result["SyncPlayAccess"] = toJsonValue<SyncPlayUserAccessType>(m_syncPlayAccess);

	return result;
}

bool UserPolicy::isAdministrator() const { return m_isAdministrator; }

void UserPolicy::setIsAdministrator(bool newIsAdministrator) {
	m_isAdministrator = newIsAdministrator;
}
bool UserPolicy::isHidden() const { return m_isHidden; }

void UserPolicy::setIsHidden(bool newIsHidden) {
	m_isHidden = newIsHidden;
}
bool UserPolicy::isDisabled() const { return m_isDisabled; }

void UserPolicy::setIsDisabled(bool newIsDisabled) {
	m_isDisabled = newIsDisabled;
}
qint32 UserPolicy::maxParentalRating() const { return m_maxParentalRating; }

void UserPolicy::setMaxParentalRating(qint32 newMaxParentalRating) {
	m_maxParentalRating = newMaxParentalRating;
}
QStringList UserPolicy::blockedTags() const { return m_blockedTags; }

void UserPolicy::setBlockedTags(QStringList newBlockedTags) {
	m_blockedTags = newBlockedTags;
}
bool UserPolicy::enableUserPreferenceAccess() const { return m_enableUserPreferenceAccess; }

void UserPolicy::setEnableUserPreferenceAccess(bool newEnableUserPreferenceAccess) {
	m_enableUserPreferenceAccess = newEnableUserPreferenceAccess;
}
QList<QSharedPointer<AccessSchedule>> UserPolicy::accessSchedules() const { return m_accessSchedules; }

void UserPolicy::setAccessSchedules(QList<QSharedPointer<AccessSchedule>> newAccessSchedules) {
	m_accessSchedules = newAccessSchedules;
}
QList<UnratedItem> UserPolicy::blockUnratedItems() const { return m_blockUnratedItems; }

void UserPolicy::setBlockUnratedItems(QList<UnratedItem> newBlockUnratedItems) {
	m_blockUnratedItems = newBlockUnratedItems;
}
bool UserPolicy::enableRemoteControlOfOtherUsers() const { return m_enableRemoteControlOfOtherUsers; }

void UserPolicy::setEnableRemoteControlOfOtherUsers(bool newEnableRemoteControlOfOtherUsers) {
	m_enableRemoteControlOfOtherUsers = newEnableRemoteControlOfOtherUsers;
}
bool UserPolicy::enableSharedDeviceControl() const { return m_enableSharedDeviceControl; }

void UserPolicy::setEnableSharedDeviceControl(bool newEnableSharedDeviceControl) {
	m_enableSharedDeviceControl = newEnableSharedDeviceControl;
}
bool UserPolicy::enableRemoteAccess() const { return m_enableRemoteAccess; }

void UserPolicy::setEnableRemoteAccess(bool newEnableRemoteAccess) {
	m_enableRemoteAccess = newEnableRemoteAccess;
}
bool UserPolicy::enableLiveTvManagement() const { return m_enableLiveTvManagement; }

void UserPolicy::setEnableLiveTvManagement(bool newEnableLiveTvManagement) {
	m_enableLiveTvManagement = newEnableLiveTvManagement;
}
bool UserPolicy::enableLiveTvAccess() const { return m_enableLiveTvAccess; }

void UserPolicy::setEnableLiveTvAccess(bool newEnableLiveTvAccess) {
	m_enableLiveTvAccess = newEnableLiveTvAccess;
}
bool UserPolicy::enableMediaPlayback() const { return m_enableMediaPlayback; }

void UserPolicy::setEnableMediaPlayback(bool newEnableMediaPlayback) {
	m_enableMediaPlayback = newEnableMediaPlayback;
}
bool UserPolicy::enableAudioPlaybackTranscoding() const { return m_enableAudioPlaybackTranscoding; }

void UserPolicy::setEnableAudioPlaybackTranscoding(bool newEnableAudioPlaybackTranscoding) {
	m_enableAudioPlaybackTranscoding = newEnableAudioPlaybackTranscoding;
}
bool UserPolicy::enableVideoPlaybackTranscoding() const { return m_enableVideoPlaybackTranscoding; }

void UserPolicy::setEnableVideoPlaybackTranscoding(bool newEnableVideoPlaybackTranscoding) {
	m_enableVideoPlaybackTranscoding = newEnableVideoPlaybackTranscoding;
}
bool UserPolicy::enablePlaybackRemuxing() const { return m_enablePlaybackRemuxing; }

void UserPolicy::setEnablePlaybackRemuxing(bool newEnablePlaybackRemuxing) {
	m_enablePlaybackRemuxing = newEnablePlaybackRemuxing;
}
bool UserPolicy::forceRemoteSourceTranscoding() const { return m_forceRemoteSourceTranscoding; }

void UserPolicy::setForceRemoteSourceTranscoding(bool newForceRemoteSourceTranscoding) {
	m_forceRemoteSourceTranscoding = newForceRemoteSourceTranscoding;
}
bool UserPolicy::enableContentDeletion() const { return m_enableContentDeletion; }

void UserPolicy::setEnableContentDeletion(bool newEnableContentDeletion) {
	m_enableContentDeletion = newEnableContentDeletion;
}
QStringList UserPolicy::enableContentDeletionFromFolders() const { return m_enableContentDeletionFromFolders; }

void UserPolicy::setEnableContentDeletionFromFolders(QStringList newEnableContentDeletionFromFolders) {
	m_enableContentDeletionFromFolders = newEnableContentDeletionFromFolders;
}
bool UserPolicy::enableContentDownloading() const { return m_enableContentDownloading; }

void UserPolicy::setEnableContentDownloading(bool newEnableContentDownloading) {
	m_enableContentDownloading = newEnableContentDownloading;
}
bool UserPolicy::enableSyncTranscoding() const { return m_enableSyncTranscoding; }

void UserPolicy::setEnableSyncTranscoding(bool newEnableSyncTranscoding) {
	m_enableSyncTranscoding = newEnableSyncTranscoding;
}
bool UserPolicy::enableMediaConversion() const { return m_enableMediaConversion; }

void UserPolicy::setEnableMediaConversion(bool newEnableMediaConversion) {
	m_enableMediaConversion = newEnableMediaConversion;
}
QStringList UserPolicy::enabledDevices() const { return m_enabledDevices; }

void UserPolicy::setEnabledDevices(QStringList newEnabledDevices) {
	m_enabledDevices = newEnabledDevices;
}
bool UserPolicy::enableAllDevices() const { return m_enableAllDevices; }

void UserPolicy::setEnableAllDevices(bool newEnableAllDevices) {
	m_enableAllDevices = newEnableAllDevices;
}
QList<QUuid> UserPolicy::enabledChannels() const { return m_enabledChannels; }

void UserPolicy::setEnabledChannels(QList<QUuid> newEnabledChannels) {
	m_enabledChannels = newEnabledChannels;
}
bool UserPolicy::enableAllChannels() const { return m_enableAllChannels; }

void UserPolicy::setEnableAllChannels(bool newEnableAllChannels) {
	m_enableAllChannels = newEnableAllChannels;
}
QList<QUuid> UserPolicy::enabledFolders() const { return m_enabledFolders; }

void UserPolicy::setEnabledFolders(QList<QUuid> newEnabledFolders) {
	m_enabledFolders = newEnabledFolders;
}
bool UserPolicy::enableAllFolders() const { return m_enableAllFolders; }

void UserPolicy::setEnableAllFolders(bool newEnableAllFolders) {
	m_enableAllFolders = newEnableAllFolders;
}
qint32 UserPolicy::invalidLoginAttemptCount() const { return m_invalidLoginAttemptCount; }

void UserPolicy::setInvalidLoginAttemptCount(qint32 newInvalidLoginAttemptCount) {
	m_invalidLoginAttemptCount = newInvalidLoginAttemptCount;
}
qint32 UserPolicy::loginAttemptsBeforeLockout() const { return m_loginAttemptsBeforeLockout; }

void UserPolicy::setLoginAttemptsBeforeLockout(qint32 newLoginAttemptsBeforeLockout) {
	m_loginAttemptsBeforeLockout = newLoginAttemptsBeforeLockout;
}
qint32 UserPolicy::maxActiveSessions() const { return m_maxActiveSessions; }

void UserPolicy::setMaxActiveSessions(qint32 newMaxActiveSessions) {
	m_maxActiveSessions = newMaxActiveSessions;
}
bool UserPolicy::enablePublicSharing() const { return m_enablePublicSharing; }

void UserPolicy::setEnablePublicSharing(bool newEnablePublicSharing) {
	m_enablePublicSharing = newEnablePublicSharing;
}
QList<QUuid> UserPolicy::blockedMediaFolders() const { return m_blockedMediaFolders; }

void UserPolicy::setBlockedMediaFolders(QList<QUuid> newBlockedMediaFolders) {
	m_blockedMediaFolders = newBlockedMediaFolders;
}
QList<QUuid> UserPolicy::blockedChannels() const { return m_blockedChannels; }

void UserPolicy::setBlockedChannels(QList<QUuid> newBlockedChannels) {
	m_blockedChannels = newBlockedChannels;
}
qint32 UserPolicy::remoteClientBitrateLimit() const { return m_remoteClientBitrateLimit; }

void UserPolicy::setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit) {
	m_remoteClientBitrateLimit = newRemoteClientBitrateLimit;
}
QString UserPolicy::authenticationProviderId() const { return m_authenticationProviderId; }

void UserPolicy::setAuthenticationProviderId(QString newAuthenticationProviderId) {
	m_authenticationProviderId = newAuthenticationProviderId;
}
QString UserPolicy::passwordResetProviderId() const { return m_passwordResetProviderId; }

void UserPolicy::setPasswordResetProviderId(QString newPasswordResetProviderId) {
	m_passwordResetProviderId = newPasswordResetProviderId;
}
SyncPlayUserAccessType UserPolicy::syncPlayAccess() const { return m_syncPlayAccess; }

void UserPolicy::setSyncPlayAccess(SyncPlayUserAccessType newSyncPlayAccess) {
	m_syncPlayAccess = newSyncPlayAccess;
}


} // NS Jellyfin
} // NS DTO

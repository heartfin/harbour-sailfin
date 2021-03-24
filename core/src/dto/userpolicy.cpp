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

#include <JellyfinQt/dto/userpolicy.h>

namespace Jellyfin {
namespace DTO {

UserPolicy::UserPolicy() {}

UserPolicy::UserPolicy(const UserPolicy &other) :

	m_isAdministrator(other.m_isAdministrator),
	m_isHidden(other.m_isHidden),
	m_isDisabled(other.m_isDisabled),
	m_maxParentalRating(other.m_maxParentalRating),
	m_blockedTags(other.m_blockedTags),
	m_enableUserPreferenceAccess(other.m_enableUserPreferenceAccess),
	m_accessSchedules(other.m_accessSchedules),
	m_blockUnratedItems(other.m_blockUnratedItems),
	m_enableRemoteControlOfOtherUsers(other.m_enableRemoteControlOfOtherUsers),
	m_enableSharedDeviceControl(other.m_enableSharedDeviceControl),
	m_enableRemoteAccess(other.m_enableRemoteAccess),
	m_enableLiveTvManagement(other.m_enableLiveTvManagement),
	m_enableLiveTvAccess(other.m_enableLiveTvAccess),
	m_enableMediaPlayback(other.m_enableMediaPlayback),
	m_enableAudioPlaybackTranscoding(other.m_enableAudioPlaybackTranscoding),
	m_enableVideoPlaybackTranscoding(other.m_enableVideoPlaybackTranscoding),
	m_enablePlaybackRemuxing(other.m_enablePlaybackRemuxing),
	m_forceRemoteSourceTranscoding(other.m_forceRemoteSourceTranscoding),
	m_enableContentDeletion(other.m_enableContentDeletion),
	m_enableContentDeletionFromFolders(other.m_enableContentDeletionFromFolders),
	m_enableContentDownloading(other.m_enableContentDownloading),
	m_enableSyncTranscoding(other.m_enableSyncTranscoding),
	m_enableMediaConversion(other.m_enableMediaConversion),
	m_enabledDevices(other.m_enabledDevices),
	m_enableAllDevices(other.m_enableAllDevices),
	m_enabledChannels(other.m_enabledChannels),
	m_enableAllChannels(other.m_enableAllChannels),
	m_enabledFolders(other.m_enabledFolders),
	m_enableAllFolders(other.m_enableAllFolders),
	m_invalidLoginAttemptCount(other.m_invalidLoginAttemptCount),
	m_loginAttemptsBeforeLockout(other.m_loginAttemptsBeforeLockout),
	m_maxActiveSessions(other.m_maxActiveSessions),
	m_enablePublicSharing(other.m_enablePublicSharing),
	m_blockedMediaFolders(other.m_blockedMediaFolders),
	m_blockedChannels(other.m_blockedChannels),
	m_remoteClientBitrateLimit(other.m_remoteClientBitrateLimit),
	m_authenticationProviderId(other.m_authenticationProviderId),
	m_passwordResetProviderId(other.m_passwordResetProviderId),
	m_syncPlayAccess(other.m_syncPlayAccess){}


void UserPolicy::replaceData(UserPolicy &other) {
	m_isAdministrator = other.m_isAdministrator;
	m_isHidden = other.m_isHidden;
	m_isDisabled = other.m_isDisabled;
	m_maxParentalRating = other.m_maxParentalRating;
	m_blockedTags = other.m_blockedTags;
	m_enableUserPreferenceAccess = other.m_enableUserPreferenceAccess;
	m_accessSchedules = other.m_accessSchedules;
	m_blockUnratedItems = other.m_blockUnratedItems;
	m_enableRemoteControlOfOtherUsers = other.m_enableRemoteControlOfOtherUsers;
	m_enableSharedDeviceControl = other.m_enableSharedDeviceControl;
	m_enableRemoteAccess = other.m_enableRemoteAccess;
	m_enableLiveTvManagement = other.m_enableLiveTvManagement;
	m_enableLiveTvAccess = other.m_enableLiveTvAccess;
	m_enableMediaPlayback = other.m_enableMediaPlayback;
	m_enableAudioPlaybackTranscoding = other.m_enableAudioPlaybackTranscoding;
	m_enableVideoPlaybackTranscoding = other.m_enableVideoPlaybackTranscoding;
	m_enablePlaybackRemuxing = other.m_enablePlaybackRemuxing;
	m_forceRemoteSourceTranscoding = other.m_forceRemoteSourceTranscoding;
	m_enableContentDeletion = other.m_enableContentDeletion;
	m_enableContentDeletionFromFolders = other.m_enableContentDeletionFromFolders;
	m_enableContentDownloading = other.m_enableContentDownloading;
	m_enableSyncTranscoding = other.m_enableSyncTranscoding;
	m_enableMediaConversion = other.m_enableMediaConversion;
	m_enabledDevices = other.m_enabledDevices;
	m_enableAllDevices = other.m_enableAllDevices;
	m_enabledChannels = other.m_enabledChannels;
	m_enableAllChannels = other.m_enableAllChannels;
	m_enabledFolders = other.m_enabledFolders;
	m_enableAllFolders = other.m_enableAllFolders;
	m_invalidLoginAttemptCount = other.m_invalidLoginAttemptCount;
	m_loginAttemptsBeforeLockout = other.m_loginAttemptsBeforeLockout;
	m_maxActiveSessions = other.m_maxActiveSessions;
	m_enablePublicSharing = other.m_enablePublicSharing;
	m_blockedMediaFolders = other.m_blockedMediaFolders;
	m_blockedChannels = other.m_blockedChannels;
	m_remoteClientBitrateLimit = other.m_remoteClientBitrateLimit;
	m_authenticationProviderId = other.m_authenticationProviderId;
	m_passwordResetProviderId = other.m_passwordResetProviderId;
	m_syncPlayAccess = other.m_syncPlayAccess;
}

UserPolicy UserPolicy::fromJson(QJsonObject source) {
	UserPolicy instance;
	instance.setFromJson(source);
	return instance;
}


void UserPolicy::setFromJson(QJsonObject source) {
	m_isAdministrator = Jellyfin::Support::fromJsonValue<bool>(source["IsAdministrator"]);
	m_isHidden = Jellyfin::Support::fromJsonValue<bool>(source["IsHidden"]);
	m_isDisabled = Jellyfin::Support::fromJsonValue<bool>(source["IsDisabled"]);
	m_maxParentalRating = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MaxParentalRating"]);
	m_blockedTags = Jellyfin::Support::fromJsonValue<QStringList>(source["BlockedTags"]);
	m_enableUserPreferenceAccess = Jellyfin::Support::fromJsonValue<bool>(source["EnableUserPreferenceAccess"]);
	m_accessSchedules = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<AccessSchedule>>>(source["AccessSchedules"]);
	m_blockUnratedItems = Jellyfin::Support::fromJsonValue<QList<UnratedItem>>(source["BlockUnratedItems"]);
	m_enableRemoteControlOfOtherUsers = Jellyfin::Support::fromJsonValue<bool>(source["EnableRemoteControlOfOtherUsers"]);
	m_enableSharedDeviceControl = Jellyfin::Support::fromJsonValue<bool>(source["EnableSharedDeviceControl"]);
	m_enableRemoteAccess = Jellyfin::Support::fromJsonValue<bool>(source["EnableRemoteAccess"]);
	m_enableLiveTvManagement = Jellyfin::Support::fromJsonValue<bool>(source["EnableLiveTvManagement"]);
	m_enableLiveTvAccess = Jellyfin::Support::fromJsonValue<bool>(source["EnableLiveTvAccess"]);
	m_enableMediaPlayback = Jellyfin::Support::fromJsonValue<bool>(source["EnableMediaPlayback"]);
	m_enableAudioPlaybackTranscoding = Jellyfin::Support::fromJsonValue<bool>(source["EnableAudioPlaybackTranscoding"]);
	m_enableVideoPlaybackTranscoding = Jellyfin::Support::fromJsonValue<bool>(source["EnableVideoPlaybackTranscoding"]);
	m_enablePlaybackRemuxing = Jellyfin::Support::fromJsonValue<bool>(source["EnablePlaybackRemuxing"]);
	m_forceRemoteSourceTranscoding = Jellyfin::Support::fromJsonValue<bool>(source["ForceRemoteSourceTranscoding"]);
	m_enableContentDeletion = Jellyfin::Support::fromJsonValue<bool>(source["EnableContentDeletion"]);
	m_enableContentDeletionFromFolders = Jellyfin::Support::fromJsonValue<QStringList>(source["EnableContentDeletionFromFolders"]);
	m_enableContentDownloading = Jellyfin::Support::fromJsonValue<bool>(source["EnableContentDownloading"]);
	m_enableSyncTranscoding = Jellyfin::Support::fromJsonValue<bool>(source["EnableSyncTranscoding"]);
	m_enableMediaConversion = Jellyfin::Support::fromJsonValue<bool>(source["EnableMediaConversion"]);
	m_enabledDevices = Jellyfin::Support::fromJsonValue<QStringList>(source["EnabledDevices"]);
	m_enableAllDevices = Jellyfin::Support::fromJsonValue<bool>(source["EnableAllDevices"]);
	m_enabledChannels = Jellyfin::Support::fromJsonValue<QStringList>(source["EnabledChannels"]);
	m_enableAllChannels = Jellyfin::Support::fromJsonValue<bool>(source["EnableAllChannels"]);
	m_enabledFolders = Jellyfin::Support::fromJsonValue<QStringList>(source["EnabledFolders"]);
	m_enableAllFolders = Jellyfin::Support::fromJsonValue<bool>(source["EnableAllFolders"]);
	m_invalidLoginAttemptCount = Jellyfin::Support::fromJsonValue<qint32>(source["InvalidLoginAttemptCount"]);
	m_loginAttemptsBeforeLockout = Jellyfin::Support::fromJsonValue<qint32>(source["LoginAttemptsBeforeLockout"]);
	m_maxActiveSessions = Jellyfin::Support::fromJsonValue<qint32>(source["MaxActiveSessions"]);
	m_enablePublicSharing = Jellyfin::Support::fromJsonValue<bool>(source["EnablePublicSharing"]);
	m_blockedMediaFolders = Jellyfin::Support::fromJsonValue<QStringList>(source["BlockedMediaFolders"]);
	m_blockedChannels = Jellyfin::Support::fromJsonValue<QStringList>(source["BlockedChannels"]);
	m_remoteClientBitrateLimit = Jellyfin::Support::fromJsonValue<qint32>(source["RemoteClientBitrateLimit"]);
	m_authenticationProviderId = Jellyfin::Support::fromJsonValue<QString>(source["AuthenticationProviderId"]);
	m_passwordResetProviderId = Jellyfin::Support::fromJsonValue<QString>(source["PasswordResetProviderId"]);
	m_syncPlayAccess = Jellyfin::Support::fromJsonValue<SyncPlayUserAccessType>(source["SyncPlayAccess"]);

}
	
QJsonObject UserPolicy::toJson() {
	QJsonObject result;
	result["IsAdministrator"] = Jellyfin::Support::toJsonValue<bool>(m_isAdministrator);
	result["IsHidden"] = Jellyfin::Support::toJsonValue<bool>(m_isHidden);
	result["IsDisabled"] = Jellyfin::Support::toJsonValue<bool>(m_isDisabled);
	result["MaxParentalRating"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_maxParentalRating);
	result["BlockedTags"] = Jellyfin::Support::toJsonValue<QStringList>(m_blockedTags);
	result["EnableUserPreferenceAccess"] = Jellyfin::Support::toJsonValue<bool>(m_enableUserPreferenceAccess);
	result["AccessSchedules"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<AccessSchedule>>>(m_accessSchedules);
	result["BlockUnratedItems"] = Jellyfin::Support::toJsonValue<QList<UnratedItem>>(m_blockUnratedItems);
	result["EnableRemoteControlOfOtherUsers"] = Jellyfin::Support::toJsonValue<bool>(m_enableRemoteControlOfOtherUsers);
	result["EnableSharedDeviceControl"] = Jellyfin::Support::toJsonValue<bool>(m_enableSharedDeviceControl);
	result["EnableRemoteAccess"] = Jellyfin::Support::toJsonValue<bool>(m_enableRemoteAccess);
	result["EnableLiveTvManagement"] = Jellyfin::Support::toJsonValue<bool>(m_enableLiveTvManagement);
	result["EnableLiveTvAccess"] = Jellyfin::Support::toJsonValue<bool>(m_enableLiveTvAccess);
	result["EnableMediaPlayback"] = Jellyfin::Support::toJsonValue<bool>(m_enableMediaPlayback);
	result["EnableAudioPlaybackTranscoding"] = Jellyfin::Support::toJsonValue<bool>(m_enableAudioPlaybackTranscoding);
	result["EnableVideoPlaybackTranscoding"] = Jellyfin::Support::toJsonValue<bool>(m_enableVideoPlaybackTranscoding);
	result["EnablePlaybackRemuxing"] = Jellyfin::Support::toJsonValue<bool>(m_enablePlaybackRemuxing);
	result["ForceRemoteSourceTranscoding"] = Jellyfin::Support::toJsonValue<bool>(m_forceRemoteSourceTranscoding);
	result["EnableContentDeletion"] = Jellyfin::Support::toJsonValue<bool>(m_enableContentDeletion);
	result["EnableContentDeletionFromFolders"] = Jellyfin::Support::toJsonValue<QStringList>(m_enableContentDeletionFromFolders);
	result["EnableContentDownloading"] = Jellyfin::Support::toJsonValue<bool>(m_enableContentDownloading);
	result["EnableSyncTranscoding"] = Jellyfin::Support::toJsonValue<bool>(m_enableSyncTranscoding);
	result["EnableMediaConversion"] = Jellyfin::Support::toJsonValue<bool>(m_enableMediaConversion);
	result["EnabledDevices"] = Jellyfin::Support::toJsonValue<QStringList>(m_enabledDevices);
	result["EnableAllDevices"] = Jellyfin::Support::toJsonValue<bool>(m_enableAllDevices);
	result["EnabledChannels"] = Jellyfin::Support::toJsonValue<QStringList>(m_enabledChannels);
	result["EnableAllChannels"] = Jellyfin::Support::toJsonValue<bool>(m_enableAllChannels);
	result["EnabledFolders"] = Jellyfin::Support::toJsonValue<QStringList>(m_enabledFolders);
	result["EnableAllFolders"] = Jellyfin::Support::toJsonValue<bool>(m_enableAllFolders);
	result["InvalidLoginAttemptCount"] = Jellyfin::Support::toJsonValue<qint32>(m_invalidLoginAttemptCount);
	result["LoginAttemptsBeforeLockout"] = Jellyfin::Support::toJsonValue<qint32>(m_loginAttemptsBeforeLockout);
	result["MaxActiveSessions"] = Jellyfin::Support::toJsonValue<qint32>(m_maxActiveSessions);
	result["EnablePublicSharing"] = Jellyfin::Support::toJsonValue<bool>(m_enablePublicSharing);
	result["BlockedMediaFolders"] = Jellyfin::Support::toJsonValue<QStringList>(m_blockedMediaFolders);
	result["BlockedChannels"] = Jellyfin::Support::toJsonValue<QStringList>(m_blockedChannels);
	result["RemoteClientBitrateLimit"] = Jellyfin::Support::toJsonValue<qint32>(m_remoteClientBitrateLimit);
	result["AuthenticationProviderId"] = Jellyfin::Support::toJsonValue<QString>(m_authenticationProviderId);
	result["PasswordResetProviderId"] = Jellyfin::Support::toJsonValue<QString>(m_passwordResetProviderId);
	result["SyncPlayAccess"] = Jellyfin::Support::toJsonValue<SyncPlayUserAccessType>(m_syncPlayAccess);

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

std::optional<qint32> UserPolicy::maxParentalRating() const { return m_maxParentalRating; }

void UserPolicy::setMaxParentalRating(std::optional<qint32> newMaxParentalRating) {
	m_maxParentalRating = newMaxParentalRating;
}
bool UserPolicy::maxParentalRatingNull() const {
	return !m_maxParentalRating.has_value();
}

void UserPolicy::setMaxParentalRatingNull() {
	m_maxParentalRating = std::nullopt;

}
QStringList UserPolicy::blockedTags() const { return m_blockedTags; }

void UserPolicy::setBlockedTags(QStringList newBlockedTags) {
	m_blockedTags = newBlockedTags;
}
bool UserPolicy::blockedTagsNull() const {
	return m_blockedTags.size() == 0;
}

void UserPolicy::setBlockedTagsNull() {
	m_blockedTags.clear();

}
bool UserPolicy::enableUserPreferenceAccess() const { return m_enableUserPreferenceAccess; }

void UserPolicy::setEnableUserPreferenceAccess(bool newEnableUserPreferenceAccess) {
	m_enableUserPreferenceAccess = newEnableUserPreferenceAccess;
}

QList<QSharedPointer<AccessSchedule>> UserPolicy::accessSchedules() const { return m_accessSchedules; }

void UserPolicy::setAccessSchedules(QList<QSharedPointer<AccessSchedule>> newAccessSchedules) {
	m_accessSchedules = newAccessSchedules;
}
bool UserPolicy::accessSchedulesNull() const {
	return m_accessSchedules.size() == 0;
}

void UserPolicy::setAccessSchedulesNull() {
	m_accessSchedules.clear();

}
QList<UnratedItem> UserPolicy::blockUnratedItems() const { return m_blockUnratedItems; }

void UserPolicy::setBlockUnratedItems(QList<UnratedItem> newBlockUnratedItems) {
	m_blockUnratedItems = newBlockUnratedItems;
}
bool UserPolicy::blockUnratedItemsNull() const {
	return m_blockUnratedItems.size() == 0;
}

void UserPolicy::setBlockUnratedItemsNull() {
	m_blockUnratedItems.clear();

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
bool UserPolicy::enableContentDeletionFromFoldersNull() const {
	return m_enableContentDeletionFromFolders.size() == 0;
}

void UserPolicy::setEnableContentDeletionFromFoldersNull() {
	m_enableContentDeletionFromFolders.clear();

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
bool UserPolicy::enabledDevicesNull() const {
	return m_enabledDevices.size() == 0;
}

void UserPolicy::setEnabledDevicesNull() {
	m_enabledDevices.clear();

}
bool UserPolicy::enableAllDevices() const { return m_enableAllDevices; }

void UserPolicy::setEnableAllDevices(bool newEnableAllDevices) {
	m_enableAllDevices = newEnableAllDevices;
}

QStringList UserPolicy::enabledChannels() const { return m_enabledChannels; }

void UserPolicy::setEnabledChannels(QStringList newEnabledChannels) {
	m_enabledChannels = newEnabledChannels;
}
bool UserPolicy::enabledChannelsNull() const {
	return m_enabledChannels.size() == 0;
}

void UserPolicy::setEnabledChannelsNull() {
	m_enabledChannels.clear();

}
bool UserPolicy::enableAllChannels() const { return m_enableAllChannels; }

void UserPolicy::setEnableAllChannels(bool newEnableAllChannels) {
	m_enableAllChannels = newEnableAllChannels;
}

QStringList UserPolicy::enabledFolders() const { return m_enabledFolders; }

void UserPolicy::setEnabledFolders(QStringList newEnabledFolders) {
	m_enabledFolders = newEnabledFolders;
}
bool UserPolicy::enabledFoldersNull() const {
	return m_enabledFolders.size() == 0;
}

void UserPolicy::setEnabledFoldersNull() {
	m_enabledFolders.clear();

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

QStringList UserPolicy::blockedMediaFolders() const { return m_blockedMediaFolders; }

void UserPolicy::setBlockedMediaFolders(QStringList newBlockedMediaFolders) {
	m_blockedMediaFolders = newBlockedMediaFolders;
}
bool UserPolicy::blockedMediaFoldersNull() const {
	return m_blockedMediaFolders.size() == 0;
}

void UserPolicy::setBlockedMediaFoldersNull() {
	m_blockedMediaFolders.clear();

}
QStringList UserPolicy::blockedChannels() const { return m_blockedChannels; }

void UserPolicy::setBlockedChannels(QStringList newBlockedChannels) {
	m_blockedChannels = newBlockedChannels;
}
bool UserPolicy::blockedChannelsNull() const {
	return m_blockedChannels.size() == 0;
}

void UserPolicy::setBlockedChannelsNull() {
	m_blockedChannels.clear();

}
qint32 UserPolicy::remoteClientBitrateLimit() const { return m_remoteClientBitrateLimit; }

void UserPolicy::setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit) {
	m_remoteClientBitrateLimit = newRemoteClientBitrateLimit;
}

QString UserPolicy::authenticationProviderId() const { return m_authenticationProviderId; }

void UserPolicy::setAuthenticationProviderId(QString newAuthenticationProviderId) {
	m_authenticationProviderId = newAuthenticationProviderId;
}
bool UserPolicy::authenticationProviderIdNull() const {
	return m_authenticationProviderId.isNull();
}

void UserPolicy::setAuthenticationProviderIdNull() {
	m_authenticationProviderId.clear();

}
QString UserPolicy::passwordResetProviderId() const { return m_passwordResetProviderId; }

void UserPolicy::setPasswordResetProviderId(QString newPasswordResetProviderId) {
	m_passwordResetProviderId = newPasswordResetProviderId;
}
bool UserPolicy::passwordResetProviderIdNull() const {
	return m_passwordResetProviderId.isNull();
}

void UserPolicy::setPasswordResetProviderIdNull() {
	m_passwordResetProviderId.clear();

}
SyncPlayUserAccessType UserPolicy::syncPlayAccess() const { return m_syncPlayAccess; }

void UserPolicy::setSyncPlayAccess(SyncPlayUserAccessType newSyncPlayAccess) {
	m_syncPlayAccess = newSyncPlayAccess;
}


} // NS DTO

namespace Support {

using UserPolicy = Jellyfin::DTO::UserPolicy;

template <>
UserPolicy fromJsonValue<UserPolicy>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return UserPolicy::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

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

#include <JellyfinQt/dto/serverconfiguration.h>

namespace Jellyfin {
namespace DTO {

ServerConfiguration::ServerConfiguration() {}
ServerConfiguration::ServerConfiguration (
		qint32 logFileRetentionDays, 
		bool isStartupWizardCompleted, 
		bool enableMetrics, 
		bool enableNormalizedItemByNameIds, 
		bool isPortAuthorized, 
		bool quickConnectAvailable, 
		bool enableCaseSensitiveItemIds, 
		bool disableLiveTvChannelUserDataName, 
		QString metadataPath, 
		QString preferredMetadataLanguage, 
		QString metadataCountryCode, 
		QStringList sortReplaceCharacters, 
		QStringList sortRemoveCharacters, 
		QStringList sortRemoveWords, 
		qint32 minResumePct, 
		qint32 maxResumePct, 
		qint32 minResumeDurationSeconds, 
		qint32 minAudiobookResume, 
		qint32 maxAudiobookResume, 
		qint32 inactiveSessionThreshold, 
		qint32 libraryMonitorDelay, 
		qint32 libraryUpdateDuration, 
		ImageSavingConvention imageSavingConvention, 
		QList<MetadataOptions> metadataOptions, 
		bool skipDeserializationForBasicTypes, 
		QString serverName, 
		QString uICulture, 
		bool saveMetadataHidden, 
		QList<NameValuePair> contentTypes, 
		qint32 remoteClientBitrateLimit, 
		bool enableFolderView, 
		bool enableGroupingIntoCollections, 
		bool displaySpecialsWithinSeasons, 
		QStringList codecsUsed, 
		QList<RepositoryInfo> pluginRepositories, 
		bool enableExternalContentInSuggestions, 
		qint32 imageExtractionTimeoutMs, 
		QList<PathSubstitution> pathSubstitutions, 
		bool enableSlowResponseWarning, 
		qint64 slowResponseThresholdMs, 
		QStringList corsHosts, 
		qint32 libraryScanFanoutConcurrency, 
		qint32 libraryMetadataRefreshConcurrency, 
		bool removeOldPlugins, 
		bool allowClientLogUpload, 
		qint32 dummyChapterDuration, 
		ImageResolution chapterImageResolution, 
		qint32 parallelImageEncodingLimit, 
		QList<CastReceiverApplication> castReceiverApplications, 
		QSharedPointer<TrickplayOptions> trickplayOptions 
		) :
	m_logFileRetentionDays(logFileRetentionDays),
	m_isStartupWizardCompleted(isStartupWizardCompleted),
	m_enableMetrics(enableMetrics),
	m_enableNormalizedItemByNameIds(enableNormalizedItemByNameIds),
	m_isPortAuthorized(isPortAuthorized),
	m_quickConnectAvailable(quickConnectAvailable),
	m_enableCaseSensitiveItemIds(enableCaseSensitiveItemIds),
	m_disableLiveTvChannelUserDataName(disableLiveTvChannelUserDataName),
	m_metadataPath(metadataPath),
	m_preferredMetadataLanguage(preferredMetadataLanguage),
	m_metadataCountryCode(metadataCountryCode),
	m_sortReplaceCharacters(sortReplaceCharacters),
	m_sortRemoveCharacters(sortRemoveCharacters),
	m_sortRemoveWords(sortRemoveWords),
	m_minResumePct(minResumePct),
	m_maxResumePct(maxResumePct),
	m_minResumeDurationSeconds(minResumeDurationSeconds),
	m_minAudiobookResume(minAudiobookResume),
	m_maxAudiobookResume(maxAudiobookResume),
	m_inactiveSessionThreshold(inactiveSessionThreshold),
	m_libraryMonitorDelay(libraryMonitorDelay),
	m_libraryUpdateDuration(libraryUpdateDuration),
	m_imageSavingConvention(imageSavingConvention),
	m_metadataOptions(metadataOptions),
	m_skipDeserializationForBasicTypes(skipDeserializationForBasicTypes),
	m_serverName(serverName),
	m_uICulture(uICulture),
	m_saveMetadataHidden(saveMetadataHidden),
	m_contentTypes(contentTypes),
	m_remoteClientBitrateLimit(remoteClientBitrateLimit),
	m_enableFolderView(enableFolderView),
	m_enableGroupingIntoCollections(enableGroupingIntoCollections),
	m_displaySpecialsWithinSeasons(displaySpecialsWithinSeasons),
	m_codecsUsed(codecsUsed),
	m_pluginRepositories(pluginRepositories),
	m_enableExternalContentInSuggestions(enableExternalContentInSuggestions),
	m_imageExtractionTimeoutMs(imageExtractionTimeoutMs),
	m_pathSubstitutions(pathSubstitutions),
	m_enableSlowResponseWarning(enableSlowResponseWarning),
	m_slowResponseThresholdMs(slowResponseThresholdMs),
	m_corsHosts(corsHosts),
	m_libraryScanFanoutConcurrency(libraryScanFanoutConcurrency),
	m_libraryMetadataRefreshConcurrency(libraryMetadataRefreshConcurrency),
	m_removeOldPlugins(removeOldPlugins),
	m_allowClientLogUpload(allowClientLogUpload),
	m_dummyChapterDuration(dummyChapterDuration),
	m_chapterImageResolution(chapterImageResolution),
	m_parallelImageEncodingLimit(parallelImageEncodingLimit),
	m_castReceiverApplications(castReceiverApplications),
	m_trickplayOptions(trickplayOptions) { }



ServerConfiguration::ServerConfiguration(const ServerConfiguration &other) :

	m_logFileRetentionDays(other.m_logFileRetentionDays),
	m_isStartupWizardCompleted(other.m_isStartupWizardCompleted),
	m_cachePath(other.m_cachePath),
	m_previousVersion(other.m_previousVersion),
	m_previousVersionStr(other.m_previousVersionStr),
	m_enableMetrics(other.m_enableMetrics),
	m_enableNormalizedItemByNameIds(other.m_enableNormalizedItemByNameIds),
	m_isPortAuthorized(other.m_isPortAuthorized),
	m_quickConnectAvailable(other.m_quickConnectAvailable),
	m_enableCaseSensitiveItemIds(other.m_enableCaseSensitiveItemIds),
	m_disableLiveTvChannelUserDataName(other.m_disableLiveTvChannelUserDataName),
	m_metadataPath(other.m_metadataPath),
	m_preferredMetadataLanguage(other.m_preferredMetadataLanguage),
	m_metadataCountryCode(other.m_metadataCountryCode),
	m_sortReplaceCharacters(other.m_sortReplaceCharacters),
	m_sortRemoveCharacters(other.m_sortRemoveCharacters),
	m_sortRemoveWords(other.m_sortRemoveWords),
	m_minResumePct(other.m_minResumePct),
	m_maxResumePct(other.m_maxResumePct),
	m_minResumeDurationSeconds(other.m_minResumeDurationSeconds),
	m_minAudiobookResume(other.m_minAudiobookResume),
	m_maxAudiobookResume(other.m_maxAudiobookResume),
	m_inactiveSessionThreshold(other.m_inactiveSessionThreshold),
	m_libraryMonitorDelay(other.m_libraryMonitorDelay),
	m_libraryUpdateDuration(other.m_libraryUpdateDuration),
	m_imageSavingConvention(other.m_imageSavingConvention),
	m_metadataOptions(other.m_metadataOptions),
	m_skipDeserializationForBasicTypes(other.m_skipDeserializationForBasicTypes),
	m_serverName(other.m_serverName),
	m_uICulture(other.m_uICulture),
	m_saveMetadataHidden(other.m_saveMetadataHidden),
	m_contentTypes(other.m_contentTypes),
	m_remoteClientBitrateLimit(other.m_remoteClientBitrateLimit),
	m_enableFolderView(other.m_enableFolderView),
	m_enableGroupingIntoCollections(other.m_enableGroupingIntoCollections),
	m_displaySpecialsWithinSeasons(other.m_displaySpecialsWithinSeasons),
	m_codecsUsed(other.m_codecsUsed),
	m_pluginRepositories(other.m_pluginRepositories),
	m_enableExternalContentInSuggestions(other.m_enableExternalContentInSuggestions),
	m_imageExtractionTimeoutMs(other.m_imageExtractionTimeoutMs),
	m_pathSubstitutions(other.m_pathSubstitutions),
	m_enableSlowResponseWarning(other.m_enableSlowResponseWarning),
	m_slowResponseThresholdMs(other.m_slowResponseThresholdMs),
	m_corsHosts(other.m_corsHosts),
	m_activityLogRetentionDays(other.m_activityLogRetentionDays),
	m_libraryScanFanoutConcurrency(other.m_libraryScanFanoutConcurrency),
	m_libraryMetadataRefreshConcurrency(other.m_libraryMetadataRefreshConcurrency),
	m_removeOldPlugins(other.m_removeOldPlugins),
	m_allowClientLogUpload(other.m_allowClientLogUpload),
	m_dummyChapterDuration(other.m_dummyChapterDuration),
	m_chapterImageResolution(other.m_chapterImageResolution),
	m_parallelImageEncodingLimit(other.m_parallelImageEncodingLimit),
	m_castReceiverApplications(other.m_castReceiverApplications),
	m_trickplayOptions(other.m_trickplayOptions){}


void ServerConfiguration::replaceData(ServerConfiguration &other) {
	m_logFileRetentionDays = other.m_logFileRetentionDays;
	m_isStartupWizardCompleted = other.m_isStartupWizardCompleted;
	m_cachePath = other.m_cachePath;
	m_previousVersion = other.m_previousVersion;
	m_previousVersionStr = other.m_previousVersionStr;
	m_enableMetrics = other.m_enableMetrics;
	m_enableNormalizedItemByNameIds = other.m_enableNormalizedItemByNameIds;
	m_isPortAuthorized = other.m_isPortAuthorized;
	m_quickConnectAvailable = other.m_quickConnectAvailable;
	m_enableCaseSensitiveItemIds = other.m_enableCaseSensitiveItemIds;
	m_disableLiveTvChannelUserDataName = other.m_disableLiveTvChannelUserDataName;
	m_metadataPath = other.m_metadataPath;
	m_preferredMetadataLanguage = other.m_preferredMetadataLanguage;
	m_metadataCountryCode = other.m_metadataCountryCode;
	m_sortReplaceCharacters = other.m_sortReplaceCharacters;
	m_sortRemoveCharacters = other.m_sortRemoveCharacters;
	m_sortRemoveWords = other.m_sortRemoveWords;
	m_minResumePct = other.m_minResumePct;
	m_maxResumePct = other.m_maxResumePct;
	m_minResumeDurationSeconds = other.m_minResumeDurationSeconds;
	m_minAudiobookResume = other.m_minAudiobookResume;
	m_maxAudiobookResume = other.m_maxAudiobookResume;
	m_inactiveSessionThreshold = other.m_inactiveSessionThreshold;
	m_libraryMonitorDelay = other.m_libraryMonitorDelay;
	m_libraryUpdateDuration = other.m_libraryUpdateDuration;
	m_imageSavingConvention = other.m_imageSavingConvention;
	m_metadataOptions = other.m_metadataOptions;
	m_skipDeserializationForBasicTypes = other.m_skipDeserializationForBasicTypes;
	m_serverName = other.m_serverName;
	m_uICulture = other.m_uICulture;
	m_saveMetadataHidden = other.m_saveMetadataHidden;
	m_contentTypes = other.m_contentTypes;
	m_remoteClientBitrateLimit = other.m_remoteClientBitrateLimit;
	m_enableFolderView = other.m_enableFolderView;
	m_enableGroupingIntoCollections = other.m_enableGroupingIntoCollections;
	m_displaySpecialsWithinSeasons = other.m_displaySpecialsWithinSeasons;
	m_codecsUsed = other.m_codecsUsed;
	m_pluginRepositories = other.m_pluginRepositories;
	m_enableExternalContentInSuggestions = other.m_enableExternalContentInSuggestions;
	m_imageExtractionTimeoutMs = other.m_imageExtractionTimeoutMs;
	m_pathSubstitutions = other.m_pathSubstitutions;
	m_enableSlowResponseWarning = other.m_enableSlowResponseWarning;
	m_slowResponseThresholdMs = other.m_slowResponseThresholdMs;
	m_corsHosts = other.m_corsHosts;
	m_activityLogRetentionDays = other.m_activityLogRetentionDays;
	m_libraryScanFanoutConcurrency = other.m_libraryScanFanoutConcurrency;
	m_libraryMetadataRefreshConcurrency = other.m_libraryMetadataRefreshConcurrency;
	m_removeOldPlugins = other.m_removeOldPlugins;
	m_allowClientLogUpload = other.m_allowClientLogUpload;
	m_dummyChapterDuration = other.m_dummyChapterDuration;
	m_chapterImageResolution = other.m_chapterImageResolution;
	m_parallelImageEncodingLimit = other.m_parallelImageEncodingLimit;
	m_castReceiverApplications = other.m_castReceiverApplications;
	m_trickplayOptions = other.m_trickplayOptions;
}

ServerConfiguration ServerConfiguration::fromJson(QJsonObject source) {
	ServerConfiguration instance;
	instance.setFromJson(source);
	return instance;
}


void ServerConfiguration::setFromJson(QJsonObject source) {
	m_logFileRetentionDays = Jellyfin::Support::fromJsonValue<qint32>(source["LogFileRetentionDays"]);
	m_isStartupWizardCompleted = Jellyfin::Support::fromJsonValue<bool>(source["IsStartupWizardCompleted"]);
	m_cachePath = Jellyfin::Support::fromJsonValue<QString>(source["CachePath"]);
	m_previousVersion = Jellyfin::Support::fromJsonValue<QString>(source["PreviousVersion"]);
	m_previousVersionStr = Jellyfin::Support::fromJsonValue<QString>(source["PreviousVersionStr"]);
	m_enableMetrics = Jellyfin::Support::fromJsonValue<bool>(source["EnableMetrics"]);
	m_enableNormalizedItemByNameIds = Jellyfin::Support::fromJsonValue<bool>(source["EnableNormalizedItemByNameIds"]);
	m_isPortAuthorized = Jellyfin::Support::fromJsonValue<bool>(source["IsPortAuthorized"]);
	m_quickConnectAvailable = Jellyfin::Support::fromJsonValue<bool>(source["QuickConnectAvailable"]);
	m_enableCaseSensitiveItemIds = Jellyfin::Support::fromJsonValue<bool>(source["EnableCaseSensitiveItemIds"]);
	m_disableLiveTvChannelUserDataName = Jellyfin::Support::fromJsonValue<bool>(source["DisableLiveTvChannelUserDataName"]);
	m_metadataPath = Jellyfin::Support::fromJsonValue<QString>(source["MetadataPath"]);
	m_preferredMetadataLanguage = Jellyfin::Support::fromJsonValue<QString>(source["PreferredMetadataLanguage"]);
	m_metadataCountryCode = Jellyfin::Support::fromJsonValue<QString>(source["MetadataCountryCode"]);
	m_sortReplaceCharacters = Jellyfin::Support::fromJsonValue<QStringList>(source["SortReplaceCharacters"]);
	m_sortRemoveCharacters = Jellyfin::Support::fromJsonValue<QStringList>(source["SortRemoveCharacters"]);
	m_sortRemoveWords = Jellyfin::Support::fromJsonValue<QStringList>(source["SortRemoveWords"]);
	m_minResumePct = Jellyfin::Support::fromJsonValue<qint32>(source["MinResumePct"]);
	m_maxResumePct = Jellyfin::Support::fromJsonValue<qint32>(source["MaxResumePct"]);
	m_minResumeDurationSeconds = Jellyfin::Support::fromJsonValue<qint32>(source["MinResumeDurationSeconds"]);
	m_minAudiobookResume = Jellyfin::Support::fromJsonValue<qint32>(source["MinAudiobookResume"]);
	m_maxAudiobookResume = Jellyfin::Support::fromJsonValue<qint32>(source["MaxAudiobookResume"]);
	m_inactiveSessionThreshold = Jellyfin::Support::fromJsonValue<qint32>(source["InactiveSessionThreshold"]);
	m_libraryMonitorDelay = Jellyfin::Support::fromJsonValue<qint32>(source["LibraryMonitorDelay"]);
	m_libraryUpdateDuration = Jellyfin::Support::fromJsonValue<qint32>(source["LibraryUpdateDuration"]);
	m_imageSavingConvention = Jellyfin::Support::fromJsonValue<ImageSavingConvention>(source["ImageSavingConvention"]);
	m_metadataOptions = Jellyfin::Support::fromJsonValue<QList<MetadataOptions>>(source["MetadataOptions"]);
	m_skipDeserializationForBasicTypes = Jellyfin::Support::fromJsonValue<bool>(source["SkipDeserializationForBasicTypes"]);
	m_serverName = Jellyfin::Support::fromJsonValue<QString>(source["ServerName"]);
	m_uICulture = Jellyfin::Support::fromJsonValue<QString>(source["UICulture"]);
	m_saveMetadataHidden = Jellyfin::Support::fromJsonValue<bool>(source["SaveMetadataHidden"]);
	m_contentTypes = Jellyfin::Support::fromJsonValue<QList<NameValuePair>>(source["ContentTypes"]);
	m_remoteClientBitrateLimit = Jellyfin::Support::fromJsonValue<qint32>(source["RemoteClientBitrateLimit"]);
	m_enableFolderView = Jellyfin::Support::fromJsonValue<bool>(source["EnableFolderView"]);
	m_enableGroupingIntoCollections = Jellyfin::Support::fromJsonValue<bool>(source["EnableGroupingIntoCollections"]);
	m_displaySpecialsWithinSeasons = Jellyfin::Support::fromJsonValue<bool>(source["DisplaySpecialsWithinSeasons"]);
	m_codecsUsed = Jellyfin::Support::fromJsonValue<QStringList>(source["CodecsUsed"]);
	m_pluginRepositories = Jellyfin::Support::fromJsonValue<QList<RepositoryInfo>>(source["PluginRepositories"]);
	m_enableExternalContentInSuggestions = Jellyfin::Support::fromJsonValue<bool>(source["EnableExternalContentInSuggestions"]);
	m_imageExtractionTimeoutMs = Jellyfin::Support::fromJsonValue<qint32>(source["ImageExtractionTimeoutMs"]);
	m_pathSubstitutions = Jellyfin::Support::fromJsonValue<QList<PathSubstitution>>(source["PathSubstitutions"]);
	m_enableSlowResponseWarning = Jellyfin::Support::fromJsonValue<bool>(source["EnableSlowResponseWarning"]);
	m_slowResponseThresholdMs = Jellyfin::Support::fromJsonValue<qint64>(source["SlowResponseThresholdMs"]);
	m_corsHosts = Jellyfin::Support::fromJsonValue<QStringList>(source["CorsHosts"]);
	m_activityLogRetentionDays = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ActivityLogRetentionDays"]);
	m_libraryScanFanoutConcurrency = Jellyfin::Support::fromJsonValue<qint32>(source["LibraryScanFanoutConcurrency"]);
	m_libraryMetadataRefreshConcurrency = Jellyfin::Support::fromJsonValue<qint32>(source["LibraryMetadataRefreshConcurrency"]);
	m_removeOldPlugins = Jellyfin::Support::fromJsonValue<bool>(source["RemoveOldPlugins"]);
	m_allowClientLogUpload = Jellyfin::Support::fromJsonValue<bool>(source["AllowClientLogUpload"]);
	m_dummyChapterDuration = Jellyfin::Support::fromJsonValue<qint32>(source["DummyChapterDuration"]);
	m_chapterImageResolution = Jellyfin::Support::fromJsonValue<ImageResolution>(source["ChapterImageResolution"]);
	m_parallelImageEncodingLimit = Jellyfin::Support::fromJsonValue<qint32>(source["ParallelImageEncodingLimit"]);
	m_castReceiverApplications = Jellyfin::Support::fromJsonValue<QList<CastReceiverApplication>>(source["CastReceiverApplications"]);
	m_trickplayOptions = Jellyfin::Support::fromJsonValue<QSharedPointer<TrickplayOptions>>(source["TrickplayOptions"]);

}
	
QJsonObject ServerConfiguration::toJson() const {
	QJsonObject result;
	
	result["LogFileRetentionDays"] = Jellyfin::Support::toJsonValue<qint32>(m_logFileRetentionDays);		
	result["IsStartupWizardCompleted"] = Jellyfin::Support::toJsonValue<bool>(m_isStartupWizardCompleted);		
	
	if (!(m_cachePath.isNull())) {
		result["CachePath"] = Jellyfin::Support::toJsonValue<QString>(m_cachePath);
	}
			
	
	if (!(m_previousVersion.isNull())) {
		result["PreviousVersion"] = Jellyfin::Support::toJsonValue<QString>(m_previousVersion);
	}
			
	
	if (!(m_previousVersionStr.isNull())) {
		result["PreviousVersionStr"] = Jellyfin::Support::toJsonValue<QString>(m_previousVersionStr);
	}
			
	result["EnableMetrics"] = Jellyfin::Support::toJsonValue<bool>(m_enableMetrics);		
	result["EnableNormalizedItemByNameIds"] = Jellyfin::Support::toJsonValue<bool>(m_enableNormalizedItemByNameIds);		
	result["IsPortAuthorized"] = Jellyfin::Support::toJsonValue<bool>(m_isPortAuthorized);		
	result["QuickConnectAvailable"] = Jellyfin::Support::toJsonValue<bool>(m_quickConnectAvailable);		
	result["EnableCaseSensitiveItemIds"] = Jellyfin::Support::toJsonValue<bool>(m_enableCaseSensitiveItemIds);		
	result["DisableLiveTvChannelUserDataName"] = Jellyfin::Support::toJsonValue<bool>(m_disableLiveTvChannelUserDataName);		
	result["MetadataPath"] = Jellyfin::Support::toJsonValue<QString>(m_metadataPath);		
	result["PreferredMetadataLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_preferredMetadataLanguage);		
	result["MetadataCountryCode"] = Jellyfin::Support::toJsonValue<QString>(m_metadataCountryCode);		
	result["SortReplaceCharacters"] = Jellyfin::Support::toJsonValue<QStringList>(m_sortReplaceCharacters);		
	result["SortRemoveCharacters"] = Jellyfin::Support::toJsonValue<QStringList>(m_sortRemoveCharacters);		
	result["SortRemoveWords"] = Jellyfin::Support::toJsonValue<QStringList>(m_sortRemoveWords);		
	result["MinResumePct"] = Jellyfin::Support::toJsonValue<qint32>(m_minResumePct);		
	result["MaxResumePct"] = Jellyfin::Support::toJsonValue<qint32>(m_maxResumePct);		
	result["MinResumeDurationSeconds"] = Jellyfin::Support::toJsonValue<qint32>(m_minResumeDurationSeconds);		
	result["MinAudiobookResume"] = Jellyfin::Support::toJsonValue<qint32>(m_minAudiobookResume);		
	result["MaxAudiobookResume"] = Jellyfin::Support::toJsonValue<qint32>(m_maxAudiobookResume);		
	result["InactiveSessionThreshold"] = Jellyfin::Support::toJsonValue<qint32>(m_inactiveSessionThreshold);		
	result["LibraryMonitorDelay"] = Jellyfin::Support::toJsonValue<qint32>(m_libraryMonitorDelay);		
	result["LibraryUpdateDuration"] = Jellyfin::Support::toJsonValue<qint32>(m_libraryUpdateDuration);		
	result["ImageSavingConvention"] = Jellyfin::Support::toJsonValue<ImageSavingConvention>(m_imageSavingConvention);		
	result["MetadataOptions"] = Jellyfin::Support::toJsonValue<QList<MetadataOptions>>(m_metadataOptions);		
	result["SkipDeserializationForBasicTypes"] = Jellyfin::Support::toJsonValue<bool>(m_skipDeserializationForBasicTypes);		
	result["ServerName"] = Jellyfin::Support::toJsonValue<QString>(m_serverName);		
	result["UICulture"] = Jellyfin::Support::toJsonValue<QString>(m_uICulture);		
	result["SaveMetadataHidden"] = Jellyfin::Support::toJsonValue<bool>(m_saveMetadataHidden);		
	result["ContentTypes"] = Jellyfin::Support::toJsonValue<QList<NameValuePair>>(m_contentTypes);		
	result["RemoteClientBitrateLimit"] = Jellyfin::Support::toJsonValue<qint32>(m_remoteClientBitrateLimit);		
	result["EnableFolderView"] = Jellyfin::Support::toJsonValue<bool>(m_enableFolderView);		
	result["EnableGroupingIntoCollections"] = Jellyfin::Support::toJsonValue<bool>(m_enableGroupingIntoCollections);		
	result["DisplaySpecialsWithinSeasons"] = Jellyfin::Support::toJsonValue<bool>(m_displaySpecialsWithinSeasons);		
	result["CodecsUsed"] = Jellyfin::Support::toJsonValue<QStringList>(m_codecsUsed);		
	result["PluginRepositories"] = Jellyfin::Support::toJsonValue<QList<RepositoryInfo>>(m_pluginRepositories);		
	result["EnableExternalContentInSuggestions"] = Jellyfin::Support::toJsonValue<bool>(m_enableExternalContentInSuggestions);		
	result["ImageExtractionTimeoutMs"] = Jellyfin::Support::toJsonValue<qint32>(m_imageExtractionTimeoutMs);		
	result["PathSubstitutions"] = Jellyfin::Support::toJsonValue<QList<PathSubstitution>>(m_pathSubstitutions);		
	result["EnableSlowResponseWarning"] = Jellyfin::Support::toJsonValue<bool>(m_enableSlowResponseWarning);		
	result["SlowResponseThresholdMs"] = Jellyfin::Support::toJsonValue<qint64>(m_slowResponseThresholdMs);		
	result["CorsHosts"] = Jellyfin::Support::toJsonValue<QStringList>(m_corsHosts);		
	
	if (!(!m_activityLogRetentionDays.has_value())) {
		result["ActivityLogRetentionDays"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_activityLogRetentionDays);
	}
			
	result["LibraryScanFanoutConcurrency"] = Jellyfin::Support::toJsonValue<qint32>(m_libraryScanFanoutConcurrency);		
	result["LibraryMetadataRefreshConcurrency"] = Jellyfin::Support::toJsonValue<qint32>(m_libraryMetadataRefreshConcurrency);		
	result["RemoveOldPlugins"] = Jellyfin::Support::toJsonValue<bool>(m_removeOldPlugins);		
	result["AllowClientLogUpload"] = Jellyfin::Support::toJsonValue<bool>(m_allowClientLogUpload);		
	result["DummyChapterDuration"] = Jellyfin::Support::toJsonValue<qint32>(m_dummyChapterDuration);		
	result["ChapterImageResolution"] = Jellyfin::Support::toJsonValue<ImageResolution>(m_chapterImageResolution);		
	result["ParallelImageEncodingLimit"] = Jellyfin::Support::toJsonValue<qint32>(m_parallelImageEncodingLimit);		
	result["CastReceiverApplications"] = Jellyfin::Support::toJsonValue<QList<CastReceiverApplication>>(m_castReceiverApplications);		
	result["TrickplayOptions"] = Jellyfin::Support::toJsonValue<QSharedPointer<TrickplayOptions>>(m_trickplayOptions);	
	return result;
}

qint32 ServerConfiguration::logFileRetentionDays() const { return m_logFileRetentionDays; }

void ServerConfiguration::setLogFileRetentionDays(qint32 newLogFileRetentionDays) {
	m_logFileRetentionDays = newLogFileRetentionDays;
}

bool ServerConfiguration::isStartupWizardCompleted() const { return m_isStartupWizardCompleted; }

void ServerConfiguration::setIsStartupWizardCompleted(bool newIsStartupWizardCompleted) {
	m_isStartupWizardCompleted = newIsStartupWizardCompleted;
}

QString ServerConfiguration::cachePath() const { return m_cachePath; }

void ServerConfiguration::setCachePath(QString newCachePath) {
	m_cachePath = newCachePath;
}
bool ServerConfiguration::cachePathNull() const {
	return m_cachePath.isNull();
}

void ServerConfiguration::setCachePathNull() {
	m_cachePath.clear();

}
QString ServerConfiguration::previousVersion() const { return m_previousVersion; }

void ServerConfiguration::setPreviousVersion(QString newPreviousVersion) {
	m_previousVersion = newPreviousVersion;
}
bool ServerConfiguration::previousVersionNull() const {
	return m_previousVersion.isNull();
}

void ServerConfiguration::setPreviousVersionNull() {
	m_previousVersion.clear();

}
QString ServerConfiguration::previousVersionStr() const { return m_previousVersionStr; }

void ServerConfiguration::setPreviousVersionStr(QString newPreviousVersionStr) {
	m_previousVersionStr = newPreviousVersionStr;
}
bool ServerConfiguration::previousVersionStrNull() const {
	return m_previousVersionStr.isNull();
}

void ServerConfiguration::setPreviousVersionStrNull() {
	m_previousVersionStr.clear();

}
bool ServerConfiguration::enableMetrics() const { return m_enableMetrics; }

void ServerConfiguration::setEnableMetrics(bool newEnableMetrics) {
	m_enableMetrics = newEnableMetrics;
}

bool ServerConfiguration::enableNormalizedItemByNameIds() const { return m_enableNormalizedItemByNameIds; }

void ServerConfiguration::setEnableNormalizedItemByNameIds(bool newEnableNormalizedItemByNameIds) {
	m_enableNormalizedItemByNameIds = newEnableNormalizedItemByNameIds;
}

bool ServerConfiguration::isPortAuthorized() const { return m_isPortAuthorized; }

void ServerConfiguration::setIsPortAuthorized(bool newIsPortAuthorized) {
	m_isPortAuthorized = newIsPortAuthorized;
}

bool ServerConfiguration::quickConnectAvailable() const { return m_quickConnectAvailable; }

void ServerConfiguration::setQuickConnectAvailable(bool newQuickConnectAvailable) {
	m_quickConnectAvailable = newQuickConnectAvailable;
}

bool ServerConfiguration::enableCaseSensitiveItemIds() const { return m_enableCaseSensitiveItemIds; }

void ServerConfiguration::setEnableCaseSensitiveItemIds(bool newEnableCaseSensitiveItemIds) {
	m_enableCaseSensitiveItemIds = newEnableCaseSensitiveItemIds;
}

bool ServerConfiguration::disableLiveTvChannelUserDataName() const { return m_disableLiveTvChannelUserDataName; }

void ServerConfiguration::setDisableLiveTvChannelUserDataName(bool newDisableLiveTvChannelUserDataName) {
	m_disableLiveTvChannelUserDataName = newDisableLiveTvChannelUserDataName;
}

QString ServerConfiguration::metadataPath() const { return m_metadataPath; }

void ServerConfiguration::setMetadataPath(QString newMetadataPath) {
	m_metadataPath = newMetadataPath;
}

QString ServerConfiguration::preferredMetadataLanguage() const { return m_preferredMetadataLanguage; }

void ServerConfiguration::setPreferredMetadataLanguage(QString newPreferredMetadataLanguage) {
	m_preferredMetadataLanguage = newPreferredMetadataLanguage;
}

QString ServerConfiguration::metadataCountryCode() const { return m_metadataCountryCode; }

void ServerConfiguration::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}

QStringList ServerConfiguration::sortReplaceCharacters() const { return m_sortReplaceCharacters; }

void ServerConfiguration::setSortReplaceCharacters(QStringList newSortReplaceCharacters) {
	m_sortReplaceCharacters = newSortReplaceCharacters;
}

QStringList ServerConfiguration::sortRemoveCharacters() const { return m_sortRemoveCharacters; }

void ServerConfiguration::setSortRemoveCharacters(QStringList newSortRemoveCharacters) {
	m_sortRemoveCharacters = newSortRemoveCharacters;
}

QStringList ServerConfiguration::sortRemoveWords() const { return m_sortRemoveWords; }

void ServerConfiguration::setSortRemoveWords(QStringList newSortRemoveWords) {
	m_sortRemoveWords = newSortRemoveWords;
}

qint32 ServerConfiguration::minResumePct() const { return m_minResumePct; }

void ServerConfiguration::setMinResumePct(qint32 newMinResumePct) {
	m_minResumePct = newMinResumePct;
}

qint32 ServerConfiguration::maxResumePct() const { return m_maxResumePct; }

void ServerConfiguration::setMaxResumePct(qint32 newMaxResumePct) {
	m_maxResumePct = newMaxResumePct;
}

qint32 ServerConfiguration::minResumeDurationSeconds() const { return m_minResumeDurationSeconds; }

void ServerConfiguration::setMinResumeDurationSeconds(qint32 newMinResumeDurationSeconds) {
	m_minResumeDurationSeconds = newMinResumeDurationSeconds;
}

qint32 ServerConfiguration::minAudiobookResume() const { return m_minAudiobookResume; }

void ServerConfiguration::setMinAudiobookResume(qint32 newMinAudiobookResume) {
	m_minAudiobookResume = newMinAudiobookResume;
}

qint32 ServerConfiguration::maxAudiobookResume() const { return m_maxAudiobookResume; }

void ServerConfiguration::setMaxAudiobookResume(qint32 newMaxAudiobookResume) {
	m_maxAudiobookResume = newMaxAudiobookResume;
}

qint32 ServerConfiguration::inactiveSessionThreshold() const { return m_inactiveSessionThreshold; }

void ServerConfiguration::setInactiveSessionThreshold(qint32 newInactiveSessionThreshold) {
	m_inactiveSessionThreshold = newInactiveSessionThreshold;
}

qint32 ServerConfiguration::libraryMonitorDelay() const { return m_libraryMonitorDelay; }

void ServerConfiguration::setLibraryMonitorDelay(qint32 newLibraryMonitorDelay) {
	m_libraryMonitorDelay = newLibraryMonitorDelay;
}

qint32 ServerConfiguration::libraryUpdateDuration() const { return m_libraryUpdateDuration; }

void ServerConfiguration::setLibraryUpdateDuration(qint32 newLibraryUpdateDuration) {
	m_libraryUpdateDuration = newLibraryUpdateDuration;
}

ImageSavingConvention ServerConfiguration::imageSavingConvention() const { return m_imageSavingConvention; }

void ServerConfiguration::setImageSavingConvention(ImageSavingConvention newImageSavingConvention) {
	m_imageSavingConvention = newImageSavingConvention;
}

QList<MetadataOptions> ServerConfiguration::metadataOptions() const { return m_metadataOptions; }

void ServerConfiguration::setMetadataOptions(QList<MetadataOptions> newMetadataOptions) {
	m_metadataOptions = newMetadataOptions;
}

bool ServerConfiguration::skipDeserializationForBasicTypes() const { return m_skipDeserializationForBasicTypes; }

void ServerConfiguration::setSkipDeserializationForBasicTypes(bool newSkipDeserializationForBasicTypes) {
	m_skipDeserializationForBasicTypes = newSkipDeserializationForBasicTypes;
}

QString ServerConfiguration::serverName() const { return m_serverName; }

void ServerConfiguration::setServerName(QString newServerName) {
	m_serverName = newServerName;
}

QString ServerConfiguration::uICulture() const { return m_uICulture; }

void ServerConfiguration::setUICulture(QString newUICulture) {
	m_uICulture = newUICulture;
}

bool ServerConfiguration::saveMetadataHidden() const { return m_saveMetadataHidden; }

void ServerConfiguration::setSaveMetadataHidden(bool newSaveMetadataHidden) {
	m_saveMetadataHidden = newSaveMetadataHidden;
}

QList<NameValuePair> ServerConfiguration::contentTypes() const { return m_contentTypes; }

void ServerConfiguration::setContentTypes(QList<NameValuePair> newContentTypes) {
	m_contentTypes = newContentTypes;
}

qint32 ServerConfiguration::remoteClientBitrateLimit() const { return m_remoteClientBitrateLimit; }

void ServerConfiguration::setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit) {
	m_remoteClientBitrateLimit = newRemoteClientBitrateLimit;
}

bool ServerConfiguration::enableFolderView() const { return m_enableFolderView; }

void ServerConfiguration::setEnableFolderView(bool newEnableFolderView) {
	m_enableFolderView = newEnableFolderView;
}

bool ServerConfiguration::enableGroupingIntoCollections() const { return m_enableGroupingIntoCollections; }

void ServerConfiguration::setEnableGroupingIntoCollections(bool newEnableGroupingIntoCollections) {
	m_enableGroupingIntoCollections = newEnableGroupingIntoCollections;
}

bool ServerConfiguration::displaySpecialsWithinSeasons() const { return m_displaySpecialsWithinSeasons; }

void ServerConfiguration::setDisplaySpecialsWithinSeasons(bool newDisplaySpecialsWithinSeasons) {
	m_displaySpecialsWithinSeasons = newDisplaySpecialsWithinSeasons;
}

QStringList ServerConfiguration::codecsUsed() const { return m_codecsUsed; }

void ServerConfiguration::setCodecsUsed(QStringList newCodecsUsed) {
	m_codecsUsed = newCodecsUsed;
}

QList<RepositoryInfo> ServerConfiguration::pluginRepositories() const { return m_pluginRepositories; }

void ServerConfiguration::setPluginRepositories(QList<RepositoryInfo> newPluginRepositories) {
	m_pluginRepositories = newPluginRepositories;
}

bool ServerConfiguration::enableExternalContentInSuggestions() const { return m_enableExternalContentInSuggestions; }

void ServerConfiguration::setEnableExternalContentInSuggestions(bool newEnableExternalContentInSuggestions) {
	m_enableExternalContentInSuggestions = newEnableExternalContentInSuggestions;
}

qint32 ServerConfiguration::imageExtractionTimeoutMs() const { return m_imageExtractionTimeoutMs; }

void ServerConfiguration::setImageExtractionTimeoutMs(qint32 newImageExtractionTimeoutMs) {
	m_imageExtractionTimeoutMs = newImageExtractionTimeoutMs;
}

QList<PathSubstitution> ServerConfiguration::pathSubstitutions() const { return m_pathSubstitutions; }

void ServerConfiguration::setPathSubstitutions(QList<PathSubstitution> newPathSubstitutions) {
	m_pathSubstitutions = newPathSubstitutions;
}

bool ServerConfiguration::enableSlowResponseWarning() const { return m_enableSlowResponseWarning; }

void ServerConfiguration::setEnableSlowResponseWarning(bool newEnableSlowResponseWarning) {
	m_enableSlowResponseWarning = newEnableSlowResponseWarning;
}

qint64 ServerConfiguration::slowResponseThresholdMs() const { return m_slowResponseThresholdMs; }

void ServerConfiguration::setSlowResponseThresholdMs(qint64 newSlowResponseThresholdMs) {
	m_slowResponseThresholdMs = newSlowResponseThresholdMs;
}

QStringList ServerConfiguration::corsHosts() const { return m_corsHosts; }

void ServerConfiguration::setCorsHosts(QStringList newCorsHosts) {
	m_corsHosts = newCorsHosts;
}

std::optional<qint32> ServerConfiguration::activityLogRetentionDays() const { return m_activityLogRetentionDays; }

void ServerConfiguration::setActivityLogRetentionDays(std::optional<qint32> newActivityLogRetentionDays) {
	m_activityLogRetentionDays = newActivityLogRetentionDays;
}
bool ServerConfiguration::activityLogRetentionDaysNull() const {
	return !m_activityLogRetentionDays.has_value();
}

void ServerConfiguration::setActivityLogRetentionDaysNull() {
	m_activityLogRetentionDays = std::nullopt;

}
qint32 ServerConfiguration::libraryScanFanoutConcurrency() const { return m_libraryScanFanoutConcurrency; }

void ServerConfiguration::setLibraryScanFanoutConcurrency(qint32 newLibraryScanFanoutConcurrency) {
	m_libraryScanFanoutConcurrency = newLibraryScanFanoutConcurrency;
}

qint32 ServerConfiguration::libraryMetadataRefreshConcurrency() const { return m_libraryMetadataRefreshConcurrency; }

void ServerConfiguration::setLibraryMetadataRefreshConcurrency(qint32 newLibraryMetadataRefreshConcurrency) {
	m_libraryMetadataRefreshConcurrency = newLibraryMetadataRefreshConcurrency;
}

bool ServerConfiguration::removeOldPlugins() const { return m_removeOldPlugins; }

void ServerConfiguration::setRemoveOldPlugins(bool newRemoveOldPlugins) {
	m_removeOldPlugins = newRemoveOldPlugins;
}

bool ServerConfiguration::allowClientLogUpload() const { return m_allowClientLogUpload; }

void ServerConfiguration::setAllowClientLogUpload(bool newAllowClientLogUpload) {
	m_allowClientLogUpload = newAllowClientLogUpload;
}

qint32 ServerConfiguration::dummyChapterDuration() const { return m_dummyChapterDuration; }

void ServerConfiguration::setDummyChapterDuration(qint32 newDummyChapterDuration) {
	m_dummyChapterDuration = newDummyChapterDuration;
}

ImageResolution ServerConfiguration::chapterImageResolution() const { return m_chapterImageResolution; }

void ServerConfiguration::setChapterImageResolution(ImageResolution newChapterImageResolution) {
	m_chapterImageResolution = newChapterImageResolution;
}

qint32 ServerConfiguration::parallelImageEncodingLimit() const { return m_parallelImageEncodingLimit; }

void ServerConfiguration::setParallelImageEncodingLimit(qint32 newParallelImageEncodingLimit) {
	m_parallelImageEncodingLimit = newParallelImageEncodingLimit;
}

QList<CastReceiverApplication> ServerConfiguration::castReceiverApplications() const { return m_castReceiverApplications; }

void ServerConfiguration::setCastReceiverApplications(QList<CastReceiverApplication> newCastReceiverApplications) {
	m_castReceiverApplications = newCastReceiverApplications;
}

QSharedPointer<TrickplayOptions> ServerConfiguration::trickplayOptions() const { return m_trickplayOptions; }

void ServerConfiguration::setTrickplayOptions(QSharedPointer<TrickplayOptions> newTrickplayOptions) {
	m_trickplayOptions = newTrickplayOptions;
}


} // NS DTO

namespace Support {

using ServerConfiguration = Jellyfin::DTO::ServerConfiguration;

template <>
ServerConfiguration fromJsonValue(const QJsonValue &source, convertType<ServerConfiguration>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return ServerConfiguration::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const ServerConfiguration &source, convertType<ServerConfiguration>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

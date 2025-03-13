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

#ifndef JELLYFIN_DTO_SERVERCONFIGURATION_H
#define JELLYFIN_DTO_SERVERCONFIGURATION_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/castreceiverapplication.h"
#include "JellyfinQt/dto/imageresolution.h"
#include "JellyfinQt/dto/imagesavingconvention.h"
#include "JellyfinQt/dto/metadataoptions.h"
#include "JellyfinQt/dto/namevaluepair.h"
#include "JellyfinQt/dto/pathsubstitution.h"
#include "JellyfinQt/dto/repositoryinfo.h"
#include "JellyfinQt/dto/trickplayoptions.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class ServerConfiguration {
public:
	ServerConfiguration(	
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
	);

	ServerConfiguration(const ServerConfiguration &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ServerConfiguration &other);
	
	static ServerConfiguration fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the number of days we should retain log files.
	 */
	qint32 logFileRetentionDays() const;
	/**
	* @brief Gets or sets the number of days we should retain log files.
	*/
	void setLogFileRetentionDays(qint32 newLogFileRetentionDays);

	/**
	 * @brief Gets or sets a value indicating whether this instance is first run.
	 */
	bool isStartupWizardCompleted() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is first run.
	*/
	void setIsStartupWizardCompleted(bool newIsStartupWizardCompleted);

	/**
	 * @brief Gets or sets the cache path.
	 */
	QString cachePath() const;
	/**
	* @brief Gets or sets the cache path.
	*/
	void setCachePath(QString newCachePath);
	bool cachePathNull() const;
	void setCachePathNull();

	/**
	 * @brief Gets or sets the last known version that was ran using the configuration.
	 */
	QString previousVersion() const;
	/**
	* @brief Gets or sets the last known version that was ran using the configuration.
	*/
	void setPreviousVersion(QString newPreviousVersion);
	bool previousVersionNull() const;
	void setPreviousVersionNull();

	/**
	 * @brief Gets or sets the stringified PreviousVersion to be stored/loaded,
because System.Version itself isn't xml-serializable.
	 */
	QString previousVersionStr() const;
	/**
	* @brief Gets or sets the stringified PreviousVersion to be stored/loaded,
because System.Version itself isn't xml-serializable.
	*/
	void setPreviousVersionStr(QString newPreviousVersionStr);
	bool previousVersionStrNull() const;
	void setPreviousVersionStrNull();

	/**
	 * @brief Gets or sets a value indicating whether to enable prometheus metrics exporting.
	 */
	bool enableMetrics() const;
	/**
	* @brief Gets or sets a value indicating whether to enable prometheus metrics exporting.
	*/
	void setEnableMetrics(bool newEnableMetrics);


	bool enableNormalizedItemByNameIds() const;

	void setEnableNormalizedItemByNameIds(bool newEnableNormalizedItemByNameIds);

	/**
	 * @brief Gets or sets a value indicating whether this instance is port authorized.
	 */
	bool isPortAuthorized() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is port authorized.
	*/
	void setIsPortAuthorized(bool newIsPortAuthorized);

	/**
	 * @brief Gets or sets a value indicating whether quick connect is available for use on this server.
	 */
	bool quickConnectAvailable() const;
	/**
	* @brief Gets or sets a value indicating whether quick connect is available for use on this server.
	*/
	void setQuickConnectAvailable(bool newQuickConnectAvailable);

	/**
	 * @brief Gets or sets a value indicating whether [enable case sensitive item ids].
	 */
	bool enableCaseSensitiveItemIds() const;
	/**
	* @brief Gets or sets a value indicating whether [enable case sensitive item ids].
	*/
	void setEnableCaseSensitiveItemIds(bool newEnableCaseSensitiveItemIds);


	bool disableLiveTvChannelUserDataName() const;

	void setDisableLiveTvChannelUserDataName(bool newDisableLiveTvChannelUserDataName);

	/**
	 * @brief Gets or sets the metadata path.
	 */
	QString metadataPath() const;
	/**
	* @brief Gets or sets the metadata path.
	*/
	void setMetadataPath(QString newMetadataPath);

	/**
	 * @brief Gets or sets the preferred metadata language.
	 */
	QString preferredMetadataLanguage() const;
	/**
	* @brief Gets or sets the preferred metadata language.
	*/
	void setPreferredMetadataLanguage(QString newPreferredMetadataLanguage);

	/**
	 * @brief Gets or sets the metadata country code.
	 */
	QString metadataCountryCode() const;
	/**
	* @brief Gets or sets the metadata country code.
	*/
	void setMetadataCountryCode(QString newMetadataCountryCode);

	/**
	 * @brief Gets or sets characters to be replaced with a ' ' in strings to create a sort name.
	 */
	QStringList sortReplaceCharacters() const;
	/**
	* @brief Gets or sets characters to be replaced with a ' ' in strings to create a sort name.
	*/
	void setSortReplaceCharacters(QStringList newSortReplaceCharacters);

	/**
	 * @brief Gets or sets characters to be removed from strings to create a sort name.
	 */
	QStringList sortRemoveCharacters() const;
	/**
	* @brief Gets or sets characters to be removed from strings to create a sort name.
	*/
	void setSortRemoveCharacters(QStringList newSortRemoveCharacters);

	/**
	 * @brief Gets or sets words to be removed from strings to create a sort name.
	 */
	QStringList sortRemoveWords() const;
	/**
	* @brief Gets or sets words to be removed from strings to create a sort name.
	*/
	void setSortRemoveWords(QStringList newSortRemoveWords);

	/**
	 * @brief Gets or sets the minimum percentage of an item that must be played in order for playstate to be updated.
	 */
	qint32 minResumePct() const;
	/**
	* @brief Gets or sets the minimum percentage of an item that must be played in order for playstate to be updated.
	*/
	void setMinResumePct(qint32 newMinResumePct);

	/**
	 * @brief Gets or sets the maximum percentage of an item that can be played while still saving playstate. If this percentage is crossed playstate will be reset to the beginning and the item will be marked watched.
	 */
	qint32 maxResumePct() const;
	/**
	* @brief Gets or sets the maximum percentage of an item that can be played while still saving playstate. If this percentage is crossed playstate will be reset to the beginning and the item will be marked watched.
	*/
	void setMaxResumePct(qint32 newMaxResumePct);

	/**
	 * @brief Gets or sets the minimum duration that an item must have in order to be eligible for playstate updates..
	 */
	qint32 minResumeDurationSeconds() const;
	/**
	* @brief Gets or sets the minimum duration that an item must have in order to be eligible for playstate updates..
	*/
	void setMinResumeDurationSeconds(qint32 newMinResumeDurationSeconds);

	/**
	 * @brief Gets or sets the minimum minutes of a book that must be played in order for playstate to be updated.
	 */
	qint32 minAudiobookResume() const;
	/**
	* @brief Gets or sets the minimum minutes of a book that must be played in order for playstate to be updated.
	*/
	void setMinAudiobookResume(qint32 newMinAudiobookResume);

	/**
	 * @brief Gets or sets the remaining minutes of a book that can be played while still saving playstate. If this percentage is crossed playstate will be reset to the beginning and the item will be marked watched.
	 */
	qint32 maxAudiobookResume() const;
	/**
	* @brief Gets or sets the remaining minutes of a book that can be played while still saving playstate. If this percentage is crossed playstate will be reset to the beginning and the item will be marked watched.
	*/
	void setMaxAudiobookResume(qint32 newMaxAudiobookResume);

	/**
	 * @brief Gets or sets the threshold in minutes after a inactive session gets closed automatically.
If set to 0 the check for inactive sessions gets disabled.
	 */
	qint32 inactiveSessionThreshold() const;
	/**
	* @brief Gets or sets the threshold in minutes after a inactive session gets closed automatically.
If set to 0 the check for inactive sessions gets disabled.
	*/
	void setInactiveSessionThreshold(qint32 newInactiveSessionThreshold);

	/**
	 * @brief Gets or sets the delay in seconds that we will wait after a file system change to try and discover what has been added/removed
Some delay is necessary with some items because their creation is not atomic.  It involves the creation of several
different directories and files.
	 */
	qint32 libraryMonitorDelay() const;
	/**
	* @brief Gets or sets the delay in seconds that we will wait after a file system change to try and discover what has been added/removed
Some delay is necessary with some items because their creation is not atomic.  It involves the creation of several
different directories and files.
	*/
	void setLibraryMonitorDelay(qint32 newLibraryMonitorDelay);

	/**
	 * @brief Gets or sets the duration in seconds that we will wait after a library updated event before executing the library changed notification.
	 */
	qint32 libraryUpdateDuration() const;
	/**
	* @brief Gets or sets the duration in seconds that we will wait after a library updated event before executing the library changed notification.
	*/
	void setLibraryUpdateDuration(qint32 newLibraryUpdateDuration);


	ImageSavingConvention imageSavingConvention() const;

	void setImageSavingConvention(ImageSavingConvention newImageSavingConvention);


	QList<MetadataOptions> metadataOptions() const;

	void setMetadataOptions(QList<MetadataOptions> newMetadataOptions);


	bool skipDeserializationForBasicTypes() const;

	void setSkipDeserializationForBasicTypes(bool newSkipDeserializationForBasicTypes);


	QString serverName() const;

	void setServerName(QString newServerName);


	QString uICulture() const;

	void setUICulture(QString newUICulture);


	bool saveMetadataHidden() const;

	void setSaveMetadataHidden(bool newSaveMetadataHidden);


	QList<NameValuePair> contentTypes() const;

	void setContentTypes(QList<NameValuePair> newContentTypes);


	qint32 remoteClientBitrateLimit() const;

	void setRemoteClientBitrateLimit(qint32 newRemoteClientBitrateLimit);


	bool enableFolderView() const;

	void setEnableFolderView(bool newEnableFolderView);


	bool enableGroupingIntoCollections() const;

	void setEnableGroupingIntoCollections(bool newEnableGroupingIntoCollections);


	bool displaySpecialsWithinSeasons() const;

	void setDisplaySpecialsWithinSeasons(bool newDisplaySpecialsWithinSeasons);


	QStringList codecsUsed() const;

	void setCodecsUsed(QStringList newCodecsUsed);


	QList<RepositoryInfo> pluginRepositories() const;

	void setPluginRepositories(QList<RepositoryInfo> newPluginRepositories);


	bool enableExternalContentInSuggestions() const;

	void setEnableExternalContentInSuggestions(bool newEnableExternalContentInSuggestions);


	qint32 imageExtractionTimeoutMs() const;

	void setImageExtractionTimeoutMs(qint32 newImageExtractionTimeoutMs);


	QList<PathSubstitution> pathSubstitutions() const;

	void setPathSubstitutions(QList<PathSubstitution> newPathSubstitutions);

	/**
	 * @brief Gets or sets a value indicating whether slow server responses should be logged as a warning.
	 */
	bool enableSlowResponseWarning() const;
	/**
	* @brief Gets or sets a value indicating whether slow server responses should be logged as a warning.
	*/
	void setEnableSlowResponseWarning(bool newEnableSlowResponseWarning);

	/**
	 * @brief Gets or sets the threshold for the slow response time warning in ms.
	 */
	qint64 slowResponseThresholdMs() const;
	/**
	* @brief Gets or sets the threshold for the slow response time warning in ms.
	*/
	void setSlowResponseThresholdMs(qint64 newSlowResponseThresholdMs);

	/**
	 * @brief Gets or sets the cors hosts.
	 */
	QStringList corsHosts() const;
	/**
	* @brief Gets or sets the cors hosts.
	*/
	void setCorsHosts(QStringList newCorsHosts);

	/**
	 * @brief Gets or sets the number of days we should retain activity logs.
	 */
	std::optional<qint32> activityLogRetentionDays() const;
	/**
	* @brief Gets or sets the number of days we should retain activity logs.
	*/
	void setActivityLogRetentionDays(std::optional<qint32> newActivityLogRetentionDays);
	bool activityLogRetentionDaysNull() const;
	void setActivityLogRetentionDaysNull();

	/**
	 * @brief Gets or sets the how the library scan fans out.
	 */
	qint32 libraryScanFanoutConcurrency() const;
	/**
	* @brief Gets or sets the how the library scan fans out.
	*/
	void setLibraryScanFanoutConcurrency(qint32 newLibraryScanFanoutConcurrency);

	/**
	 * @brief Gets or sets the how many metadata refreshes can run concurrently.
	 */
	qint32 libraryMetadataRefreshConcurrency() const;
	/**
	* @brief Gets or sets the how many metadata refreshes can run concurrently.
	*/
	void setLibraryMetadataRefreshConcurrency(qint32 newLibraryMetadataRefreshConcurrency);

	/**
	 * @brief Gets or sets a value indicating whether older plugins should automatically be deleted from the plugin folder.
	 */
	bool removeOldPlugins() const;
	/**
	* @brief Gets or sets a value indicating whether older plugins should automatically be deleted from the plugin folder.
	*/
	void setRemoveOldPlugins(bool newRemoveOldPlugins);

	/**
	 * @brief Gets or sets a value indicating whether clients should be allowed to upload logs.
	 */
	bool allowClientLogUpload() const;
	/**
	* @brief Gets or sets a value indicating whether clients should be allowed to upload logs.
	*/
	void setAllowClientLogUpload(bool newAllowClientLogUpload);

	/**
	 * @brief Gets or sets the dummy chapter duration in seconds, use 0 (zero) or less to disable generation alltogether.
	 */
	qint32 dummyChapterDuration() const;
	/**
	* @brief Gets or sets the dummy chapter duration in seconds, use 0 (zero) or less to disable generation alltogether.
	*/
	void setDummyChapterDuration(qint32 newDummyChapterDuration);


	ImageResolution chapterImageResolution() const;

	void setChapterImageResolution(ImageResolution newChapterImageResolution);

	/**
	 * @brief Gets or sets the limit for parallel image encoding.
	 */
	qint32 parallelImageEncodingLimit() const;
	/**
	* @brief Gets or sets the limit for parallel image encoding.
	*/
	void setParallelImageEncodingLimit(qint32 newParallelImageEncodingLimit);

	/**
	 * @brief Gets or sets the list of cast receiver applications.
	 */
	QList<CastReceiverApplication> castReceiverApplications() const;
	/**
	* @brief Gets or sets the list of cast receiver applications.
	*/
	void setCastReceiverApplications(QList<CastReceiverApplication> newCastReceiverApplications);


	QSharedPointer<TrickplayOptions> trickplayOptions() const;

	void setTrickplayOptions(QSharedPointer<TrickplayOptions> newTrickplayOptions);


protected:
	qint32 m_logFileRetentionDays;
	bool m_isStartupWizardCompleted;
	QString m_cachePath;
	QString m_previousVersion;
	QString m_previousVersionStr;
	bool m_enableMetrics;
	bool m_enableNormalizedItemByNameIds;
	bool m_isPortAuthorized;
	bool m_quickConnectAvailable;
	bool m_enableCaseSensitiveItemIds;
	bool m_disableLiveTvChannelUserDataName;
	QString m_metadataPath;
	QString m_preferredMetadataLanguage;
	QString m_metadataCountryCode;
	QStringList m_sortReplaceCharacters;
	QStringList m_sortRemoveCharacters;
	QStringList m_sortRemoveWords;
	qint32 m_minResumePct;
	qint32 m_maxResumePct;
	qint32 m_minResumeDurationSeconds;
	qint32 m_minAudiobookResume;
	qint32 m_maxAudiobookResume;
	qint32 m_inactiveSessionThreshold;
	qint32 m_libraryMonitorDelay;
	qint32 m_libraryUpdateDuration;
	ImageSavingConvention m_imageSavingConvention;
	QList<MetadataOptions> m_metadataOptions;
	bool m_skipDeserializationForBasicTypes;
	QString m_serverName;
	QString m_uICulture;
	bool m_saveMetadataHidden;
	QList<NameValuePair> m_contentTypes;
	qint32 m_remoteClientBitrateLimit;
	bool m_enableFolderView;
	bool m_enableGroupingIntoCollections;
	bool m_displaySpecialsWithinSeasons;
	QStringList m_codecsUsed;
	QList<RepositoryInfo> m_pluginRepositories;
	bool m_enableExternalContentInSuggestions;
	qint32 m_imageExtractionTimeoutMs;
	QList<PathSubstitution> m_pathSubstitutions;
	bool m_enableSlowResponseWarning;
	qint64 m_slowResponseThresholdMs;
	QStringList m_corsHosts;
	std::optional<qint32> m_activityLogRetentionDays = std::nullopt;
	qint32 m_libraryScanFanoutConcurrency;
	qint32 m_libraryMetadataRefreshConcurrency;
	bool m_removeOldPlugins;
	bool m_allowClientLogUpload;
	qint32 m_dummyChapterDuration;
	ImageResolution m_chapterImageResolution;
	qint32 m_parallelImageEncodingLimit;
	QList<CastReceiverApplication> m_castReceiverApplications;
	QSharedPointer<TrickplayOptions> m_trickplayOptions = QSharedPointer<TrickplayOptions>();

private:
	// Private constructor which generates an invalid object, for use withing ServerConfiguration::fromJson();
	ServerConfiguration();
};


} // NS DTO

namespace Support {

using ServerConfiguration = Jellyfin::DTO::ServerConfiguration;

template <>
ServerConfiguration fromJsonValue(const QJsonValue &source, convertType<ServerConfiguration>);

template<>
QJsonValue toJsonValue(const ServerConfiguration &source, convertType<ServerConfiguration>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SERVERCONFIGURATION_H

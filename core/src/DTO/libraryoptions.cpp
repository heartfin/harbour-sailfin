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

#include <JellyfinQt/DTO/libraryoptions.h>

namespace Jellyfin {
namespace DTO {

LibraryOptions::LibraryOptions(QObject *parent) {}

LibraryOptions LibraryOptions::fromJson(QJsonObject source) {LibraryOptions instance;
	instance->setFromJson(source, false);
	return instance;
}


void LibraryOptions::setFromJson(QJsonObject source) {
	m_enablePhotos = fromJsonValue<bool>(source["EnablePhotos"]);
	m_enableRealtimeMonitor = fromJsonValue<bool>(source["EnableRealtimeMonitor"]);
	m_enableChapterImageExtraction = fromJsonValue<bool>(source["EnableChapterImageExtraction"]);
	m_extractChapterImagesDuringLibraryScan = fromJsonValue<bool>(source["ExtractChapterImagesDuringLibraryScan"]);
	m_pathInfos = fromJsonValue<QList<QSharedPointer<MediaPathInfo>>>(source["PathInfos"]);
	m_saveLocalMetadata = fromJsonValue<bool>(source["SaveLocalMetadata"]);
	m_enableInternetProviders = fromJsonValue<bool>(source["EnableInternetProviders"]);
	m_enableAutomaticSeriesGrouping = fromJsonValue<bool>(source["EnableAutomaticSeriesGrouping"]);
	m_enableEmbeddedTitles = fromJsonValue<bool>(source["EnableEmbeddedTitles"]);
	m_enableEmbeddedEpisodeInfos = fromJsonValue<bool>(source["EnableEmbeddedEpisodeInfos"]);
	m_automaticRefreshIntervalDays = fromJsonValue<qint32>(source["AutomaticRefreshIntervalDays"]);
	m_preferredMetadataLanguage = fromJsonValue<QString>(source["PreferredMetadataLanguage"]);
	m_metadataCountryCode = fromJsonValue<QString>(source["MetadataCountryCode"]);
	m_seasonZeroDisplayName = fromJsonValue<QString>(source["SeasonZeroDisplayName"]);
	m_metadataSavers = fromJsonValue<QStringList>(source["MetadataSavers"]);
	m_disabledLocalMetadataReaders = fromJsonValue<QStringList>(source["DisabledLocalMetadataReaders"]);
	m_localMetadataReaderOrder = fromJsonValue<QStringList>(source["LocalMetadataReaderOrder"]);
	m_disabledSubtitleFetchers = fromJsonValue<QStringList>(source["DisabledSubtitleFetchers"]);
	m_subtitleFetcherOrder = fromJsonValue<QStringList>(source["SubtitleFetcherOrder"]);
	m_skipSubtitlesIfEmbeddedSubtitlesPresent = fromJsonValue<bool>(source["SkipSubtitlesIfEmbeddedSubtitlesPresent"]);
	m_skipSubtitlesIfAudioTrackMatches = fromJsonValue<bool>(source["SkipSubtitlesIfAudioTrackMatches"]);
	m_subtitleDownloadLanguages = fromJsonValue<QStringList>(source["SubtitleDownloadLanguages"]);
	m_requirePerfectSubtitleMatch = fromJsonValue<bool>(source["RequirePerfectSubtitleMatch"]);
	m_saveSubtitlesWithMedia = fromJsonValue<bool>(source["SaveSubtitlesWithMedia"]);
	m_typeOptions = fromJsonValue<QList<QSharedPointer<TypeOptions>>>(source["TypeOptions"]);

}
	
QJsonObject LibraryOptions::toJson() {
	QJsonObject result;
	result["EnablePhotos"] = toJsonValue<bool>(m_enablePhotos);
	result["EnableRealtimeMonitor"] = toJsonValue<bool>(m_enableRealtimeMonitor);
	result["EnableChapterImageExtraction"] = toJsonValue<bool>(m_enableChapterImageExtraction);
	result["ExtractChapterImagesDuringLibraryScan"] = toJsonValue<bool>(m_extractChapterImagesDuringLibraryScan);
	result["PathInfos"] = toJsonValue<QList<QSharedPointer<MediaPathInfo>>>(m_pathInfos);
	result["SaveLocalMetadata"] = toJsonValue<bool>(m_saveLocalMetadata);
	result["EnableInternetProviders"] = toJsonValue<bool>(m_enableInternetProviders);
	result["EnableAutomaticSeriesGrouping"] = toJsonValue<bool>(m_enableAutomaticSeriesGrouping);
	result["EnableEmbeddedTitles"] = toJsonValue<bool>(m_enableEmbeddedTitles);
	result["EnableEmbeddedEpisodeInfos"] = toJsonValue<bool>(m_enableEmbeddedEpisodeInfos);
	result["AutomaticRefreshIntervalDays"] = toJsonValue<qint32>(m_automaticRefreshIntervalDays);
	result["PreferredMetadataLanguage"] = toJsonValue<QString>(m_preferredMetadataLanguage);
	result["MetadataCountryCode"] = toJsonValue<QString>(m_metadataCountryCode);
	result["SeasonZeroDisplayName"] = toJsonValue<QString>(m_seasonZeroDisplayName);
	result["MetadataSavers"] = toJsonValue<QStringList>(m_metadataSavers);
	result["DisabledLocalMetadataReaders"] = toJsonValue<QStringList>(m_disabledLocalMetadataReaders);
	result["LocalMetadataReaderOrder"] = toJsonValue<QStringList>(m_localMetadataReaderOrder);
	result["DisabledSubtitleFetchers"] = toJsonValue<QStringList>(m_disabledSubtitleFetchers);
	result["SubtitleFetcherOrder"] = toJsonValue<QStringList>(m_subtitleFetcherOrder);
	result["SkipSubtitlesIfEmbeddedSubtitlesPresent"] = toJsonValue<bool>(m_skipSubtitlesIfEmbeddedSubtitlesPresent);
	result["SkipSubtitlesIfAudioTrackMatches"] = toJsonValue<bool>(m_skipSubtitlesIfAudioTrackMatches);
	result["SubtitleDownloadLanguages"] = toJsonValue<QStringList>(m_subtitleDownloadLanguages);
	result["RequirePerfectSubtitleMatch"] = toJsonValue<bool>(m_requirePerfectSubtitleMatch);
	result["SaveSubtitlesWithMedia"] = toJsonValue<bool>(m_saveSubtitlesWithMedia);
	result["TypeOptions"] = toJsonValue<QList<QSharedPointer<TypeOptions>>>(m_typeOptions);

	return result;
}

bool LibraryOptions::enablePhotos() const { return m_enablePhotos; }

void LibraryOptions::setEnablePhotos(bool newEnablePhotos) {
	m_enablePhotos = newEnablePhotos;
}
bool LibraryOptions::enableRealtimeMonitor() const { return m_enableRealtimeMonitor; }

void LibraryOptions::setEnableRealtimeMonitor(bool newEnableRealtimeMonitor) {
	m_enableRealtimeMonitor = newEnableRealtimeMonitor;
}
bool LibraryOptions::enableChapterImageExtraction() const { return m_enableChapterImageExtraction; }

void LibraryOptions::setEnableChapterImageExtraction(bool newEnableChapterImageExtraction) {
	m_enableChapterImageExtraction = newEnableChapterImageExtraction;
}
bool LibraryOptions::extractChapterImagesDuringLibraryScan() const { return m_extractChapterImagesDuringLibraryScan; }

void LibraryOptions::setExtractChapterImagesDuringLibraryScan(bool newExtractChapterImagesDuringLibraryScan) {
	m_extractChapterImagesDuringLibraryScan = newExtractChapterImagesDuringLibraryScan;
}
QList<QSharedPointer<MediaPathInfo>> LibraryOptions::pathInfos() const { return m_pathInfos; }

void LibraryOptions::setPathInfos(QList<QSharedPointer<MediaPathInfo>> newPathInfos) {
	m_pathInfos = newPathInfos;
}
bool LibraryOptions::saveLocalMetadata() const { return m_saveLocalMetadata; }

void LibraryOptions::setSaveLocalMetadata(bool newSaveLocalMetadata) {
	m_saveLocalMetadata = newSaveLocalMetadata;
}
bool LibraryOptions::enableInternetProviders() const { return m_enableInternetProviders; }

void LibraryOptions::setEnableInternetProviders(bool newEnableInternetProviders) {
	m_enableInternetProviders = newEnableInternetProviders;
}
bool LibraryOptions::enableAutomaticSeriesGrouping() const { return m_enableAutomaticSeriesGrouping; }

void LibraryOptions::setEnableAutomaticSeriesGrouping(bool newEnableAutomaticSeriesGrouping) {
	m_enableAutomaticSeriesGrouping = newEnableAutomaticSeriesGrouping;
}
bool LibraryOptions::enableEmbeddedTitles() const { return m_enableEmbeddedTitles; }

void LibraryOptions::setEnableEmbeddedTitles(bool newEnableEmbeddedTitles) {
	m_enableEmbeddedTitles = newEnableEmbeddedTitles;
}
bool LibraryOptions::enableEmbeddedEpisodeInfos() const { return m_enableEmbeddedEpisodeInfos; }

void LibraryOptions::setEnableEmbeddedEpisodeInfos(bool newEnableEmbeddedEpisodeInfos) {
	m_enableEmbeddedEpisodeInfos = newEnableEmbeddedEpisodeInfos;
}
qint32 LibraryOptions::automaticRefreshIntervalDays() const { return m_automaticRefreshIntervalDays; }

void LibraryOptions::setAutomaticRefreshIntervalDays(qint32 newAutomaticRefreshIntervalDays) {
	m_automaticRefreshIntervalDays = newAutomaticRefreshIntervalDays;
}
QString LibraryOptions::preferredMetadataLanguage() const { return m_preferredMetadataLanguage; }

void LibraryOptions::setPreferredMetadataLanguage(QString newPreferredMetadataLanguage) {
	m_preferredMetadataLanguage = newPreferredMetadataLanguage;
}
QString LibraryOptions::metadataCountryCode() const { return m_metadataCountryCode; }

void LibraryOptions::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
QString LibraryOptions::seasonZeroDisplayName() const { return m_seasonZeroDisplayName; }

void LibraryOptions::setSeasonZeroDisplayName(QString newSeasonZeroDisplayName) {
	m_seasonZeroDisplayName = newSeasonZeroDisplayName;
}
QStringList LibraryOptions::metadataSavers() const { return m_metadataSavers; }

void LibraryOptions::setMetadataSavers(QStringList newMetadataSavers) {
	m_metadataSavers = newMetadataSavers;
}
QStringList LibraryOptions::disabledLocalMetadataReaders() const { return m_disabledLocalMetadataReaders; }

void LibraryOptions::setDisabledLocalMetadataReaders(QStringList newDisabledLocalMetadataReaders) {
	m_disabledLocalMetadataReaders = newDisabledLocalMetadataReaders;
}
QStringList LibraryOptions::localMetadataReaderOrder() const { return m_localMetadataReaderOrder; }

void LibraryOptions::setLocalMetadataReaderOrder(QStringList newLocalMetadataReaderOrder) {
	m_localMetadataReaderOrder = newLocalMetadataReaderOrder;
}
QStringList LibraryOptions::disabledSubtitleFetchers() const { return m_disabledSubtitleFetchers; }

void LibraryOptions::setDisabledSubtitleFetchers(QStringList newDisabledSubtitleFetchers) {
	m_disabledSubtitleFetchers = newDisabledSubtitleFetchers;
}
QStringList LibraryOptions::subtitleFetcherOrder() const { return m_subtitleFetcherOrder; }

void LibraryOptions::setSubtitleFetcherOrder(QStringList newSubtitleFetcherOrder) {
	m_subtitleFetcherOrder = newSubtitleFetcherOrder;
}
bool LibraryOptions::skipSubtitlesIfEmbeddedSubtitlesPresent() const { return m_skipSubtitlesIfEmbeddedSubtitlesPresent; }

void LibraryOptions::setSkipSubtitlesIfEmbeddedSubtitlesPresent(bool newSkipSubtitlesIfEmbeddedSubtitlesPresent) {
	m_skipSubtitlesIfEmbeddedSubtitlesPresent = newSkipSubtitlesIfEmbeddedSubtitlesPresent;
}
bool LibraryOptions::skipSubtitlesIfAudioTrackMatches() const { return m_skipSubtitlesIfAudioTrackMatches; }

void LibraryOptions::setSkipSubtitlesIfAudioTrackMatches(bool newSkipSubtitlesIfAudioTrackMatches) {
	m_skipSubtitlesIfAudioTrackMatches = newSkipSubtitlesIfAudioTrackMatches;
}
QStringList LibraryOptions::subtitleDownloadLanguages() const { return m_subtitleDownloadLanguages; }

void LibraryOptions::setSubtitleDownloadLanguages(QStringList newSubtitleDownloadLanguages) {
	m_subtitleDownloadLanguages = newSubtitleDownloadLanguages;
}
bool LibraryOptions::requirePerfectSubtitleMatch() const { return m_requirePerfectSubtitleMatch; }

void LibraryOptions::setRequirePerfectSubtitleMatch(bool newRequirePerfectSubtitleMatch) {
	m_requirePerfectSubtitleMatch = newRequirePerfectSubtitleMatch;
}
bool LibraryOptions::saveSubtitlesWithMedia() const { return m_saveSubtitlesWithMedia; }

void LibraryOptions::setSaveSubtitlesWithMedia(bool newSaveSubtitlesWithMedia) {
	m_saveSubtitlesWithMedia = newSaveSubtitlesWithMedia;
}
QList<QSharedPointer<TypeOptions>> LibraryOptions::typeOptions() const { return m_typeOptions; }

void LibraryOptions::setTypeOptions(QList<QSharedPointer<TypeOptions>> newTypeOptions) {
	m_typeOptions = newTypeOptions;
}


} // NS Jellyfin
} // NS DTO

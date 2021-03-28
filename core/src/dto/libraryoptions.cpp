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

#include <JellyfinQt/dto/libraryoptions.h>

namespace Jellyfin {
namespace DTO {

LibraryOptions::LibraryOptions() {}

LibraryOptions::LibraryOptions(const LibraryOptions &other) :

	m_enablePhotos(other.m_enablePhotos),
	m_enableRealtimeMonitor(other.m_enableRealtimeMonitor),
	m_enableChapterImageExtraction(other.m_enableChapterImageExtraction),
	m_extractChapterImagesDuringLibraryScan(other.m_extractChapterImagesDuringLibraryScan),
	m_pathInfos(other.m_pathInfos),
	m_saveLocalMetadata(other.m_saveLocalMetadata),
	m_enableInternetProviders(other.m_enableInternetProviders),
	m_enableAutomaticSeriesGrouping(other.m_enableAutomaticSeriesGrouping),
	m_enableEmbeddedTitles(other.m_enableEmbeddedTitles),
	m_enableEmbeddedEpisodeInfos(other.m_enableEmbeddedEpisodeInfos),
	m_automaticRefreshIntervalDays(other.m_automaticRefreshIntervalDays),
	m_preferredMetadataLanguage(other.m_preferredMetadataLanguage),
	m_metadataCountryCode(other.m_metadataCountryCode),
	m_seasonZeroDisplayName(other.m_seasonZeroDisplayName),
	m_metadataSavers(other.m_metadataSavers),
	m_disabledLocalMetadataReaders(other.m_disabledLocalMetadataReaders),
	m_localMetadataReaderOrder(other.m_localMetadataReaderOrder),
	m_disabledSubtitleFetchers(other.m_disabledSubtitleFetchers),
	m_subtitleFetcherOrder(other.m_subtitleFetcherOrder),
	m_skipSubtitlesIfEmbeddedSubtitlesPresent(other.m_skipSubtitlesIfEmbeddedSubtitlesPresent),
	m_skipSubtitlesIfAudioTrackMatches(other.m_skipSubtitlesIfAudioTrackMatches),
	m_subtitleDownloadLanguages(other.m_subtitleDownloadLanguages),
	m_requirePerfectSubtitleMatch(other.m_requirePerfectSubtitleMatch),
	m_saveSubtitlesWithMedia(other.m_saveSubtitlesWithMedia),
	m_typeOptions(other.m_typeOptions){}


void LibraryOptions::replaceData(LibraryOptions &other) {
	m_enablePhotos = other.m_enablePhotos;
	m_enableRealtimeMonitor = other.m_enableRealtimeMonitor;
	m_enableChapterImageExtraction = other.m_enableChapterImageExtraction;
	m_extractChapterImagesDuringLibraryScan = other.m_extractChapterImagesDuringLibraryScan;
	m_pathInfos = other.m_pathInfos;
	m_saveLocalMetadata = other.m_saveLocalMetadata;
	m_enableInternetProviders = other.m_enableInternetProviders;
	m_enableAutomaticSeriesGrouping = other.m_enableAutomaticSeriesGrouping;
	m_enableEmbeddedTitles = other.m_enableEmbeddedTitles;
	m_enableEmbeddedEpisodeInfos = other.m_enableEmbeddedEpisodeInfos;
	m_automaticRefreshIntervalDays = other.m_automaticRefreshIntervalDays;
	m_preferredMetadataLanguage = other.m_preferredMetadataLanguage;
	m_metadataCountryCode = other.m_metadataCountryCode;
	m_seasonZeroDisplayName = other.m_seasonZeroDisplayName;
	m_metadataSavers = other.m_metadataSavers;
	m_disabledLocalMetadataReaders = other.m_disabledLocalMetadataReaders;
	m_localMetadataReaderOrder = other.m_localMetadataReaderOrder;
	m_disabledSubtitleFetchers = other.m_disabledSubtitleFetchers;
	m_subtitleFetcherOrder = other.m_subtitleFetcherOrder;
	m_skipSubtitlesIfEmbeddedSubtitlesPresent = other.m_skipSubtitlesIfEmbeddedSubtitlesPresent;
	m_skipSubtitlesIfAudioTrackMatches = other.m_skipSubtitlesIfAudioTrackMatches;
	m_subtitleDownloadLanguages = other.m_subtitleDownloadLanguages;
	m_requirePerfectSubtitleMatch = other.m_requirePerfectSubtitleMatch;
	m_saveSubtitlesWithMedia = other.m_saveSubtitlesWithMedia;
	m_typeOptions = other.m_typeOptions;
}

LibraryOptions LibraryOptions::fromJson(QJsonObject source) {
	LibraryOptions instance;
	instance.setFromJson(source);
	return instance;
}


void LibraryOptions::setFromJson(QJsonObject source) {
	m_enablePhotos = Jellyfin::Support::fromJsonValue<bool>(source["EnablePhotos"]);
	m_enableRealtimeMonitor = Jellyfin::Support::fromJsonValue<bool>(source["EnableRealtimeMonitor"]);
	m_enableChapterImageExtraction = Jellyfin::Support::fromJsonValue<bool>(source["EnableChapterImageExtraction"]);
	m_extractChapterImagesDuringLibraryScan = Jellyfin::Support::fromJsonValue<bool>(source["ExtractChapterImagesDuringLibraryScan"]);
	m_pathInfos = Jellyfin::Support::fromJsonValue<QList<MediaPathInfo>>(source["PathInfos"]);
	m_saveLocalMetadata = Jellyfin::Support::fromJsonValue<bool>(source["SaveLocalMetadata"]);
	m_enableInternetProviders = Jellyfin::Support::fromJsonValue<bool>(source["EnableInternetProviders"]);
	m_enableAutomaticSeriesGrouping = Jellyfin::Support::fromJsonValue<bool>(source["EnableAutomaticSeriesGrouping"]);
	m_enableEmbeddedTitles = Jellyfin::Support::fromJsonValue<bool>(source["EnableEmbeddedTitles"]);
	m_enableEmbeddedEpisodeInfos = Jellyfin::Support::fromJsonValue<bool>(source["EnableEmbeddedEpisodeInfos"]);
	m_automaticRefreshIntervalDays = Jellyfin::Support::fromJsonValue<qint32>(source["AutomaticRefreshIntervalDays"]);
	m_preferredMetadataLanguage = Jellyfin::Support::fromJsonValue<QString>(source["PreferredMetadataLanguage"]);
	m_metadataCountryCode = Jellyfin::Support::fromJsonValue<QString>(source["MetadataCountryCode"]);
	m_seasonZeroDisplayName = Jellyfin::Support::fromJsonValue<QString>(source["SeasonZeroDisplayName"]);
	m_metadataSavers = Jellyfin::Support::fromJsonValue<QStringList>(source["MetadataSavers"]);
	m_disabledLocalMetadataReaders = Jellyfin::Support::fromJsonValue<QStringList>(source["DisabledLocalMetadataReaders"]);
	m_localMetadataReaderOrder = Jellyfin::Support::fromJsonValue<QStringList>(source["LocalMetadataReaderOrder"]);
	m_disabledSubtitleFetchers = Jellyfin::Support::fromJsonValue<QStringList>(source["DisabledSubtitleFetchers"]);
	m_subtitleFetcherOrder = Jellyfin::Support::fromJsonValue<QStringList>(source["SubtitleFetcherOrder"]);
	m_skipSubtitlesIfEmbeddedSubtitlesPresent = Jellyfin::Support::fromJsonValue<bool>(source["SkipSubtitlesIfEmbeddedSubtitlesPresent"]);
	m_skipSubtitlesIfAudioTrackMatches = Jellyfin::Support::fromJsonValue<bool>(source["SkipSubtitlesIfAudioTrackMatches"]);
	m_subtitleDownloadLanguages = Jellyfin::Support::fromJsonValue<QStringList>(source["SubtitleDownloadLanguages"]);
	m_requirePerfectSubtitleMatch = Jellyfin::Support::fromJsonValue<bool>(source["RequirePerfectSubtitleMatch"]);
	m_saveSubtitlesWithMedia = Jellyfin::Support::fromJsonValue<bool>(source["SaveSubtitlesWithMedia"]);
	m_typeOptions = Jellyfin::Support::fromJsonValue<QList<TypeOptions>>(source["TypeOptions"]);

}
	
QJsonObject LibraryOptions::toJson() const {
	QJsonObject result;
	result["EnablePhotos"] = Jellyfin::Support::toJsonValue<bool>(m_enablePhotos);
	result["EnableRealtimeMonitor"] = Jellyfin::Support::toJsonValue<bool>(m_enableRealtimeMonitor);
	result["EnableChapterImageExtraction"] = Jellyfin::Support::toJsonValue<bool>(m_enableChapterImageExtraction);
	result["ExtractChapterImagesDuringLibraryScan"] = Jellyfin::Support::toJsonValue<bool>(m_extractChapterImagesDuringLibraryScan);
	result["PathInfos"] = Jellyfin::Support::toJsonValue<QList<MediaPathInfo>>(m_pathInfos);
	result["SaveLocalMetadata"] = Jellyfin::Support::toJsonValue<bool>(m_saveLocalMetadata);
	result["EnableInternetProviders"] = Jellyfin::Support::toJsonValue<bool>(m_enableInternetProviders);
	result["EnableAutomaticSeriesGrouping"] = Jellyfin::Support::toJsonValue<bool>(m_enableAutomaticSeriesGrouping);
	result["EnableEmbeddedTitles"] = Jellyfin::Support::toJsonValue<bool>(m_enableEmbeddedTitles);
	result["EnableEmbeddedEpisodeInfos"] = Jellyfin::Support::toJsonValue<bool>(m_enableEmbeddedEpisodeInfos);
	result["AutomaticRefreshIntervalDays"] = Jellyfin::Support::toJsonValue<qint32>(m_automaticRefreshIntervalDays);
	result["PreferredMetadataLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_preferredMetadataLanguage);
	result["MetadataCountryCode"] = Jellyfin::Support::toJsonValue<QString>(m_metadataCountryCode);
	result["SeasonZeroDisplayName"] = Jellyfin::Support::toJsonValue<QString>(m_seasonZeroDisplayName);
	result["MetadataSavers"] = Jellyfin::Support::toJsonValue<QStringList>(m_metadataSavers);
	result["DisabledLocalMetadataReaders"] = Jellyfin::Support::toJsonValue<QStringList>(m_disabledLocalMetadataReaders);
	result["LocalMetadataReaderOrder"] = Jellyfin::Support::toJsonValue<QStringList>(m_localMetadataReaderOrder);
	result["DisabledSubtitleFetchers"] = Jellyfin::Support::toJsonValue<QStringList>(m_disabledSubtitleFetchers);
	result["SubtitleFetcherOrder"] = Jellyfin::Support::toJsonValue<QStringList>(m_subtitleFetcherOrder);
	result["SkipSubtitlesIfEmbeddedSubtitlesPresent"] = Jellyfin::Support::toJsonValue<bool>(m_skipSubtitlesIfEmbeddedSubtitlesPresent);
	result["SkipSubtitlesIfAudioTrackMatches"] = Jellyfin::Support::toJsonValue<bool>(m_skipSubtitlesIfAudioTrackMatches);
	result["SubtitleDownloadLanguages"] = Jellyfin::Support::toJsonValue<QStringList>(m_subtitleDownloadLanguages);
	result["RequirePerfectSubtitleMatch"] = Jellyfin::Support::toJsonValue<bool>(m_requirePerfectSubtitleMatch);
	result["SaveSubtitlesWithMedia"] = Jellyfin::Support::toJsonValue<bool>(m_saveSubtitlesWithMedia);
	result["TypeOptions"] = Jellyfin::Support::toJsonValue<QList<TypeOptions>>(m_typeOptions);

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

QList<MediaPathInfo> LibraryOptions::pathInfos() const { return m_pathInfos; }

void LibraryOptions::setPathInfos(QList<MediaPathInfo> newPathInfos) {
	m_pathInfos = newPathInfos;
}
bool LibraryOptions::pathInfosNull() const {
	return m_pathInfos.size() == 0;
}

void LibraryOptions::setPathInfosNull() {
	m_pathInfos.clear();

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
bool LibraryOptions::preferredMetadataLanguageNull() const {
	return m_preferredMetadataLanguage.isNull();
}

void LibraryOptions::setPreferredMetadataLanguageNull() {
	m_preferredMetadataLanguage.clear();

}
QString LibraryOptions::metadataCountryCode() const { return m_metadataCountryCode; }

void LibraryOptions::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
}
bool LibraryOptions::metadataCountryCodeNull() const {
	return m_metadataCountryCode.isNull();
}

void LibraryOptions::setMetadataCountryCodeNull() {
	m_metadataCountryCode.clear();

}
QString LibraryOptions::seasonZeroDisplayName() const { return m_seasonZeroDisplayName; }

void LibraryOptions::setSeasonZeroDisplayName(QString newSeasonZeroDisplayName) {
	m_seasonZeroDisplayName = newSeasonZeroDisplayName;
}
bool LibraryOptions::seasonZeroDisplayNameNull() const {
	return m_seasonZeroDisplayName.isNull();
}

void LibraryOptions::setSeasonZeroDisplayNameNull() {
	m_seasonZeroDisplayName.clear();

}
QStringList LibraryOptions::metadataSavers() const { return m_metadataSavers; }

void LibraryOptions::setMetadataSavers(QStringList newMetadataSavers) {
	m_metadataSavers = newMetadataSavers;
}
bool LibraryOptions::metadataSaversNull() const {
	return m_metadataSavers.size() == 0;
}

void LibraryOptions::setMetadataSaversNull() {
	m_metadataSavers.clear();

}
QStringList LibraryOptions::disabledLocalMetadataReaders() const { return m_disabledLocalMetadataReaders; }

void LibraryOptions::setDisabledLocalMetadataReaders(QStringList newDisabledLocalMetadataReaders) {
	m_disabledLocalMetadataReaders = newDisabledLocalMetadataReaders;
}
bool LibraryOptions::disabledLocalMetadataReadersNull() const {
	return m_disabledLocalMetadataReaders.size() == 0;
}

void LibraryOptions::setDisabledLocalMetadataReadersNull() {
	m_disabledLocalMetadataReaders.clear();

}
QStringList LibraryOptions::localMetadataReaderOrder() const { return m_localMetadataReaderOrder; }

void LibraryOptions::setLocalMetadataReaderOrder(QStringList newLocalMetadataReaderOrder) {
	m_localMetadataReaderOrder = newLocalMetadataReaderOrder;
}
bool LibraryOptions::localMetadataReaderOrderNull() const {
	return m_localMetadataReaderOrder.size() == 0;
}

void LibraryOptions::setLocalMetadataReaderOrderNull() {
	m_localMetadataReaderOrder.clear();

}
QStringList LibraryOptions::disabledSubtitleFetchers() const { return m_disabledSubtitleFetchers; }

void LibraryOptions::setDisabledSubtitleFetchers(QStringList newDisabledSubtitleFetchers) {
	m_disabledSubtitleFetchers = newDisabledSubtitleFetchers;
}
bool LibraryOptions::disabledSubtitleFetchersNull() const {
	return m_disabledSubtitleFetchers.size() == 0;
}

void LibraryOptions::setDisabledSubtitleFetchersNull() {
	m_disabledSubtitleFetchers.clear();

}
QStringList LibraryOptions::subtitleFetcherOrder() const { return m_subtitleFetcherOrder; }

void LibraryOptions::setSubtitleFetcherOrder(QStringList newSubtitleFetcherOrder) {
	m_subtitleFetcherOrder = newSubtitleFetcherOrder;
}
bool LibraryOptions::subtitleFetcherOrderNull() const {
	return m_subtitleFetcherOrder.size() == 0;
}

void LibraryOptions::setSubtitleFetcherOrderNull() {
	m_subtitleFetcherOrder.clear();

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
bool LibraryOptions::subtitleDownloadLanguagesNull() const {
	return m_subtitleDownloadLanguages.size() == 0;
}

void LibraryOptions::setSubtitleDownloadLanguagesNull() {
	m_subtitleDownloadLanguages.clear();

}
bool LibraryOptions::requirePerfectSubtitleMatch() const { return m_requirePerfectSubtitleMatch; }

void LibraryOptions::setRequirePerfectSubtitleMatch(bool newRequirePerfectSubtitleMatch) {
	m_requirePerfectSubtitleMatch = newRequirePerfectSubtitleMatch;
}

bool LibraryOptions::saveSubtitlesWithMedia() const { return m_saveSubtitlesWithMedia; }

void LibraryOptions::setSaveSubtitlesWithMedia(bool newSaveSubtitlesWithMedia) {
	m_saveSubtitlesWithMedia = newSaveSubtitlesWithMedia;
}

QList<TypeOptions> LibraryOptions::typeOptions() const { return m_typeOptions; }

void LibraryOptions::setTypeOptions(QList<TypeOptions> newTypeOptions) {
	m_typeOptions = newTypeOptions;
}
bool LibraryOptions::typeOptionsNull() const {
	return m_typeOptions.size() == 0;
}

void LibraryOptions::setTypeOptionsNull() {
	m_typeOptions.clear();

}

} // NS DTO

namespace Support {

using LibraryOptions = Jellyfin::DTO::LibraryOptions;

template <>
LibraryOptions fromJsonValue(const QJsonValue &source, convertType<LibraryOptions>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return LibraryOptions::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const LibraryOptions &source, convertType<LibraryOptions>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

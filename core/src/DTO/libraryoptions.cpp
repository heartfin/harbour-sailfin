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

LibraryOptions::LibraryOptions(QObject *parent) : QObject(parent) {}

LibraryOptions *LibraryOptions::fromJSON(QJsonObject source, QObject *parent) {
	LibraryOptions *instance = new LibraryOptions(parent);
	instance->updateFromJSON(source);
	return instance;
}

void LibraryOptions::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject LibraryOptions::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
bool LibraryOptions::enablePhotos() const { return m_enablePhotos; }
void LibraryOptions::setEnablePhotos(bool newEnablePhotos) {
	m_enablePhotos = newEnablePhotos;
	emit enablePhotosChanged(newEnablePhotos);
}

bool LibraryOptions::enableRealtimeMonitor() const { return m_enableRealtimeMonitor; }
void LibraryOptions::setEnableRealtimeMonitor(bool newEnableRealtimeMonitor) {
	m_enableRealtimeMonitor = newEnableRealtimeMonitor;
	emit enableRealtimeMonitorChanged(newEnableRealtimeMonitor);
}

bool LibraryOptions::enableChapterImageExtraction() const { return m_enableChapterImageExtraction; }
void LibraryOptions::setEnableChapterImageExtraction(bool newEnableChapterImageExtraction) {
	m_enableChapterImageExtraction = newEnableChapterImageExtraction;
	emit enableChapterImageExtractionChanged(newEnableChapterImageExtraction);
}

bool LibraryOptions::extractChapterImagesDuringLibraryScan() const { return m_extractChapterImagesDuringLibraryScan; }
void LibraryOptions::setExtractChapterImagesDuringLibraryScan(bool newExtractChapterImagesDuringLibraryScan) {
	m_extractChapterImagesDuringLibraryScan = newExtractChapterImagesDuringLibraryScan;
	emit extractChapterImagesDuringLibraryScanChanged(newExtractChapterImagesDuringLibraryScan);
}

QList<MediaPathInfo *> LibraryOptions::pathInfos() const { return m_pathInfos; }
void LibraryOptions::setPathInfos(QList<MediaPathInfo *> newPathInfos) {
	m_pathInfos = newPathInfos;
	emit pathInfosChanged(newPathInfos);
}

bool LibraryOptions::saveLocalMetadata() const { return m_saveLocalMetadata; }
void LibraryOptions::setSaveLocalMetadata(bool newSaveLocalMetadata) {
	m_saveLocalMetadata = newSaveLocalMetadata;
	emit saveLocalMetadataChanged(newSaveLocalMetadata);
}

bool LibraryOptions::enableInternetProviders() const { return m_enableInternetProviders; }
void LibraryOptions::setEnableInternetProviders(bool newEnableInternetProviders) {
	m_enableInternetProviders = newEnableInternetProviders;
	emit enableInternetProvidersChanged(newEnableInternetProviders);
}

bool LibraryOptions::enableAutomaticSeriesGrouping() const { return m_enableAutomaticSeriesGrouping; }
void LibraryOptions::setEnableAutomaticSeriesGrouping(bool newEnableAutomaticSeriesGrouping) {
	m_enableAutomaticSeriesGrouping = newEnableAutomaticSeriesGrouping;
	emit enableAutomaticSeriesGroupingChanged(newEnableAutomaticSeriesGrouping);
}

bool LibraryOptions::enableEmbeddedTitles() const { return m_enableEmbeddedTitles; }
void LibraryOptions::setEnableEmbeddedTitles(bool newEnableEmbeddedTitles) {
	m_enableEmbeddedTitles = newEnableEmbeddedTitles;
	emit enableEmbeddedTitlesChanged(newEnableEmbeddedTitles);
}

bool LibraryOptions::enableEmbeddedEpisodeInfos() const { return m_enableEmbeddedEpisodeInfos; }
void LibraryOptions::setEnableEmbeddedEpisodeInfos(bool newEnableEmbeddedEpisodeInfos) {
	m_enableEmbeddedEpisodeInfos = newEnableEmbeddedEpisodeInfos;
	emit enableEmbeddedEpisodeInfosChanged(newEnableEmbeddedEpisodeInfos);
}

qint32 LibraryOptions::automaticRefreshIntervalDays() const { return m_automaticRefreshIntervalDays; }
void LibraryOptions::setAutomaticRefreshIntervalDays(qint32 newAutomaticRefreshIntervalDays) {
	m_automaticRefreshIntervalDays = newAutomaticRefreshIntervalDays;
	emit automaticRefreshIntervalDaysChanged(newAutomaticRefreshIntervalDays);
}

QString LibraryOptions::preferredMetadataLanguage() const { return m_preferredMetadataLanguage; }
void LibraryOptions::setPreferredMetadataLanguage(QString newPreferredMetadataLanguage) {
	m_preferredMetadataLanguage = newPreferredMetadataLanguage;
	emit preferredMetadataLanguageChanged(newPreferredMetadataLanguage);
}

QString LibraryOptions::metadataCountryCode() const { return m_metadataCountryCode; }
void LibraryOptions::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
	emit metadataCountryCodeChanged(newMetadataCountryCode);
}

QString LibraryOptions::seasonZeroDisplayName() const { return m_seasonZeroDisplayName; }
void LibraryOptions::setSeasonZeroDisplayName(QString newSeasonZeroDisplayName) {
	m_seasonZeroDisplayName = newSeasonZeroDisplayName;
	emit seasonZeroDisplayNameChanged(newSeasonZeroDisplayName);
}

QStringList LibraryOptions::metadataSavers() const { return m_metadataSavers; }
void LibraryOptions::setMetadataSavers(QStringList newMetadataSavers) {
	m_metadataSavers = newMetadataSavers;
	emit metadataSaversChanged(newMetadataSavers);
}

QStringList LibraryOptions::disabledLocalMetadataReaders() const { return m_disabledLocalMetadataReaders; }
void LibraryOptions::setDisabledLocalMetadataReaders(QStringList newDisabledLocalMetadataReaders) {
	m_disabledLocalMetadataReaders = newDisabledLocalMetadataReaders;
	emit disabledLocalMetadataReadersChanged(newDisabledLocalMetadataReaders);
}

QStringList LibraryOptions::localMetadataReaderOrder() const { return m_localMetadataReaderOrder; }
void LibraryOptions::setLocalMetadataReaderOrder(QStringList newLocalMetadataReaderOrder) {
	m_localMetadataReaderOrder = newLocalMetadataReaderOrder;
	emit localMetadataReaderOrderChanged(newLocalMetadataReaderOrder);
}

QStringList LibraryOptions::disabledSubtitleFetchers() const { return m_disabledSubtitleFetchers; }
void LibraryOptions::setDisabledSubtitleFetchers(QStringList newDisabledSubtitleFetchers) {
	m_disabledSubtitleFetchers = newDisabledSubtitleFetchers;
	emit disabledSubtitleFetchersChanged(newDisabledSubtitleFetchers);
}

QStringList LibraryOptions::subtitleFetcherOrder() const { return m_subtitleFetcherOrder; }
void LibraryOptions::setSubtitleFetcherOrder(QStringList newSubtitleFetcherOrder) {
	m_subtitleFetcherOrder = newSubtitleFetcherOrder;
	emit subtitleFetcherOrderChanged(newSubtitleFetcherOrder);
}

bool LibraryOptions::skipSubtitlesIfEmbeddedSubtitlesPresent() const { return m_skipSubtitlesIfEmbeddedSubtitlesPresent; }
void LibraryOptions::setSkipSubtitlesIfEmbeddedSubtitlesPresent(bool newSkipSubtitlesIfEmbeddedSubtitlesPresent) {
	m_skipSubtitlesIfEmbeddedSubtitlesPresent = newSkipSubtitlesIfEmbeddedSubtitlesPresent;
	emit skipSubtitlesIfEmbeddedSubtitlesPresentChanged(newSkipSubtitlesIfEmbeddedSubtitlesPresent);
}

bool LibraryOptions::skipSubtitlesIfAudioTrackMatches() const { return m_skipSubtitlesIfAudioTrackMatches; }
void LibraryOptions::setSkipSubtitlesIfAudioTrackMatches(bool newSkipSubtitlesIfAudioTrackMatches) {
	m_skipSubtitlesIfAudioTrackMatches = newSkipSubtitlesIfAudioTrackMatches;
	emit skipSubtitlesIfAudioTrackMatchesChanged(newSkipSubtitlesIfAudioTrackMatches);
}

QStringList LibraryOptions::subtitleDownloadLanguages() const { return m_subtitleDownloadLanguages; }
void LibraryOptions::setSubtitleDownloadLanguages(QStringList newSubtitleDownloadLanguages) {
	m_subtitleDownloadLanguages = newSubtitleDownloadLanguages;
	emit subtitleDownloadLanguagesChanged(newSubtitleDownloadLanguages);
}

bool LibraryOptions::requirePerfectSubtitleMatch() const { return m_requirePerfectSubtitleMatch; }
void LibraryOptions::setRequirePerfectSubtitleMatch(bool newRequirePerfectSubtitleMatch) {
	m_requirePerfectSubtitleMatch = newRequirePerfectSubtitleMatch;
	emit requirePerfectSubtitleMatchChanged(newRequirePerfectSubtitleMatch);
}

bool LibraryOptions::saveSubtitlesWithMedia() const { return m_saveSubtitlesWithMedia; }
void LibraryOptions::setSaveSubtitlesWithMedia(bool newSaveSubtitlesWithMedia) {
	m_saveSubtitlesWithMedia = newSaveSubtitlesWithMedia;
	emit saveSubtitlesWithMediaChanged(newSaveSubtitlesWithMedia);
}

QList<TypeOptions *> LibraryOptions::typeOptions() const { return m_typeOptions; }
void LibraryOptions::setTypeOptions(QList<TypeOptions *> newTypeOptions) {
	m_typeOptions = newTypeOptions;
	emit typeOptionsChanged(newTypeOptions);
}


} // NS Jellyfin
} // NS DTO

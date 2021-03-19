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

#ifndef JELLYFIN_DTO_LIBRARYOPTIONS_H
#define JELLYFIN_DTO_LIBRARYOPTIONS_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class MediaPathInfo;
class TypeOptions;

class LibraryOptions : public QObject {
	Q_OBJECT
public:
	explicit LibraryOptions(QObject *parent = nullptr);
	static LibraryOptions *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(bool enablePhotos READ enablePhotos WRITE setEnablePhotos NOTIFY enablePhotosChanged)
	Q_PROPERTY(bool enableRealtimeMonitor READ enableRealtimeMonitor WRITE setEnableRealtimeMonitor NOTIFY enableRealtimeMonitorChanged)
	Q_PROPERTY(bool enableChapterImageExtraction READ enableChapterImageExtraction WRITE setEnableChapterImageExtraction NOTIFY enableChapterImageExtractionChanged)
	Q_PROPERTY(bool extractChapterImagesDuringLibraryScan READ extractChapterImagesDuringLibraryScan WRITE setExtractChapterImagesDuringLibraryScan NOTIFY extractChapterImagesDuringLibraryScanChanged)
	Q_PROPERTY(QList<MediaPathInfo *> pathInfos READ pathInfos WRITE setPathInfos NOTIFY pathInfosChanged)
	Q_PROPERTY(bool saveLocalMetadata READ saveLocalMetadata WRITE setSaveLocalMetadata NOTIFY saveLocalMetadataChanged)
	Q_PROPERTY(bool enableInternetProviders READ enableInternetProviders WRITE setEnableInternetProviders NOTIFY enableInternetProvidersChanged)
	Q_PROPERTY(bool enableAutomaticSeriesGrouping READ enableAutomaticSeriesGrouping WRITE setEnableAutomaticSeriesGrouping NOTIFY enableAutomaticSeriesGroupingChanged)
	Q_PROPERTY(bool enableEmbeddedTitles READ enableEmbeddedTitles WRITE setEnableEmbeddedTitles NOTIFY enableEmbeddedTitlesChanged)
	Q_PROPERTY(bool enableEmbeddedEpisodeInfos READ enableEmbeddedEpisodeInfos WRITE setEnableEmbeddedEpisodeInfos NOTIFY enableEmbeddedEpisodeInfosChanged)
	Q_PROPERTY(qint32 automaticRefreshIntervalDays READ automaticRefreshIntervalDays WRITE setAutomaticRefreshIntervalDays NOTIFY automaticRefreshIntervalDaysChanged)
	/**
	 * @brief Gets or sets the preferred metadata language.
	 */
	Q_PROPERTY(QString preferredMetadataLanguage READ preferredMetadataLanguage WRITE setPreferredMetadataLanguage NOTIFY preferredMetadataLanguageChanged)
	/**
	 * @brief Gets or sets the metadata country code.
	 */
	Q_PROPERTY(QString metadataCountryCode READ metadataCountryCode WRITE setMetadataCountryCode NOTIFY metadataCountryCodeChanged)
	Q_PROPERTY(QString seasonZeroDisplayName READ seasonZeroDisplayName WRITE setSeasonZeroDisplayName NOTIFY seasonZeroDisplayNameChanged)
	Q_PROPERTY(QStringList metadataSavers READ metadataSavers WRITE setMetadataSavers NOTIFY metadataSaversChanged)
	Q_PROPERTY(QStringList disabledLocalMetadataReaders READ disabledLocalMetadataReaders WRITE setDisabledLocalMetadataReaders NOTIFY disabledLocalMetadataReadersChanged)
	Q_PROPERTY(QStringList localMetadataReaderOrder READ localMetadataReaderOrder WRITE setLocalMetadataReaderOrder NOTIFY localMetadataReaderOrderChanged)
	Q_PROPERTY(QStringList disabledSubtitleFetchers READ disabledSubtitleFetchers WRITE setDisabledSubtitleFetchers NOTIFY disabledSubtitleFetchersChanged)
	Q_PROPERTY(QStringList subtitleFetcherOrder READ subtitleFetcherOrder WRITE setSubtitleFetcherOrder NOTIFY subtitleFetcherOrderChanged)
	Q_PROPERTY(bool skipSubtitlesIfEmbeddedSubtitlesPresent READ skipSubtitlesIfEmbeddedSubtitlesPresent WRITE setSkipSubtitlesIfEmbeddedSubtitlesPresent NOTIFY skipSubtitlesIfEmbeddedSubtitlesPresentChanged)
	Q_PROPERTY(bool skipSubtitlesIfAudioTrackMatches READ skipSubtitlesIfAudioTrackMatches WRITE setSkipSubtitlesIfAudioTrackMatches NOTIFY skipSubtitlesIfAudioTrackMatchesChanged)
	Q_PROPERTY(QStringList subtitleDownloadLanguages READ subtitleDownloadLanguages WRITE setSubtitleDownloadLanguages NOTIFY subtitleDownloadLanguagesChanged)
	Q_PROPERTY(bool requirePerfectSubtitleMatch READ requirePerfectSubtitleMatch WRITE setRequirePerfectSubtitleMatch NOTIFY requirePerfectSubtitleMatchChanged)
	Q_PROPERTY(bool saveSubtitlesWithMedia READ saveSubtitlesWithMedia WRITE setSaveSubtitlesWithMedia NOTIFY saveSubtitlesWithMediaChanged)
	Q_PROPERTY(QList<TypeOptions *> typeOptions READ typeOptions WRITE setTypeOptions NOTIFY typeOptionsChanged)

	bool enablePhotos() const;
	void setEnablePhotos(bool newEnablePhotos);
	
	bool enableRealtimeMonitor() const;
	void setEnableRealtimeMonitor(bool newEnableRealtimeMonitor);
	
	bool enableChapterImageExtraction() const;
	void setEnableChapterImageExtraction(bool newEnableChapterImageExtraction);
	
	bool extractChapterImagesDuringLibraryScan() const;
	void setExtractChapterImagesDuringLibraryScan(bool newExtractChapterImagesDuringLibraryScan);
	
	QList<MediaPathInfo *> pathInfos() const;
	void setPathInfos(QList<MediaPathInfo *> newPathInfos);
	
	bool saveLocalMetadata() const;
	void setSaveLocalMetadata(bool newSaveLocalMetadata);
	
	bool enableInternetProviders() const;
	void setEnableInternetProviders(bool newEnableInternetProviders);
	
	bool enableAutomaticSeriesGrouping() const;
	void setEnableAutomaticSeriesGrouping(bool newEnableAutomaticSeriesGrouping);
	
	bool enableEmbeddedTitles() const;
	void setEnableEmbeddedTitles(bool newEnableEmbeddedTitles);
	
	bool enableEmbeddedEpisodeInfos() const;
	void setEnableEmbeddedEpisodeInfos(bool newEnableEmbeddedEpisodeInfos);
	
	qint32 automaticRefreshIntervalDays() const;
	void setAutomaticRefreshIntervalDays(qint32 newAutomaticRefreshIntervalDays);
	
	QString preferredMetadataLanguage() const;
	void setPreferredMetadataLanguage(QString newPreferredMetadataLanguage);
	
	QString metadataCountryCode() const;
	void setMetadataCountryCode(QString newMetadataCountryCode);
	
	QString seasonZeroDisplayName() const;
	void setSeasonZeroDisplayName(QString newSeasonZeroDisplayName);
	
	QStringList metadataSavers() const;
	void setMetadataSavers(QStringList newMetadataSavers);
	
	QStringList disabledLocalMetadataReaders() const;
	void setDisabledLocalMetadataReaders(QStringList newDisabledLocalMetadataReaders);
	
	QStringList localMetadataReaderOrder() const;
	void setLocalMetadataReaderOrder(QStringList newLocalMetadataReaderOrder);
	
	QStringList disabledSubtitleFetchers() const;
	void setDisabledSubtitleFetchers(QStringList newDisabledSubtitleFetchers);
	
	QStringList subtitleFetcherOrder() const;
	void setSubtitleFetcherOrder(QStringList newSubtitleFetcherOrder);
	
	bool skipSubtitlesIfEmbeddedSubtitlesPresent() const;
	void setSkipSubtitlesIfEmbeddedSubtitlesPresent(bool newSkipSubtitlesIfEmbeddedSubtitlesPresent);
	
	bool skipSubtitlesIfAudioTrackMatches() const;
	void setSkipSubtitlesIfAudioTrackMatches(bool newSkipSubtitlesIfAudioTrackMatches);
	
	QStringList subtitleDownloadLanguages() const;
	void setSubtitleDownloadLanguages(QStringList newSubtitleDownloadLanguages);
	
	bool requirePerfectSubtitleMatch() const;
	void setRequirePerfectSubtitleMatch(bool newRequirePerfectSubtitleMatch);
	
	bool saveSubtitlesWithMedia() const;
	void setSaveSubtitlesWithMedia(bool newSaveSubtitlesWithMedia);
	
	QList<TypeOptions *> typeOptions() const;
	void setTypeOptions(QList<TypeOptions *> newTypeOptions);
	
signals:
	void enablePhotosChanged(bool newEnablePhotos);
	void enableRealtimeMonitorChanged(bool newEnableRealtimeMonitor);
	void enableChapterImageExtractionChanged(bool newEnableChapterImageExtraction);
	void extractChapterImagesDuringLibraryScanChanged(bool newExtractChapterImagesDuringLibraryScan);
	void pathInfosChanged(QList<MediaPathInfo *> newPathInfos);
	void saveLocalMetadataChanged(bool newSaveLocalMetadata);
	void enableInternetProvidersChanged(bool newEnableInternetProviders);
	void enableAutomaticSeriesGroupingChanged(bool newEnableAutomaticSeriesGrouping);
	void enableEmbeddedTitlesChanged(bool newEnableEmbeddedTitles);
	void enableEmbeddedEpisodeInfosChanged(bool newEnableEmbeddedEpisodeInfos);
	void automaticRefreshIntervalDaysChanged(qint32 newAutomaticRefreshIntervalDays);
	void preferredMetadataLanguageChanged(QString newPreferredMetadataLanguage);
	void metadataCountryCodeChanged(QString newMetadataCountryCode);
	void seasonZeroDisplayNameChanged(QString newSeasonZeroDisplayName);
	void metadataSaversChanged(QStringList newMetadataSavers);
	void disabledLocalMetadataReadersChanged(QStringList newDisabledLocalMetadataReaders);
	void localMetadataReaderOrderChanged(QStringList newLocalMetadataReaderOrder);
	void disabledSubtitleFetchersChanged(QStringList newDisabledSubtitleFetchers);
	void subtitleFetcherOrderChanged(QStringList newSubtitleFetcherOrder);
	void skipSubtitlesIfEmbeddedSubtitlesPresentChanged(bool newSkipSubtitlesIfEmbeddedSubtitlesPresent);
	void skipSubtitlesIfAudioTrackMatchesChanged(bool newSkipSubtitlesIfAudioTrackMatches);
	void subtitleDownloadLanguagesChanged(QStringList newSubtitleDownloadLanguages);
	void requirePerfectSubtitleMatchChanged(bool newRequirePerfectSubtitleMatch);
	void saveSubtitlesWithMediaChanged(bool newSaveSubtitlesWithMedia);
	void typeOptionsChanged(QList<TypeOptions *> newTypeOptions);
protected:
	bool m_enablePhotos;
	bool m_enableRealtimeMonitor;
	bool m_enableChapterImageExtraction;
	bool m_extractChapterImagesDuringLibraryScan;
	QList<MediaPathInfo *> m_pathInfos;
	bool m_saveLocalMetadata;
	bool m_enableInternetProviders;
	bool m_enableAutomaticSeriesGrouping;
	bool m_enableEmbeddedTitles;
	bool m_enableEmbeddedEpisodeInfos;
	qint32 m_automaticRefreshIntervalDays;
	QString m_preferredMetadataLanguage;
	QString m_metadataCountryCode;
	QString m_seasonZeroDisplayName;
	QStringList m_metadataSavers;
	QStringList m_disabledLocalMetadataReaders;
	QStringList m_localMetadataReaderOrder;
	QStringList m_disabledSubtitleFetchers;
	QStringList m_subtitleFetcherOrder;
	bool m_skipSubtitlesIfEmbeddedSubtitlesPresent;
	bool m_skipSubtitlesIfAudioTrackMatches;
	QStringList m_subtitleDownloadLanguages;
	bool m_requirePerfectSubtitleMatch;
	bool m_saveSubtitlesWithMedia;
	QList<TypeOptions *> m_typeOptions;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_LIBRARYOPTIONS_H

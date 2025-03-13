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
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/embeddedsubtitleoptions.h"
#include "JellyfinQt/dto/mediapathinfo.h"
#include "JellyfinQt/dto/typeoptions.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class LibraryOptions {
public:
	LibraryOptions(	
		bool enabled,			
		bool enablePhotos,			
		bool enableRealtimeMonitor,			
		bool enableLUFSScan,			
		bool enableChapterImageExtraction,			
		bool extractChapterImagesDuringLibraryScan,			
		bool enableTrickplayImageExtraction,			
		bool extractTrickplayImagesDuringLibraryScan,			
		QList<MediaPathInfo> pathInfos,			
		bool saveLocalMetadata,			
		bool enableInternetProviders,			
		bool enableAutomaticSeriesGrouping,			
		bool enableEmbeddedTitles,			
		bool enableEmbeddedExtrasTitles,			
		bool enableEmbeddedEpisodeInfos,			
		qint32 automaticRefreshIntervalDays,							
		QString seasonZeroDisplayName,					
		QStringList disabledLocalMetadataReaders,					
		QStringList disabledSubtitleFetchers,			
		QStringList subtitleFetcherOrder,			
		QStringList disabledMediaSegmentProviders,			
		QStringList mediaSegmentProvideOrder,			
		bool skipSubtitlesIfEmbeddedSubtitlesPresent,			
		bool skipSubtitlesIfAudioTrackMatches,					
		bool requirePerfectSubtitleMatch,			
		bool saveSubtitlesWithMedia,			
		std::optional<bool> saveLyricsWithMedia,			
		std::optional<bool> saveTrickplayWithMedia,			
		QStringList disabledLyricFetchers,			
		QStringList lyricFetcherOrder,			
		std::optional<bool> preferNonstandardArtistsTag,			
		std::optional<bool> useCustomTagDelimiters,			
		QStringList customTagDelimiters,			
		QStringList delimiterWhitelist,			
		bool automaticallyAddToCollection,			
		EmbeddedSubtitleOptions allowEmbeddedSubtitles,			
		QList<TypeOptions> typeOptions		
	);

	LibraryOptions(const LibraryOptions &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(LibraryOptions &other);
	
	static LibraryOptions fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	bool enabled() const;

	void setEnabled(bool newEnabled);


	bool enablePhotos() const;

	void setEnablePhotos(bool newEnablePhotos);


	bool enableRealtimeMonitor() const;

	void setEnableRealtimeMonitor(bool newEnableRealtimeMonitor);


	bool enableLUFSScan() const;

	void setEnableLUFSScan(bool newEnableLUFSScan);


	bool enableChapterImageExtraction() const;

	void setEnableChapterImageExtraction(bool newEnableChapterImageExtraction);


	bool extractChapterImagesDuringLibraryScan() const;

	void setExtractChapterImagesDuringLibraryScan(bool newExtractChapterImagesDuringLibraryScan);


	bool enableTrickplayImageExtraction() const;

	void setEnableTrickplayImageExtraction(bool newEnableTrickplayImageExtraction);


	bool extractTrickplayImagesDuringLibraryScan() const;

	void setExtractTrickplayImagesDuringLibraryScan(bool newExtractTrickplayImagesDuringLibraryScan);


	QList<MediaPathInfo> pathInfos() const;

	void setPathInfos(QList<MediaPathInfo> newPathInfos);


	bool saveLocalMetadata() const;

	void setSaveLocalMetadata(bool newSaveLocalMetadata);


	bool enableInternetProviders() const;

	void setEnableInternetProviders(bool newEnableInternetProviders);


	bool enableAutomaticSeriesGrouping() const;

	void setEnableAutomaticSeriesGrouping(bool newEnableAutomaticSeriesGrouping);


	bool enableEmbeddedTitles() const;

	void setEnableEmbeddedTitles(bool newEnableEmbeddedTitles);


	bool enableEmbeddedExtrasTitles() const;

	void setEnableEmbeddedExtrasTitles(bool newEnableEmbeddedExtrasTitles);


	bool enableEmbeddedEpisodeInfos() const;

	void setEnableEmbeddedEpisodeInfos(bool newEnableEmbeddedEpisodeInfos);


	qint32 automaticRefreshIntervalDays() const;

	void setAutomaticRefreshIntervalDays(qint32 newAutomaticRefreshIntervalDays);

	/**
	 * @brief Gets or sets the preferred metadata language.
	 */
	QString preferredMetadataLanguage() const;
	/**
	* @brief Gets or sets the preferred metadata language.
	*/
	void setPreferredMetadataLanguage(QString newPreferredMetadataLanguage);
	bool preferredMetadataLanguageNull() const;
	void setPreferredMetadataLanguageNull();

	/**
	 * @brief Gets or sets the metadata country code.
	 */
	QString metadataCountryCode() const;
	/**
	* @brief Gets or sets the metadata country code.
	*/
	void setMetadataCountryCode(QString newMetadataCountryCode);
	bool metadataCountryCodeNull() const;
	void setMetadataCountryCodeNull();


	QString seasonZeroDisplayName() const;

	void setSeasonZeroDisplayName(QString newSeasonZeroDisplayName);


	QStringList metadataSavers() const;

	void setMetadataSavers(QStringList newMetadataSavers);
	bool metadataSaversNull() const;
	void setMetadataSaversNull();


	QStringList disabledLocalMetadataReaders() const;

	void setDisabledLocalMetadataReaders(QStringList newDisabledLocalMetadataReaders);


	QStringList localMetadataReaderOrder() const;

	void setLocalMetadataReaderOrder(QStringList newLocalMetadataReaderOrder);
	bool localMetadataReaderOrderNull() const;
	void setLocalMetadataReaderOrderNull();


	QStringList disabledSubtitleFetchers() const;

	void setDisabledSubtitleFetchers(QStringList newDisabledSubtitleFetchers);


	QStringList subtitleFetcherOrder() const;

	void setSubtitleFetcherOrder(QStringList newSubtitleFetcherOrder);


	QStringList disabledMediaSegmentProviders() const;

	void setDisabledMediaSegmentProviders(QStringList newDisabledMediaSegmentProviders);


	QStringList mediaSegmentProvideOrder() const;

	void setMediaSegmentProvideOrder(QStringList newMediaSegmentProvideOrder);


	bool skipSubtitlesIfEmbeddedSubtitlesPresent() const;

	void setSkipSubtitlesIfEmbeddedSubtitlesPresent(bool newSkipSubtitlesIfEmbeddedSubtitlesPresent);


	bool skipSubtitlesIfAudioTrackMatches() const;

	void setSkipSubtitlesIfAudioTrackMatches(bool newSkipSubtitlesIfAudioTrackMatches);


	QStringList subtitleDownloadLanguages() const;

	void setSubtitleDownloadLanguages(QStringList newSubtitleDownloadLanguages);
	bool subtitleDownloadLanguagesNull() const;
	void setSubtitleDownloadLanguagesNull();


	bool requirePerfectSubtitleMatch() const;

	void setRequirePerfectSubtitleMatch(bool newRequirePerfectSubtitleMatch);


	bool saveSubtitlesWithMedia() const;

	void setSaveSubtitlesWithMedia(bool newSaveSubtitlesWithMedia);


	std::optional<bool> saveLyricsWithMedia() const;

	void setSaveLyricsWithMedia(std::optional<bool> newSaveLyricsWithMedia);


	std::optional<bool> saveTrickplayWithMedia() const;

	void setSaveTrickplayWithMedia(std::optional<bool> newSaveTrickplayWithMedia);


	QStringList disabledLyricFetchers() const;

	void setDisabledLyricFetchers(QStringList newDisabledLyricFetchers);


	QStringList lyricFetcherOrder() const;

	void setLyricFetcherOrder(QStringList newLyricFetcherOrder);


	std::optional<bool> preferNonstandardArtistsTag() const;

	void setPreferNonstandardArtistsTag(std::optional<bool> newPreferNonstandardArtistsTag);


	std::optional<bool> useCustomTagDelimiters() const;

	void setUseCustomTagDelimiters(std::optional<bool> newUseCustomTagDelimiters);


	QStringList customTagDelimiters() const;

	void setCustomTagDelimiters(QStringList newCustomTagDelimiters);


	QStringList delimiterWhitelist() const;

	void setDelimiterWhitelist(QStringList newDelimiterWhitelist);


	bool automaticallyAddToCollection() const;

	void setAutomaticallyAddToCollection(bool newAutomaticallyAddToCollection);


	EmbeddedSubtitleOptions allowEmbeddedSubtitles() const;

	void setAllowEmbeddedSubtitles(EmbeddedSubtitleOptions newAllowEmbeddedSubtitles);


	QList<TypeOptions> typeOptions() const;

	void setTypeOptions(QList<TypeOptions> newTypeOptions);


protected:
	bool m_enabled;
	bool m_enablePhotos;
	bool m_enableRealtimeMonitor;
	bool m_enableLUFSScan;
	bool m_enableChapterImageExtraction;
	bool m_extractChapterImagesDuringLibraryScan;
	bool m_enableTrickplayImageExtraction;
	bool m_extractTrickplayImagesDuringLibraryScan;
	QList<MediaPathInfo> m_pathInfos;
	bool m_saveLocalMetadata;
	bool m_enableInternetProviders;
	bool m_enableAutomaticSeriesGrouping;
	bool m_enableEmbeddedTitles;
	bool m_enableEmbeddedExtrasTitles;
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
	QStringList m_disabledMediaSegmentProviders;
	QStringList m_mediaSegmentProvideOrder;
	bool m_skipSubtitlesIfEmbeddedSubtitlesPresent;
	bool m_skipSubtitlesIfAudioTrackMatches;
	QStringList m_subtitleDownloadLanguages;
	bool m_requirePerfectSubtitleMatch;
	bool m_saveSubtitlesWithMedia;
	std::optional<bool> m_saveLyricsWithMedia = std::nullopt;
	std::optional<bool> m_saveTrickplayWithMedia = std::nullopt;
	QStringList m_disabledLyricFetchers;
	QStringList m_lyricFetcherOrder;
	std::optional<bool> m_preferNonstandardArtistsTag = std::nullopt;
	std::optional<bool> m_useCustomTagDelimiters = std::nullopt;
	QStringList m_customTagDelimiters;
	QStringList m_delimiterWhitelist;
	bool m_automaticallyAddToCollection;
	EmbeddedSubtitleOptions m_allowEmbeddedSubtitles;
	QList<TypeOptions> m_typeOptions;

private:
	// Private constructor which generates an invalid object, for use withing LibraryOptions::fromJson();
	LibraryOptions();
};


} // NS DTO

namespace Support {

using LibraryOptions = Jellyfin::DTO::LibraryOptions;

template <>
LibraryOptions fromJsonValue(const QJsonValue &source, convertType<LibraryOptions>);

template<>
QJsonValue toJsonValue(const LibraryOptions &source, convertType<LibraryOptions>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_LIBRARYOPTIONS_H

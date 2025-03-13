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

#ifndef JELLYFIN_DTO_LIVETVOPTIONS_H
#define JELLYFIN_DTO_LIVETVOPTIONS_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/listingsproviderinfo.h"
#include "JellyfinQt/dto/tunerhostinfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class LiveTvOptions {
public:
	LiveTvOptions(									
		bool enableRecordingSubfolders,			
		bool enableOriginalAudioWithEncodedRecordings,							
		qint32 prePaddingSeconds,			
		qint32 postPaddingSeconds,									
		bool saveRecordingNFO,			
		bool saveRecordingImages		
	);

	LiveTvOptions(const LiveTvOptions &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(LiveTvOptions &other);
	
	static LiveTvOptions fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	std::optional<qint32> guideDays() const;

	void setGuideDays(std::optional<qint32> newGuideDays);
	bool guideDaysNull() const;
	void setGuideDaysNull();


	QString recordingPath() const;

	void setRecordingPath(QString newRecordingPath);
	bool recordingPathNull() const;
	void setRecordingPathNull();


	QString movieRecordingPath() const;

	void setMovieRecordingPath(QString newMovieRecordingPath);
	bool movieRecordingPathNull() const;
	void setMovieRecordingPathNull();


	QString seriesRecordingPath() const;

	void setSeriesRecordingPath(QString newSeriesRecordingPath);
	bool seriesRecordingPathNull() const;
	void setSeriesRecordingPathNull();


	bool enableRecordingSubfolders() const;

	void setEnableRecordingSubfolders(bool newEnableRecordingSubfolders);


	bool enableOriginalAudioWithEncodedRecordings() const;

	void setEnableOriginalAudioWithEncodedRecordings(bool newEnableOriginalAudioWithEncodedRecordings);


	QList<TunerHostInfo> tunerHosts() const;

	void setTunerHosts(QList<TunerHostInfo> newTunerHosts);
	bool tunerHostsNull() const;
	void setTunerHostsNull();


	QList<ListingsProviderInfo> listingProviders() const;

	void setListingProviders(QList<ListingsProviderInfo> newListingProviders);
	bool listingProvidersNull() const;
	void setListingProvidersNull();


	qint32 prePaddingSeconds() const;

	void setPrePaddingSeconds(qint32 newPrePaddingSeconds);


	qint32 postPaddingSeconds() const;

	void setPostPaddingSeconds(qint32 newPostPaddingSeconds);


	QStringList mediaLocationsCreated() const;

	void setMediaLocationsCreated(QStringList newMediaLocationsCreated);
	bool mediaLocationsCreatedNull() const;
	void setMediaLocationsCreatedNull();


	QString recordingPostProcessor() const;

	void setRecordingPostProcessor(QString newRecordingPostProcessor);
	bool recordingPostProcessorNull() const;
	void setRecordingPostProcessorNull();


	QString recordingPostProcessorArguments() const;

	void setRecordingPostProcessorArguments(QString newRecordingPostProcessorArguments);
	bool recordingPostProcessorArgumentsNull() const;
	void setRecordingPostProcessorArgumentsNull();


	bool saveRecordingNFO() const;

	void setSaveRecordingNFO(bool newSaveRecordingNFO);


	bool saveRecordingImages() const;

	void setSaveRecordingImages(bool newSaveRecordingImages);


protected:
	std::optional<qint32> m_guideDays = std::nullopt;
	QString m_recordingPath;
	QString m_movieRecordingPath;
	QString m_seriesRecordingPath;
	bool m_enableRecordingSubfolders;
	bool m_enableOriginalAudioWithEncodedRecordings;
	QList<TunerHostInfo> m_tunerHosts;
	QList<ListingsProviderInfo> m_listingProviders;
	qint32 m_prePaddingSeconds;
	qint32 m_postPaddingSeconds;
	QStringList m_mediaLocationsCreated;
	QString m_recordingPostProcessor;
	QString m_recordingPostProcessorArguments;
	bool m_saveRecordingNFO;
	bool m_saveRecordingImages;

private:
	// Private constructor which generates an invalid object, for use withing LiveTvOptions::fromJson();
	LiveTvOptions();
};


} // NS DTO

namespace Support {

using LiveTvOptions = Jellyfin::DTO::LiveTvOptions;

template <>
LiveTvOptions fromJsonValue(const QJsonValue &source, convertType<LiveTvOptions>);

template<>
QJsonValue toJsonValue(const LiveTvOptions &source, convertType<LiveTvOptions>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_LIVETVOPTIONS_H

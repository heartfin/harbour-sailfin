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

#include <JellyfinQt/dto/livetvoptions.h>

namespace Jellyfin {
namespace DTO {

LiveTvOptions::LiveTvOptions() {}
LiveTvOptions::LiveTvOptions (
		bool enableRecordingSubfolders, 
		bool enableOriginalAudioWithEncodedRecordings, 
		qint32 prePaddingSeconds, 
		qint32 postPaddingSeconds, 
		bool saveRecordingNFO, 
		bool saveRecordingImages 
		) :
	m_enableRecordingSubfolders(enableRecordingSubfolders),
	m_enableOriginalAudioWithEncodedRecordings(enableOriginalAudioWithEncodedRecordings),
	m_prePaddingSeconds(prePaddingSeconds),
	m_postPaddingSeconds(postPaddingSeconds),
	m_saveRecordingNFO(saveRecordingNFO),
	m_saveRecordingImages(saveRecordingImages) { }



LiveTvOptions::LiveTvOptions(const LiveTvOptions &other) :

	m_guideDays(other.m_guideDays),
	m_recordingPath(other.m_recordingPath),
	m_movieRecordingPath(other.m_movieRecordingPath),
	m_seriesRecordingPath(other.m_seriesRecordingPath),
	m_enableRecordingSubfolders(other.m_enableRecordingSubfolders),
	m_enableOriginalAudioWithEncodedRecordings(other.m_enableOriginalAudioWithEncodedRecordings),
	m_tunerHosts(other.m_tunerHosts),
	m_listingProviders(other.m_listingProviders),
	m_prePaddingSeconds(other.m_prePaddingSeconds),
	m_postPaddingSeconds(other.m_postPaddingSeconds),
	m_mediaLocationsCreated(other.m_mediaLocationsCreated),
	m_recordingPostProcessor(other.m_recordingPostProcessor),
	m_recordingPostProcessorArguments(other.m_recordingPostProcessorArguments),
	m_saveRecordingNFO(other.m_saveRecordingNFO),
	m_saveRecordingImages(other.m_saveRecordingImages){}


void LiveTvOptions::replaceData(LiveTvOptions &other) {
	m_guideDays = other.m_guideDays;
	m_recordingPath = other.m_recordingPath;
	m_movieRecordingPath = other.m_movieRecordingPath;
	m_seriesRecordingPath = other.m_seriesRecordingPath;
	m_enableRecordingSubfolders = other.m_enableRecordingSubfolders;
	m_enableOriginalAudioWithEncodedRecordings = other.m_enableOriginalAudioWithEncodedRecordings;
	m_tunerHosts = other.m_tunerHosts;
	m_listingProviders = other.m_listingProviders;
	m_prePaddingSeconds = other.m_prePaddingSeconds;
	m_postPaddingSeconds = other.m_postPaddingSeconds;
	m_mediaLocationsCreated = other.m_mediaLocationsCreated;
	m_recordingPostProcessor = other.m_recordingPostProcessor;
	m_recordingPostProcessorArguments = other.m_recordingPostProcessorArguments;
	m_saveRecordingNFO = other.m_saveRecordingNFO;
	m_saveRecordingImages = other.m_saveRecordingImages;
}

LiveTvOptions LiveTvOptions::fromJson(QJsonObject source) {
	LiveTvOptions instance;
	instance.setFromJson(source);
	return instance;
}


void LiveTvOptions::setFromJson(QJsonObject source) {
	m_guideDays = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["GuideDays"]);
	m_recordingPath = Jellyfin::Support::fromJsonValue<QString>(source["RecordingPath"]);
	m_movieRecordingPath = Jellyfin::Support::fromJsonValue<QString>(source["MovieRecordingPath"]);
	m_seriesRecordingPath = Jellyfin::Support::fromJsonValue<QString>(source["SeriesRecordingPath"]);
	m_enableRecordingSubfolders = Jellyfin::Support::fromJsonValue<bool>(source["EnableRecordingSubfolders"]);
	m_enableOriginalAudioWithEncodedRecordings = Jellyfin::Support::fromJsonValue<bool>(source["EnableOriginalAudioWithEncodedRecordings"]);
	m_tunerHosts = Jellyfin::Support::fromJsonValue<QList<TunerHostInfo>>(source["TunerHosts"]);
	m_listingProviders = Jellyfin::Support::fromJsonValue<QList<ListingsProviderInfo>>(source["ListingProviders"]);
	m_prePaddingSeconds = Jellyfin::Support::fromJsonValue<qint32>(source["PrePaddingSeconds"]);
	m_postPaddingSeconds = Jellyfin::Support::fromJsonValue<qint32>(source["PostPaddingSeconds"]);
	m_mediaLocationsCreated = Jellyfin::Support::fromJsonValue<QStringList>(source["MediaLocationsCreated"]);
	m_recordingPostProcessor = Jellyfin::Support::fromJsonValue<QString>(source["RecordingPostProcessor"]);
	m_recordingPostProcessorArguments = Jellyfin::Support::fromJsonValue<QString>(source["RecordingPostProcessorArguments"]);
	m_saveRecordingNFO = Jellyfin::Support::fromJsonValue<bool>(source["SaveRecordingNFO"]);
	m_saveRecordingImages = Jellyfin::Support::fromJsonValue<bool>(source["SaveRecordingImages"]);

}
	
QJsonObject LiveTvOptions::toJson() const {
	QJsonObject result;
	
	
	if (!(!m_guideDays.has_value())) {
		result["GuideDays"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_guideDays);
	}
			
	
	if (!(m_recordingPath.isNull())) {
		result["RecordingPath"] = Jellyfin::Support::toJsonValue<QString>(m_recordingPath);
	}
			
	
	if (!(m_movieRecordingPath.isNull())) {
		result["MovieRecordingPath"] = Jellyfin::Support::toJsonValue<QString>(m_movieRecordingPath);
	}
			
	
	if (!(m_seriesRecordingPath.isNull())) {
		result["SeriesRecordingPath"] = Jellyfin::Support::toJsonValue<QString>(m_seriesRecordingPath);
	}
			
	result["EnableRecordingSubfolders"] = Jellyfin::Support::toJsonValue<bool>(m_enableRecordingSubfolders);		
	result["EnableOriginalAudioWithEncodedRecordings"] = Jellyfin::Support::toJsonValue<bool>(m_enableOriginalAudioWithEncodedRecordings);		
	
	if (!(m_tunerHosts.size() == 0)) {
		result["TunerHosts"] = Jellyfin::Support::toJsonValue<QList<TunerHostInfo>>(m_tunerHosts);
	}
			
	
	if (!(m_listingProviders.size() == 0)) {
		result["ListingProviders"] = Jellyfin::Support::toJsonValue<QList<ListingsProviderInfo>>(m_listingProviders);
	}
			
	result["PrePaddingSeconds"] = Jellyfin::Support::toJsonValue<qint32>(m_prePaddingSeconds);		
	result["PostPaddingSeconds"] = Jellyfin::Support::toJsonValue<qint32>(m_postPaddingSeconds);		
	
	if (!(m_mediaLocationsCreated.size() == 0)) {
		result["MediaLocationsCreated"] = Jellyfin::Support::toJsonValue<QStringList>(m_mediaLocationsCreated);
	}
			
	
	if (!(m_recordingPostProcessor.isNull())) {
		result["RecordingPostProcessor"] = Jellyfin::Support::toJsonValue<QString>(m_recordingPostProcessor);
	}
			
	
	if (!(m_recordingPostProcessorArguments.isNull())) {
		result["RecordingPostProcessorArguments"] = Jellyfin::Support::toJsonValue<QString>(m_recordingPostProcessorArguments);
	}
			
	result["SaveRecordingNFO"] = Jellyfin::Support::toJsonValue<bool>(m_saveRecordingNFO);		
	result["SaveRecordingImages"] = Jellyfin::Support::toJsonValue<bool>(m_saveRecordingImages);	
	return result;
}

std::optional<qint32> LiveTvOptions::guideDays() const { return m_guideDays; }

void LiveTvOptions::setGuideDays(std::optional<qint32> newGuideDays) {
	m_guideDays = newGuideDays;
}
bool LiveTvOptions::guideDaysNull() const {
	return !m_guideDays.has_value();
}

void LiveTvOptions::setGuideDaysNull() {
	m_guideDays = std::nullopt;

}
QString LiveTvOptions::recordingPath() const { return m_recordingPath; }

void LiveTvOptions::setRecordingPath(QString newRecordingPath) {
	m_recordingPath = newRecordingPath;
}
bool LiveTvOptions::recordingPathNull() const {
	return m_recordingPath.isNull();
}

void LiveTvOptions::setRecordingPathNull() {
	m_recordingPath.clear();

}
QString LiveTvOptions::movieRecordingPath() const { return m_movieRecordingPath; }

void LiveTvOptions::setMovieRecordingPath(QString newMovieRecordingPath) {
	m_movieRecordingPath = newMovieRecordingPath;
}
bool LiveTvOptions::movieRecordingPathNull() const {
	return m_movieRecordingPath.isNull();
}

void LiveTvOptions::setMovieRecordingPathNull() {
	m_movieRecordingPath.clear();

}
QString LiveTvOptions::seriesRecordingPath() const { return m_seriesRecordingPath; }

void LiveTvOptions::setSeriesRecordingPath(QString newSeriesRecordingPath) {
	m_seriesRecordingPath = newSeriesRecordingPath;
}
bool LiveTvOptions::seriesRecordingPathNull() const {
	return m_seriesRecordingPath.isNull();
}

void LiveTvOptions::setSeriesRecordingPathNull() {
	m_seriesRecordingPath.clear();

}
bool LiveTvOptions::enableRecordingSubfolders() const { return m_enableRecordingSubfolders; }

void LiveTvOptions::setEnableRecordingSubfolders(bool newEnableRecordingSubfolders) {
	m_enableRecordingSubfolders = newEnableRecordingSubfolders;
}

bool LiveTvOptions::enableOriginalAudioWithEncodedRecordings() const { return m_enableOriginalAudioWithEncodedRecordings; }

void LiveTvOptions::setEnableOriginalAudioWithEncodedRecordings(bool newEnableOriginalAudioWithEncodedRecordings) {
	m_enableOriginalAudioWithEncodedRecordings = newEnableOriginalAudioWithEncodedRecordings;
}

QList<TunerHostInfo> LiveTvOptions::tunerHosts() const { return m_tunerHosts; }

void LiveTvOptions::setTunerHosts(QList<TunerHostInfo> newTunerHosts) {
	m_tunerHosts = newTunerHosts;
}
bool LiveTvOptions::tunerHostsNull() const {
	return m_tunerHosts.size() == 0;
}

void LiveTvOptions::setTunerHostsNull() {
	m_tunerHosts.clear();

}
QList<ListingsProviderInfo> LiveTvOptions::listingProviders() const { return m_listingProviders; }

void LiveTvOptions::setListingProviders(QList<ListingsProviderInfo> newListingProviders) {
	m_listingProviders = newListingProviders;
}
bool LiveTvOptions::listingProvidersNull() const {
	return m_listingProviders.size() == 0;
}

void LiveTvOptions::setListingProvidersNull() {
	m_listingProviders.clear();

}
qint32 LiveTvOptions::prePaddingSeconds() const { return m_prePaddingSeconds; }

void LiveTvOptions::setPrePaddingSeconds(qint32 newPrePaddingSeconds) {
	m_prePaddingSeconds = newPrePaddingSeconds;
}

qint32 LiveTvOptions::postPaddingSeconds() const { return m_postPaddingSeconds; }

void LiveTvOptions::setPostPaddingSeconds(qint32 newPostPaddingSeconds) {
	m_postPaddingSeconds = newPostPaddingSeconds;
}

QStringList LiveTvOptions::mediaLocationsCreated() const { return m_mediaLocationsCreated; }

void LiveTvOptions::setMediaLocationsCreated(QStringList newMediaLocationsCreated) {
	m_mediaLocationsCreated = newMediaLocationsCreated;
}
bool LiveTvOptions::mediaLocationsCreatedNull() const {
	return m_mediaLocationsCreated.size() == 0;
}

void LiveTvOptions::setMediaLocationsCreatedNull() {
	m_mediaLocationsCreated.clear();

}
QString LiveTvOptions::recordingPostProcessor() const { return m_recordingPostProcessor; }

void LiveTvOptions::setRecordingPostProcessor(QString newRecordingPostProcessor) {
	m_recordingPostProcessor = newRecordingPostProcessor;
}
bool LiveTvOptions::recordingPostProcessorNull() const {
	return m_recordingPostProcessor.isNull();
}

void LiveTvOptions::setRecordingPostProcessorNull() {
	m_recordingPostProcessor.clear();

}
QString LiveTvOptions::recordingPostProcessorArguments() const { return m_recordingPostProcessorArguments; }

void LiveTvOptions::setRecordingPostProcessorArguments(QString newRecordingPostProcessorArguments) {
	m_recordingPostProcessorArguments = newRecordingPostProcessorArguments;
}
bool LiveTvOptions::recordingPostProcessorArgumentsNull() const {
	return m_recordingPostProcessorArguments.isNull();
}

void LiveTvOptions::setRecordingPostProcessorArgumentsNull() {
	m_recordingPostProcessorArguments.clear();

}
bool LiveTvOptions::saveRecordingNFO() const { return m_saveRecordingNFO; }

void LiveTvOptions::setSaveRecordingNFO(bool newSaveRecordingNFO) {
	m_saveRecordingNFO = newSaveRecordingNFO;
}

bool LiveTvOptions::saveRecordingImages() const { return m_saveRecordingImages; }

void LiveTvOptions::setSaveRecordingImages(bool newSaveRecordingImages) {
	m_saveRecordingImages = newSaveRecordingImages;
}


} // NS DTO

namespace Support {

using LiveTvOptions = Jellyfin::DTO::LiveTvOptions;

template <>
LiveTvOptions fromJsonValue(const QJsonValue &source, convertType<LiveTvOptions>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return LiveTvOptions::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const LiveTvOptions &source, convertType<LiveTvOptions>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

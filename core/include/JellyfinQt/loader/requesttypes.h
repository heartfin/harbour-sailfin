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

#ifndef JELLYFIN_LOADER_REQUESTTYPES_H
#define JELLYFIN_LOADER_REQUESTTYPES_H

#include <QDateTime>
#include <QString>
#include <QList>
#include <optional>

#include "JellyfinQt/dto/channeltype.h"
#include "JellyfinQt/dto/configurationpagetype.h"
#include "JellyfinQt/dto/encodingcontext.h"
#include "JellyfinQt/dto/generalcommandtype.h"
#include "JellyfinQt/dto/imageformat.h"
#include "JellyfinQt/dto/imagetype.h"
#include "JellyfinQt/dto/itemfields.h"
#include "JellyfinQt/dto/itemfilter.h"
#include "JellyfinQt/dto/locationtype.h"
#include "JellyfinQt/dto/metadatarefreshmode.h"
#include "JellyfinQt/dto/notificationlevel.h"
#include "JellyfinQt/dto/playcommand.h"
#include "JellyfinQt/dto/playmethod.h"
#include "JellyfinQt/dto/playstatecommand.h"
#include "JellyfinQt/dto/quickconnectstate.h"
#include "JellyfinQt/dto/recordingstatus.h"
#include "JellyfinQt/dto/repeatmode.h"
#include "JellyfinQt/dto/seriesstatus.h"
#include "JellyfinQt/dto/sortorder.h"
#include "JellyfinQt/dto/subtitledeliverymethod.h"
#include "JellyfinQt/dto/version.h"
#include "JellyfinQt/dto/videotype.h"

namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;
class GetLogEntriesParams {
public:
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. The minimum date. Format = ISO.	
	 */
	QDateTime minDate() const;
	void setMinDate(QDateTime newMinDate) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Filter log entries if it has user id, or not.	
	 */
	std::optional<bool> hasUserId() const;
	void setHasUserId(std::optional<bool> newHasUserId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_startIndex = std::nullopt;
	QDateTime m_minDate;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_hasUserId = std::nullopt;

};

class GetKeysParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class CreateKeyParams {
public:
	/**
	 * @brief Name of the app using the authentication key.	
	 */
	QString app() const;
	void setApp(QString newApp) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_app;
	
	// Optional path parameters

	// Optional query parameters

};

class RevokeKeyParams {
public:
	/**
	 * @brief The access token to delete.	
	 */
	QString key() const;
	void setKey(QString newKey) const;


private:
	// Required path parameters
	QString m_key;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetArtistsParams {
public:
	/**
	 * @brief Optional. If specified, results will be filtered based on production year. This allows multiple, comma delimited.	
	 */
	QList<qint32> years() const;
	void setYears(QList<qint32> newYears) const;

	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on tag. This allows multiple, pipe delimited.	
	 */
	QStringList tags() const;
	void setTags(QStringList newTags) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on studio. This allows multiple, pipe delimited.	
	 */
	QStringList studios() const;
	void setStudios(QStringList newStudios) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on studio id. This allows multiple, pipe delimited.	
	 */
	QStringList studioIds() const;
	void setStudioIds(QStringList newStudioIds) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. Search term.	
	 */
	QString searchTerm() const;
	void setSearchTerm(QString newSearchTerm) const;

	/**
	 * @brief Optional. If specified, along with Person, results will be filtered to include only those containing the specified person and PersonType. Allows multiple, comma-delimited.	
	 */
	QStringList personTypes() const;
	void setPersonTypes(QStringList newPersonTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person ids.	
	 */
	QStringList personIds() const;
	void setPersonIds(QStringList newPersonIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person.	
	 */
	QString person() const;
	void setPerson(QString newPerson) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on OfficialRating. This allows multiple, pipe delimited.	
	 */
	QStringList officialRatings() const;
	void setOfficialRatings(QStringList newOfficialRatings) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	QString nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	QString nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith) const;

	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	QString nameLessThan() const;
	void setNameLessThan(QString newNameLessThan) const;

	/**
	 * @brief Optional filter by minimum community rating.	
	 */
	std::optional<double> minCommunityRating() const;
	void setMinCommunityRating(std::optional<double> newMinCommunityRating) const;

	/**
	 * @brief Optional filter by MediaType. Allows multiple, comma delimited.	
	 */
	QStringList mediaTypes() const;
	void setMediaTypes(QStringList newMediaTypes) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;

	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on genre. This allows multiple, pipe delimited.	
	 */
	QStringList genres() const;
	void setGenres(QStringList newGenres) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on genre id. This allows multiple, pipe delimited.	
	 */
	QStringList genreIds() const;
	void setGenreIds(QStringList newGenreIds) const;

	/**
	 * @brief Optional. Specify additional filters to apply.	
	 */
	QList<ItemFilter> filters() const;
	void setFilters(QList<ItemFilter> newFilters) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. If specified, results will be filtered out based on item type. This allows multiple, comma delimited.	
	 */
	QStringList excludeItemTypes() const;
	void setExcludeItemTypes(QStringList newExcludeItemTypes) const;

	/**
	 * @brief Optional, include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional, include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QList<qint32> m_years;
	QString m_userId;
	QStringList m_tags;
	QStringList m_studios;
	QStringList m_studioIds;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_searchTerm;
	QStringList m_personTypes;
	QStringList m_personIds;
	QString m_person;
	QString m_parentId;
	QStringList m_officialRatings;
	QString m_nameStartsWithOrGreater;
	QString m_nameStartsWith;
	QString m_nameLessThan;
	std::optional<double> m_minCommunityRating = std::nullopt;
	QStringList m_mediaTypes;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	QStringList m_includeItemTypes;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QStringList m_genres;
	QStringList m_genreIds;
	QList<ItemFilter> m_filters;
	QList<ItemFields> m_fields;
	QStringList m_excludeItemTypes;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetArtistByNameParams {
public:
	/**
	 * @brief Studio name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class GetAlbumArtistsParams {
public:
	/**
	 * @brief Optional. If specified, results will be filtered based on production year. This allows multiple, comma delimited.	
	 */
	QList<qint32> years() const;
	void setYears(QList<qint32> newYears) const;

	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on tag. This allows multiple, pipe delimited.	
	 */
	QStringList tags() const;
	void setTags(QStringList newTags) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on studio. This allows multiple, pipe delimited.	
	 */
	QStringList studios() const;
	void setStudios(QStringList newStudios) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on studio id. This allows multiple, pipe delimited.	
	 */
	QStringList studioIds() const;
	void setStudioIds(QStringList newStudioIds) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. Search term.	
	 */
	QString searchTerm() const;
	void setSearchTerm(QString newSearchTerm) const;

	/**
	 * @brief Optional. If specified, along with Person, results will be filtered to include only those containing the specified person and PersonType. Allows multiple, comma-delimited.	
	 */
	QStringList personTypes() const;
	void setPersonTypes(QStringList newPersonTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person ids.	
	 */
	QStringList personIds() const;
	void setPersonIds(QStringList newPersonIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person.	
	 */
	QString person() const;
	void setPerson(QString newPerson) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on OfficialRating. This allows multiple, pipe delimited.	
	 */
	QStringList officialRatings() const;
	void setOfficialRatings(QStringList newOfficialRatings) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	QString nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	QString nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith) const;

	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	QString nameLessThan() const;
	void setNameLessThan(QString newNameLessThan) const;

	/**
	 * @brief Optional filter by minimum community rating.	
	 */
	std::optional<double> minCommunityRating() const;
	void setMinCommunityRating(std::optional<double> newMinCommunityRating) const;

	/**
	 * @brief Optional filter by MediaType. Allows multiple, comma delimited.	
	 */
	QStringList mediaTypes() const;
	void setMediaTypes(QStringList newMediaTypes) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;

	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on genre. This allows multiple, pipe delimited.	
	 */
	QStringList genres() const;
	void setGenres(QStringList newGenres) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on genre id. This allows multiple, pipe delimited.	
	 */
	QStringList genreIds() const;
	void setGenreIds(QStringList newGenreIds) const;

	/**
	 * @brief Optional. Specify additional filters to apply.	
	 */
	QList<ItemFilter> filters() const;
	void setFilters(QList<ItemFilter> newFilters) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. If specified, results will be filtered out based on item type. This allows multiple, comma delimited.	
	 */
	QStringList excludeItemTypes() const;
	void setExcludeItemTypes(QStringList newExcludeItemTypes) const;

	/**
	 * @brief Optional, include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional, include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QList<qint32> m_years;
	QString m_userId;
	QStringList m_tags;
	QStringList m_studios;
	QStringList m_studioIds;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_searchTerm;
	QStringList m_personTypes;
	QStringList m_personIds;
	QString m_person;
	QString m_parentId;
	QStringList m_officialRatings;
	QString m_nameStartsWithOrGreater;
	QString m_nameStartsWith;
	QString m_nameLessThan;
	std::optional<double> m_minCommunityRating = std::nullopt;
	QStringList m_mediaTypes;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	QStringList m_includeItemTypes;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QStringList m_genres;
	QStringList m_genreIds;
	QList<ItemFilter> m_filters;
	QList<ItemFields> m_fields;
	QStringList m_excludeItemTypes;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetAudioStreamParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment length.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief The audio container.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	QString m_container;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class HeadAudioStreamParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment length.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief The audio container.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	QString m_container;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class GetAudioStreamByContainerParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The audio container.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment lenght.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamporphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	QString m_container;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class HeadAudioStreamByContainerParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The audio container.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment lenght.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamporphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	QString m_container;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class GetBrandingOptionsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetBrandingCssParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetBrandingCss_2Params {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetChannelsParams {
public:
	/**
	 * @brief User Id to filter by. Use System.Guid.Empty to not filter by user.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Filter by channels that support media deletion.	
	 */
	std::optional<bool> supportsMediaDeletion() const;
	void setSupportsMediaDeletion(std::optional<bool> newSupportsMediaDeletion) const;

	/**
	 * @brief Optional. Filter by channels that support getting latest items.	
	 */
	std::optional<bool> supportsLatestItems() const;
	void setSupportsLatestItems(std::optional<bool> newSupportsLatestItems) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Filter by channels that are favorite.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<bool> m_supportsMediaDeletion = std::nullopt;
	std::optional<bool> m_supportsLatestItems = std::nullopt;
	std::optional<qint32> m_startIndex = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;

};

class GetChannelFeaturesParams {
public:
	/**
	 * @brief Channel id.	
	 */
	QString channelId() const;
	void setChannelId(QString newChannelId) const;


private:
	// Required path parameters
	QString m_channelId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetChannelItemsParams {
public:
	/**
	 * @brief Channel Id.	
	 */
	QString channelId() const;
	void setChannelId(QString newChannelId) const;

	/**
	 * @brief Optional. User Id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. Sort Order - Ascending,Descending.	
	 */
	QString sortOrder() const;
	void setSortOrder(QString newSortOrder) const;

	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	QString sortBy() const;
	void setSortBy(QString newSortBy) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Folder Id.	
	 */
	QString folderId() const;
	void setFolderId(QString newFolderId) const;

	/**
	 * @brief Optional. Specify additional filters to apply.	
	 */
	QList<ItemFilter> filters() const;
	void setFilters(QList<ItemFilter> newFilters) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;


private:
	// Required path parameters
	QString m_channelId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_sortOrder;
	QString m_sortBy;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_folderId;
	QList<ItemFilter> m_filters;
	QList<ItemFields> m_fields;

};

class GetAllChannelFeaturesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLatestChannelItemsParams {
public:
	/**
	 * @brief Optional. User Id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Specify additional filters to apply.	
	 */
	QList<ItemFilter> filters() const;
	void setFilters(QList<ItemFilter> newFilters) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Specify one or more channel id's, comma delimited.	
	 */
	QStringList channelIds() const;
	void setChannelIds(QStringList newChannelIds) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_startIndex = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QList<ItemFilter> m_filters;
	QList<ItemFields> m_fields;
	QStringList m_channelIds;

};

class CreateCollectionParams {
public:
	/**
	 * @brief Optional. Create the collection within a specific folder.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief The name of the collection.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Whether or not to lock the new collection.	
	 */
	bool isLocked() const;
	void setIsLocked(bool newIsLocked) const;

	/**
	 * @brief Item Ids to add to the collection.	
	 */
	QStringList ids() const;
	void setIds(QStringList newIds) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_parentId;
	QString m_name;
	bool m_isLocked;
	QStringList m_ids;

};

class AddToCollectionParams {
public:
	/**
	 * @brief The collection id.	
	 */
	QString collectionId() const;
	void setCollectionId(QString newCollectionId) const;

	/**
	 * @brief Item ids, comma delimited.	
	 */
	QStringList ids() const;
	void setIds(QStringList newIds) const;


private:
	// Required path parameters
	QString m_collectionId;
	
	// Required query parameters
	QStringList m_ids;
	
	// Optional path parameters

	// Optional query parameters

};

class RemoveFromCollectionParams {
public:
	/**
	 * @brief The collection id.	
	 */
	QString collectionId() const;
	void setCollectionId(QString newCollectionId) const;

	/**
	 * @brief Item ids, comma delimited.	
	 */
	QStringList ids() const;
	void setIds(QStringList newIds) const;


private:
	// Required path parameters
	QString m_collectionId;
	
	// Required query parameters
	QStringList m_ids;
	
	// Optional path parameters

	// Optional query parameters

};

class GetConfigurationParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateConfigurationParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetNamedConfigurationParams {
public:
	/**
	 * @brief Configuration key.	
	 */
	QString key() const;
	void setKey(QString newKey) const;


private:
	// Required path parameters
	QString m_key;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateNamedConfigurationParams {
public:
	/**
	 * @brief Configuration key.	
	 */
	QString key() const;
	void setKey(QString newKey) const;


private:
	// Required path parameters
	QString m_key;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetDefaultMetadataOptionsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateMediaEncoderPathParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetDashboardConfigurationPageParams {
public:
	/**
	 * @brief The name of the page.	
	 */
	QString name() const;
	void setName(QString newName) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_name;

};

class GetConfigurationPagesParams {
public:
	/**
	 * @brief The Jellyfin.Api.Models.ConfigurationPageInfo.	
	 */
	ConfigurationPageType pageType() const;
	void setPageType(ConfigurationPageType newPageType) const;

	/**
	 * @brief Whether to enable in the main menu.	
	 */
	std::optional<bool> enableInMainMenu() const;
	void setEnableInMainMenu(std::optional<bool> newEnableInMainMenu) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	ConfigurationPageType m_pageType;
	std::optional<bool> m_enableInMainMenu = std::nullopt;

};

class GetDevicesParams {
public:
	/**
	 * @brief Gets or sets the user identifier.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Gets or sets a value indicating whether [supports synchronize].	
	 */
	std::optional<bool> supportsSync() const;
	void setSupportsSync(std::optional<bool> newSupportsSync) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<bool> m_supportsSync = std::nullopt;

};

class DeleteDeviceParams {
public:
	/**
	 * @brief Device Id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_jellyfinId;
	
	// Optional path parameters

	// Optional query parameters

};

class GetDeviceInfoParams {
public:
	/**
	 * @brief Device Id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_jellyfinId;
	
	// Optional path parameters

	// Optional query parameters

};

class GetDeviceOptionsParams {
public:
	/**
	 * @brief Device Id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_jellyfinId;
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateDeviceOptionsParams {
public:
	/**
	 * @brief Device Id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_jellyfinId;
	
	// Optional path parameters

	// Optional query parameters

};

class GetDisplayPreferencesParams {
public:
	/**
	 * @brief Display preferences id.	
	 */
	QString displayPreferencesId() const;
	void setDisplayPreferencesId(QString newDisplayPreferencesId) const;

	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Client.	
	 */
	QString client() const;
	void setClient(QString newClient) const;


private:
	// Required path parameters
	QString m_displayPreferencesId;
	
	// Required query parameters
	QString m_userId;
	QString m_client;
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateDisplayPreferencesParams {
public:
	/**
	 * @brief Display preferences id.	
	 */
	QString displayPreferencesId() const;
	void setDisplayPreferencesId(QString newDisplayPreferencesId) const;

	/**
	 * @brief User Id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Client.	
	 */
	QString client() const;
	void setClient(QString newClient) const;


private:
	// Required path parameters
	QString m_displayPreferencesId;
	
	// Required query parameters
	QString m_userId;
	QString m_client;
	
	// Optional path parameters

	// Optional query parameters

};

class GetProfileInfosParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class CreateProfileParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetProfileParams {
public:
	/**
	 * @brief Profile Id.	
	 */
	QString profileId() const;
	void setProfileId(QString newProfileId) const;


private:
	// Required path parameters
	QString m_profileId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class DeleteProfileParams {
public:
	/**
	 * @brief Profile id.	
	 */
	QString profileId() const;
	void setProfileId(QString newProfileId) const;


private:
	// Required path parameters
	QString m_profileId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateProfileParams {
public:
	/**
	 * @brief Profile id.	
	 */
	QString profileId() const;
	void setProfileId(QString newProfileId) const;


private:
	// Required path parameters
	QString m_profileId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetDefaultProfileParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetConnectionManagerParams {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetConnectionManager_2Params {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetConnectionManager_3Params {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ProcessConnectionManagerControlRequestParams {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetContentDirectoryParams {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetContentDirectory_2Params {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetContentDirectory_3Params {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ProcessContentDirectoryControlRequestParams {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetDescriptionXmlParams {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetDescriptionXml_2Params {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetIconIdParams {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;

	/**
	 * @brief The icon filename.	
	 */
	QString fileName() const;
	void setFileName(QString newFileName) const;


private:
	// Required path parameters
	QString m_serverId;
	QString m_fileName;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetMediaReceiverRegistrarParams {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ProcessMediaReceiverRegistrarControlRequestParams {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetMediaReceiverRegistrar_2Params {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetMediaReceiverRegistrar_3Params {
public:
	/**
	 * @brief Server UUID.	
	 */
	QString serverId() const;
	void setServerId(QString newServerId) const;


private:
	// Required path parameters
	QString m_serverId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetIconParams {
public:
	/**
	 * @brief The icon filename.	
	 */
	QString fileName() const;
	void setFileName(QString newFileName) const;


private:
	// Required path parameters
	QString m_fileName;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetHlsAudioSegmentParams {
public:
	/**
	 * @brief The segment id.	
	 */
	qint32 segmentId() const;
	void setSegmentId(qint32 newSegmentId) const;

	/**
	 * @brief The playlist id.	
	 */
	QString playlistId() const;
	void setPlaylistId(QString newPlaylistId) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment length.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	std::optional<qint32> maxStreamingBitrate() const;
	void setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	qint32 m_segmentId;
	QString m_playlistId;
	QString m_itemId;
	QString m_container;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class GetVariantHlsAudioPlaylistParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment length.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	std::optional<qint32> maxStreamingBitrate() const;
	void setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class GetMasterHlsAudioPlaylistParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment length.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	std::optional<qint32> maxStreamingBitrate() const;
	void setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Enable adaptive bitrate streaming.	
	 */
	bool enableAdaptiveBitrateStreaming() const;
	void setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	QString m_mediaSourceId;
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	bool m_enableAdaptiveBitrateStreaming;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class HeadMasterHlsAudioPlaylistParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment length.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	std::optional<qint32> maxStreamingBitrate() const;
	void setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Enable adaptive bitrate streaming.	
	 */
	bool enableAdaptiveBitrateStreaming() const;
	void setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	QString m_mediaSourceId;
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	bool m_enableAdaptiveBitrateStreaming;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class GetHlsVideoSegmentParams {
public:
	/**
	 * @brief The segment id.	
	 */
	qint32 segmentId() const;
	void setSegmentId(qint32 newSegmentId) const;

	/**
	 * @brief The playlist id.	
	 */
	QString playlistId() const;
	void setPlaylistId(QString newPlaylistId) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment lenght.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	qint32 m_segmentId;
	QString m_playlistId;
	QString m_itemId;
	QString m_container;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class GetVariantHlsVideoPlaylistParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment length.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class GetMasterHlsVideoPlaylistParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment length.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Enable adaptive bitrate streaming.	
	 */
	bool enableAdaptiveBitrateStreaming() const;
	void setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	QString m_mediaSourceId;
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	bool m_enableAdaptiveBitrateStreaming;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class HeadMasterHlsVideoPlaylistParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment length.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Enable adaptive bitrate streaming.	
	 */
	bool enableAdaptiveBitrateStreaming() const;
	void setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	QString m_mediaSourceId;
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	bool m_enableAdaptiveBitrateStreaming;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class GetDefaultDirectoryBrowserParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetDirectoryContentsParams {
public:
	/**
	 * @brief The path.	
	 */
	QString path() const;
	void setPath(QString newPath) const;

	/**
	 * @brief An optional filter to include or exclude files from the results. true/false.	
	 */
	bool includeFiles() const;
	void setIncludeFiles(bool newIncludeFiles) const;

	/**
	 * @brief An optional filter to include or exclude folders from the results. true/false.	
	 */
	bool includeDirectories() const;
	void setIncludeDirectories(bool newIncludeDirectories) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_path;
	
	// Optional path parameters

	// Optional query parameters
	bool m_includeFiles;
	bool m_includeDirectories;

};

class GetDrivesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetNetworkSharesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetParentPathParams {
public:
	/**
	 * @brief The path.	
	 */
	QString path() const;
	void setPath(QString newPath) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_path;
	
	// Optional path parameters

	// Optional query parameters

};

class ValidatePathParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetQueryFiltersLegacyParams {
public:
	/**
	 * @brief Optional. User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Parent id.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional. Filter by MediaType. Allows multiple, comma delimited.	
	 */
	QStringList mediaTypes() const;
	void setMediaTypes(QStringList newMediaTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	QString m_parentId;
	QStringList m_mediaTypes;
	QStringList m_includeItemTypes;

};

class GetQueryFiltersParams {
public:
	/**
	 * @brief Optional. User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Search recursive.	
	 */
	std::optional<bool> recursive() const;
	void setRecursive(std::optional<bool> newRecursive) const;

	/**
	 * @brief Optional. Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional. Is item sports.	
	 */
	std::optional<bool> isSports() const;
	void setIsSports(std::optional<bool> newIsSports) const;

	/**
	 * @brief Optional. Is item series.	
	 */
	std::optional<bool> isSeries() const;
	void setIsSeries(std::optional<bool> newIsSeries) const;

	/**
	 * @brief Optional. Is item news.	
	 */
	std::optional<bool> isNews() const;
	void setIsNews(std::optional<bool> newIsNews) const;

	/**
	 * @brief Optional. Is item movie.	
	 */
	std::optional<bool> isMovie() const;
	void setIsMovie(std::optional<bool> newIsMovie) const;

	/**
	 * @brief Optional. Is item kids.	
	 */
	std::optional<bool> isKids() const;
	void setIsKids(std::optional<bool> newIsKids) const;

	/**
	 * @brief Optional. Is item airing.	
	 */
	std::optional<bool> isAiring() const;
	void setIsAiring(std::optional<bool> newIsAiring) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<bool> m_recursive = std::nullopt;
	QString m_parentId;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isAiring = std::nullopt;
	QStringList m_includeItemTypes;

};

class GetGenresParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief The search term.	
	 */
	QString searchTerm() const;
	void setSearchTerm(QString newSearchTerm) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	QString nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	QString nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith) const;

	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	QString nameLessThan() const;
	void setNameLessThan(QString newNameLessThan) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;

	/**
	 * @brief Optional. If specified, results will be filtered in based on item type. This allows multiple, comma delimited.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;

	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. If specified, results will be filtered out based on item type. This allows multiple, comma delimited.	
	 */
	QStringList excludeItemTypes() const;
	void setExcludeItemTypes(QStringList newExcludeItemTypes) const;

	/**
	 * @brief Optional. Include total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional, include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_searchTerm;
	QString m_parentId;
	QString m_nameStartsWithOrGreater;
	QString m_nameStartsWith;
	QString m_nameLessThan;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	QStringList m_includeItemTypes;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_excludeItemTypes;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetGenreParams {
public:
	/**
	 * @brief The genre name.	
	 */
	QString genreName() const;
	void setGenreName(QString newGenreName) const;

	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_genreName;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class GetHlsAudioSegmentLegacyAacParams {
public:
	/**
	 * @brief The segment id.	
	 */
	QString segmentId() const;
	void setSegmentId(QString newSegmentId) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_segmentId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetHlsAudioSegmentLegacyMp3Params {
public:
	/**
	 * @brief The segment id.	
	 */
	QString segmentId() const;
	void setSegmentId(QString newSegmentId) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_segmentId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetHlsVideoSegmentLegacyParams {
public:
	/**
	 * @brief The segment id.	
	 */
	QString segmentId() const;
	void setSegmentId(QString newSegmentId) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief The playlist id.	
	 */
	QString playlistId() const;
	void setPlaylistId(QString newPlaylistId) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_segmentId;
	QString m_segmentContainer;
	QString m_playlistId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetHlsPlaylistLegacyParams {
public:
	/**
	 * @brief The playlist id.	
	 */
	QString playlistId() const;
	void setPlaylistId(QString newPlaylistId) const;

	/**
	 * @brief The video id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_playlistId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class StopEncodingProcessParams {
public:
	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_playSessionId;
	QString m_deviceId;

};

class GetArtistImageParams {
public:
	/**
	 * @brief Artist name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadArtistImageParams {
public:
	/**
	 * @brief Artist name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class GetGenreImageParams {
public:
	/**
	 * @brief Genre name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadGenreImageParams {
public:
	/**
	 * @brief Genre name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class GetGenreImageByIndexParams {
public:
	/**
	 * @brief Genre name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadGenreImageByIndexParams {
public:
	/**
	 * @brief Genre name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class GetItemImageInfosParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class DeleteItemImageParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;


private:
	// Required path parameters
	QString m_itemId;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_imageIndex = std::nullopt;

};

class SetItemImageParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;


private:
	// Required path parameters
	QString m_itemId;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetItemImageParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Drawing.ImageFormat of the returned image.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_itemId;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadItemImageParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Drawing.ImageFormat of the returned image.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_itemId;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class DeleteItemImageByIndexParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;


private:
	// Required path parameters
	QString m_itemId;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SetItemImageByIndexParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief (Unused) Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;


private:
	// Required path parameters
	QString m_itemId;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetItemImageByIndexParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Drawing.ImageFormat of the returned image.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_itemId;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadItemImageByIndexParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Drawing.ImageFormat of the returned image.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_itemId;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class GetItemImage2Params {
public:
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	qint32 unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	double percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	qint32 maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	qint32 maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	qint32 m_unplayedCount;
	QString m_tag;
	double m_percentPlayed;
	qint32 m_maxWidth;
	qint32 m_maxHeight;
	QString m_itemId;
	ImageType m_imageType;
	qint32 m_imageIndex;
	ImageFormat m_format;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadItemImage2Params {
public:
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	qint32 unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	double percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	qint32 maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	qint32 maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	qint32 m_unplayedCount;
	QString m_tag;
	double m_percentPlayed;
	qint32 m_maxWidth;
	qint32 m_maxHeight;
	QString m_itemId;
	ImageType m_imageType;
	qint32 m_imageIndex;
	ImageFormat m_format;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class UpdateItemImageIndexParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Old image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief New image index.	
	 */
	qint32 newIndex() const;
	void setNewIndex(qint32 newNewIndex) const;


private:
	// Required path parameters
	QString m_itemId;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	qint32 m_newIndex;

};

class GetMusicGenreImageParams {
public:
	/**
	 * @brief Music genre name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadMusicGenreImageParams {
public:
	/**
	 * @brief Music genre name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class GetMusicGenreImageByIndexParams {
public:
	/**
	 * @brief Music genre name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadMusicGenreImageByIndexParams {
public:
	/**
	 * @brief Music genre name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class GetPersonImageParams {
public:
	/**
	 * @brief Person name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadPersonImageParams {
public:
	/**
	 * @brief Person name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class GetPersonImageByIndexParams {
public:
	/**
	 * @brief Person name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadPersonImageByIndexParams {
public:
	/**
	 * @brief Person name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class GetStudioImageParams {
public:
	/**
	 * @brief Studio name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadStudioImageParams {
public:
	/**
	 * @brief Studio name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class GetStudioImageByIndexParams {
public:
	/**
	 * @brief Studio name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadStudioImageByIndexParams {
public:
	/**
	 * @brief Studio name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_name;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class PostUserImageParams {
public:
	/**
	 * @brief User Id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief (Unused) Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief (Unused) Image index.	
	 */
	std::optional<qint32> index() const;
	void setIndex(std::optional<qint32> newIndex) const;


private:
	// Required path parameters
	QString m_userId;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_index = std::nullopt;

};

class DeleteUserImageParams {
public:
	/**
	 * @brief User Id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief (Unused) Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief (Unused) Image index.	
	 */
	std::optional<qint32> index() const;
	void setIndex(std::optional<qint32> newIndex) const;


private:
	// Required path parameters
	QString m_userId;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_index = std::nullopt;

};

class GetUserImageParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_userId;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadUserImageParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Image index.	
	 */
	std::optional<qint32> imageIndex() const;
	void setImageIndex(std::optional<qint32> newImageIndex) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_userId;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class GetUserImageByIndexParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_userId;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class HeadUserImageByIndexParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;

	/**
	 * @brief Image index.	
	 */
	qint32 imageIndex() const;
	void setImageIndex(qint32 newImageIndex) const;

	/**
	 * @brief The fixed image width to return.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	std::optional<qint32> unplayedCount() const;
	void setUnplayedCount(std::optional<qint32> newUnplayedCount) const;

	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	std::optional<qint32> quality() const;
	void setQuality(std::optional<qint32> newQuality) const;

	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	std::optional<double> percentPlayed() const;
	void setPercentPlayed(std::optional<double> newPercentPlayed) const;

	/**
	 * @brief The maximum image width to return.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief The maximum image height to return.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief The fixed image height to return.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	ImageFormat format() const;
	void setFormat(ImageFormat newFormat) const;

	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	QString foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer) const;

	/**
	 * @brief Optional. Specify if whitespace should be cropped out of the image. True/False. If unspecified, whitespace will be cropped from logos and clear art.	
	 */
	std::optional<bool> cropWhitespace() const;
	void setCropWhitespace(std::optional<bool> newCropWhitespace) const;

	/**
	 * @brief Optional. Blur image.	
	 */
	std::optional<qint32> blur() const;
	void setBlur(std::optional<qint32> newBlur) const;

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	QString backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor) const;

	/**
	 * @brief Optional. Add a played indicator.	
	 */
	std::optional<bool> addPlayedIndicator() const;
	void setAddPlayedIndicator(std::optional<bool> newAddPlayedIndicator) const;


private:
	// Required path parameters
	QString m_userId;
	ImageType m_imageType;
	qint32 m_imageIndex;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	ImageFormat m_format;
	QString m_foregroundLayer;
	std::optional<bool> m_cropWhitespace = std::nullopt;
	std::optional<qint32> m_blur = std::nullopt;
	QString m_backgroundColor;
	std::optional<bool> m_addPlayedIndicator = std::nullopt;

};

class PostUserImageByIndexParams {
public:
	/**
	 * @brief User Id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief (Unused) Image index.	
	 */
	qint32 index() const;
	void setIndex(qint32 newIndex) const;

	/**
	 * @brief (Unused) Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;


private:
	// Required path parameters
	QString m_userId;
	qint32 m_index;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class DeleteUserImageByIndexParams {
public:
	/**
	 * @brief User Id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief (Unused) Image index.	
	 */
	qint32 index() const;
	void setIndex(qint32 newIndex) const;

	/**
	 * @brief (Unused) Image type.	
	 */
	ImageType imageType() const;
	void setImageType(ImageType newImageType) const;


private:
	// Required path parameters
	QString m_userId;
	qint32 m_index;
	ImageType m_imageType;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetGeneralImagesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetGeneralImageParams {
public:
	/**
	 * @brief Image Type (primary, backdrop, logo, etc).	
	 */
	QString type() const;
	void setType(QString newType) const;

	/**
	 * @brief The name of the image.	
	 */
	QString name() const;
	void setName(QString newName) const;


private:
	// Required path parameters
	QString m_type;
	QString m_name;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetMediaInfoImagesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetMediaInfoImageParams {
public:
	/**
	 * @brief The theme to get the image from.	
	 */
	QString theme() const;
	void setTheme(QString newTheme) const;

	/**
	 * @brief The name of the image.	
	 */
	QString name() const;
	void setName(QString newName) const;


private:
	// Required path parameters
	QString m_theme;
	QString m_name;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetRatingImagesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetRatingImageParams {
public:
	/**
	 * @brief The theme to get the image from.	
	 */
	QString theme() const;
	void setTheme(QString newTheme) const;

	/**
	 * @brief The name of the image.	
	 */
	QString name() const;
	void setName(QString newName) const;


private:
	// Required path parameters
	QString m_theme;
	QString m_name;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetInstantMixFromAlbumParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	QString m_jellyfinId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetInstantMixFromArtistsParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	QString m_jellyfinId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetInstantMixFromItemParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	QString m_jellyfinId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetInstantMixFromMusicGenresParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	QString m_jellyfinId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetInstantMixFromMusicGenreParams {
public:
	/**
	 * @brief The genre name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetInstantMixFromPlaylistParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	QString m_jellyfinId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetInstantMixFromSongParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	QString m_jellyfinId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetExternalIdInfosParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ApplySearchCriteriaParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Whether or not to replace all images. Default: True.	
	 */
	bool replaceAllImages() const;
	void setReplaceAllImages(bool newReplaceAllImages) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	bool m_replaceAllImages;

};

class GetBookRemoteSearchResultsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetBoxSetRemoteSearchResultsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetRemoteSearchImageParams {
public:
	/**
	 * @brief The provider name.	
	 */
	QString providerName() const;
	void setProviderName(QString newProviderName) const;

	/**
	 * @brief The image url.	
	 */
	QString imageUrl() const;
	void setImageUrl(QString newImageUrl) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_providerName;
	QString m_imageUrl;
	
	// Optional path parameters

	// Optional query parameters

};

class GetMovieRemoteSearchResultsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetMusicAlbumRemoteSearchResultsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetMusicArtistRemoteSearchResultsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetMusicVideoRemoteSearchResultsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetPersonRemoteSearchResultsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetSeriesRemoteSearchResultsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetTrailerRemoteSearchResultsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class PostParams {
public:
	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief (Optional) Determines if metadata should be replaced. Only applicable if mode is FullRefresh.	
	 */
	bool replaceAllMetadata() const;
	void setReplaceAllMetadata(bool newReplaceAllMetadata) const;

	/**
	 * @brief (Optional) Determines if images should be replaced. Only applicable if mode is FullRefresh.	
	 */
	bool replaceAllImages() const;
	void setReplaceAllImages(bool newReplaceAllImages) const;

	/**
	 * @brief (Optional) Specifies the metadata refresh mode.	
	 */
	MetadataRefreshMode metadataRefreshMode() const;
	void setMetadataRefreshMode(MetadataRefreshMode newMetadataRefreshMode) const;

	/**
	 * @brief (Optional) Specifies the image refresh mode.	
	 */
	MetadataRefreshMode imageRefreshMode() const;
	void setImageRefreshMode(MetadataRefreshMode newImageRefreshMode) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	bool m_replaceAllMetadata;
	bool m_replaceAllImages;
	MetadataRefreshMode m_metadataRefreshMode;
	MetadataRefreshMode m_imageRefreshMode;

};

class GetItemsParams {
public:
	/**
	 * @brief Optional. If specified, results will be filtered based on production year. This allows multiple, comma delimited.	
	 */
	QList<qint32> years() const;
	void setYears(QList<qint32> newYears) const;

	/**
	 * @brief Optional filter by VideoType (videofile, dvd, bluray, iso). Allows multiple, comma delimited.	
	 */
	QList<VideoType> videoTypes() const;
	void setVideoTypes(QList<VideoType> newVideoTypes) const;

	/**
	 * @brief The user id supplied as query parameter.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on tag. This allows multiple, pipe delimited.	
	 */
	QStringList tags() const;
	void setTags(QStringList newTags) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on studio. This allows multiple, pipe delimited.	
	 */
	QStringList studios() const;
	void setStudios(QStringList newStudios) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on studio id. This allows multiple, pipe delimited.	
	 */
	QStringList studioIds() const;
	void setStudioIds(QStringList newStudioIds) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Sort Order - Ascending,Descending.	
	 */
	QString sortOrder() const;
	void setSortOrder(QString newSortOrder) const;

	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	QString sortBy() const;
	void setSortBy(QString newSortBy) const;

	/**
	 * @brief Optional filter by Series Status. Allows multiple, comma delimited.	
	 */
	QList<SeriesStatus> seriesStatus() const;
	void setSeriesStatus(QList<SeriesStatus> newSeriesStatus) const;

	/**
	 * @brief Optional. Filter based on a search term.	
	 */
	QString searchTerm() const;
	void setSearchTerm(QString newSearchTerm) const;

	/**
	 * @brief When searching within folders, this determines whether or not the search will be recursive. true/false.	
	 */
	std::optional<bool> recursive() const;
	void setRecursive(std::optional<bool> newRecursive) const;

	/**
	 * @brief Optional. If specified, along with Person, results will be filtered to include only those containing the specified person and PersonType. Allows multiple, comma-delimited.	
	 */
	QStringList personTypes() const;
	void setPersonTypes(QStringList newPersonTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person id.	
	 */
	QStringList personIds() const;
	void setPersonIds(QStringList newPersonIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person.	
	 */
	QString person() const;
	void setPerson(QString newPerson) const;

	/**
	 * @brief Optional filter by parent index number.	
	 */
	std::optional<qint32> parentIndexNumber() const;
	void setParentIndexNumber(std::optional<qint32> newParentIndexNumber) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on OfficialRating. This allows multiple, pipe delimited.	
	 */
	QStringList officialRatings() const;
	void setOfficialRatings(QStringList newOfficialRatings) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	QString nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	QString nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith) const;

	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	QString nameLessThan() const;
	void setNameLessThan(QString newNameLessThan) const;

	/**
	 * @brief Optional. Filter by the minimum width of the item.	
	 */
	std::optional<qint32> minWidth() const;
	void setMinWidth(std::optional<qint32> newMinWidth) const;

	/**
	 * @brief Optional. The minimum premiere date. Format = ISO.	
	 */
	QDateTime minPremiereDate() const;
	void setMinPremiereDate(QDateTime newMinPremiereDate) const;

	/**
	 * @brief Optional filter by minimum official rating (PG, PG-13, TV-MA, etc).	
	 */
	QString minOfficialRating() const;
	void setMinOfficialRating(QString newMinOfficialRating) const;

	/**
	 * @brief Optional. Filter by the minimum height of the item.	
	 */
	std::optional<qint32> minHeight() const;
	void setMinHeight(std::optional<qint32> newMinHeight) const;

	/**
	 * @brief Optional. The minimum last saved date for the current user. Format = ISO.	
	 */
	QDateTime minDateLastSavedForUser() const;
	void setMinDateLastSavedForUser(QDateTime newMinDateLastSavedForUser) const;

	/**
	 * @brief Optional. The minimum last saved date. Format = ISO.	
	 */
	QDateTime minDateLastSaved() const;
	void setMinDateLastSaved(QDateTime newMinDateLastSaved) const;

	/**
	 * @brief Optional filter by minimum critic rating.	
	 */
	std::optional<double> minCriticRating() const;
	void setMinCriticRating(std::optional<double> newMinCriticRating) const;

	/**
	 * @brief Optional filter by minimum community rating.	
	 */
	std::optional<double> minCommunityRating() const;
	void setMinCommunityRating(std::optional<double> newMinCommunityRating) const;

	/**
	 * @brief Optional filter by MediaType. Allows multiple, comma delimited.	
	 */
	QStringList mediaTypes() const;
	void setMediaTypes(QStringList newMediaTypes) const;

	/**
	 * @brief Optional. Filter by the maximum width of the item.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief Optional. The maximum premiere date. Format = ISO.	
	 */
	QDateTime maxPremiereDate() const;
	void setMaxPremiereDate(QDateTime newMaxPremiereDate) const;

	/**
	 * @brief Optional filter by maximum official rating (PG, PG-13, TV-MA, etc).	
	 */
	QString maxOfficialRating() const;
	void setMaxOfficialRating(QString newMaxOfficialRating) const;

	/**
	 * @brief Optional. Filter by the maximum height of the item.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on LocationType. This allows multiple, comma delimited.	
	 */
	QList<LocationType> locationTypes() const;
	void setLocationTypes(QList<LocationType> newLocationTypes) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional filter by items that are unaired episodes or not.	
	 */
	std::optional<bool> isUnaired() const;
	void setIsUnaired(std::optional<bool> newIsUnaired) const;

	/**
	 * @brief Optional filter by items that are played, or not.	
	 */
	std::optional<bool> isPlayed() const;
	void setIsPlayed(std::optional<bool> newIsPlayed) const;

	/**
	 * @brief Optional filter by items that are placeholders.	
	 */
	std::optional<bool> isPlaceHolder() const;
	void setIsPlaceHolder(std::optional<bool> newIsPlaceHolder) const;

	/**
	 * @brief Optional filter by items that are missing episodes or not.	
	 */
	std::optional<bool> isMissing() const;
	void setIsMissing(std::optional<bool> newIsMissing) const;

	/**
	 * @brief Optional filter by items that are locked.	
	 */
	std::optional<bool> isLocked() const;
	void setIsLocked(std::optional<bool> newIsLocked) const;

	/**
	 * @brief Optional filter by items that are HD or not.	
	 */
	std::optional<bool> isHd() const;
	void setIsHd(std::optional<bool> newIsHd) const;

	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;

	/**
	 * @brief Optional filter by items that are 4K or not.	
	 */
	std::optional<bool> is4K() const;
	void setIs4K(std::optional<bool> newIs4K) const;

	/**
	 * @brief Optional filter by items that are 3D, or not.	
	 */
	std::optional<bool> is3D() const;
	void setIs3D(std::optional<bool> newIs3D) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on the item type. This allows multiple, comma delimited.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on those containing image types. This allows multiple, comma delimited.	
	 */
	QList<ImageType> imageTypes() const;
	void setImageTypes(QList<ImageType> newImageTypes) const;

	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. If specific items are needed, specify a list of item id's to retrieve. This allows multiple, comma delimited.	
	 */
	QStringList ids() const;
	void setIds(QStringList newIds) const;

	/**
	 * @brief Optional filter by items that have a tvdb id or not.	
	 */
	std::optional<bool> hasTvdbId() const;
	void setHasTvdbId(std::optional<bool> newHasTvdbId) const;

	/**
	 * @brief Optional filter by items with trailers.	
	 */
	std::optional<bool> hasTrailer() const;
	void setHasTrailer(std::optional<bool> newHasTrailer) const;

	/**
	 * @brief Optional filter by items that have a tmdb id or not.	
	 */
	std::optional<bool> hasTmdbId() const;
	void setHasTmdbId(std::optional<bool> newHasTmdbId) const;

	/**
	 * @brief Optional filter by items with theme videos.	
	 */
	std::optional<bool> hasThemeVideo() const;
	void setHasThemeVideo(std::optional<bool> newHasThemeVideo) const;

	/**
	 * @brief Optional filter by items with theme songs.	
	 */
	std::optional<bool> hasThemeSong() const;
	void setHasThemeSong(std::optional<bool> newHasThemeSong) const;

	/**
	 * @brief Optional filter by items with subtitles.	
	 */
	std::optional<bool> hasSubtitles() const;
	void setHasSubtitles(std::optional<bool> newHasSubtitles) const;

	/**
	 * @brief Optional filter by items with special features.	
	 */
	std::optional<bool> hasSpecialFeature() const;
	void setHasSpecialFeature(std::optional<bool> newHasSpecialFeature) const;

	/**
	 * @brief Optional filter by items that have or do not have a parental rating.	
	 */
	std::optional<bool> hasParentalRating() const;
	void setHasParentalRating(std::optional<bool> newHasParentalRating) const;

	/**
	 * @brief Optional filter by items that have an overview or not.	
	 */
	std::optional<bool> hasOverview() const;
	void setHasOverview(std::optional<bool> newHasOverview) const;

	/**
	 * @brief Optional filter by items that have official ratings.	
	 */
	std::optional<bool> hasOfficialRating() const;
	void setHasOfficialRating(std::optional<bool> newHasOfficialRating) const;

	/**
	 * @brief Optional filter by items that have an imdb id or not.	
	 */
	std::optional<bool> hasImdbId() const;
	void setHasImdbId(std::optional<bool> newHasImdbId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on genre. This allows multiple, pipe delimited.	
	 */
	QStringList genres() const;
	void setGenres(QStringList newGenres) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on genre id. This allows multiple, pipe delimited.	
	 */
	QStringList genreIds() const;
	void setGenreIds(QStringList newGenreIds) const;

	/**
	 * @brief Optional. Specify additional filters to apply. This allows multiple, comma delimited. Options: IsFolder, IsNotFolder, IsUnplayed, IsPlayed, IsFavorite, IsResumable, Likes, Dislikes.	
	 */
	QList<ItemFilter> filters() const;
	void setFilters(QList<ItemFilter> newFilters) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on the LocationType. This allows multiple, comma delimited.	
	 */
	QList<LocationType> excludeLocationTypes() const;
	void setExcludeLocationTypes(QList<LocationType> newExcludeLocationTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	QStringList excludeItemTypes() const;
	void setExcludeItemTypes(QStringList newExcludeItemTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered by excluding item ids. This allows multiple, comma delimited.	
	 */
	QStringList excludeItemIds() const;
	void setExcludeItemIds(QStringList newExcludeItemIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on artist id. This allows multiple, pipe delimited.	
	 */
	QStringList excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds) const;

	/**
	 * @brief Optional, include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Enable the total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional, include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified contributing artist id.	
	 */
	QStringList contributingArtistIds() const;
	void setContributingArtistIds(QStringList newContributingArtistIds) const;

	/**
	 * @brief Whether or not to hide items behind their boxsets.	
	 */
	std::optional<bool> collapseBoxSetItems() const;
	void setCollapseBoxSetItems(std::optional<bool> newCollapseBoxSetItems) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on artists. This allows multiple, pipe delimited.	
	 */
	QStringList artists() const;
	void setArtists(QStringList newArtists) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified artist id.	
	 */
	QStringList artistIds() const;
	void setArtistIds(QStringList newArtistIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on album. This allows multiple, pipe delimited.	
	 */
	QStringList albums() const;
	void setAlbums(QStringList newAlbums) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on album id. This allows multiple, pipe delimited.	
	 */
	QStringList albumIds() const;
	void setAlbumIds(QStringList newAlbumIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified album artist id.	
	 */
	QStringList albumArtistIds() const;
	void setAlbumArtistIds(QStringList newAlbumArtistIds) const;

	/**
	 * @brief Optional. Return items that are siblings of a supplied item.	
	 */
	QString adjacentTo() const;
	void setAdjacentTo(QString newAdjacentTo) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QList<qint32> m_years;
	QList<VideoType> m_videoTypes;
	QString m_userId;
	QStringList m_tags;
	QStringList m_studios;
	QStringList m_studioIds;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_sortOrder;
	QString m_sortBy;
	QList<SeriesStatus> m_seriesStatus;
	QString m_searchTerm;
	std::optional<bool> m_recursive = std::nullopt;
	QStringList m_personTypes;
	QStringList m_personIds;
	QString m_person;
	std::optional<qint32> m_parentIndexNumber = std::nullopt;
	QString m_parentId;
	QStringList m_officialRatings;
	QString m_nameStartsWithOrGreater;
	QString m_nameStartsWith;
	QString m_nameLessThan;
	std::optional<qint32> m_minWidth = std::nullopt;
	QDateTime m_minPremiereDate;
	QString m_minOfficialRating;
	std::optional<qint32> m_minHeight = std::nullopt;
	QDateTime m_minDateLastSavedForUser;
	QDateTime m_minDateLastSaved;
	std::optional<double> m_minCriticRating = std::nullopt;
	std::optional<double> m_minCommunityRating = std::nullopt;
	QStringList m_mediaTypes;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QDateTime m_maxPremiereDate;
	QString m_maxOfficialRating;
	std::optional<qint32> m_maxHeight = std::nullopt;
	QList<LocationType> m_locationTypes;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isUnaired = std::nullopt;
	std::optional<bool> m_isPlayed = std::nullopt;
	std::optional<bool> m_isPlaceHolder = std::nullopt;
	std::optional<bool> m_isMissing = std::nullopt;
	std::optional<bool> m_isLocked = std::nullopt;
	std::optional<bool> m_isHd = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<bool> m_is4K = std::nullopt;
	std::optional<bool> m_is3D = std::nullopt;
	QStringList m_includeItemTypes;
	QList<ImageType> m_imageTypes;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QStringList m_ids;
	std::optional<bool> m_hasTvdbId = std::nullopt;
	std::optional<bool> m_hasTrailer = std::nullopt;
	std::optional<bool> m_hasTmdbId = std::nullopt;
	std::optional<bool> m_hasThemeVideo = std::nullopt;
	std::optional<bool> m_hasThemeSong = std::nullopt;
	std::optional<bool> m_hasSubtitles = std::nullopt;
	std::optional<bool> m_hasSpecialFeature = std::nullopt;
	std::optional<bool> m_hasParentalRating = std::nullopt;
	std::optional<bool> m_hasOverview = std::nullopt;
	std::optional<bool> m_hasOfficialRating = std::nullopt;
	std::optional<bool> m_hasImdbId = std::nullopt;
	QStringList m_genres;
	QStringList m_genreIds;
	QList<ItemFilter> m_filters;
	QList<ItemFields> m_fields;
	QList<LocationType> m_excludeLocationTypes;
	QStringList m_excludeItemTypes;
	QStringList m_excludeItemIds;
	QStringList m_excludeArtistIds;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	QStringList m_contributingArtistIds;
	std::optional<bool> m_collapseBoxSetItems = std::nullopt;
	QStringList m_artists;
	QStringList m_artistIds;
	QStringList m_albums;
	QStringList m_albumIds;
	QStringList m_albumArtistIds;
	QString m_adjacentTo;

};

class DeleteItemsParams {
public:
	/**
	 * @brief The item ids.	
	 */
	QStringList ids() const;
	void setIds(QStringList newIds) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QStringList m_ids;

};

class GetItemsByUserIdParams {
public:
	/**
	 * @brief The user id supplied as query parameter.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on production year. This allows multiple, comma delimeted.	
	 */
	QList<qint32> years() const;
	void setYears(QList<qint32> newYears) const;

	/**
	 * @brief Optional filter by VideoType (videofile, dvd, bluray, iso). Allows multiple, comma delimeted.	
	 */
	QList<VideoType> videoTypes() const;
	void setVideoTypes(QList<VideoType> newVideoTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on tag. This allows multiple, pipe delimeted.	
	 */
	QStringList tags() const;
	void setTags(QStringList newTags) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on studio. This allows multiple, pipe delimeted.	
	 */
	QStringList studios() const;
	void setStudios(QStringList newStudios) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on studio id. This allows multiple, pipe delimeted.	
	 */
	QStringList studioIds() const;
	void setStudioIds(QStringList newStudioIds) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Sort Order - Ascending,Descending.	
	 */
	QString sortOrder() const;
	void setSortOrder(QString newSortOrder) const;

	/**
	 * @brief Optional. Specify one or more sort orders, comma delimeted. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	QString sortBy() const;
	void setSortBy(QString newSortBy) const;

	/**
	 * @brief Optional filter by Series Status. Allows multiple, comma delimeted.	
	 */
	QList<SeriesStatus> seriesStatus() const;
	void setSeriesStatus(QList<SeriesStatus> newSeriesStatus) const;

	/**
	 * @brief Optional. Filter based on a search term.	
	 */
	QString searchTerm() const;
	void setSearchTerm(QString newSearchTerm) const;

	/**
	 * @brief When searching within folders, this determines whether or not the search will be recursive. true/false.	
	 */
	std::optional<bool> recursive() const;
	void setRecursive(std::optional<bool> newRecursive) const;

	/**
	 * @brief Optional. If specified, along with Person, results will be filtered to include only those containing the specified person and PersonType. Allows multiple, comma-delimited.	
	 */
	QStringList personTypes() const;
	void setPersonTypes(QStringList newPersonTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person id.	
	 */
	QStringList personIds() const;
	void setPersonIds(QStringList newPersonIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person.	
	 */
	QString person() const;
	void setPerson(QString newPerson) const;

	/**
	 * @brief Optional filter by parent index number.	
	 */
	std::optional<qint32> parentIndexNumber() const;
	void setParentIndexNumber(std::optional<qint32> newParentIndexNumber) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on OfficialRating. This allows multiple, pipe delimeted.	
	 */
	QStringList officialRatings() const;
	void setOfficialRatings(QStringList newOfficialRatings) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	QString nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	QString nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith) const;

	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	QString nameLessThan() const;
	void setNameLessThan(QString newNameLessThan) const;

	/**
	 * @brief Optional. Filter by the minimum width of the item.	
	 */
	std::optional<qint32> minWidth() const;
	void setMinWidth(std::optional<qint32> newMinWidth) const;

	/**
	 * @brief Optional. The minimum premiere date. Format = ISO.	
	 */
	QDateTime minPremiereDate() const;
	void setMinPremiereDate(QDateTime newMinPremiereDate) const;

	/**
	 * @brief Optional filter by minimum official rating (PG, PG-13, TV-MA, etc).	
	 */
	QString minOfficialRating() const;
	void setMinOfficialRating(QString newMinOfficialRating) const;

	/**
	 * @brief Optional. Filter by the minimum height of the item.	
	 */
	std::optional<qint32> minHeight() const;
	void setMinHeight(std::optional<qint32> newMinHeight) const;

	/**
	 * @brief Optional. The minimum last saved date for the current user. Format = ISO.	
	 */
	QDateTime minDateLastSavedForUser() const;
	void setMinDateLastSavedForUser(QDateTime newMinDateLastSavedForUser) const;

	/**
	 * @brief Optional. The minimum last saved date. Format = ISO.	
	 */
	QDateTime minDateLastSaved() const;
	void setMinDateLastSaved(QDateTime newMinDateLastSaved) const;

	/**
	 * @brief Optional filter by minimum critic rating.	
	 */
	std::optional<double> minCriticRating() const;
	void setMinCriticRating(std::optional<double> newMinCriticRating) const;

	/**
	 * @brief Optional filter by minimum community rating.	
	 */
	std::optional<double> minCommunityRating() const;
	void setMinCommunityRating(std::optional<double> newMinCommunityRating) const;

	/**
	 * @brief Optional filter by MediaType. Allows multiple, comma delimited.	
	 */
	QStringList mediaTypes() const;
	void setMediaTypes(QStringList newMediaTypes) const;

	/**
	 * @brief Optional. Filter by the maximum width of the item.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief Optional. The maximum premiere date. Format = ISO.	
	 */
	QDateTime maxPremiereDate() const;
	void setMaxPremiereDate(QDateTime newMaxPremiereDate) const;

	/**
	 * @brief Optional filter by maximum official rating (PG, PG-13, TV-MA, etc).	
	 */
	QString maxOfficialRating() const;
	void setMaxOfficialRating(QString newMaxOfficialRating) const;

	/**
	 * @brief Optional. Filter by the maximum height of the item.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on LocationType. This allows multiple, comma delimeted.	
	 */
	QList<LocationType> locationTypes() const;
	void setLocationTypes(QList<LocationType> newLocationTypes) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional filter by items that are unaired episodes or not.	
	 */
	std::optional<bool> isUnaired() const;
	void setIsUnaired(std::optional<bool> newIsUnaired) const;

	/**
	 * @brief Optional filter by items that are played, or not.	
	 */
	std::optional<bool> isPlayed() const;
	void setIsPlayed(std::optional<bool> newIsPlayed) const;

	/**
	 * @brief Optional filter by items that are placeholders.	
	 */
	std::optional<bool> isPlaceHolder() const;
	void setIsPlaceHolder(std::optional<bool> newIsPlaceHolder) const;

	/**
	 * @brief Optional filter by items that are missing episodes or not.	
	 */
	std::optional<bool> isMissing() const;
	void setIsMissing(std::optional<bool> newIsMissing) const;

	/**
	 * @brief Optional filter by items that are locked.	
	 */
	std::optional<bool> isLocked() const;
	void setIsLocked(std::optional<bool> newIsLocked) const;

	/**
	 * @brief Optional filter by items that are HD or not.	
	 */
	std::optional<bool> isHd() const;
	void setIsHd(std::optional<bool> newIsHd) const;

	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;

	/**
	 * @brief Optional filter by items that are 4K or not.	
	 */
	std::optional<bool> is4K() const;
	void setIs4K(std::optional<bool> newIs4K) const;

	/**
	 * @brief Optional filter by items that are 3D, or not.	
	 */
	std::optional<bool> is3D() const;
	void setIs3D(std::optional<bool> newIs3D) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on the item type. This allows multiple, comma delimeted.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on those containing image types. This allows multiple, comma delimited.	
	 */
	QList<ImageType> imageTypes() const;
	void setImageTypes(QList<ImageType> newImageTypes) const;

	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. If specific items are needed, specify a list of item id's to retrieve. This allows multiple, comma delimited.	
	 */
	QStringList ids() const;
	void setIds(QStringList newIds) const;

	/**
	 * @brief Optional filter by items that have a tvdb id or not.	
	 */
	std::optional<bool> hasTvdbId() const;
	void setHasTvdbId(std::optional<bool> newHasTvdbId) const;

	/**
	 * @brief Optional filter by items with trailers.	
	 */
	std::optional<bool> hasTrailer() const;
	void setHasTrailer(std::optional<bool> newHasTrailer) const;

	/**
	 * @brief Optional filter by items that have a tmdb id or not.	
	 */
	std::optional<bool> hasTmdbId() const;
	void setHasTmdbId(std::optional<bool> newHasTmdbId) const;

	/**
	 * @brief Optional filter by items with theme videos.	
	 */
	std::optional<bool> hasThemeVideo() const;
	void setHasThemeVideo(std::optional<bool> newHasThemeVideo) const;

	/**
	 * @brief Optional filter by items with theme songs.	
	 */
	std::optional<bool> hasThemeSong() const;
	void setHasThemeSong(std::optional<bool> newHasThemeSong) const;

	/**
	 * @brief Optional filter by items with subtitles.	
	 */
	std::optional<bool> hasSubtitles() const;
	void setHasSubtitles(std::optional<bool> newHasSubtitles) const;

	/**
	 * @brief Optional filter by items with special features.	
	 */
	std::optional<bool> hasSpecialFeature() const;
	void setHasSpecialFeature(std::optional<bool> newHasSpecialFeature) const;

	/**
	 * @brief Optional filter by items that have or do not have a parental rating.	
	 */
	std::optional<bool> hasParentalRating() const;
	void setHasParentalRating(std::optional<bool> newHasParentalRating) const;

	/**
	 * @brief Optional filter by items that have an overview or not.	
	 */
	std::optional<bool> hasOverview() const;
	void setHasOverview(std::optional<bool> newHasOverview) const;

	/**
	 * @brief Optional filter by items that have official ratings.	
	 */
	std::optional<bool> hasOfficialRating() const;
	void setHasOfficialRating(std::optional<bool> newHasOfficialRating) const;

	/**
	 * @brief Optional filter by items that have an imdb id or not.	
	 */
	std::optional<bool> hasImdbId() const;
	void setHasImdbId(std::optional<bool> newHasImdbId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on genre. This allows multiple, pipe delimeted.	
	 */
	QStringList genres() const;
	void setGenres(QStringList newGenres) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on genre id. This allows multiple, pipe delimeted.	
	 */
	QStringList genreIds() const;
	void setGenreIds(QStringList newGenreIds) const;

	/**
	 * @brief Optional. Specify additional filters to apply. This allows multiple, comma delimeted. Options: IsFolder, IsNotFolder, IsUnplayed, IsPlayed, IsFavorite, IsResumable, Likes, Dislikes.	
	 */
	QList<ItemFilter> filters() const;
	void setFilters(QList<ItemFilter> newFilters) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimeted. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on the LocationType. This allows multiple, comma delimeted.	
	 */
	QList<LocationType> excludeLocationTypes() const;
	void setExcludeLocationTypes(QList<LocationType> newExcludeLocationTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimeted.	
	 */
	QStringList excludeItemTypes() const;
	void setExcludeItemTypes(QStringList newExcludeItemTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered by exxcluding item ids. This allows multiple, comma delimeted.	
	 */
	QStringList excludeItemIds() const;
	void setExcludeItemIds(QStringList newExcludeItemIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on artist id. This allows multiple, pipe delimeted.	
	 */
	QStringList excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds) const;

	/**
	 * @brief Optional, include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Enable the total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional, include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified contributing artist id.	
	 */
	QStringList contributingArtistIds() const;
	void setContributingArtistIds(QStringList newContributingArtistIds) const;

	/**
	 * @brief Whether or not to hide items behind their boxsets.	
	 */
	std::optional<bool> collapseBoxSetItems() const;
	void setCollapseBoxSetItems(std::optional<bool> newCollapseBoxSetItems) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on artists. This allows multiple, pipe delimeted.	
	 */
	QStringList artists() const;
	void setArtists(QStringList newArtists) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified artist id.	
	 */
	QStringList artistIds() const;
	void setArtistIds(QStringList newArtistIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on album. This allows multiple, pipe delimeted.	
	 */
	QStringList albums() const;
	void setAlbums(QStringList newAlbums) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on album id. This allows multiple, pipe delimeted.	
	 */
	QStringList albumIds() const;
	void setAlbumIds(QStringList newAlbumIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified album artist id.	
	 */
	QStringList albumArtistIds() const;
	void setAlbumArtistIds(QStringList newAlbumArtistIds) const;

	/**
	 * @brief Optional. Return items that are siblings of a supplied item.	
	 */
	QString adjacentTo() const;
	void setAdjacentTo(QString newAdjacentTo) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QList<qint32> m_years;
	QList<VideoType> m_videoTypes;
	QStringList m_tags;
	QStringList m_studios;
	QStringList m_studioIds;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_sortOrder;
	QString m_sortBy;
	QList<SeriesStatus> m_seriesStatus;
	QString m_searchTerm;
	std::optional<bool> m_recursive = std::nullopt;
	QStringList m_personTypes;
	QStringList m_personIds;
	QString m_person;
	std::optional<qint32> m_parentIndexNumber = std::nullopt;
	QString m_parentId;
	QStringList m_officialRatings;
	QString m_nameStartsWithOrGreater;
	QString m_nameStartsWith;
	QString m_nameLessThan;
	std::optional<qint32> m_minWidth = std::nullopt;
	QDateTime m_minPremiereDate;
	QString m_minOfficialRating;
	std::optional<qint32> m_minHeight = std::nullopt;
	QDateTime m_minDateLastSavedForUser;
	QDateTime m_minDateLastSaved;
	std::optional<double> m_minCriticRating = std::nullopt;
	std::optional<double> m_minCommunityRating = std::nullopt;
	QStringList m_mediaTypes;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QDateTime m_maxPremiereDate;
	QString m_maxOfficialRating;
	std::optional<qint32> m_maxHeight = std::nullopt;
	QList<LocationType> m_locationTypes;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isUnaired = std::nullopt;
	std::optional<bool> m_isPlayed = std::nullopt;
	std::optional<bool> m_isPlaceHolder = std::nullopt;
	std::optional<bool> m_isMissing = std::nullopt;
	std::optional<bool> m_isLocked = std::nullopt;
	std::optional<bool> m_isHd = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<bool> m_is4K = std::nullopt;
	std::optional<bool> m_is3D = std::nullopt;
	QStringList m_includeItemTypes;
	QList<ImageType> m_imageTypes;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QStringList m_ids;
	std::optional<bool> m_hasTvdbId = std::nullopt;
	std::optional<bool> m_hasTrailer = std::nullopt;
	std::optional<bool> m_hasTmdbId = std::nullopt;
	std::optional<bool> m_hasThemeVideo = std::nullopt;
	std::optional<bool> m_hasThemeSong = std::nullopt;
	std::optional<bool> m_hasSubtitles = std::nullopt;
	std::optional<bool> m_hasSpecialFeature = std::nullopt;
	std::optional<bool> m_hasParentalRating = std::nullopt;
	std::optional<bool> m_hasOverview = std::nullopt;
	std::optional<bool> m_hasOfficialRating = std::nullopt;
	std::optional<bool> m_hasImdbId = std::nullopt;
	QStringList m_genres;
	QStringList m_genreIds;
	QList<ItemFilter> m_filters;
	QList<ItemFields> m_fields;
	QList<LocationType> m_excludeLocationTypes;
	QStringList m_excludeItemTypes;
	QStringList m_excludeItemIds;
	QStringList m_excludeArtistIds;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	QStringList m_contributingArtistIds;
	std::optional<bool> m_collapseBoxSetItems = std::nullopt;
	QStringList m_artists;
	QStringList m_artistIds;
	QStringList m_albums;
	QStringList m_albumIds;
	QStringList m_albumArtistIds;
	QString m_adjacentTo;

};

class GetResumeItemsParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief The start index.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief The search term.	
	 */
	QString searchTerm() const;
	void setSearchTerm(QString newSearchTerm) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional. Filter by MediaType. Allows multiple, comma delimited.	
	 */
	QStringList mediaTypes() const;
	void setMediaTypes(QStringList newMediaTypes) const;

	/**
	 * @brief The item limit.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on the item type. This allows multiple, comma delimited.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	QStringList excludeItemTypes() const;
	void setExcludeItemTypes(QStringList newExcludeItemTypes) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Enable the total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_searchTerm;
	QString m_parentId;
	QStringList m_mediaTypes;
	std::optional<qint32> m_limit = std::nullopt;
	QStringList m_includeItemTypes;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_excludeItemTypes;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class UpdateItemParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class DeleteItemParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateItemContentTypeParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The content type of the item.	
	 */
	QString contentType() const;
	void setContentType(QString newContentType) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_contentType;

};

class GetMetadataEditorInfoParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetSimilarAlbumsParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Exclude artist ids.	
	 */
	QStringList excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_excludeArtistIds;

};

class GetSimilarArtistsParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Exclude artist ids.	
	 */
	QStringList excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_excludeArtistIds;

};

class GetAncestorsParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class GetCriticReviewsParams {
public:
	/**
	 * @brief 	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetDownloadParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetFileParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetSimilarItemsParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Exclude artist ids.	
	 */
	QStringList excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_excludeArtistIds;

};

class GetThemeMediaParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Determines whether or not parent items should be searched for theme media.	
	 */
	bool inheritFromParent() const;
	void setInheritFromParent(bool newInheritFromParent) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	bool m_inheritFromParent;

};

class GetThemeSongsParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Determines whether or not parent items should be searched for theme media.	
	 */
	bool inheritFromParent() const;
	void setInheritFromParent(bool newInheritFromParent) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	bool m_inheritFromParent;

};

class GetThemeVideosParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Determines whether or not parent items should be searched for theme media.	
	 */
	bool inheritFromParent() const;
	void setInheritFromParent(bool newInheritFromParent) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	bool m_inheritFromParent;

};

class GetItemCountsParams {
public:
	/**
	 * @brief Optional. Get counts from a specific user's library.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Get counts of favorite items.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<bool> m_isFavorite = std::nullopt;

};

class GetLibraryOptionsInfoParams {
public:
	/**
	 * @brief Library content type.	
	 */
	QString libraryContentType() const;
	void setLibraryContentType(QString newLibraryContentType) const;

	/**
	 * @brief Whether this is a new library.	
	 */
	bool isNewLibrary() const;
	void setIsNewLibrary(bool newIsNewLibrary) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_libraryContentType;
	bool m_isNewLibrary;

};

class PostUpdatedMediaParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetMediaFoldersParams {
public:
	/**
	 * @brief Optional. Filter by folders that are marked hidden, or not.	
	 */
	std::optional<bool> isHidden() const;
	void setIsHidden(std::optional<bool> newIsHidden) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<bool> m_isHidden = std::nullopt;

};

class PostAddedMoviesParams {
public:
	/**
	 * @brief The tmdbId.	
	 */
	QString tmdbId() const;
	void setTmdbId(QString newTmdbId) const;

	/**
	 * @brief The imdbId.	
	 */
	QString imdbId() const;
	void setImdbId(QString newImdbId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_tmdbId;
	QString m_imdbId;

};

class PostUpdatedMoviesParams {
public:
	/**
	 * @brief The tmdbId.	
	 */
	QString tmdbId() const;
	void setTmdbId(QString newTmdbId) const;

	/**
	 * @brief The imdbId.	
	 */
	QString imdbId() const;
	void setImdbId(QString newImdbId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_tmdbId;
	QString m_imdbId;

};

class GetPhysicalPathsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class RefreshLibraryParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class PostAddedSeriesParams {
public:
	/**
	 * @brief The tvdbId.	
	 */
	QString tvdbId() const;
	void setTvdbId(QString newTvdbId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_tvdbId;

};

class PostUpdatedSeriesParams {
public:
	/**
	 * @brief The tvdbId.	
	 */
	QString tvdbId() const;
	void setTvdbId(QString newTvdbId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_tvdbId;

};

class GetSimilarMoviesParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Exclude artist ids.	
	 */
	QStringList excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_excludeArtistIds;

};

class GetSimilarShowsParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Exclude artist ids.	
	 */
	QStringList excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_excludeArtistIds;

};

class GetSimilarTrailersParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Exclude artist ids.	
	 */
	QStringList excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_excludeArtistIds;

};

class GetVirtualFoldersParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class AddVirtualFolderParams {
public:
	/**
	 * @brief Whether to refresh the library.	
	 */
	bool refreshLibrary() const;
	void setRefreshLibrary(bool newRefreshLibrary) const;

	/**
	 * @brief The paths of the virtual folder.	
	 */
	QStringList paths() const;
	void setPaths(QStringList newPaths) const;

	/**
	 * @brief The name of the virtual folder.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief The type of the collection.	
	 */
	QString collectionType() const;
	void setCollectionType(QString newCollectionType) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	bool m_refreshLibrary;
	QStringList m_paths;
	QString m_name;
	QString m_collectionType;

};

class RemoveVirtualFolderParams {
public:
	/**
	 * @brief Whether to refresh the library.	
	 */
	bool refreshLibrary() const;
	void setRefreshLibrary(bool newRefreshLibrary) const;

	/**
	 * @brief The name of the folder.	
	 */
	QString name() const;
	void setName(QString newName) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	bool m_refreshLibrary;
	QString m_name;

};

class UpdateLibraryOptionsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class RenameVirtualFolderParams {
public:
	/**
	 * @brief Whether to refresh the library.	
	 */
	bool refreshLibrary() const;
	void setRefreshLibrary(bool newRefreshLibrary) const;

	/**
	 * @brief The new name.	
	 */
	QString newName() const;
	void setNewName(QString newNewName) const;

	/**
	 * @brief The name of the virtual folder.	
	 */
	QString name() const;
	void setName(QString newName) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	bool m_refreshLibrary;
	QString m_newName;
	QString m_name;

};

class AddMediaPathParams {
public:
	/**
	 * @brief Whether to refresh the library.	
	 */
	bool refreshLibrary() const;
	void setRefreshLibrary(bool newRefreshLibrary) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	bool m_refreshLibrary;

};

class RemoveMediaPathParams {
public:
	/**
	 * @brief Whether to refresh the library.	
	 */
	bool refreshLibrary() const;
	void setRefreshLibrary(bool newRefreshLibrary) const;

	/**
	 * @brief The path to remove.	
	 */
	QString path() const;
	void setPath(QString newPath) const;

	/**
	 * @brief The name of the library.	
	 */
	QString name() const;
	void setName(QString newName) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	bool m_refreshLibrary;
	QString m_path;
	QString m_name;

};

class UpdateMediaPathParams {
public:
	/**
	 * @brief The name of the library.	
	 */
	QString name() const;
	void setName(QString newName) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_name;

};

class GetChannelMappingOptionsParams {
public:
	/**
	 * @brief Provider id.	
	 */
	QString providerId() const;
	void setProviderId(QString newProviderId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_providerId;

};

class SetChannelMappingParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLiveTvChannelsParams {
public:
	/**
	 * @brief Optional. Filter by user and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Filter by channel type.	
	 */
	ChannelType type() const;
	void setType(ChannelType newType) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. Sort order.	
	 */
	SortOrder sortOrder() const;
	void setSortOrder(SortOrder newSortOrder) const;

	/**
	 * @brief Optional. Key to sort by.	
	 */
	QStringList sortBy() const;
	void setSortBy(QStringList newSortBy) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Filter for sports.	
	 */
	std::optional<bool> isSports() const;
	void setIsSports(std::optional<bool> newIsSports) const;

	/**
	 * @brief Optional. Filter for series.	
	 */
	std::optional<bool> isSeries() const;
	void setIsSeries(std::optional<bool> newIsSeries) const;

	/**
	 * @brief Optional. Filter for news.	
	 */
	std::optional<bool> isNews() const;
	void setIsNews(std::optional<bool> newIsNews) const;

	/**
	 * @brief Optional. Filter for movies.	
	 */
	std::optional<bool> isMovie() const;
	void setIsMovie(std::optional<bool> newIsMovie) const;

	/**
	 * @brief Optional. Filter by channels that are liked, or not.	
	 */
	std::optional<bool> isLiked() const;
	void setIsLiked(std::optional<bool> newIsLiked) const;

	/**
	 * @brief Optional. Filter for kids.	
	 */
	std::optional<bool> isKids() const;
	void setIsKids(std::optional<bool> newIsKids) const;

	/**
	 * @brief Optional. Filter by channels that are favorites, or not.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;

	/**
	 * @brief Optional. Filter by channels that are disliked, or not.	
	 */
	std::optional<bool> isDisliked() const;
	void setIsDisliked(std::optional<bool> newIsDisliked) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief "Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;

	/**
	 * @brief Optional. Incorporate favorite and like status into channel sorting.	
	 */
	bool enableFavoriteSorting() const;
	void setEnableFavoriteSorting(bool newEnableFavoriteSorting) const;

	/**
	 * @brief Optional. Adds current program info to each channel.	
	 */
	bool addCurrentProgram() const;
	void setAddCurrentProgram(bool newAddCurrentProgram) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	ChannelType m_type;
	std::optional<qint32> m_startIndex = std::nullopt;
	SortOrder m_sortOrder;
	QStringList m_sortBy;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isLiked = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<bool> m_isDisliked = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	bool m_enableFavoriteSorting;
	bool m_addCurrentProgram;

};

class GetChannelParams {
public:
	/**
	 * @brief Channel id.	
	 */
	QString channelId() const;
	void setChannelId(QString newChannelId) const;

	/**
	 * @brief Optional. Attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_channelId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class GetGuideInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLiveTvInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class AddListingProviderParams {
public:
	/**
	 * @brief Validate login.	
	 */
	bool validateLogin() const;
	void setValidateLogin(bool newValidateLogin) const;

	/**
	 * @brief Validate listings.	
	 */
	bool validateListings() const;
	void setValidateListings(bool newValidateListings) const;

	/**
	 * @brief Password.	
	 */
	QString pw() const;
	void setPw(QString newPw) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	bool m_validateLogin;
	bool m_validateListings;
	QString m_pw;

};

class DeleteListingProviderParams {
public:
	/**
	 * @brief Listing provider id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_jellyfinId;

};

class GetDefaultListingProviderParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLineupsParams {
public:
	/**
	 * @brief Provider type.	
	 */
	QString type() const;
	void setType(QString newType) const;

	/**
	 * @brief Location.	
	 */
	QString location() const;
	void setLocation(QString newLocation) const;

	/**
	 * @brief Provider id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;

	/**
	 * @brief Country.	
	 */
	QString country() const;
	void setCountry(QString newCountry) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_type;
	QString m_location;
	QString m_jellyfinId;
	QString m_country;

};

class GetSchedulesDirectCountriesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLiveRecordingFileParams {
public:
	/**
	 * @brief Recording id.	
	 */
	QString recordingId() const;
	void setRecordingId(QString newRecordingId) const;


private:
	// Required path parameters
	QString m_recordingId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLiveStreamFileParams {
public:
	/**
	 * @brief Stream id.	
	 */
	QString streamId() const;
	void setStreamId(QString newStreamId) const;

	/**
	 * @brief Container type.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;


private:
	// Required path parameters
	QString m_streamId;
	QString m_container;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLiveTvProgramsParams {
public:
	/**
	 * @brief Optional. Filter by user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Sort Order - Ascending,Descending.	
	 */
	QString sortOrder() const;
	void setSortOrder(QString newSortOrder) const;

	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Name, StartDate.	
	 */
	QString sortBy() const;
	void setSortBy(QString newSortBy) const;

	/**
	 * @brief Optional. Filter by series timer id.	
	 */
	QString seriesTimerId() const;
	void setSeriesTimerId(QString newSeriesTimerId) const;

	/**
	 * @brief Optional. The minimum premiere start date.	
	 */
	QDateTime minStartDate() const;
	void setMinStartDate(QDateTime newMinStartDate) const;

	/**
	 * @brief Optional. The minimum premiere end date.	
	 */
	QDateTime minEndDate() const;
	void setMinEndDate(QDateTime newMinEndDate) const;

	/**
	 * @brief Optional. The maximum premiere start date.	
	 */
	QDateTime maxStartDate() const;
	void setMaxStartDate(QDateTime newMaxStartDate) const;

	/**
	 * @brief Optional. The maximum premiere end date.	
	 */
	QDateTime maxEndDate() const;
	void setMaxEndDate(QDateTime newMaxEndDate) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Filter by library series id.	
	 */
	QString librarySeriesId() const;
	void setLibrarySeriesId(QString newLibrarySeriesId) const;

	/**
	 * @brief Optional. Filter for sports.	
	 */
	std::optional<bool> isSports() const;
	void setIsSports(std::optional<bool> newIsSports) const;

	/**
	 * @brief Optional. Filter for series.	
	 */
	std::optional<bool> isSeries() const;
	void setIsSeries(std::optional<bool> newIsSeries) const;

	/**
	 * @brief Optional. Filter for news.	
	 */
	std::optional<bool> isNews() const;
	void setIsNews(std::optional<bool> newIsNews) const;

	/**
	 * @brief Optional. Filter for movies.	
	 */
	std::optional<bool> isMovie() const;
	void setIsMovie(std::optional<bool> newIsMovie) const;

	/**
	 * @brief Optional. Filter for kids.	
	 */
	std::optional<bool> isKids() const;
	void setIsKids(std::optional<bool> newIsKids) const;

	/**
	 * @brief Optional. Filter by programs that are currently airing, or not.	
	 */
	std::optional<bool> isAiring() const;
	void setIsAiring(std::optional<bool> newIsAiring) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Filter by programs that have completed airing, or not.	
	 */
	std::optional<bool> hasAired() const;
	void setHasAired(std::optional<bool> newHasAired) const;

	/**
	 * @brief The genres to return guide information for.	
	 */
	QStringList genres() const;
	void setGenres(QStringList newGenres) const;

	/**
	 * @brief The genre ids to return guide information for.	
	 */
	QStringList genreIds() const;
	void setGenreIds(QStringList newGenreIds) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Retrieve total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;

	/**
	 * @brief The channels to return guide information for.	
	 */
	QStringList channelIds() const;
	void setChannelIds(QStringList newChannelIds) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_sortOrder;
	QString m_sortBy;
	QString m_seriesTimerId;
	QDateTime m_minStartDate;
	QDateTime m_minEndDate;
	QDateTime m_maxStartDate;
	QDateTime m_maxEndDate;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_librarySeriesId;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isAiring = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<bool> m_hasAired = std::nullopt;
	QStringList m_genres;
	QStringList m_genreIds;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	QStringList m_channelIds;

};

class GetProgramsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetProgramParams {
public:
	/**
	 * @brief Program id.	
	 */
	QString programId() const;
	void setProgramId(QString newProgramId) const;

	/**
	 * @brief Optional. Attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_programId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class GetRecommendedProgramsParams {
public:
	/**
	 * @brief Optional. filter by user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Filter for sports.	
	 */
	std::optional<bool> isSports() const;
	void setIsSports(std::optional<bool> newIsSports) const;

	/**
	 * @brief Optional. Filter for series.	
	 */
	std::optional<bool> isSeries() const;
	void setIsSeries(std::optional<bool> newIsSeries) const;

	/**
	 * @brief Optional. Filter for news.	
	 */
	std::optional<bool> isNews() const;
	void setIsNews(std::optional<bool> newIsNews) const;

	/**
	 * @brief Optional. Filter for movies.	
	 */
	std::optional<bool> isMovie() const;
	void setIsMovie(std::optional<bool> newIsMovie) const;

	/**
	 * @brief Optional. Filter for kids.	
	 */
	std::optional<bool> isKids() const;
	void setIsKids(std::optional<bool> newIsKids) const;

	/**
	 * @brief Optional. Filter by programs that are currently airing, or not.	
	 */
	std::optional<bool> isAiring() const;
	void setIsAiring(std::optional<bool> newIsAiring) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Filter by programs that have completed airing, or not.	
	 */
	std::optional<bool> hasAired() const;
	void setHasAired(std::optional<bool> newHasAired) const;

	/**
	 * @brief The genres to return guide information for.	
	 */
	QStringList genreIds() const;
	void setGenreIds(QStringList newGenreIds) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Retrieve total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isAiring = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<bool> m_hasAired = std::nullopt;
	QStringList m_genreIds;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetRecordingsParams {
public:
	/**
	 * @brief Optional. Filter by user and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Filter by recording status.	
	 */
	RecordingStatus status() const;
	void setStatus(RecordingStatus newStatus) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. Filter by recordings belonging to a series timer.	
	 */
	QString seriesTimerId() const;
	void setSeriesTimerId(QString newSeriesTimerId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Filter for sports.	
	 */
	std::optional<bool> isSports() const;
	void setIsSports(std::optional<bool> newIsSports) const;

	/**
	 * @brief Optional. Filter for series.	
	 */
	std::optional<bool> isSeries() const;
	void setIsSeries(std::optional<bool> newIsSeries) const;

	/**
	 * @brief Optional. Filter for news.	
	 */
	std::optional<bool> isNews() const;
	void setIsNews(std::optional<bool> newIsNews) const;

	/**
	 * @brief Optional. Filter for movies.	
	 */
	std::optional<bool> isMovie() const;
	void setIsMovie(std::optional<bool> newIsMovie) const;

	/**
	 * @brief Optional. Filter for is library item.	
	 */
	std::optional<bool> isLibraryItem() const;
	void setIsLibraryItem(std::optional<bool> newIsLibraryItem) const;

	/**
	 * @brief Optional. Filter for kids.	
	 */
	std::optional<bool> isKids() const;
	void setIsKids(std::optional<bool> newIsKids) const;

	/**
	 * @brief Optional. Filter by recordings that are in progress, or not.	
	 */
	std::optional<bool> isInProgress() const;
	void setIsInProgress(std::optional<bool> newIsInProgress) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Return total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;

	/**
	 * @brief Optional. Filter by channel id.	
	 */
	QString channelId() const;
	void setChannelId(QString newChannelId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	RecordingStatus m_status;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_seriesTimerId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isLibraryItem = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isInProgress = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	QString m_channelId;

};

class GetRecordingParams {
public:
	/**
	 * @brief Recording id.	
	 */
	QString recordingId() const;
	void setRecordingId(QString newRecordingId) const;

	/**
	 * @brief Optional. Attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_recordingId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class DeleteRecordingParams {
public:
	/**
	 * @brief Recording id.	
	 */
	QString recordingId() const;
	void setRecordingId(QString newRecordingId) const;


private:
	// Required path parameters
	QString m_recordingId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetRecordingFoldersParams {
public:
	/**
	 * @brief Optional. Filter by user and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class GetRecordingGroupsParams {
public:
	/**
	 * @brief Optional. Filter by user and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class GetRecordingGroupParams {
public:
	/**
	 * @brief Group id.	
	 */
	QString groupId() const;
	void setGroupId(QString newGroupId) const;


private:
	// Required path parameters
	QString m_groupId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetRecordingsSeriesParams {
public:
	/**
	 * @brief Optional. Filter by user and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Filter by recording status.	
	 */
	RecordingStatus status() const;
	void setStatus(RecordingStatus newStatus) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. Filter by recordings belonging to a series timer.	
	 */
	QString seriesTimerId() const;
	void setSeriesTimerId(QString newSeriesTimerId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Filter by recordings that are in progress, or not.	
	 */
	std::optional<bool> isInProgress() const;
	void setIsInProgress(std::optional<bool> newIsInProgress) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Filter by recording group.	
	 */
	QString groupId() const;
	void setGroupId(QString newGroupId) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Return total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;

	/**
	 * @brief Optional. Filter by channel id.	
	 */
	QString channelId() const;
	void setChannelId(QString newChannelId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	RecordingStatus m_status;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_seriesTimerId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isInProgress = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QString m_groupId;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	QString m_channelId;

};

class GetSeriesTimersParams {
public:
	/**
	 * @brief Optional. Sort in Ascending or Descending order.	
	 */
	SortOrder sortOrder() const;
	void setSortOrder(SortOrder newSortOrder) const;

	/**
	 * @brief Optional. Sort by SortName or Priority.	
	 */
	QString sortBy() const;
	void setSortBy(QString newSortBy) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	SortOrder m_sortOrder;
	QString m_sortBy;

};

class CreateSeriesTimerParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetSeriesTimerParams {
public:
	/**
	 * @brief Timer id.	
	 */
	QString timerId() const;
	void setTimerId(QString newTimerId) const;


private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class CancelSeriesTimerParams {
public:
	/**
	 * @brief Timer id.	
	 */
	QString timerId() const;
	void setTimerId(QString newTimerId) const;


private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateSeriesTimerParams {
public:
	/**
	 * @brief Timer id.	
	 */
	QString timerId() const;
	void setTimerId(QString newTimerId) const;


private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetTimersParams {
public:
	/**
	 * @brief Optional. Filter by timers belonging to a series timer.	
	 */
	QString seriesTimerId() const;
	void setSeriesTimerId(QString newSeriesTimerId) const;

	/**
	 * @brief Optional. Filter by timers that are scheduled.	
	 */
	std::optional<bool> isScheduled() const;
	void setIsScheduled(std::optional<bool> newIsScheduled) const;

	/**
	 * @brief Optional. Filter by timers that are active.	
	 */
	std::optional<bool> isActive() const;
	void setIsActive(std::optional<bool> newIsActive) const;

	/**
	 * @brief Optional. Filter by channel id.	
	 */
	QString channelId() const;
	void setChannelId(QString newChannelId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_seriesTimerId;
	std::optional<bool> m_isScheduled = std::nullopt;
	std::optional<bool> m_isActive = std::nullopt;
	QString m_channelId;

};

class CreateTimerParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetTimerParams {
public:
	/**
	 * @brief Timer id.	
	 */
	QString timerId() const;
	void setTimerId(QString newTimerId) const;


private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class CancelTimerParams {
public:
	/**
	 * @brief Timer id.	
	 */
	QString timerId() const;
	void setTimerId(QString newTimerId) const;


private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateTimerParams {
public:
	/**
	 * @brief Timer id.	
	 */
	QString timerId() const;
	void setTimerId(QString newTimerId) const;


private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetDefaultTimerParams {
public:
	/**
	 * @brief Optional. To attach default values based on a program.	
	 */
	QString programId() const;
	void setProgramId(QString newProgramId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_programId;

};

class AddTunerHostParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class DeleteTunerHostParams {
public:
	/**
	 * @brief Tuner host id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_jellyfinId;

};

class GetTunerHostTypesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ResetTunerParams {
public:
	/**
	 * @brief Tuner id.	
	 */
	QString tunerId() const;
	void setTunerId(QString newTunerId) const;


private:
	// Required path parameters
	QString m_tunerId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class DiscoverTunersParams {
public:
	/**
	 * @brief Only discover new tuners.	
	 */
	bool newDevicesOnly() const;
	void setNewDevicesOnly(bool newNewDevicesOnly) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	bool m_newDevicesOnly;

};

class DiscvoverTunersParams {
public:
	/**
	 * @brief Only discover new tuners.	
	 */
	bool newDevicesOnly() const;
	void setNewDevicesOnly(bool newNewDevicesOnly) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	bool m_newDevicesOnly;

};

class GetCountriesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetCulturesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLocalizationOptionsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetParentalRatingsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetPlaybackInfoParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	QString m_userId;
	
	// Optional path parameters

	// Optional query parameters

};

class GetPostedPlaybackInfoParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief The subtitle stream index.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief The start time in ticks.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The media source id.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief The maximum streaming bitrate.	
	 */
	std::optional<qint32> maxStreamingBitrate() const;
	void setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate) const;

	/**
	 * @brief The maximum number of audio channels.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief The livestream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Whether to enable transcoding. Default: true.	
	 */
	std::optional<bool> enableTranscoding() const;
	void setEnableTranscoding(std::optional<bool> newEnableTranscoding) const;

	/**
	 * @brief Whether to enable direct stream. Default: true.	
	 */
	std::optional<bool> enableDirectStream() const;
	void setEnableDirectStream(std::optional<bool> newEnableDirectStream) const;

	/**
	 * @brief Whether to enable direct play. Default: true.	
	 */
	std::optional<bool> enableDirectPlay() const;
	void setEnableDirectPlay(std::optional<bool> newEnableDirectPlay) const;

	/**
	 * @brief Whether to auto open the livestream.	
	 */
	std::optional<bool> autoOpenLiveStream() const;
	void setAutoOpenLiveStream(std::optional<bool> newAutoOpenLiveStream) const;

	/**
	 * @brief The audio stream index.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Whether to allow to copy the video stream. Default: true.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether to allow to copy the audio stream. Default: true.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	QString m_liveStreamId;
	std::optional<bool> m_enableTranscoding = std::nullopt;
	std::optional<bool> m_enableDirectStream = std::nullopt;
	std::optional<bool> m_enableDirectPlay = std::nullopt;
	std::optional<bool> m_autoOpenLiveStream = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class CloseLiveStreamParams {
public:
	/**
	 * @brief The livestream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_liveStreamId;
	
	// Optional path parameters

	// Optional query parameters

};

class OpenLiveStreamParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief The subtitle stream index.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief The start time in ticks.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The open token.	
	 */
	QString openToken() const;
	void setOpenToken(QString newOpenToken) const;

	/**
	 * @brief The maximum streaming bitrate.	
	 */
	std::optional<qint32> maxStreamingBitrate() const;
	void setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate) const;

	/**
	 * @brief The maximum number of audio channels.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Whether to enable direct stream. Default: true.	
	 */
	std::optional<bool> enableDirectStream() const;
	void setEnableDirectStream(std::optional<bool> newEnableDirectStream) const;

	/**
	 * @brief Whether to enable direct play. Default: true.	
	 */
	std::optional<bool> enableDirectPlay() const;
	void setEnableDirectPlay(std::optional<bool> newEnableDirectPlay) const;

	/**
	 * @brief The audio stream index.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	QString m_playSessionId;
	QString m_openToken;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	QString m_itemId;
	std::optional<bool> m_enableDirectStream = std::nullopt;
	std::optional<bool> m_enableDirectPlay = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;

};

class GetBitrateTestBytesParams {
public:
	/**
	 * @brief The bitrate. Defaults to 102400.	
	 */
	qint32 size() const;
	void setSize(qint32 newSize) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	qint32 m_size;

};

class GetMovieRecommendationsParams {
public:
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief The max number of items to return per category.	
	 */
	qint32 itemLimit() const;
	void setItemLimit(qint32 newItemLimit) const;

	/**
	 * @brief Optional. The fields to return.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief The max number of categories to return.	
	 */
	qint32 categoryLimit() const;
	void setCategoryLimit(qint32 newCategoryLimit) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	QString m_parentId;
	qint32 m_itemLimit;
	QList<ItemFields> m_fields;
	qint32 m_categoryLimit;

};

class GetMusicGenresParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief The search term.	
	 */
	QString searchTerm() const;
	void setSearchTerm(QString newSearchTerm) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	QString nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	QString nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith) const;

	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	QString nameLessThan() const;
	void setNameLessThan(QString newNameLessThan) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;

	/**
	 * @brief Optional. If specified, results will be filtered in based on item type. This allows multiple, comma delimited.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;

	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. If specified, results will be filtered out based on item type. This allows multiple, comma delimited.	
	 */
	QStringList excludeItemTypes() const;
	void setExcludeItemTypes(QStringList newExcludeItemTypes) const;

	/**
	 * @brief Optional. Include total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional, include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_searchTerm;
	QString m_parentId;
	QString m_nameStartsWithOrGreater;
	QString m_nameStartsWith;
	QString m_nameLessThan;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	QStringList m_includeItemTypes;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_excludeItemTypes;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetMusicGenreParams {
public:
	/**
	 * @brief The genre name.	
	 */
	QString genreName() const;
	void setGenreName(QString newGenreName) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_genreName;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class GetNotificationsParams {
public:
	/**
	 * @brief 	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SetReadParams {
public:
	/**
	 * @brief 	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetNotificationsSummaryParams {
public:
	/**
	 * @brief 	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SetUnreadParams {
public:
	/**
	 * @brief 	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class CreateAdminNotificationParams {
public:
	/**
	 * @brief The URL of the notification.	
	 */
	QString url() const;
	void setUrl(QString newUrl) const;

	/**
	 * @brief The name of the notification.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief The level of the notification.	
	 */
	NotificationLevel level() const;
	void setLevel(NotificationLevel newLevel) const;

	/**
	 * @brief The description of the notification.	
	 */
	QString description() const;
	void setDescription(QString newDescription) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_url;
	QString m_name;
	NotificationLevel m_level;
	QString m_description;

};

class GetNotificationServicesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetNotificationTypesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetPackagesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetPackageInfoParams {
public:
	/**
	 * @brief The name of the package.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief The GUID of the associated assembly.	
	 */
	QString assemblyGuid() const;
	void setAssemblyGuid(QString newAssemblyGuid) const;


private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_assemblyGuid;

};

class InstallPackageParams {
public:
	/**
	 * @brief Package name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Optional version. Defaults to latest version.	
	 */
	QString version() const;
	void setVersion(QString newVersion) const;

	/**
	 * @brief Optional. Specify the repository to install from.	
	 */
	QString repositoryUrl() const;
	void setRepositoryUrl(QString newRepositoryUrl) const;

	/**
	 * @brief GUID of the associated assembly.	
	 */
	QString assemblyGuid() const;
	void setAssemblyGuid(QString newAssemblyGuid) const;


private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_version;
	QString m_repositoryUrl;
	QString m_assemblyGuid;

};

class CancelPackageInstallationParams {
public:
	/**
	 * @brief Installation Id.	
	 */
	QString packageId() const;
	void setPackageId(QString newPackageId) const;


private:
	// Required path parameters
	QString m_packageId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetRepositoriesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SetRepositoriesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetPersonsParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief The search term.	
	 */
	QString searchTerm() const;
	void setSearchTerm(QString newSearchTerm) const;

	/**
	 * @brief Optional. If specified results will be filtered to include only those containing the specified PersonType. Allows multiple, comma-delimited.	
	 */
	QStringList personTypes() const;
	void setPersonTypes(QStringList newPersonTypes) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional filter by items that are marked as favorite, or not. userId is required.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;

	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional filters to apply.	
	 */
	QList<ItemFilter> filters() const;
	void setFilters(QList<ItemFilter> newFilters) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. If specified results will be filtered to exclude those containing the specified PersonType. Allows multiple, comma-delimited.	
	 */
	QStringList excludePersonTypes() const;
	void setExcludePersonTypes(QStringList newExcludePersonTypes) const;

	/**
	 * @brief Optional, include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional, include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;

	/**
	 * @brief Optional. If specified, person results will be filtered on items related to said persons.	
	 */
	QString appearsInItemId() const;
	void setAppearsInItemId(QString newAppearsInItemId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	QString m_searchTerm;
	QStringList m_personTypes;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFilter> m_filters;
	QList<ItemFields> m_fields;
	QStringList m_excludePersonTypes;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	QString m_appearsInItemId;

};

class GetPersonParams {
public:
	/**
	 * @brief Person name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class CreatePlaylistParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief The playlist name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief The media type.	
	 */
	QString mediaType() const;
	void setMediaType(QString newMediaType) const;

	/**
	 * @brief The item ids.	
	 */
	QStringList ids() const;
	void setIds(QStringList newIds) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	QString m_name;
	QString m_mediaType;
	QStringList m_ids;

};

class AddToPlaylistParams {
public:
	/**
	 * @brief The playlist id.	
	 */
	QString playlistId() const;
	void setPlaylistId(QString newPlaylistId) const;

	/**
	 * @brief The userId.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id, comma delimited.	
	 */
	QStringList ids() const;
	void setIds(QStringList newIds) const;


private:
	// Required path parameters
	QString m_playlistId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	QStringList m_ids;

};

class RemoveFromPlaylistParams {
public:
	/**
	 * @brief The playlist id.	
	 */
	QString playlistId() const;
	void setPlaylistId(QString newPlaylistId) const;

	/**
	 * @brief The item ids, comma delimited.	
	 */
	QStringList entryIds() const;
	void setEntryIds(QStringList newEntryIds) const;


private:
	// Required path parameters
	QString m_playlistId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QStringList m_entryIds;

};

class GetPlaylistItemsParams {
public:
	/**
	 * @brief The playlist id.	
	 */
	QString playlistId() const;
	void setPlaylistId(QString newPlaylistId) const;

	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	QString m_playlistId;
	
	// Required query parameters
	QString m_userId;
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_startIndex = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class MoveItemParams {
public:
	/**
	 * @brief The playlist id.	
	 */
	QString playlistId() const;
	void setPlaylistId(QString newPlaylistId) const;

	/**
	 * @brief The new index.	
	 */
	qint32 newIndex() const;
	void setNewIndex(qint32 newNewIndex) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_playlistId;
	qint32 m_newIndex;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ReportPlaybackStartParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class PingPlaybackSessionParams {
public:
	/**
	 * @brief Playback session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_playSessionId;

};

class ReportPlaybackProgressParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ReportPlaybackStoppedParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class MarkPlayedItemParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. The date the item was played.	
	 */
	QDateTime datePlayed() const;
	void setDatePlayed(QDateTime newDatePlayed) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QDateTime m_datePlayed;

};

class MarkUnplayedItemParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class OnPlaybackStartParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The subtitle stream index.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The play method.	
	 */
	PlayMethod playMethod() const;
	void setPlayMethod(PlayMethod newPlayMethod) const;

	/**
	 * @brief The id of the MediaSource.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Indicates if the client can seek.	
	 */
	bool canSeek() const;
	void setCanSeek(bool newCanSeek) const;

	/**
	 * @brief The audio stream index.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_playSessionId;
	PlayMethod m_playMethod;
	QString m_mediaSourceId;
	QString m_liveStreamId;
	bool m_canSeek;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;

};

class OnPlaybackStoppedParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. The position, in ticks, where playback stopped. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> positionTicks() const;
	void setPositionTicks(std::optional<qint64> newPositionTicks) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The next media type that will play.	
	 */
	QString nextMediaType() const;
	void setNextMediaType(QString newNextMediaType) const;

	/**
	 * @brief The id of the MediaSource.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint64> m_positionTicks = std::nullopt;
	QString m_playSessionId;
	QString m_nextMediaType;
	QString m_mediaSourceId;
	QString m_liveStreamId;

};

class OnPlaybackProgressParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Scale of 0-100.	
	 */
	std::optional<qint32> volumeLevel() const;
	void setVolumeLevel(std::optional<qint32> newVolumeLevel) const;

	/**
	 * @brief The subtitle stream index.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief The repeat mode.	
	 */
	RepeatMode repeatMode() const;
	void setRepeatMode(RepeatMode newRepeatMode) const;

	/**
	 * @brief Optional. The current position, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> positionTicks() const;
	void setPositionTicks(std::optional<qint64> newPositionTicks) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The play method.	
	 */
	PlayMethod playMethod() const;
	void setPlayMethod(PlayMethod newPlayMethod) const;

	/**
	 * @brief The id of the MediaSource.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Indicates if the player is paused.	
	 */
	bool isPaused() const;
	void setIsPaused(bool newIsPaused) const;

	/**
	 * @brief Indicates if the player is muted.	
	 */
	bool isMuted() const;
	void setIsMuted(bool newIsMuted) const;

	/**
	 * @brief The audio stream index.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_volumeLevel = std::nullopt;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	RepeatMode m_repeatMode;
	std::optional<qint64> m_positionTicks = std::nullopt;
	QString m_playSessionId;
	PlayMethod m_playMethod;
	QString m_mediaSourceId;
	QString m_liveStreamId;
	bool m_isPaused;
	bool m_isMuted;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;

};

class GetPluginsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UninstallPluginParams {
public:
	/**
	 * @brief Plugin id.	
	 */
	QString pluginId() const;
	void setPluginId(QString newPluginId) const;


private:
	// Required path parameters
	QString m_pluginId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UninstallPluginByVersionParams {
public:
	/**
	 * @brief Plugin version.	
	 */
	QSharedPointer<Version> version() const;
	void setVersion(QSharedPointer<Version> newVersion) const;

	/**
	 * @brief Plugin id.	
	 */
	QString pluginId() const;
	void setPluginId(QString newPluginId) const;


private:
	// Required path parameters
	QSharedPointer<Version> m_version;
	QString m_pluginId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class DisablePluginParams {
public:
	/**
	 * @brief Plugin version.	
	 */
	QSharedPointer<Version> version() const;
	void setVersion(QSharedPointer<Version> newVersion) const;

	/**
	 * @brief Plugin id.	
	 */
	QString pluginId() const;
	void setPluginId(QString newPluginId) const;


private:
	// Required path parameters
	QSharedPointer<Version> m_version;
	QString m_pluginId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class EnablePluginParams {
public:
	/**
	 * @brief Plugin version.	
	 */
	QSharedPointer<Version> version() const;
	void setVersion(QSharedPointer<Version> newVersion) const;

	/**
	 * @brief Plugin id.	
	 */
	QString pluginId() const;
	void setPluginId(QString newPluginId) const;


private:
	// Required path parameters
	QSharedPointer<Version> m_version;
	QString m_pluginId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetPluginImageParams {
public:
	/**
	 * @brief Plugin version.	
	 */
	QSharedPointer<Version> version() const;
	void setVersion(QSharedPointer<Version> newVersion) const;

	/**
	 * @brief Plugin id.	
	 */
	QString pluginId() const;
	void setPluginId(QString newPluginId) const;


private:
	// Required path parameters
	QSharedPointer<Version> m_version;
	QString m_pluginId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetPluginConfigurationParams {
public:
	/**
	 * @brief Plugin id.	
	 */
	QString pluginId() const;
	void setPluginId(QString newPluginId) const;


private:
	// Required path parameters
	QString m_pluginId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdatePluginConfigurationParams {
public:
	/**
	 * @brief Plugin id.	
	 */
	QString pluginId() const;
	void setPluginId(QString newPluginId) const;


private:
	// Required path parameters
	QString m_pluginId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetPluginManifestParams {
public:
	/**
	 * @brief Plugin id.	
	 */
	QString pluginId() const;
	void setPluginId(QString newPluginId) const;


private:
	// Required path parameters
	QString m_pluginId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdatePluginSecurityInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ActivateParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class AuthorizeParams {
public:
	/**
	 * @brief Quick connect code to authorize.	
	 */
	QString code() const;
	void setCode(QString newCode) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_code;
	
	// Optional path parameters

	// Optional query parameters

};

class AvailableParams {
public:
	/**
	 * @brief New MediaBrowser.Model.QuickConnect.QuickConnectState.	
	 */
	QuickConnectState status() const;
	void setStatus(QuickConnectState newStatus) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QuickConnectState m_status;

};

class ConnectParams {
public:
	/**
	 * @brief Secret previously returned from the Initiate endpoint.	
	 */
	QString secret() const;
	void setSecret(QString newSecret) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_secret;
	
	// Optional path parameters

	// Optional query parameters

};

class DeauthorizeParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class InitiateParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetStatusParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetRemoteImageParams {
public:
	/**
	 * @brief The image url.	
	 */
	QString imageUrl() const;
	void setImageUrl(QString newImageUrl) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_imageUrl;
	
	// Optional path parameters

	// Optional query parameters

};

class GetRemoteImagesParams {
public:
	/**
	 * @brief Item Id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The image type.	
	 */
	ImageType type() const;
	void setType(ImageType newType) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. The image provider to use.	
	 */
	QString providerName() const;
	void setProviderName(QString newProviderName) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Include all languages.	
	 */
	bool includeAllLanguages() const;
	void setIncludeAllLanguages(bool newIncludeAllLanguages) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	ImageType m_type;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_providerName;
	std::optional<qint32> m_limit = std::nullopt;
	bool m_includeAllLanguages;

};

class DownloadRemoteImageParams {
public:
	/**
	 * @brief Item Id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The image type.	
	 */
	ImageType type() const;
	void setType(ImageType newType) const;

	/**
	 * @brief The image url.	
	 */
	QString imageUrl() const;
	void setImageUrl(QString newImageUrl) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	ImageType m_type;
	
	// Optional path parameters

	// Optional query parameters
	QString m_imageUrl;

};

class GetRemoteImageProvidersParams {
public:
	/**
	 * @brief Item Id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetTasksParams {
public:
	/**
	 * @brief Optional filter tasks that are hidden, or not.	
	 */
	std::optional<bool> isHidden() const;
	void setIsHidden(std::optional<bool> newIsHidden) const;

	/**
	 * @brief Optional filter tasks that are enabled, or not.	
	 */
	std::optional<bool> isEnabled() const;
	void setIsEnabled(std::optional<bool> newIsEnabled) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<bool> m_isHidden = std::nullopt;
	std::optional<bool> m_isEnabled = std::nullopt;

};

class GetTaskParams {
public:
	/**
	 * @brief Task Id.	
	 */
	QString taskId() const;
	void setTaskId(QString newTaskId) const;


private:
	// Required path parameters
	QString m_taskId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateTaskParams {
public:
	/**
	 * @brief Task Id.	
	 */
	QString taskId() const;
	void setTaskId(QString newTaskId) const;


private:
	// Required path parameters
	QString m_taskId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class StartTaskParams {
public:
	/**
	 * @brief Task Id.	
	 */
	QString taskId() const;
	void setTaskId(QString newTaskId) const;


private:
	// Required path parameters
	QString m_taskId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class StopTaskParams {
public:
	/**
	 * @brief Task Id.	
	 */
	QString taskId() const;
	void setTaskId(QString newTaskId) const;


private:
	// Required path parameters
	QString m_taskId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetParams {
public:
	/**
	 * @brief The search term to filter on.	
	 */
	QString searchTerm() const;
	void setSearchTerm(QString newSearchTerm) const;

	/**
	 * @brief Optional. Supply a user id to search within a user's library or omit to search all.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief If specified, only children of the parent are returned.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief If specified, only results with the specified media types are returned. This allows multiple, comma delimeted.	
	 */
	QStringList mediaTypes() const;
	void setMediaTypes(QStringList newMediaTypes) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional filter for sports.	
	 */
	std::optional<bool> isSports() const;
	void setIsSports(std::optional<bool> newIsSports) const;

	/**
	 * @brief Optional filter for series.	
	 */
	std::optional<bool> isSeries() const;
	void setIsSeries(std::optional<bool> newIsSeries) const;

	/**
	 * @brief Optional filter for news.	
	 */
	std::optional<bool> isNews() const;
	void setIsNews(std::optional<bool> newIsNews) const;

	/**
	 * @brief Optional filter for movies.	
	 */
	std::optional<bool> isMovie() const;
	void setIsMovie(std::optional<bool> newIsMovie) const;

	/**
	 * @brief Optional filter for kids.	
	 */
	std::optional<bool> isKids() const;
	void setIsKids(std::optional<bool> newIsKids) const;

	/**
	 * @brief Optional filter whether to include studios.	
	 */
	bool includeStudios() const;
	void setIncludeStudios(bool newIncludeStudios) const;

	/**
	 * @brief Optional filter whether to include people.	
	 */
	bool includePeople() const;
	void setIncludePeople(bool newIncludePeople) const;

	/**
	 * @brief Optional filter whether to include media.	
	 */
	bool includeMedia() const;
	void setIncludeMedia(bool newIncludeMedia) const;

	/**
	 * @brief If specified, only results with the specified item types are returned. This allows multiple, comma delimeted.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;

	/**
	 * @brief Optional filter whether to include genres.	
	 */
	bool includeGenres() const;
	void setIncludeGenres(bool newIncludeGenres) const;

	/**
	 * @brief Optional filter whether to include artists.	
	 */
	bool includeArtists() const;
	void setIncludeArtists(bool newIncludeArtists) const;

	/**
	 * @brief If specified, results with these item types are filtered out. This allows multiple, comma delimeted.	
	 */
	QStringList excludeItemTypes() const;
	void setExcludeItemTypes(QStringList newExcludeItemTypes) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_searchTerm;
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_parentId;
	QStringList m_mediaTypes;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	bool m_includeStudios;
	bool m_includePeople;
	bool m_includeMedia;
	QStringList m_includeItemTypes;
	bool m_includeGenres;
	bool m_includeArtists;
	QStringList m_excludeItemTypes;

};

class GetPasswordResetProvidersParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetAuthProvidersParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetSessionsParams {
public:
	/**
	 * @brief Filter by device Id.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Filter by sessions that a given user is allowed to remote control.	
	 */
	QString controllableByUserId() const;
	void setControllableByUserId(QString newControllableByUserId) const;

	/**
	 * @brief Optional. Filter by sessions that were active in the last n seconds.	
	 */
	std::optional<qint32> activeWithinSeconds() const;
	void setActiveWithinSeconds(std::optional<qint32> newActiveWithinSeconds) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_deviceId;
	QString m_controllableByUserId;
	std::optional<qint32> m_activeWithinSeconds = std::nullopt;

};

class SendFullGeneralCommandParams {
public:
	/**
	 * @brief The session id.	
	 */
	QString sessionId() const;
	void setSessionId(QString newSessionId) const;


private:
	// Required path parameters
	QString m_sessionId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SendGeneralCommandParams {
public:
	/**
	 * @brief The session id.	
	 */
	QString sessionId() const;
	void setSessionId(QString newSessionId) const;

	/**
	 * @brief The command to send.	
	 */
	GeneralCommandType command() const;
	void setCommand(GeneralCommandType newCommand) const;


private:
	// Required path parameters
	QString m_sessionId;
	GeneralCommandType m_command;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SendMessageCommandParams {
public:
	/**
	 * @brief The session id.	
	 */
	QString sessionId() const;
	void setSessionId(QString newSessionId) const;

	/**
	 * @brief The message test.	
	 */
	QString text() const;
	void setText(QString newText) const;

	/**
	 * @brief The message timeout. If omitted the user will have to confirm viewing the message.	
	 */
	std::optional<qint64> timeoutMs() const;
	void setTimeoutMs(std::optional<qint64> newTimeoutMs) const;

	/**
	 * @brief The message header.	
	 */
	QString header() const;
	void setHeader(QString newHeader) const;


private:
	// Required path parameters
	QString m_sessionId;
	
	// Required query parameters
	QString m_text;
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint64> m_timeoutMs = std::nullopt;
	QString m_header;

};

class PlayParams {
public:
	/**
	 * @brief The session id.	
	 */
	QString sessionId() const;
	void setSessionId(QString newSessionId) const;

	/**
	 * @brief The type of play command to issue (PlayNow, PlayNext, PlayLast). Clients who have not yet implemented play next and play last may play now.	
	 */
	PlayCommand playCommand() const;
	void setPlayCommand(PlayCommand newPlayCommand) const;

	/**
	 * @brief The ids of the items to play, comma delimited.	
	 */
	QStringList itemIds() const;
	void setItemIds(QStringList newItemIds) const;

	/**
	 * @brief The starting position of the first item.	
	 */
	std::optional<qint64> startPositionTicks() const;
	void setStartPositionTicks(std::optional<qint64> newStartPositionTicks) const;


private:
	// Required path parameters
	QString m_sessionId;
	
	// Required query parameters
	PlayCommand m_playCommand;
	QStringList m_itemIds;
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint64> m_startPositionTicks = std::nullopt;

};

class SendPlaystateCommandParams {
public:
	/**
	 * @brief The session id.	
	 */
	QString sessionId() const;
	void setSessionId(QString newSessionId) const;

	/**
	 * @brief The MediaBrowser.Model.Session.PlaystateCommand.	
	 */
	PlaystateCommand command() const;
	void setCommand(PlaystateCommand newCommand) const;

	/**
	 * @brief The optional position ticks.	
	 */
	std::optional<qint64> seekPositionTicks() const;
	void setSeekPositionTicks(std::optional<qint64> newSeekPositionTicks) const;

	/**
	 * @brief The optional controlling user id.	
	 */
	QString controllingUserId() const;
	void setControllingUserId(QString newControllingUserId) const;


private:
	// Required path parameters
	QString m_sessionId;
	PlaystateCommand m_command;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint64> m_seekPositionTicks = std::nullopt;
	QString m_controllingUserId;

};

class SendSystemCommandParams {
public:
	/**
	 * @brief The session id.	
	 */
	QString sessionId() const;
	void setSessionId(QString newSessionId) const;

	/**
	 * @brief The command to send.	
	 */
	GeneralCommandType command() const;
	void setCommand(GeneralCommandType newCommand) const;


private:
	// Required path parameters
	QString m_sessionId;
	GeneralCommandType m_command;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class AddUserToSessionParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief The session id.	
	 */
	QString sessionId() const;
	void setSessionId(QString newSessionId) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_sessionId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class RemoveUserFromSessionParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief The session id.	
	 */
	QString sessionId() const;
	void setSessionId(QString newSessionId) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_sessionId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class DisplayContentParams {
public:
	/**
	 * @brief The session Id.	
	 */
	QString sessionId() const;
	void setSessionId(QString newSessionId) const;

	/**
	 * @brief The type of item to browse to.	
	 */
	QString itemType() const;
	void setItemType(QString newItemType) const;

	/**
	 * @brief The name of the item.	
	 */
	QString itemName() const;
	void setItemName(QString newItemName) const;

	/**
	 * @brief The Id of the item.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_sessionId;
	
	// Required query parameters
	QString m_itemType;
	QString m_itemName;
	QString m_itemId;
	
	// Optional path parameters

	// Optional query parameters

};

class PostCapabilitiesParams {
public:
	/**
	 * @brief Determines whether sync is supported.	
	 */
	bool supportsSync() const;
	void setSupportsSync(bool newSupportsSync) const;

	/**
	 * @brief Determines whether the device supports a unique identifier.	
	 */
	bool supportsPersistentIdentifier() const;
	void setSupportsPersistentIdentifier(bool newSupportsPersistentIdentifier) const;

	/**
	 * @brief Determines whether media can be played remotely..	
	 */
	bool supportsMediaControl() const;
	void setSupportsMediaControl(bool newSupportsMediaControl) const;

	/**
	 * @brief A list of supported remote control commands, comma delimited.	
	 */
	QList<GeneralCommandType> supportedCommands() const;
	void setSupportedCommands(QList<GeneralCommandType> newSupportedCommands) const;

	/**
	 * @brief A list of playable media types, comma delimited. Audio, Video, Book, Photo.	
	 */
	QStringList playableMediaTypes() const;
	void setPlayableMediaTypes(QStringList newPlayableMediaTypes) const;

	/**
	 * @brief The session id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	bool m_supportsSync;
	bool m_supportsPersistentIdentifier;
	bool m_supportsMediaControl;
	QList<GeneralCommandType> m_supportedCommands;
	QStringList m_playableMediaTypes;
	QString m_jellyfinId;

};

class PostFullCapabilitiesParams {
public:
	/**
	 * @brief The session id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_jellyfinId;

};

class ReportSessionEndedParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ReportViewingParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The session id.	
	 */
	QString sessionId() const;
	void setSessionId(QString newSessionId) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_itemId;
	
	// Optional path parameters

	// Optional query parameters
	QString m_sessionId;

};

class CompleteWizardParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetStartupConfigurationParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateInitialConfigurationParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetFirstUser_2Params {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SetRemoteAccessParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetFirstUserParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateStartupUserParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetStudiosParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. Search term.	
	 */
	QString searchTerm() const;
	void setSearchTerm(QString newSearchTerm) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	QString nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	QString nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith) const;

	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	QString nameLessThan() const;
	void setNameLessThan(QString newNameLessThan) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;

	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. If specified, results will be filtered out based on item type. This allows multiple, comma delimited.	
	 */
	QStringList excludeItemTypes() const;
	void setExcludeItemTypes(QStringList newExcludeItemTypes) const;

	/**
	 * @brief Optional, include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional, include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_searchTerm;
	QString m_parentId;
	QString m_nameStartsWithOrGreater;
	QString m_nameStartsWith;
	QString m_nameLessThan;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	QStringList m_includeItemTypes;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_excludeItemTypes;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetStudioParams {
public:
	/**
	 * @brief Studio name.	
	 */
	QString name() const;
	void setName(QString newName) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class GetFallbackFontListParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetFallbackFontParams {
public:
	/**
	 * @brief The name of the fallback font file to get.	
	 */
	QString name() const;
	void setName(QString newName) const;


private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SearchRemoteSubtitlesParams {
public:
	/**
	 * @brief The language of the subtitles.	
	 */
	QString language() const;
	void setLanguage(QString newLanguage) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Only show subtitles which are a perfect match.	
	 */
	std::optional<bool> isPerfectMatch() const;
	void setIsPerfectMatch(std::optional<bool> newIsPerfectMatch) const;


private:
	// Required path parameters
	QString m_language;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<bool> m_isPerfectMatch = std::nullopt;

};

class DownloadRemoteSubtitlesParams {
public:
	/**
	 * @brief The subtitle id.	
	 */
	QString subtitleId() const;
	void setSubtitleId(QString newSubtitleId) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_subtitleId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetRemoteSubtitlesParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId) const;


private:
	// Required path parameters
	QString m_jellyfinId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetSubtitleWithTicksParams {
public:
	/**
	 * @brief Optional. The start position of the subtitle in ticks.	
	 */
	qint64 startPositionTicks() const;
	void setStartPositionTicks(qint64 newStartPositionTicks) const;

	/**
	 * @brief The media source id.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The subtitle stream index.	
	 */
	qint32 index() const;
	void setIndex(qint32 newIndex) const;

	/**
	 * @brief The format of the returned subtitle.	
	 */
	QString format() const;
	void setFormat(QString newFormat) const;

	/**
	 * @brief Optional. The end position of the subtitle in ticks.	
	 */
	std::optional<qint64> endPositionTicks() const;
	void setEndPositionTicks(std::optional<qint64> newEndPositionTicks) const;

	/**
	 * @brief Optional. Whether to copy the timestamps.	
	 */
	bool copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps) const;

	/**
	 * @brief Optional. Whether to add a VTT time map.	
	 */
	bool addVttTimeMap() const;
	void setAddVttTimeMap(bool newAddVttTimeMap) const;


private:
	// Required path parameters
	qint64 m_startPositionTicks;
	QString m_mediaSourceId;
	QString m_itemId;
	qint32 m_index;
	QString m_format;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint64> m_endPositionTicks = std::nullopt;
	bool m_copyTimestamps;
	bool m_addVttTimeMap;

};

class GetSubtitleParams {
public:
	/**
	 * @brief The media source id.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The subtitle stream index.	
	 */
	qint32 index() const;
	void setIndex(qint32 newIndex) const;

	/**
	 * @brief The format of the returned subtitle.	
	 */
	QString format() const;
	void setFormat(QString newFormat) const;

	/**
	 * @brief Optional. The start position of the subtitle in ticks.	
	 */
	qint64 startPositionTicks() const;
	void setStartPositionTicks(qint64 newStartPositionTicks) const;

	/**
	 * @brief Optional. The end position of the subtitle in ticks.	
	 */
	std::optional<qint64> endPositionTicks() const;
	void setEndPositionTicks(std::optional<qint64> newEndPositionTicks) const;

	/**
	 * @brief Optional. Whether to copy the timestamps.	
	 */
	bool copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps) const;

	/**
	 * @brief Optional. Whether to add a VTT time map.	
	 */
	bool addVttTimeMap() const;
	void setAddVttTimeMap(bool newAddVttTimeMap) const;


private:
	// Required path parameters
	QString m_mediaSourceId;
	QString m_itemId;
	qint32 m_index;
	QString m_format;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	qint64 m_startPositionTicks;
	std::optional<qint64> m_endPositionTicks = std::nullopt;
	bool m_copyTimestamps;
	bool m_addVttTimeMap;

};

class GetSubtitlePlaylistParams {
public:
	/**
	 * @brief The media source id.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The subtitle stream index.	
	 */
	qint32 index() const;
	void setIndex(qint32 newIndex) const;

	/**
	 * @brief The subtitle segment length.	
	 */
	qint32 segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength) const;


private:
	// Required path parameters
	QString m_mediaSourceId;
	QString m_itemId;
	qint32 m_index;
	
	// Required query parameters
	qint32 m_segmentLength;
	
	// Optional path parameters

	// Optional query parameters

};

class UploadSubtitleParams {
public:
	/**
	 * @brief The item the subtitle belongs to.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class DeleteSubtitleParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The index of the subtitle file.	
	 */
	qint32 index() const;
	void setIndex(qint32 newIndex) const;


private:
	// Required path parameters
	QString m_itemId;
	qint32 m_index;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetSuggestionsParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief The type.	
	 */
	QStringList type() const;
	void setType(QStringList newType) const;

	/**
	 * @brief Optional. The start index.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief The media types.	
	 */
	QStringList mediaType() const;
	void setMediaType(QStringList newMediaType) const;

	/**
	 * @brief Optional. The limit.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Whether to enable the total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QStringList m_type;
	std::optional<qint32> m_startIndex = std::nullopt;
	QStringList m_mediaType;
	std::optional<qint32> m_limit = std::nullopt;
	bool m_enableTotalRecordCount;

};

class SyncPlayBufferingParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayJoinGroupParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayLeaveGroupParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayGetGroupsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayMovePlaylistItemParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayCreateGroupParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayNextItemParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayPauseParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayPingParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayPreviousItemParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayQueueParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayReadyParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayRemoveFromPlaylistParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlaySeekParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlaySetIgnoreWaitParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlaySetNewQueueParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlaySetPlaylistItemParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlaySetRepeatModeParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlaySetShuffleModeParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayStopParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class SyncPlayUnpauseParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetEndpointInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetSystemInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetPublicSystemInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetServerLogsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLogFileParams {
public:
	/**
	 * @brief The name of the log file to get.	
	 */
	QString name() const;
	void setName(QString newName) const;


private:
	// Required path parameters
	
	// Required query parameters
	QString m_name;
	
	// Optional path parameters

	// Optional query parameters

};

class GetPingSystemParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class PostPingSystemParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class RestartApplicationParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ShutdownApplicationParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetWakeOnLanInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetUtcTimeParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetTrailersParams {
public:
	/**
	 * @brief Optional. If specified, results will be filtered based on production year. This allows multiple, comma delimited.	
	 */
	QList<qint32> years() const;
	void setYears(QList<qint32> newYears) const;

	/**
	 * @brief Optional filter by VideoType (videofile, dvd, bluray, iso). Allows multiple, comma delimited.	
	 */
	QList<VideoType> videoTypes() const;
	void setVideoTypes(QList<VideoType> newVideoTypes) const;

	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on tag. This allows multiple, pipe delimited.	
	 */
	QStringList tags() const;
	void setTags(QStringList newTags) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on studio. This allows multiple, pipe delimited.	
	 */
	QStringList studios() const;
	void setStudios(QStringList newStudios) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on studio id. This allows multiple, pipe delimited.	
	 */
	QStringList studioIds() const;
	void setStudioIds(QStringList newStudioIds) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Sort Order - Ascending,Descending.	
	 */
	QString sortOrder() const;
	void setSortOrder(QString newSortOrder) const;

	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	QString sortBy() const;
	void setSortBy(QString newSortBy) const;

	/**
	 * @brief Optional filter by Series Status. Allows multiple, comma delimited.	
	 */
	QList<SeriesStatus> seriesStatus() const;
	void setSeriesStatus(QList<SeriesStatus> newSeriesStatus) const;

	/**
	 * @brief Optional. Filter based on a search term.	
	 */
	QString searchTerm() const;
	void setSearchTerm(QString newSearchTerm) const;

	/**
	 * @brief When searching within folders, this determines whether or not the search will be recursive. true/false.	
	 */
	std::optional<bool> recursive() const;
	void setRecursive(std::optional<bool> newRecursive) const;

	/**
	 * @brief Optional. If specified, along with Person, results will be filtered to include only those containing the specified person and PersonType. Allows multiple, comma-delimited.	
	 */
	QStringList personTypes() const;
	void setPersonTypes(QStringList newPersonTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person id.	
	 */
	QStringList personIds() const;
	void setPersonIds(QStringList newPersonIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person.	
	 */
	QString person() const;
	void setPerson(QString newPerson) const;

	/**
	 * @brief Optional filter by parent index number.	
	 */
	std::optional<qint32> parentIndexNumber() const;
	void setParentIndexNumber(std::optional<qint32> newParentIndexNumber) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on OfficialRating. This allows multiple, pipe delimited.	
	 */
	QStringList officialRatings() const;
	void setOfficialRatings(QStringList newOfficialRatings) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	QString nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater) const;

	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	QString nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith) const;

	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	QString nameLessThan() const;
	void setNameLessThan(QString newNameLessThan) const;

	/**
	 * @brief Optional. Filter by the minimum width of the item.	
	 */
	std::optional<qint32> minWidth() const;
	void setMinWidth(std::optional<qint32> newMinWidth) const;

	/**
	 * @brief Optional. The minimum premiere date. Format = ISO.	
	 */
	QDateTime minPremiereDate() const;
	void setMinPremiereDate(QDateTime newMinPremiereDate) const;

	/**
	 * @brief Optional filter by minimum official rating (PG, PG-13, TV-MA, etc).	
	 */
	QString minOfficialRating() const;
	void setMinOfficialRating(QString newMinOfficialRating) const;

	/**
	 * @brief Optional. Filter by the minimum height of the item.	
	 */
	std::optional<qint32> minHeight() const;
	void setMinHeight(std::optional<qint32> newMinHeight) const;

	/**
	 * @brief Optional. The minimum last saved date for the current user. Format = ISO.	
	 */
	QDateTime minDateLastSavedForUser() const;
	void setMinDateLastSavedForUser(QDateTime newMinDateLastSavedForUser) const;

	/**
	 * @brief Optional. The minimum last saved date. Format = ISO.	
	 */
	QDateTime minDateLastSaved() const;
	void setMinDateLastSaved(QDateTime newMinDateLastSaved) const;

	/**
	 * @brief Optional filter by minimum critic rating.	
	 */
	std::optional<double> minCriticRating() const;
	void setMinCriticRating(std::optional<double> newMinCriticRating) const;

	/**
	 * @brief Optional filter by minimum community rating.	
	 */
	std::optional<double> minCommunityRating() const;
	void setMinCommunityRating(std::optional<double> newMinCommunityRating) const;

	/**
	 * @brief Optional filter by MediaType. Allows multiple, comma delimited.	
	 */
	QStringList mediaTypes() const;
	void setMediaTypes(QStringList newMediaTypes) const;

	/**
	 * @brief Optional. Filter by the maximum width of the item.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief Optional. The maximum premiere date. Format = ISO.	
	 */
	QDateTime maxPremiereDate() const;
	void setMaxPremiereDate(QDateTime newMaxPremiereDate) const;

	/**
	 * @brief Optional filter by maximum official rating (PG, PG-13, TV-MA, etc).	
	 */
	QString maxOfficialRating() const;
	void setMaxOfficialRating(QString newMaxOfficialRating) const;

	/**
	 * @brief Optional. Filter by the maximum height of the item.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on LocationType. This allows multiple, comma delimited.	
	 */
	QList<LocationType> locationTypes() const;
	void setLocationTypes(QList<LocationType> newLocationTypes) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional filter by items that are unaired episodes or not.	
	 */
	std::optional<bool> isUnaired() const;
	void setIsUnaired(std::optional<bool> newIsUnaired) const;

	/**
	 * @brief Optional filter by items that are played, or not.	
	 */
	std::optional<bool> isPlayed() const;
	void setIsPlayed(std::optional<bool> newIsPlayed) const;

	/**
	 * @brief Optional filter by items that are placeholders.	
	 */
	std::optional<bool> isPlaceHolder() const;
	void setIsPlaceHolder(std::optional<bool> newIsPlaceHolder) const;

	/**
	 * @brief Optional filter by items that are missing episodes or not.	
	 */
	std::optional<bool> isMissing() const;
	void setIsMissing(std::optional<bool> newIsMissing) const;

	/**
	 * @brief Optional filter by items that are locked.	
	 */
	std::optional<bool> isLocked() const;
	void setIsLocked(std::optional<bool> newIsLocked) const;

	/**
	 * @brief Optional filter by items that are HD or not.	
	 */
	std::optional<bool> isHd() const;
	void setIsHd(std::optional<bool> newIsHd) const;

	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	std::optional<bool> isFavorite() const;
	void setIsFavorite(std::optional<bool> newIsFavorite) const;

	/**
	 * @brief Optional filter by items that are 4K or not.	
	 */
	std::optional<bool> is4K() const;
	void setIs4K(std::optional<bool> newIs4K) const;

	/**
	 * @brief Optional filter by items that are 3D, or not.	
	 */
	std::optional<bool> is3D() const;
	void setIs3D(std::optional<bool> newIs3D) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on those containing image types. This allows multiple, comma delimited.	
	 */
	QList<ImageType> imageTypes() const;
	void setImageTypes(QList<ImageType> newImageTypes) const;

	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. If specific items are needed, specify a list of item id's to retrieve. This allows multiple, comma delimited.	
	 */
	QStringList ids() const;
	void setIds(QStringList newIds) const;

	/**
	 * @brief Optional filter by items that have a tvdb id or not.	
	 */
	std::optional<bool> hasTvdbId() const;
	void setHasTvdbId(std::optional<bool> newHasTvdbId) const;

	/**
	 * @brief Optional filter by items with trailers.	
	 */
	std::optional<bool> hasTrailer() const;
	void setHasTrailer(std::optional<bool> newHasTrailer) const;

	/**
	 * @brief Optional filter by items that have a tmdb id or not.	
	 */
	std::optional<bool> hasTmdbId() const;
	void setHasTmdbId(std::optional<bool> newHasTmdbId) const;

	/**
	 * @brief Optional filter by items with theme videos.	
	 */
	std::optional<bool> hasThemeVideo() const;
	void setHasThemeVideo(std::optional<bool> newHasThemeVideo) const;

	/**
	 * @brief Optional filter by items with theme songs.	
	 */
	std::optional<bool> hasThemeSong() const;
	void setHasThemeSong(std::optional<bool> newHasThemeSong) const;

	/**
	 * @brief Optional filter by items with subtitles.	
	 */
	std::optional<bool> hasSubtitles() const;
	void setHasSubtitles(std::optional<bool> newHasSubtitles) const;

	/**
	 * @brief Optional filter by items with special features.	
	 */
	std::optional<bool> hasSpecialFeature() const;
	void setHasSpecialFeature(std::optional<bool> newHasSpecialFeature) const;

	/**
	 * @brief Optional filter by items that have or do not have a parental rating.	
	 */
	std::optional<bool> hasParentalRating() const;
	void setHasParentalRating(std::optional<bool> newHasParentalRating) const;

	/**
	 * @brief Optional filter by items that have an overview or not.	
	 */
	std::optional<bool> hasOverview() const;
	void setHasOverview(std::optional<bool> newHasOverview) const;

	/**
	 * @brief Optional filter by items that have official ratings.	
	 */
	std::optional<bool> hasOfficialRating() const;
	void setHasOfficialRating(std::optional<bool> newHasOfficialRating) const;

	/**
	 * @brief Optional filter by items that have an imdb id or not.	
	 */
	std::optional<bool> hasImdbId() const;
	void setHasImdbId(std::optional<bool> newHasImdbId) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on genre. This allows multiple, pipe delimited.	
	 */
	QStringList genres() const;
	void setGenres(QStringList newGenres) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on genre id. This allows multiple, pipe delimited.	
	 */
	QStringList genreIds() const;
	void setGenreIds(QStringList newGenreIds) const;

	/**
	 * @brief Optional. Specify additional filters to apply. This allows multiple, comma delimited. Options: IsFolder, IsNotFolder, IsUnplayed, IsPlayed, IsFavorite, IsResumable, Likes, Dislikes.	
	 */
	QList<ItemFilter> filters() const;
	void setFilters(QList<ItemFilter> newFilters) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on the LocationType. This allows multiple, comma delimited.	
	 */
	QList<LocationType> excludeLocationTypes() const;
	void setExcludeLocationTypes(QList<LocationType> newExcludeLocationTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	QStringList excludeItemTypes() const;
	void setExcludeItemTypes(QStringList newExcludeItemTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered by excluding item ids. This allows multiple, comma delimited.	
	 */
	QStringList excludeItemIds() const;
	void setExcludeItemIds(QStringList newExcludeItemIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on artist id. This allows multiple, pipe delimited.	
	 */
	QStringList excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds) const;

	/**
	 * @brief Optional, include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Enable the total record count.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional, include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified contributing artist id.	
	 */
	QStringList contributingArtistIds() const;
	void setContributingArtistIds(QStringList newContributingArtistIds) const;

	/**
	 * @brief Whether or not to hide items behind their boxsets.	
	 */
	std::optional<bool> collapseBoxSetItems() const;
	void setCollapseBoxSetItems(std::optional<bool> newCollapseBoxSetItems) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on artists. This allows multiple, pipe delimited.	
	 */
	QStringList artists() const;
	void setArtists(QStringList newArtists) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified artist id.	
	 */
	QStringList artistIds() const;
	void setArtistIds(QStringList newArtistIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on album. This allows multiple, pipe delimited.	
	 */
	QStringList albums() const;
	void setAlbums(QStringList newAlbums) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on album id. This allows multiple, pipe delimited.	
	 */
	QStringList albumIds() const;
	void setAlbumIds(QStringList newAlbumIds) const;

	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified album artist id.	
	 */
	QStringList albumArtistIds() const;
	void setAlbumArtistIds(QStringList newAlbumArtistIds) const;

	/**
	 * @brief Optional. Return items that are siblings of a supplied item.	
	 */
	QString adjacentTo() const;
	void setAdjacentTo(QString newAdjacentTo) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QList<qint32> m_years;
	QList<VideoType> m_videoTypes;
	QString m_userId;
	QStringList m_tags;
	QStringList m_studios;
	QStringList m_studioIds;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_sortOrder;
	QString m_sortBy;
	QList<SeriesStatus> m_seriesStatus;
	QString m_searchTerm;
	std::optional<bool> m_recursive = std::nullopt;
	QStringList m_personTypes;
	QStringList m_personIds;
	QString m_person;
	std::optional<qint32> m_parentIndexNumber = std::nullopt;
	QString m_parentId;
	QStringList m_officialRatings;
	QString m_nameStartsWithOrGreater;
	QString m_nameStartsWith;
	QString m_nameLessThan;
	std::optional<qint32> m_minWidth = std::nullopt;
	QDateTime m_minPremiereDate;
	QString m_minOfficialRating;
	std::optional<qint32> m_minHeight = std::nullopt;
	QDateTime m_minDateLastSavedForUser;
	QDateTime m_minDateLastSaved;
	std::optional<double> m_minCriticRating = std::nullopt;
	std::optional<double> m_minCommunityRating = std::nullopt;
	QStringList m_mediaTypes;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QDateTime m_maxPremiereDate;
	QString m_maxOfficialRating;
	std::optional<qint32> m_maxHeight = std::nullopt;
	QList<LocationType> m_locationTypes;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isUnaired = std::nullopt;
	std::optional<bool> m_isPlayed = std::nullopt;
	std::optional<bool> m_isPlaceHolder = std::nullopt;
	std::optional<bool> m_isMissing = std::nullopt;
	std::optional<bool> m_isLocked = std::nullopt;
	std::optional<bool> m_isHd = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<bool> m_is4K = std::nullopt;
	std::optional<bool> m_is3D = std::nullopt;
	QList<ImageType> m_imageTypes;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QStringList m_ids;
	std::optional<bool> m_hasTvdbId = std::nullopt;
	std::optional<bool> m_hasTrailer = std::nullopt;
	std::optional<bool> m_hasTmdbId = std::nullopt;
	std::optional<bool> m_hasThemeVideo = std::nullopt;
	std::optional<bool> m_hasThemeSong = std::nullopt;
	std::optional<bool> m_hasSubtitles = std::nullopt;
	std::optional<bool> m_hasSpecialFeature = std::nullopt;
	std::optional<bool> m_hasParentalRating = std::nullopt;
	std::optional<bool> m_hasOverview = std::nullopt;
	std::optional<bool> m_hasOfficialRating = std::nullopt;
	std::optional<bool> m_hasImdbId = std::nullopt;
	QStringList m_genres;
	QStringList m_genreIds;
	QList<ItemFilter> m_filters;
	QList<ItemFields> m_fields;
	QList<LocationType> m_excludeLocationTypes;
	QStringList m_excludeItemTypes;
	QStringList m_excludeItemIds;
	QStringList m_excludeArtistIds;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	QStringList m_contributingArtistIds;
	std::optional<bool> m_collapseBoxSetItems = std::nullopt;
	QStringList m_artists;
	QStringList m_artistIds;
	QStringList m_albums;
	QStringList m_albumIds;
	QStringList m_albumArtistIds;
	QString m_adjacentTo;

};

class GetEpisodesParams {
public:
	/**
	 * @brief The series id.	
	 */
	QString seriesId() const;
	void setSeriesId(QString newSeriesId) const;

	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Skip through the list until a given item is found.	
	 */
	QString startItemId() const;
	void setStartItemId(QString newStartItemId) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	QString sortBy() const;
	void setSortBy(QString newSortBy) const;

	/**
	 * @brief Optional. Filter by season id.	
	 */
	QString seasonId() const;
	void setSeasonId(QString newSeasonId) const;

	/**
	 * @brief Optional filter by season number.	
	 */
	std::optional<qint32> season() const;
	void setSeason(std::optional<qint32> newSeason) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. Filter by items that are missing episodes or not.	
	 */
	std::optional<bool> isMissing() const;
	void setIsMissing(std::optional<bool> newIsMissing) const;

	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional, include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;

	/**
	 * @brief Optional. Return items that are siblings of a supplied item.	
	 */
	QString adjacentTo() const;
	void setAdjacentTo(QString newAdjacentTo) const;


private:
	// Required path parameters
	QString m_seriesId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	QString m_startItemId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_sortBy;
	QString m_seasonId;
	std::optional<qint32> m_season = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<bool> m_isMissing = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	QString m_adjacentTo;

};

class GetSeasonsParams {
public:
	/**
	 * @brief The series id.	
	 */
	QString seriesId() const;
	void setSeriesId(QString newSeriesId) const;

	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. Filter by special season.	
	 */
	std::optional<bool> isSpecialSeason() const;
	void setIsSpecialSeason(std::optional<bool> newIsSpecialSeason) const;

	/**
	 * @brief Optional. Filter by items that are missing episodes or not.	
	 */
	std::optional<bool> isMissing() const;
	void setIsMissing(std::optional<bool> newIsMissing) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;

	/**
	 * @brief Optional. Return items that are siblings of a supplied item.	
	 */
	QString adjacentTo() const;
	void setAdjacentTo(QString newAdjacentTo) const;


private:
	// Required path parameters
	QString m_seriesId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<bool> m_isSpecialSeason = std::nullopt;
	std::optional<bool> m_isMissing = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	QString m_adjacentTo;

};

class GetNextUpParams {
public:
	/**
	 * @brief The user id of the user to get the next up episodes for.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. Filter by series id.	
	 */
	QString seriesId() const;
	void setSeriesId(QString newSeriesId) const;

	/**
	 * @brief Optional. Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Whether to enable the total records count. Defaults to true.	
	 */
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImges() const;
	void setEnableImges(std::optional<bool> newEnableImges) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;

	/**
	 * @brief Whether to disable sending the first episode in a series as next up.	
	 */
	bool disableFirstEpisode() const;
	void setDisableFirstEpisode(bool newDisableFirstEpisode) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_seriesId;
	QString m_parentId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	bool m_enableTotalRecordCount;
	std::optional<bool> m_enableImges = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	bool m_disableFirstEpisode;

};

class GetUpcomingEpisodesParams {
public:
	/**
	 * @brief The user id of the user to get the upcoming episodes for.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Optional. Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImges() const;
	void setEnableImges(std::optional<bool> newEnableImges) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_parentId;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImges = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetUniversalAudioStreamParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The transcoding protocol.	
	 */
	QString transcodingProtocol() const;
	void setTranscodingProtocol(QString newTranscodingProtocol) const;

	/**
	 * @brief Optional. The container to transcode to.	
	 */
	QString transcodingContainer() const;
	void setTranscodingContainer(QString newTranscodingContainer) const;

	/**
	 * @brief Optional. The number of how many audio channels to transcode to.	
	 */
	std::optional<qint32> transcodingAudioChannels() const;
	void setTranscodingAudioChannels(std::optional<qint32> newTranscodingAudioChannels) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	std::optional<qint32> maxStreamingBitrate() const;
	void setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate) const;

	/**
	 * @brief Optional. The maximum audio sample rate.	
	 */
	std::optional<qint32> maxAudioSampleRate() const;
	void setMaxAudioSampleRate(std::optional<qint32> newMaxAudioSampleRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief Optional. Whether to enable remote media.	
	 */
	std::optional<bool> enableRemoteMedia() const;
	void setEnableRemoteMedia(std::optional<bool> newEnableRemoteMedia) const;

	/**
	 * @brief Whether to enable redirection. Defaults to true.	
	 */
	bool enableRedirection() const;
	void setEnableRedirection(bool newEnableRedirection) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. The audio container.	
	 */
	QStringList container() const;
	void setContainer(QStringList newContainer) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	bool breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The audio codec to transcode to.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	QString m_transcodingProtocol;
	QString m_transcodingContainer;
	std::optional<qint32> m_transcodingAudioChannels = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxAudioSampleRate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<bool> m_enableRemoteMedia = std::nullopt;
	bool m_enableRedirection;
	QString m_deviceId;
	QStringList m_container;
	bool m_breakOnNonKeyFrames;
	QString m_audioCodec;
	std::optional<qint32> m_audioBitRate = std::nullopt;

};

class HeadUniversalAudioStreamParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Optional. The transcoding protocol.	
	 */
	QString transcodingProtocol() const;
	void setTranscodingProtocol(QString newTranscodingProtocol) const;

	/**
	 * @brief Optional. The container to transcode to.	
	 */
	QString transcodingContainer() const;
	void setTranscodingContainer(QString newTranscodingContainer) const;

	/**
	 * @brief Optional. The number of how many audio channels to transcode to.	
	 */
	std::optional<qint32> transcodingAudioChannels() const;
	void setTranscodingAudioChannels(std::optional<qint32> newTranscodingAudioChannels) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	std::optional<qint32> maxStreamingBitrate() const;
	void setMaxStreamingBitrate(std::optional<qint32> newMaxStreamingBitrate) const;

	/**
	 * @brief Optional. The maximum audio sample rate.	
	 */
	std::optional<qint32> maxAudioSampleRate() const;
	void setMaxAudioSampleRate(std::optional<qint32> newMaxAudioSampleRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief Optional. Whether to enable remote media.	
	 */
	std::optional<bool> enableRemoteMedia() const;
	void setEnableRemoteMedia(std::optional<bool> newEnableRemoteMedia) const;

	/**
	 * @brief Whether to enable redirection. Defaults to true.	
	 */
	bool enableRedirection() const;
	void setEnableRedirection(bool newEnableRedirection) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. The audio container.	
	 */
	QStringList container() const;
	void setContainer(QStringList newContainer) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	bool breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The audio codec to transcode to.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	QString m_transcodingProtocol;
	QString m_transcodingContainer;
	std::optional<qint32> m_transcodingAudioChannels = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxAudioSampleRate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<bool> m_enableRemoteMedia = std::nullopt;
	bool m_enableRedirection;
	QString m_deviceId;
	QStringList m_container;
	bool m_breakOnNonKeyFrames;
	QString m_audioCodec;
	std::optional<qint32> m_audioBitRate = std::nullopt;

};

class GetUsersParams {
public:
	/**
	 * @brief Optional filter by IsHidden=true or false.	
	 */
	std::optional<bool> isHidden() const;
	void setIsHidden(std::optional<bool> newIsHidden) const;

	/**
	 * @brief Optional filter by IsDisabled=true or false.	
	 */
	std::optional<bool> isDisabled() const;
	void setIsDisabled(std::optional<bool> newIsDisabled) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<bool> m_isHidden = std::nullopt;
	std::optional<bool> m_isDisabled = std::nullopt;

};

class GetUserByIdParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class DeleteUserParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateUserParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class AuthenticateUserParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief The password as plain text.	
	 */
	QString pw() const;
	void setPw(QString newPw) const;

	/**
	 * @brief The password sha1-hash.	
	 */
	QString password() const;
	void setPassword(QString newPassword) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	QString m_pw;
	
	// Optional path parameters

	// Optional query parameters
	QString m_password;

};

class UpdateUserConfigurationParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateUserEasyPasswordParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateUserPasswordParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateUserPolicyParams {
public:
	/**
	 * @brief The user id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class AuthenticateUserByNameParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class AuthenticateWithQuickConnectParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ForgotPasswordParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class ForgotPasswordPinParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetCurrentUserParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class CreateUserByNameParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetPublicUsersParams {
public:

private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class MarkFavoriteItemParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UnmarkFavoriteItemParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetItemParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetIntrosParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLocalTrailersParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class DeleteUserItemRatingParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class UpdateUserItemRatingParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Whether this M:Jellyfin.Api.Controllers.UserLibraryController.UpdateUserItemRating(System.Guid,System.Guid,System.Nullable{System.Boolean}) is likes.	
	 */
	std::optional<bool> likes() const;
	void setLikes(std::optional<bool> newLikes) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<bool> m_likes = std::nullopt;

};

class GetSpecialFeaturesParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_userId;
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLatestMediaParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Return item limit.	
	 */
	qint32 limit() const;
	void setLimit(qint32 newLimit) const;

	/**
	 * @brief Filter by items that are played, or not.	
	 */
	std::optional<bool> isPlayed() const;
	void setIsPlayed(std::optional<bool> newIsPlayed) const;

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;

	/**
	 * @brief Optional. the max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Whether or not to group items into a parent container.	
	 */
	bool groupItems() const;
	void setGroupItems(bool newGroupItems) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_parentId;
	qint32 m_limit;
	std::optional<bool> m_isPlayed = std::nullopt;
	QStringList m_includeItemTypes;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	bool m_groupItems;
	QList<ItemFields> m_fields;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetRootFolderParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetGroupingOptionsParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetUserViewsParams {
public:
	/**
	 * @brief User id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Preset views.	
	 */
	QStringList presetViews() const;
	void setPresetViews(QStringList newPresetViews) const;

	/**
	 * @brief Whether or not to include hidden content.	
	 */
	bool includeHidden() const;
	void setIncludeHidden(bool newIncludeHidden) const;

	/**
	 * @brief Whether or not to include external views such as channels or live tv.	
	 */
	std::optional<bool> includeExternalContent() const;
	void setIncludeExternalContent(std::optional<bool> newIncludeExternalContent) const;


private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QStringList m_presetViews;
	bool m_includeHidden;
	std::optional<bool> m_includeExternalContent = std::nullopt;

};

class GetAttachmentParams {
public:
	/**
	 * @brief Video ID.	
	 */
	QString videoId() const;
	void setVideoId(QString newVideoId) const;

	/**
	 * @brief Media Source ID.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Attachment Index.	
	 */
	qint32 index() const;
	void setIndex(qint32 newIndex) const;


private:
	// Required path parameters
	QString m_videoId;
	QString m_mediaSourceId;
	qint32 m_index;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetLiveHlsStreamParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment lenght.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The max width.	
	 */
	std::optional<qint32> maxWidth() const;
	void setMaxWidth(std::optional<qint32> newMaxWidth) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. The max height.	
	 */
	std::optional<qint32> maxHeight() const;
	void setMaxHeight(std::optional<qint32> newMaxHeight) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable subtitles in the manifest.	
	 */
	std::optional<bool> enableSubtitlesInManifest() const;
	void setEnableSubtitlesInManifest(std::optional<bool> newEnableSubtitlesInManifest) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief The audio container.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableSubtitlesInManifest = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	QString m_container;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class GetVideoStreamByContainerParams {
public:
	/**
	 * @brief 	
	 */
	QString stream() const;
	void setStream(QString newStream) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment lenght.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamporphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_stream;
	QString m_itemId;
	QString m_container;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class HeadVideoStreamByContainerParams {
public:
	/**
	 * @brief 	
	 */
	QString stream() const;
	void setStream(QString newStream) const;

	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment lenght.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamporphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_stream;
	QString m_itemId;
	QString m_container;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class GetAdditionalPartParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};

class DeleteAlternateSourcesParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters

};

class GetVideoStreamParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment length.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	QString m_container;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class HeadVideoStreamParams {
public:
	/**
	 * @brief The item id.	
	 */
	QString itemId() const;
	void setItemId(QString newItemId) const;

	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	std::optional<qint32> width() const;
	void setWidth(std::optional<qint32> newWidth) const;

	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	std::optional<qint32> videoStreamIndex() const;
	void setVideoStreamIndex(std::optional<qint32> newVideoStreamIndex) const;

	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension. Options: h265, h264, mpeg4, theora, vpx, wmv.	
	 */
	QString videoCodec() const;
	void setVideoCodec(QString newVideoCodec) const;

	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> videoBitRate() const;
	void setVideoBitRate(std::optional<qint32> newVideoBitRate) const;

	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	std::optional<qint32> transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(std::optional<qint32> newTranscodingMaxAudioChannels) const;

	/**
	 * @brief Optional. The transcoding reason.	
	 */
	QString transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons) const;

	/**
	 * @brief The tag.	
	 */
	QString tag() const;
	void setTag(QString newTag) const;

	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	std::optional<qint32> subtitleStreamIndex() const;
	void setSubtitleStreamIndex(std::optional<qint32> newSubtitleStreamIndex) const;

	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	SubtitleDeliveryMethod subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod) const;

	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	QString subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec) const;

	/**
	 * @brief Optional. The streaming options.	
	 */
	std::optional<QJsonObject> streamOptions() const;
	void setStreamOptions(std::optional<QJsonObject> newStreamOptions) const;

	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	std::optional<bool> staticStreaming() const;
	void setStaticStreaming(std::optional<bool> newStaticStreaming) const;

	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	std::optional<qint64> startTimeTicks() const;
	void setStartTimeTicks(std::optional<qint64> newStartTimeTicks) const;

	/**
	 * @brief The segment length.	
	 */
	std::optional<qint32> segmentLength() const;
	void setSegmentLength(std::optional<qint32> newSegmentLength) const;

	/**
	 * @brief The segment container.	
	 */
	QString segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer) const;

	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	std::optional<bool> requireNonAnamorphic() const;
	void setRequireNonAnamorphic(std::optional<bool> newRequireNonAnamorphic) const;

	/**
	 * @brief Optional. Whether to require avc.	
	 */
	std::optional<bool> requireAvc() const;
	void setRequireAvc(std::optional<bool> newRequireAvc) const;

	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	QString profile() const;
	void setProfile(QString newProfile) const;

	/**
	 * @brief The play session id.	
	 */
	QString playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId) const;

	/**
	 * @brief The streaming parameters.	
	 */
	QString params() const;
	void setParams(QString newParams) const;

	/**
	 * @brief The minimum number of segments.	
	 */
	std::optional<qint32> minSegments() const;
	void setMinSegments(std::optional<qint32> newMinSegments) const;

	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	QString mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId) const;

	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	std::optional<qint32> maxVideoBitDepth() const;
	void setMaxVideoBitDepth(std::optional<qint32> newMaxVideoBitDepth) const;

	/**
	 * @brief Optional.	
	 */
	std::optional<qint32> maxRefFrames() const;
	void setMaxRefFrames(std::optional<qint32> newMaxRefFrames) const;

	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> maxFramerate() const;
	void setMaxFramerate(std::optional<float> newMaxFramerate) const;

	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> maxAudioChannels() const;
	void setMaxAudioChannels(std::optional<qint32> newMaxAudioChannels) const;

	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	std::optional<qint32> maxAudioBitDepth() const;
	void setMaxAudioBitDepth(std::optional<qint32> newMaxAudioBitDepth) const;

	/**
	 * @brief The live stream id.	
	 */
	QString liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId) const;

	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	QString level() const;
	void setLevel(QString newLevel) const;

	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	std::optional<qint32> height() const;
	void setHeight(std::optional<qint32> newHeight) const;

	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	std::optional<float> framerate() const;
	void setFramerate(std::optional<float> newFramerate) const;

	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	std::optional<bool> enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(std::optional<bool> newEnableMpegtsM2TsMode) const;

	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	std::optional<bool> enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(std::optional<bool> newEnableAutoStreamCopy) const;

	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	QString deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId) const;

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	QString deviceId() const;
	void setDeviceId(QString newDeviceId) const;

	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	std::optional<bool> deInterlace() const;
	void setDeInterlace(std::optional<bool> newDeInterlace) const;

	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	std::optional<qint32> cpuCoreLimit() const;
	void setCpuCoreLimit(std::optional<qint32> newCpuCoreLimit) const;

	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	std::optional<bool> copyTimestamps() const;
	void setCopyTimestamps(std::optional<bool> newCopyTimestamps) const;

	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	EncodingContext context() const;
	void setContext(EncodingContext newContext) const;

	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	QString container() const;
	void setContainer(QString newContainer) const;

	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	std::optional<bool> breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(std::optional<bool> newBreakOnNonKeyFrames) const;

	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	std::optional<qint32> audioStreamIndex() const;
	void setAudioStreamIndex(std::optional<qint32> newAudioStreamIndex) const;

	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	std::optional<qint32> audioSampleRate() const;
	void setAudioSampleRate(std::optional<qint32> newAudioSampleRate) const;

	/**
	 * @brief Optional. Specify a audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension. Options: aac, mp3, vorbis, wma.	
	 */
	QString audioCodec() const;
	void setAudioCodec(QString newAudioCodec) const;

	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	std::optional<qint32> audioChannels() const;
	void setAudioChannels(std::optional<qint32> newAudioChannels) const;

	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	std::optional<qint32> audioBitRate() const;
	void setAudioBitRate(std::optional<qint32> newAudioBitRate) const;

	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	std::optional<bool> allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(std::optional<bool> newAllowVideoStreamCopy) const;

	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	std::optional<bool> allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(std::optional<bool> newAllowAudioStreamCopy) const;


private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	QString m_transcodeReasons;
	QString m_tag;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	SubtitleDeliveryMethod m_subtitleMethod;
	QString m_subtitleCodec;
	std::optional<QJsonObject> m_streamOptions = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_segmentLength = std::nullopt;
	QString m_segmentContainer;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	std::optional<bool> m_requireAvc = std::nullopt;
	QString m_profile;
	QString m_playSessionId;
	QString m_params;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	QString m_liveStreamId;
	QString m_level;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	QString m_deviceProfileId;
	QString m_deviceId;
	std::optional<bool> m_deInterlace = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	EncodingContext m_context;
	QString m_container;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioChannels = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;

};

class MergeVersionsParams {
public:
	/**
	 * @brief Item id list. This allows multiple, comma delimited.	
	 */
	QStringList ids() const;
	void setIds(QStringList newIds) const;


private:
	// Required path parameters
	
	// Required query parameters
	QStringList m_ids;
	
	// Optional path parameters

	// Optional query parameters

};

class GetYearsParams {
public:
	/**
	 * @brief User Id.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;

	/**
	 * @brief Skips over a given number of items within the results. Use for paging.	
	 */
	std::optional<qint32> startIndex() const;
	void setStartIndex(std::optional<qint32> newStartIndex) const;

	/**
	 * @brief Sort Order - Ascending,Descending.	
	 */
	QString sortOrder() const;
	void setSortOrder(QString newSortOrder) const;

	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	QString sortBy() const;
	void setSortBy(QString newSortBy) const;

	/**
	 * @brief Search recursively.	
	 */
	bool recursive() const;
	void setRecursive(bool newRecursive) const;

	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	QString parentId() const;
	void setParentId(QString newParentId) const;

	/**
	 * @brief Optional. Filter by MediaType. Allows multiple, comma delimited.	
	 */
	QStringList mediaTypes() const;
	void setMediaTypes(QStringList newMediaTypes) const;

	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	std::optional<qint32> limit() const;
	void setLimit(std::optional<qint32> newLimit) const;

	/**
	 * @brief Optional. If specified, results will be included based on item type. This allows multiple, comma delimited.	
	 */
	QStringList includeItemTypes() const;
	void setIncludeItemTypes(QStringList newIncludeItemTypes) const;

	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	std::optional<qint32> imageTypeLimit() const;
	void setImageTypeLimit(std::optional<qint32> newImageTypeLimit) const;

	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields) const;

	/**
	 * @brief Optional. If specified, results will be excluded based on item type. This allows multiple, comma delimited.	
	 */
	QStringList excludeItemTypes() const;
	void setExcludeItemTypes(QStringList newExcludeItemTypes) const;

	/**
	 * @brief Optional. Include user data.	
	 */
	std::optional<bool> enableUserData() const;
	void setEnableUserData(std::optional<bool> newEnableUserData) const;

	/**
	 * @brief Optional. Include image information in output.	
	 */
	std::optional<bool> enableImages() const;
	void setEnableImages(std::optional<bool> newEnableImages) const;

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes) const;


private:
	// Required path parameters
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_sortOrder;
	QString m_sortBy;
	bool m_recursive;
	QString m_parentId;
	QStringList m_mediaTypes;
	std::optional<qint32> m_limit = std::nullopt;
	QStringList m_includeItemTypes;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_excludeItemTypes;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_enableImages = std::nullopt;
	QList<ImageType> m_enableImageTypes;

};

class GetYearParams {
public:
	/**
	 * @brief The year.	
	 */
	qint32 year() const;
	void setYear(qint32 newYear) const;

	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	QString userId() const;
	void setUserId(QString newUserId) const;


private:
	// Required path parameters
	qint32 m_year;
	
	// Required query parameters
	
	// Optional path parameters

	// Optional query parameters
	QString m_userId;

};



} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_REQUESTTYPES_H

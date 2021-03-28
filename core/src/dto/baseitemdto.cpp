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

#include <JellyfinQt/dto/baseitemdto.h>

namespace Jellyfin {
namespace DTO {

BaseItemDto::BaseItemDto() {}

BaseItemDto::BaseItemDto(const BaseItemDto &other) :

	m_name(other.m_name),
	m_originalTitle(other.m_originalTitle),
	m_serverId(other.m_serverId),
	m_jellyfinId(other.m_jellyfinId),
	m_etag(other.m_etag),
	m_sourceType(other.m_sourceType),
	m_playlistItemId(other.m_playlistItemId),
	m_dateCreated(other.m_dateCreated),
	m_dateLastMediaAdded(other.m_dateLastMediaAdded),
	m_extraType(other.m_extraType),
	m_airsBeforeSeasonNumber(other.m_airsBeforeSeasonNumber),
	m_airsAfterSeasonNumber(other.m_airsAfterSeasonNumber),
	m_airsBeforeEpisodeNumber(other.m_airsBeforeEpisodeNumber),
	m_canDelete(other.m_canDelete),
	m_canDownload(other.m_canDownload),
	m_hasSubtitles(other.m_hasSubtitles),
	m_preferredMetadataLanguage(other.m_preferredMetadataLanguage),
	m_preferredMetadataCountryCode(other.m_preferredMetadataCountryCode),
	m_supportsSync(other.m_supportsSync),
	m_container(other.m_container),
	m_sortName(other.m_sortName),
	m_forcedSortName(other.m_forcedSortName),
	m_video3DFormat(other.m_video3DFormat),
	m_premiereDate(other.m_premiereDate),
	m_externalUrls(other.m_externalUrls),
	m_mediaSources(other.m_mediaSources),
	m_criticRating(other.m_criticRating),
	m_productionLocations(other.m_productionLocations),
	m_path(other.m_path),
	m_enableMediaSourceDisplay(other.m_enableMediaSourceDisplay),
	m_officialRating(other.m_officialRating),
	m_customRating(other.m_customRating),
	m_channelId(other.m_channelId),
	m_channelName(other.m_channelName),
	m_overview(other.m_overview),
	m_taglines(other.m_taglines),
	m_genres(other.m_genres),
	m_communityRating(other.m_communityRating),
	m_cumulativeRunTimeTicks(other.m_cumulativeRunTimeTicks),
	m_runTimeTicks(other.m_runTimeTicks),
	m_playAccess(other.m_playAccess),
	m_aspectRatio(other.m_aspectRatio),
	m_productionYear(other.m_productionYear),
	m_isPlaceHolder(other.m_isPlaceHolder),
	m_number(other.m_number),
	m_channelNumber(other.m_channelNumber),
	m_indexNumber(other.m_indexNumber),
	m_indexNumberEnd(other.m_indexNumberEnd),
	m_parentIndexNumber(other.m_parentIndexNumber),
	m_remoteTrailers(other.m_remoteTrailers),
	m_providerIds(other.m_providerIds),
	m_isHD(other.m_isHD),
	m_isFolder(other.m_isFolder),
	m_parentId(other.m_parentId),
	m_type(other.m_type),
	m_people(other.m_people),
	m_studios(other.m_studios),
	m_genreItems(other.m_genreItems),
	m_parentLogoItemId(other.m_parentLogoItemId),
	m_parentBackdropItemId(other.m_parentBackdropItemId),
	m_parentBackdropImageTags(other.m_parentBackdropImageTags),
	m_localTrailerCount(other.m_localTrailerCount),
	m_userData(other.m_userData),
	m_recursiveItemCount(other.m_recursiveItemCount),
	m_childCount(other.m_childCount),
	m_seriesName(other.m_seriesName),
	m_seriesId(other.m_seriesId),
	m_seasonId(other.m_seasonId),
	m_specialFeatureCount(other.m_specialFeatureCount),
	m_displayPreferencesId(other.m_displayPreferencesId),
	m_status(other.m_status),
	m_airTime(other.m_airTime),
	m_airDays(other.m_airDays),
	m_tags(other.m_tags),
	m_primaryImageAspectRatio(other.m_primaryImageAspectRatio),
	m_artists(other.m_artists),
	m_artistItems(other.m_artistItems),
	m_album(other.m_album),
	m_collectionType(other.m_collectionType),
	m_displayOrder(other.m_displayOrder),
	m_albumId(other.m_albumId),
	m_albumPrimaryImageTag(other.m_albumPrimaryImageTag),
	m_seriesPrimaryImageTag(other.m_seriesPrimaryImageTag),
	m_albumArtist(other.m_albumArtist),
	m_albumArtists(other.m_albumArtists),
	m_seasonName(other.m_seasonName),
	m_mediaStreams(other.m_mediaStreams),
	m_videoType(other.m_videoType),
	m_partCount(other.m_partCount),
	m_mediaSourceCount(other.m_mediaSourceCount),
	m_imageTags(other.m_imageTags),
	m_backdropImageTags(other.m_backdropImageTags),
	m_screenshotImageTags(other.m_screenshotImageTags),
	m_parentLogoImageTag(other.m_parentLogoImageTag),
	m_parentArtItemId(other.m_parentArtItemId),
	m_parentArtImageTag(other.m_parentArtImageTag),
	m_seriesThumbImageTag(other.m_seriesThumbImageTag),
	m_imageBlurHashes(other.m_imageBlurHashes),
	m_seriesStudio(other.m_seriesStudio),
	m_parentThumbItemId(other.m_parentThumbItemId),
	m_parentThumbImageTag(other.m_parentThumbImageTag),
	m_parentPrimaryImageItemId(other.m_parentPrimaryImageItemId),
	m_parentPrimaryImageTag(other.m_parentPrimaryImageTag),
	m_chapters(other.m_chapters),
	m_locationType(other.m_locationType),
	m_isoType(other.m_isoType),
	m_mediaType(other.m_mediaType),
	m_endDate(other.m_endDate),
	m_lockedFields(other.m_lockedFields),
	m_trailerCount(other.m_trailerCount),
	m_movieCount(other.m_movieCount),
	m_seriesCount(other.m_seriesCount),
	m_programCount(other.m_programCount),
	m_episodeCount(other.m_episodeCount),
	m_songCount(other.m_songCount),
	m_albumCount(other.m_albumCount),
	m_artistCount(other.m_artistCount),
	m_musicVideoCount(other.m_musicVideoCount),
	m_lockData(other.m_lockData),
	m_width(other.m_width),
	m_height(other.m_height),
	m_cameraMake(other.m_cameraMake),
	m_cameraModel(other.m_cameraModel),
	m_software(other.m_software),
	m_exposureTime(other.m_exposureTime),
	m_focalLength(other.m_focalLength),
	m_imageOrientation(other.m_imageOrientation),
	m_aperture(other.m_aperture),
	m_shutterSpeed(other.m_shutterSpeed),
	m_latitude(other.m_latitude),
	m_longitude(other.m_longitude),
	m_altitude(other.m_altitude),
	m_isoSpeedRating(other.m_isoSpeedRating),
	m_seriesTimerId(other.m_seriesTimerId),
	m_programId(other.m_programId),
	m_channelPrimaryImageTag(other.m_channelPrimaryImageTag),
	m_startDate(other.m_startDate),
	m_completionPercentage(other.m_completionPercentage),
	m_isRepeat(other.m_isRepeat),
	m_episodeTitle(other.m_episodeTitle),
	m_channelType(other.m_channelType),
	m_audio(other.m_audio),
	m_isMovie(other.m_isMovie),
	m_isSports(other.m_isSports),
	m_isSeries(other.m_isSeries),
	m_isLive(other.m_isLive),
	m_isNews(other.m_isNews),
	m_isKids(other.m_isKids),
	m_isPremiere(other.m_isPremiere),
	m_timerId(other.m_timerId),
	m_currentProgram(other.m_currentProgram){}


void BaseItemDto::replaceData(BaseItemDto &other) {
	m_name = other.m_name;
	m_originalTitle = other.m_originalTitle;
	m_serverId = other.m_serverId;
	m_jellyfinId = other.m_jellyfinId;
	m_etag = other.m_etag;
	m_sourceType = other.m_sourceType;
	m_playlistItemId = other.m_playlistItemId;
	m_dateCreated = other.m_dateCreated;
	m_dateLastMediaAdded = other.m_dateLastMediaAdded;
	m_extraType = other.m_extraType;
	m_airsBeforeSeasonNumber = other.m_airsBeforeSeasonNumber;
	m_airsAfterSeasonNumber = other.m_airsAfterSeasonNumber;
	m_airsBeforeEpisodeNumber = other.m_airsBeforeEpisodeNumber;
	m_canDelete = other.m_canDelete;
	m_canDownload = other.m_canDownload;
	m_hasSubtitles = other.m_hasSubtitles;
	m_preferredMetadataLanguage = other.m_preferredMetadataLanguage;
	m_preferredMetadataCountryCode = other.m_preferredMetadataCountryCode;
	m_supportsSync = other.m_supportsSync;
	m_container = other.m_container;
	m_sortName = other.m_sortName;
	m_forcedSortName = other.m_forcedSortName;
	m_video3DFormat = other.m_video3DFormat;
	m_premiereDate = other.m_premiereDate;
	m_externalUrls = other.m_externalUrls;
	m_mediaSources = other.m_mediaSources;
	m_criticRating = other.m_criticRating;
	m_productionLocations = other.m_productionLocations;
	m_path = other.m_path;
	m_enableMediaSourceDisplay = other.m_enableMediaSourceDisplay;
	m_officialRating = other.m_officialRating;
	m_customRating = other.m_customRating;
	m_channelId = other.m_channelId;
	m_channelName = other.m_channelName;
	m_overview = other.m_overview;
	m_taglines = other.m_taglines;
	m_genres = other.m_genres;
	m_communityRating = other.m_communityRating;
	m_cumulativeRunTimeTicks = other.m_cumulativeRunTimeTicks;
	m_runTimeTicks = other.m_runTimeTicks;
	m_playAccess = other.m_playAccess;
	m_aspectRatio = other.m_aspectRatio;
	m_productionYear = other.m_productionYear;
	m_isPlaceHolder = other.m_isPlaceHolder;
	m_number = other.m_number;
	m_channelNumber = other.m_channelNumber;
	m_indexNumber = other.m_indexNumber;
	m_indexNumberEnd = other.m_indexNumberEnd;
	m_parentIndexNumber = other.m_parentIndexNumber;
	m_remoteTrailers = other.m_remoteTrailers;
	m_providerIds = other.m_providerIds;
	m_isHD = other.m_isHD;
	m_isFolder = other.m_isFolder;
	m_parentId = other.m_parentId;
	m_type = other.m_type;
	m_people = other.m_people;
	m_studios = other.m_studios;
	m_genreItems = other.m_genreItems;
	m_parentLogoItemId = other.m_parentLogoItemId;
	m_parentBackdropItemId = other.m_parentBackdropItemId;
	m_parentBackdropImageTags = other.m_parentBackdropImageTags;
	m_localTrailerCount = other.m_localTrailerCount;
	m_userData = other.m_userData;
	m_recursiveItemCount = other.m_recursiveItemCount;
	m_childCount = other.m_childCount;
	m_seriesName = other.m_seriesName;
	m_seriesId = other.m_seriesId;
	m_seasonId = other.m_seasonId;
	m_specialFeatureCount = other.m_specialFeatureCount;
	m_displayPreferencesId = other.m_displayPreferencesId;
	m_status = other.m_status;
	m_airTime = other.m_airTime;
	m_airDays = other.m_airDays;
	m_tags = other.m_tags;
	m_primaryImageAspectRatio = other.m_primaryImageAspectRatio;
	m_artists = other.m_artists;
	m_artistItems = other.m_artistItems;
	m_album = other.m_album;
	m_collectionType = other.m_collectionType;
	m_displayOrder = other.m_displayOrder;
	m_albumId = other.m_albumId;
	m_albumPrimaryImageTag = other.m_albumPrimaryImageTag;
	m_seriesPrimaryImageTag = other.m_seriesPrimaryImageTag;
	m_albumArtist = other.m_albumArtist;
	m_albumArtists = other.m_albumArtists;
	m_seasonName = other.m_seasonName;
	m_mediaStreams = other.m_mediaStreams;
	m_videoType = other.m_videoType;
	m_partCount = other.m_partCount;
	m_mediaSourceCount = other.m_mediaSourceCount;
	m_imageTags = other.m_imageTags;
	m_backdropImageTags = other.m_backdropImageTags;
	m_screenshotImageTags = other.m_screenshotImageTags;
	m_parentLogoImageTag = other.m_parentLogoImageTag;
	m_parentArtItemId = other.m_parentArtItemId;
	m_parentArtImageTag = other.m_parentArtImageTag;
	m_seriesThumbImageTag = other.m_seriesThumbImageTag;
	m_imageBlurHashes = other.m_imageBlurHashes;
	m_seriesStudio = other.m_seriesStudio;
	m_parentThumbItemId = other.m_parentThumbItemId;
	m_parentThumbImageTag = other.m_parentThumbImageTag;
	m_parentPrimaryImageItemId = other.m_parentPrimaryImageItemId;
	m_parentPrimaryImageTag = other.m_parentPrimaryImageTag;
	m_chapters = other.m_chapters;
	m_locationType = other.m_locationType;
	m_isoType = other.m_isoType;
	m_mediaType = other.m_mediaType;
	m_endDate = other.m_endDate;
	m_lockedFields = other.m_lockedFields;
	m_trailerCount = other.m_trailerCount;
	m_movieCount = other.m_movieCount;
	m_seriesCount = other.m_seriesCount;
	m_programCount = other.m_programCount;
	m_episodeCount = other.m_episodeCount;
	m_songCount = other.m_songCount;
	m_albumCount = other.m_albumCount;
	m_artistCount = other.m_artistCount;
	m_musicVideoCount = other.m_musicVideoCount;
	m_lockData = other.m_lockData;
	m_width = other.m_width;
	m_height = other.m_height;
	m_cameraMake = other.m_cameraMake;
	m_cameraModel = other.m_cameraModel;
	m_software = other.m_software;
	m_exposureTime = other.m_exposureTime;
	m_focalLength = other.m_focalLength;
	m_imageOrientation = other.m_imageOrientation;
	m_aperture = other.m_aperture;
	m_shutterSpeed = other.m_shutterSpeed;
	m_latitude = other.m_latitude;
	m_longitude = other.m_longitude;
	m_altitude = other.m_altitude;
	m_isoSpeedRating = other.m_isoSpeedRating;
	m_seriesTimerId = other.m_seriesTimerId;
	m_programId = other.m_programId;
	m_channelPrimaryImageTag = other.m_channelPrimaryImageTag;
	m_startDate = other.m_startDate;
	m_completionPercentage = other.m_completionPercentage;
	m_isRepeat = other.m_isRepeat;
	m_episodeTitle = other.m_episodeTitle;
	m_channelType = other.m_channelType;
	m_audio = other.m_audio;
	m_isMovie = other.m_isMovie;
	m_isSports = other.m_isSports;
	m_isSeries = other.m_isSeries;
	m_isLive = other.m_isLive;
	m_isNews = other.m_isNews;
	m_isKids = other.m_isKids;
	m_isPremiere = other.m_isPremiere;
	m_timerId = other.m_timerId;
	m_currentProgram = other.m_currentProgram;
}

BaseItemDto BaseItemDto::fromJson(QJsonObject source) {
	BaseItemDto instance;
	instance.setFromJson(source);
	return instance;
}


void BaseItemDto::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_originalTitle = Jellyfin::Support::fromJsonValue<QString>(source["OriginalTitle"]);
	m_serverId = Jellyfin::Support::fromJsonValue<QString>(source["ServerId"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_etag = Jellyfin::Support::fromJsonValue<QString>(source["Etag"]);
	m_sourceType = Jellyfin::Support::fromJsonValue<QString>(source["SourceType"]);
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QString>(source["PlaylistItemId"]);
	m_dateCreated = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateCreated"]);
	m_dateLastMediaAdded = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateLastMediaAdded"]);
	m_extraType = Jellyfin::Support::fromJsonValue<QString>(source["ExtraType"]);
	m_airsBeforeSeasonNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["AirsBeforeSeasonNumber"]);
	m_airsAfterSeasonNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["AirsAfterSeasonNumber"]);
	m_airsBeforeEpisodeNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["AirsBeforeEpisodeNumber"]);
	m_canDelete = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["CanDelete"]);
	m_canDownload = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["CanDownload"]);
	m_hasSubtitles = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["HasSubtitles"]);
	m_preferredMetadataLanguage = Jellyfin::Support::fromJsonValue<QString>(source["PreferredMetadataLanguage"]);
	m_preferredMetadataCountryCode = Jellyfin::Support::fromJsonValue<QString>(source["PreferredMetadataCountryCode"]);
	m_supportsSync = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["SupportsSync"]);
	m_container = Jellyfin::Support::fromJsonValue<QString>(source["Container"]);
	m_sortName = Jellyfin::Support::fromJsonValue<QString>(source["SortName"]);
	m_forcedSortName = Jellyfin::Support::fromJsonValue<QString>(source["ForcedSortName"]);
	m_video3DFormat = Jellyfin::Support::fromJsonValue<Video3DFormat>(source["Video3DFormat"]);
	m_premiereDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["PremiereDate"]);
	m_externalUrls = Jellyfin::Support::fromJsonValue<QList<ExternalUrl>>(source["ExternalUrls"]);
	m_mediaSources = Jellyfin::Support::fromJsonValue<QList<MediaSourceInfo>>(source["MediaSources"]);
	m_criticRating = Jellyfin::Support::fromJsonValue<std::optional<float>>(source["CriticRating"]);
	m_productionLocations = Jellyfin::Support::fromJsonValue<QStringList>(source["ProductionLocations"]);
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_enableMediaSourceDisplay = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["EnableMediaSourceDisplay"]);
	m_officialRating = Jellyfin::Support::fromJsonValue<QString>(source["OfficialRating"]);
	m_customRating = Jellyfin::Support::fromJsonValue<QString>(source["CustomRating"]);
	m_channelId = Jellyfin::Support::fromJsonValue<QString>(source["ChannelId"]);
	m_channelName = Jellyfin::Support::fromJsonValue<QString>(source["ChannelName"]);
	m_overview = Jellyfin::Support::fromJsonValue<QString>(source["Overview"]);
	m_taglines = Jellyfin::Support::fromJsonValue<QStringList>(source["Taglines"]);
	m_genres = Jellyfin::Support::fromJsonValue<QStringList>(source["Genres"]);
	m_communityRating = Jellyfin::Support::fromJsonValue<std::optional<float>>(source["CommunityRating"]);
	m_cumulativeRunTimeTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["CumulativeRunTimeTicks"]);
	m_runTimeTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["RunTimeTicks"]);
	m_playAccess = Jellyfin::Support::fromJsonValue<PlayAccess>(source["PlayAccess"]);
	m_aspectRatio = Jellyfin::Support::fromJsonValue<QString>(source["AspectRatio"]);
	m_productionYear = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ProductionYear"]);
	m_isPlaceHolder = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsPlaceHolder"]);
	m_number = Jellyfin::Support::fromJsonValue<QString>(source["Number"]);
	m_channelNumber = Jellyfin::Support::fromJsonValue<QString>(source["ChannelNumber"]);
	m_indexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["IndexNumber"]);
	m_indexNumberEnd = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["IndexNumberEnd"]);
	m_parentIndexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ParentIndexNumber"]);
	m_remoteTrailers = Jellyfin::Support::fromJsonValue<QList<MediaUrl>>(source["RemoteTrailers"]);
	m_providerIds = Jellyfin::Support::fromJsonValue<QJsonObject>(source["ProviderIds"]);
	m_isHD = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsHD"]);
	m_isFolder = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsFolder"]);
	m_parentId = Jellyfin::Support::fromJsonValue<QString>(source["ParentId"]);
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_people = Jellyfin::Support::fromJsonValue<QList<BaseItemPerson>>(source["People"]);
	m_studios = Jellyfin::Support::fromJsonValue<QList<NameGuidPair>>(source["Studios"]);
	m_genreItems = Jellyfin::Support::fromJsonValue<QList<NameGuidPair>>(source["GenreItems"]);
	m_parentLogoItemId = Jellyfin::Support::fromJsonValue<QString>(source["ParentLogoItemId"]);
	m_parentBackdropItemId = Jellyfin::Support::fromJsonValue<QString>(source["ParentBackdropItemId"]);
	m_parentBackdropImageTags = Jellyfin::Support::fromJsonValue<QStringList>(source["ParentBackdropImageTags"]);
	m_localTrailerCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["LocalTrailerCount"]);
	m_userData = Jellyfin::Support::fromJsonValue<QSharedPointer<UserItemDataDto>>(source["UserData"]);
	m_recursiveItemCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["RecursiveItemCount"]);
	m_childCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ChildCount"]);
	m_seriesName = Jellyfin::Support::fromJsonValue<QString>(source["SeriesName"]);
	m_seriesId = Jellyfin::Support::fromJsonValue<QString>(source["SeriesId"]);
	m_seasonId = Jellyfin::Support::fromJsonValue<QString>(source["SeasonId"]);
	m_specialFeatureCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["SpecialFeatureCount"]);
	m_displayPreferencesId = Jellyfin::Support::fromJsonValue<QString>(source["DisplayPreferencesId"]);
	m_status = Jellyfin::Support::fromJsonValue<QString>(source["Status"]);
	m_airTime = Jellyfin::Support::fromJsonValue<QString>(source["AirTime"]);
	m_airDays = Jellyfin::Support::fromJsonValue<QList<DayOfWeek>>(source["AirDays"]);
	m_tags = Jellyfin::Support::fromJsonValue<QStringList>(source["Tags"]);
	m_primaryImageAspectRatio = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["PrimaryImageAspectRatio"]);
	m_artists = Jellyfin::Support::fromJsonValue<QStringList>(source["Artists"]);
	m_artistItems = Jellyfin::Support::fromJsonValue<QList<NameGuidPair>>(source["ArtistItems"]);
	m_album = Jellyfin::Support::fromJsonValue<QString>(source["Album"]);
	m_collectionType = Jellyfin::Support::fromJsonValue<QString>(source["CollectionType"]);
	m_displayOrder = Jellyfin::Support::fromJsonValue<QString>(source["DisplayOrder"]);
	m_albumId = Jellyfin::Support::fromJsonValue<QString>(source["AlbumId"]);
	m_albumPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["AlbumPrimaryImageTag"]);
	m_seriesPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["SeriesPrimaryImageTag"]);
	m_albumArtist = Jellyfin::Support::fromJsonValue<QString>(source["AlbumArtist"]);
	m_albumArtists = Jellyfin::Support::fromJsonValue<QList<NameGuidPair>>(source["AlbumArtists"]);
	m_seasonName = Jellyfin::Support::fromJsonValue<QString>(source["SeasonName"]);
	m_mediaStreams = Jellyfin::Support::fromJsonValue<QList<MediaStream>>(source["MediaStreams"]);
	m_videoType = Jellyfin::Support::fromJsonValue<VideoType>(source["VideoType"]);
	m_partCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["PartCount"]);
	m_mediaSourceCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MediaSourceCount"]);
	m_imageTags = Jellyfin::Support::fromJsonValue<QJsonObject>(source["ImageTags"]);
	m_backdropImageTags = Jellyfin::Support::fromJsonValue<QStringList>(source["BackdropImageTags"]);
	m_screenshotImageTags = Jellyfin::Support::fromJsonValue<QStringList>(source["ScreenshotImageTags"]);
	m_parentLogoImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ParentLogoImageTag"]);
	m_parentArtItemId = Jellyfin::Support::fromJsonValue<QString>(source["ParentArtItemId"]);
	m_parentArtImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ParentArtImageTag"]);
	m_seriesThumbImageTag = Jellyfin::Support::fromJsonValue<QString>(source["SeriesThumbImageTag"]);
	m_imageBlurHashes = Jellyfin::Support::fromJsonValue<QJsonObject>(source["ImageBlurHashes"]);
	m_seriesStudio = Jellyfin::Support::fromJsonValue<QString>(source["SeriesStudio"]);
	m_parentThumbItemId = Jellyfin::Support::fromJsonValue<QString>(source["ParentThumbItemId"]);
	m_parentThumbImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ParentThumbImageTag"]);
	m_parentPrimaryImageItemId = Jellyfin::Support::fromJsonValue<QString>(source["ParentPrimaryImageItemId"]);
	m_parentPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ParentPrimaryImageTag"]);
	m_chapters = Jellyfin::Support::fromJsonValue<QList<ChapterInfo>>(source["Chapters"]);
	m_locationType = Jellyfin::Support::fromJsonValue<LocationType>(source["LocationType"]);
	m_isoType = Jellyfin::Support::fromJsonValue<IsoType>(source["IsoType"]);
	m_mediaType = Jellyfin::Support::fromJsonValue<QString>(source["MediaType"]);
	m_endDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["EndDate"]);
	m_lockedFields = Jellyfin::Support::fromJsonValue<QList<MetadataField>>(source["LockedFields"]);
	m_trailerCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["TrailerCount"]);
	m_movieCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MovieCount"]);
	m_seriesCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["SeriesCount"]);
	m_programCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ProgramCount"]);
	m_episodeCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["EpisodeCount"]);
	m_songCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["SongCount"]);
	m_albumCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["AlbumCount"]);
	m_artistCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ArtistCount"]);
	m_musicVideoCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["MusicVideoCount"]);
	m_lockData = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["LockData"]);
	m_width = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Width"]);
	m_height = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Height"]);
	m_cameraMake = Jellyfin::Support::fromJsonValue<QString>(source["CameraMake"]);
	m_cameraModel = Jellyfin::Support::fromJsonValue<QString>(source["CameraModel"]);
	m_software = Jellyfin::Support::fromJsonValue<QString>(source["Software"]);
	m_exposureTime = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["ExposureTime"]);
	m_focalLength = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["FocalLength"]);
	m_imageOrientation = Jellyfin::Support::fromJsonValue<ImageOrientation>(source["ImageOrientation"]);
	m_aperture = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["Aperture"]);
	m_shutterSpeed = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["ShutterSpeed"]);
	m_latitude = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["Latitude"]);
	m_longitude = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["Longitude"]);
	m_altitude = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["Altitude"]);
	m_isoSpeedRating = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["IsoSpeedRating"]);
	m_seriesTimerId = Jellyfin::Support::fromJsonValue<QString>(source["SeriesTimerId"]);
	m_programId = Jellyfin::Support::fromJsonValue<QString>(source["ProgramId"]);
	m_channelPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ChannelPrimaryImageTag"]);
	m_startDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["StartDate"]);
	m_completionPercentage = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["CompletionPercentage"]);
	m_isRepeat = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsRepeat"]);
	m_episodeTitle = Jellyfin::Support::fromJsonValue<QString>(source["EpisodeTitle"]);
	m_channelType = Jellyfin::Support::fromJsonValue<ChannelType>(source["ChannelType"]);
	m_audio = Jellyfin::Support::fromJsonValue<ProgramAudio>(source["Audio"]);
	m_isMovie = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsMovie"]);
	m_isSports = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsSports"]);
	m_isSeries = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsSeries"]);
	m_isLive = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsLive"]);
	m_isNews = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsNews"]);
	m_isKids = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsKids"]);
	m_isPremiere = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsPremiere"]);
	m_timerId = Jellyfin::Support::fromJsonValue<QString>(source["TimerId"]);
	m_currentProgram = Jellyfin::Support::fromJsonValue<QSharedPointer<BaseItemDto>>(source["CurrentProgram"]);

}
	
QJsonObject BaseItemDto::toJson() const {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["OriginalTitle"] = Jellyfin::Support::toJsonValue<QString>(m_originalTitle);
	result["ServerId"] = Jellyfin::Support::toJsonValue<QString>(m_serverId);
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["Etag"] = Jellyfin::Support::toJsonValue<QString>(m_etag);
	result["SourceType"] = Jellyfin::Support::toJsonValue<QString>(m_sourceType);
	result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QString>(m_playlistItemId);
	result["DateCreated"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateCreated);
	result["DateLastMediaAdded"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateLastMediaAdded);
	result["ExtraType"] = Jellyfin::Support::toJsonValue<QString>(m_extraType);
	result["AirsBeforeSeasonNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_airsBeforeSeasonNumber);
	result["AirsAfterSeasonNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_airsAfterSeasonNumber);
	result["AirsBeforeEpisodeNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_airsBeforeEpisodeNumber);
	result["CanDelete"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_canDelete);
	result["CanDownload"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_canDownload);
	result["HasSubtitles"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_hasSubtitles);
	result["PreferredMetadataLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_preferredMetadataLanguage);
	result["PreferredMetadataCountryCode"] = Jellyfin::Support::toJsonValue<QString>(m_preferredMetadataCountryCode);
	result["SupportsSync"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_supportsSync);
	result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);
	result["SortName"] = Jellyfin::Support::toJsonValue<QString>(m_sortName);
	result["ForcedSortName"] = Jellyfin::Support::toJsonValue<QString>(m_forcedSortName);
	result["Video3DFormat"] = Jellyfin::Support::toJsonValue<Video3DFormat>(m_video3DFormat);
	result["PremiereDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_premiereDate);
	result["ExternalUrls"] = Jellyfin::Support::toJsonValue<QList<ExternalUrl>>(m_externalUrls);
	result["MediaSources"] = Jellyfin::Support::toJsonValue<QList<MediaSourceInfo>>(m_mediaSources);
	result["CriticRating"] = Jellyfin::Support::toJsonValue<std::optional<float>>(m_criticRating);
	result["ProductionLocations"] = Jellyfin::Support::toJsonValue<QStringList>(m_productionLocations);
	result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	result["EnableMediaSourceDisplay"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_enableMediaSourceDisplay);
	result["OfficialRating"] = Jellyfin::Support::toJsonValue<QString>(m_officialRating);
	result["CustomRating"] = Jellyfin::Support::toJsonValue<QString>(m_customRating);
	result["ChannelId"] = Jellyfin::Support::toJsonValue<QString>(m_channelId);
	result["ChannelName"] = Jellyfin::Support::toJsonValue<QString>(m_channelName);
	result["Overview"] = Jellyfin::Support::toJsonValue<QString>(m_overview);
	result["Taglines"] = Jellyfin::Support::toJsonValue<QStringList>(m_taglines);
	result["Genres"] = Jellyfin::Support::toJsonValue<QStringList>(m_genres);
	result["CommunityRating"] = Jellyfin::Support::toJsonValue<std::optional<float>>(m_communityRating);
	result["CumulativeRunTimeTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_cumulativeRunTimeTicks);
	result["RunTimeTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_runTimeTicks);
	result["PlayAccess"] = Jellyfin::Support::toJsonValue<PlayAccess>(m_playAccess);
	result["AspectRatio"] = Jellyfin::Support::toJsonValue<QString>(m_aspectRatio);
	result["ProductionYear"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_productionYear);
	result["IsPlaceHolder"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isPlaceHolder);
	result["Number"] = Jellyfin::Support::toJsonValue<QString>(m_number);
	result["ChannelNumber"] = Jellyfin::Support::toJsonValue<QString>(m_channelNumber);
	result["IndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_indexNumber);
	result["IndexNumberEnd"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_indexNumberEnd);
	result["ParentIndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_parentIndexNumber);
	result["RemoteTrailers"] = Jellyfin::Support::toJsonValue<QList<MediaUrl>>(m_remoteTrailers);
	result["ProviderIds"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_providerIds);
	result["IsHD"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isHD);
	result["IsFolder"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isFolder);
	result["ParentId"] = Jellyfin::Support::toJsonValue<QString>(m_parentId);
	result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	result["People"] = Jellyfin::Support::toJsonValue<QList<BaseItemPerson>>(m_people);
	result["Studios"] = Jellyfin::Support::toJsonValue<QList<NameGuidPair>>(m_studios);
	result["GenreItems"] = Jellyfin::Support::toJsonValue<QList<NameGuidPair>>(m_genreItems);
	result["ParentLogoItemId"] = Jellyfin::Support::toJsonValue<QString>(m_parentLogoItemId);
	result["ParentBackdropItemId"] = Jellyfin::Support::toJsonValue<QString>(m_parentBackdropItemId);
	result["ParentBackdropImageTags"] = Jellyfin::Support::toJsonValue<QStringList>(m_parentBackdropImageTags);
	result["LocalTrailerCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_localTrailerCount);
	result["UserData"] = Jellyfin::Support::toJsonValue<QSharedPointer<UserItemDataDto>>(m_userData);
	result["RecursiveItemCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_recursiveItemCount);
	result["ChildCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_childCount);
	result["SeriesName"] = Jellyfin::Support::toJsonValue<QString>(m_seriesName);
	result["SeriesId"] = Jellyfin::Support::toJsonValue<QString>(m_seriesId);
	result["SeasonId"] = Jellyfin::Support::toJsonValue<QString>(m_seasonId);
	result["SpecialFeatureCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_specialFeatureCount);
	result["DisplayPreferencesId"] = Jellyfin::Support::toJsonValue<QString>(m_displayPreferencesId);
	result["Status"] = Jellyfin::Support::toJsonValue<QString>(m_status);
	result["AirTime"] = Jellyfin::Support::toJsonValue<QString>(m_airTime);
	result["AirDays"] = Jellyfin::Support::toJsonValue<QList<DayOfWeek>>(m_airDays);
	result["Tags"] = Jellyfin::Support::toJsonValue<QStringList>(m_tags);
	result["PrimaryImageAspectRatio"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_primaryImageAspectRatio);
	result["Artists"] = Jellyfin::Support::toJsonValue<QStringList>(m_artists);
	result["ArtistItems"] = Jellyfin::Support::toJsonValue<QList<NameGuidPair>>(m_artistItems);
	result["Album"] = Jellyfin::Support::toJsonValue<QString>(m_album);
	result["CollectionType"] = Jellyfin::Support::toJsonValue<QString>(m_collectionType);
	result["DisplayOrder"] = Jellyfin::Support::toJsonValue<QString>(m_displayOrder);
	result["AlbumId"] = Jellyfin::Support::toJsonValue<QString>(m_albumId);
	result["AlbumPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_albumPrimaryImageTag);
	result["SeriesPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_seriesPrimaryImageTag);
	result["AlbumArtist"] = Jellyfin::Support::toJsonValue<QString>(m_albumArtist);
	result["AlbumArtists"] = Jellyfin::Support::toJsonValue<QList<NameGuidPair>>(m_albumArtists);
	result["SeasonName"] = Jellyfin::Support::toJsonValue<QString>(m_seasonName);
	result["MediaStreams"] = Jellyfin::Support::toJsonValue<QList<MediaStream>>(m_mediaStreams);
	result["VideoType"] = Jellyfin::Support::toJsonValue<VideoType>(m_videoType);
	result["PartCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_partCount);
	result["MediaSourceCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_mediaSourceCount);
	result["ImageTags"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_imageTags);
	result["BackdropImageTags"] = Jellyfin::Support::toJsonValue<QStringList>(m_backdropImageTags);
	result["ScreenshotImageTags"] = Jellyfin::Support::toJsonValue<QStringList>(m_screenshotImageTags);
	result["ParentLogoImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_parentLogoImageTag);
	result["ParentArtItemId"] = Jellyfin::Support::toJsonValue<QString>(m_parentArtItemId);
	result["ParentArtImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_parentArtImageTag);
	result["SeriesThumbImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_seriesThumbImageTag);
	result["ImageBlurHashes"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_imageBlurHashes);
	result["SeriesStudio"] = Jellyfin::Support::toJsonValue<QString>(m_seriesStudio);
	result["ParentThumbItemId"] = Jellyfin::Support::toJsonValue<QString>(m_parentThumbItemId);
	result["ParentThumbImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_parentThumbImageTag);
	result["ParentPrimaryImageItemId"] = Jellyfin::Support::toJsonValue<QString>(m_parentPrimaryImageItemId);
	result["ParentPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_parentPrimaryImageTag);
	result["Chapters"] = Jellyfin::Support::toJsonValue<QList<ChapterInfo>>(m_chapters);
	result["LocationType"] = Jellyfin::Support::toJsonValue<LocationType>(m_locationType);
	result["IsoType"] = Jellyfin::Support::toJsonValue<IsoType>(m_isoType);
	result["MediaType"] = Jellyfin::Support::toJsonValue<QString>(m_mediaType);
	result["EndDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_endDate);
	result["LockedFields"] = Jellyfin::Support::toJsonValue<QList<MetadataField>>(m_lockedFields);
	result["TrailerCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_trailerCount);
	result["MovieCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_movieCount);
	result["SeriesCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_seriesCount);
	result["ProgramCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_programCount);
	result["EpisodeCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_episodeCount);
	result["SongCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_songCount);
	result["AlbumCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_albumCount);
	result["ArtistCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_artistCount);
	result["MusicVideoCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_musicVideoCount);
	result["LockData"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_lockData);
	result["Width"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_width);
	result["Height"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_height);
	result["CameraMake"] = Jellyfin::Support::toJsonValue<QString>(m_cameraMake);
	result["CameraModel"] = Jellyfin::Support::toJsonValue<QString>(m_cameraModel);
	result["Software"] = Jellyfin::Support::toJsonValue<QString>(m_software);
	result["ExposureTime"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_exposureTime);
	result["FocalLength"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_focalLength);
	result["ImageOrientation"] = Jellyfin::Support::toJsonValue<ImageOrientation>(m_imageOrientation);
	result["Aperture"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_aperture);
	result["ShutterSpeed"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_shutterSpeed);
	result["Latitude"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_latitude);
	result["Longitude"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_longitude);
	result["Altitude"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_altitude);
	result["IsoSpeedRating"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_isoSpeedRating);
	result["SeriesTimerId"] = Jellyfin::Support::toJsonValue<QString>(m_seriesTimerId);
	result["ProgramId"] = Jellyfin::Support::toJsonValue<QString>(m_programId);
	result["ChannelPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_channelPrimaryImageTag);
	result["StartDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_startDate);
	result["CompletionPercentage"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_completionPercentage);
	result["IsRepeat"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isRepeat);
	result["EpisodeTitle"] = Jellyfin::Support::toJsonValue<QString>(m_episodeTitle);
	result["ChannelType"] = Jellyfin::Support::toJsonValue<ChannelType>(m_channelType);
	result["Audio"] = Jellyfin::Support::toJsonValue<ProgramAudio>(m_audio);
	result["IsMovie"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isMovie);
	result["IsSports"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isSports);
	result["IsSeries"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isSeries);
	result["IsLive"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isLive);
	result["IsNews"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isNews);
	result["IsKids"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isKids);
	result["IsPremiere"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isPremiere);
	result["TimerId"] = Jellyfin::Support::toJsonValue<QString>(m_timerId);
	result["CurrentProgram"] = Jellyfin::Support::toJsonValue<QSharedPointer<BaseItemDto>>(m_currentProgram);

	return result;
}

QString BaseItemDto::name() const { return m_name; }

void BaseItemDto::setName(QString newName) {
	m_name = newName;
}
bool BaseItemDto::nameNull() const {
	return m_name.isNull();
}

void BaseItemDto::setNameNull() {
	m_name.clear();

}
QString BaseItemDto::originalTitle() const { return m_originalTitle; }

void BaseItemDto::setOriginalTitle(QString newOriginalTitle) {
	m_originalTitle = newOriginalTitle;
}
bool BaseItemDto::originalTitleNull() const {
	return m_originalTitle.isNull();
}

void BaseItemDto::setOriginalTitleNull() {
	m_originalTitle.clear();

}
QString BaseItemDto::serverId() const { return m_serverId; }

void BaseItemDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
bool BaseItemDto::serverIdNull() const {
	return m_serverId.isNull();
}

void BaseItemDto::setServerIdNull() {
	m_serverId.clear();

}
QString BaseItemDto::jellyfinId() const { return m_jellyfinId; }

void BaseItemDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString BaseItemDto::etag() const { return m_etag; }

void BaseItemDto::setEtag(QString newEtag) {
	m_etag = newEtag;
}
bool BaseItemDto::etagNull() const {
	return m_etag.isNull();
}

void BaseItemDto::setEtagNull() {
	m_etag.clear();

}
QString BaseItemDto::sourceType() const { return m_sourceType; }

void BaseItemDto::setSourceType(QString newSourceType) {
	m_sourceType = newSourceType;
}
bool BaseItemDto::sourceTypeNull() const {
	return m_sourceType.isNull();
}

void BaseItemDto::setSourceTypeNull() {
	m_sourceType.clear();

}
QString BaseItemDto::playlistItemId() const { return m_playlistItemId; }

void BaseItemDto::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}
bool BaseItemDto::playlistItemIdNull() const {
	return m_playlistItemId.isNull();
}

void BaseItemDto::setPlaylistItemIdNull() {
	m_playlistItemId.clear();

}
QDateTime BaseItemDto::dateCreated() const { return m_dateCreated; }

void BaseItemDto::setDateCreated(QDateTime newDateCreated) {
	m_dateCreated = newDateCreated;
}
bool BaseItemDto::dateCreatedNull() const {
	return m_dateCreated.isNull();
}

void BaseItemDto::setDateCreatedNull() {
	m_dateCreated= QDateTime();

}
QDateTime BaseItemDto::dateLastMediaAdded() const { return m_dateLastMediaAdded; }

void BaseItemDto::setDateLastMediaAdded(QDateTime newDateLastMediaAdded) {
	m_dateLastMediaAdded = newDateLastMediaAdded;
}
bool BaseItemDto::dateLastMediaAddedNull() const {
	return m_dateLastMediaAdded.isNull();
}

void BaseItemDto::setDateLastMediaAddedNull() {
	m_dateLastMediaAdded= QDateTime();

}
QString BaseItemDto::extraType() const { return m_extraType; }

void BaseItemDto::setExtraType(QString newExtraType) {
	m_extraType = newExtraType;
}
bool BaseItemDto::extraTypeNull() const {
	return m_extraType.isNull();
}

void BaseItemDto::setExtraTypeNull() {
	m_extraType.clear();

}
std::optional<qint32> BaseItemDto::airsBeforeSeasonNumber() const { return m_airsBeforeSeasonNumber; }

void BaseItemDto::setAirsBeforeSeasonNumber(std::optional<qint32> newAirsBeforeSeasonNumber) {
	m_airsBeforeSeasonNumber = newAirsBeforeSeasonNumber;
}
bool BaseItemDto::airsBeforeSeasonNumberNull() const {
	return !m_airsBeforeSeasonNumber.has_value();
}

void BaseItemDto::setAirsBeforeSeasonNumberNull() {
	m_airsBeforeSeasonNumber = std::nullopt;

}
std::optional<qint32> BaseItemDto::airsAfterSeasonNumber() const { return m_airsAfterSeasonNumber; }

void BaseItemDto::setAirsAfterSeasonNumber(std::optional<qint32> newAirsAfterSeasonNumber) {
	m_airsAfterSeasonNumber = newAirsAfterSeasonNumber;
}
bool BaseItemDto::airsAfterSeasonNumberNull() const {
	return !m_airsAfterSeasonNumber.has_value();
}

void BaseItemDto::setAirsAfterSeasonNumberNull() {
	m_airsAfterSeasonNumber = std::nullopt;

}
std::optional<qint32> BaseItemDto::airsBeforeEpisodeNumber() const { return m_airsBeforeEpisodeNumber; }

void BaseItemDto::setAirsBeforeEpisodeNumber(std::optional<qint32> newAirsBeforeEpisodeNumber) {
	m_airsBeforeEpisodeNumber = newAirsBeforeEpisodeNumber;
}
bool BaseItemDto::airsBeforeEpisodeNumberNull() const {
	return !m_airsBeforeEpisodeNumber.has_value();
}

void BaseItemDto::setAirsBeforeEpisodeNumberNull() {
	m_airsBeforeEpisodeNumber = std::nullopt;

}
std::optional<bool> BaseItemDto::canDelete() const { return m_canDelete; }

void BaseItemDto::setCanDelete(std::optional<bool> newCanDelete) {
	m_canDelete = newCanDelete;
}
bool BaseItemDto::canDeleteNull() const {
	return !m_canDelete.has_value();
}

void BaseItemDto::setCanDeleteNull() {
	m_canDelete = std::nullopt;

}
std::optional<bool> BaseItemDto::canDownload() const { return m_canDownload; }

void BaseItemDto::setCanDownload(std::optional<bool> newCanDownload) {
	m_canDownload = newCanDownload;
}
bool BaseItemDto::canDownloadNull() const {
	return !m_canDownload.has_value();
}

void BaseItemDto::setCanDownloadNull() {
	m_canDownload = std::nullopt;

}
std::optional<bool> BaseItemDto::hasSubtitles() const { return m_hasSubtitles; }

void BaseItemDto::setHasSubtitles(std::optional<bool> newHasSubtitles) {
	m_hasSubtitles = newHasSubtitles;
}
bool BaseItemDto::hasSubtitlesNull() const {
	return !m_hasSubtitles.has_value();
}

void BaseItemDto::setHasSubtitlesNull() {
	m_hasSubtitles = std::nullopt;

}
QString BaseItemDto::preferredMetadataLanguage() const { return m_preferredMetadataLanguage; }

void BaseItemDto::setPreferredMetadataLanguage(QString newPreferredMetadataLanguage) {
	m_preferredMetadataLanguage = newPreferredMetadataLanguage;
}
bool BaseItemDto::preferredMetadataLanguageNull() const {
	return m_preferredMetadataLanguage.isNull();
}

void BaseItemDto::setPreferredMetadataLanguageNull() {
	m_preferredMetadataLanguage.clear();

}
QString BaseItemDto::preferredMetadataCountryCode() const { return m_preferredMetadataCountryCode; }

void BaseItemDto::setPreferredMetadataCountryCode(QString newPreferredMetadataCountryCode) {
	m_preferredMetadataCountryCode = newPreferredMetadataCountryCode;
}
bool BaseItemDto::preferredMetadataCountryCodeNull() const {
	return m_preferredMetadataCountryCode.isNull();
}

void BaseItemDto::setPreferredMetadataCountryCodeNull() {
	m_preferredMetadataCountryCode.clear();

}
std::optional<bool> BaseItemDto::supportsSync() const { return m_supportsSync; }

void BaseItemDto::setSupportsSync(std::optional<bool> newSupportsSync) {
	m_supportsSync = newSupportsSync;
}
bool BaseItemDto::supportsSyncNull() const {
	return !m_supportsSync.has_value();
}

void BaseItemDto::setSupportsSyncNull() {
	m_supportsSync = std::nullopt;

}
QString BaseItemDto::container() const { return m_container; }

void BaseItemDto::setContainer(QString newContainer) {
	m_container = newContainer;
}
bool BaseItemDto::containerNull() const {
	return m_container.isNull();
}

void BaseItemDto::setContainerNull() {
	m_container.clear();

}
QString BaseItemDto::sortName() const { return m_sortName; }

void BaseItemDto::setSortName(QString newSortName) {
	m_sortName = newSortName;
}
bool BaseItemDto::sortNameNull() const {
	return m_sortName.isNull();
}

void BaseItemDto::setSortNameNull() {
	m_sortName.clear();

}
QString BaseItemDto::forcedSortName() const { return m_forcedSortName; }

void BaseItemDto::setForcedSortName(QString newForcedSortName) {
	m_forcedSortName = newForcedSortName;
}
bool BaseItemDto::forcedSortNameNull() const {
	return m_forcedSortName.isNull();
}

void BaseItemDto::setForcedSortNameNull() {
	m_forcedSortName.clear();

}
Video3DFormat BaseItemDto::video3DFormat() const { return m_video3DFormat; }

void BaseItemDto::setVideo3DFormat(Video3DFormat newVideo3DFormat) {
	m_video3DFormat = newVideo3DFormat;
}

QDateTime BaseItemDto::premiereDate() const { return m_premiereDate; }

void BaseItemDto::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
bool BaseItemDto::premiereDateNull() const {
	return m_premiereDate.isNull();
}

void BaseItemDto::setPremiereDateNull() {
	m_premiereDate= QDateTime();

}
QList<ExternalUrl> BaseItemDto::externalUrls() const { return m_externalUrls; }

void BaseItemDto::setExternalUrls(QList<ExternalUrl> newExternalUrls) {
	m_externalUrls = newExternalUrls;
}
bool BaseItemDto::externalUrlsNull() const {
	return m_externalUrls.size() == 0;
}

void BaseItemDto::setExternalUrlsNull() {
	m_externalUrls.clear();

}
QList<MediaSourceInfo> BaseItemDto::mediaSources() const { return m_mediaSources; }

void BaseItemDto::setMediaSources(QList<MediaSourceInfo> newMediaSources) {
	m_mediaSources = newMediaSources;
}
bool BaseItemDto::mediaSourcesNull() const {
	return m_mediaSources.size() == 0;
}

void BaseItemDto::setMediaSourcesNull() {
	m_mediaSources.clear();

}
std::optional<float> BaseItemDto::criticRating() const { return m_criticRating; }

void BaseItemDto::setCriticRating(std::optional<float> newCriticRating) {
	m_criticRating = newCriticRating;
}
bool BaseItemDto::criticRatingNull() const {
	return !m_criticRating.has_value();
}

void BaseItemDto::setCriticRatingNull() {
	m_criticRating = std::nullopt;

}
QStringList BaseItemDto::productionLocations() const { return m_productionLocations; }

void BaseItemDto::setProductionLocations(QStringList newProductionLocations) {
	m_productionLocations = newProductionLocations;
}
bool BaseItemDto::productionLocationsNull() const {
	return m_productionLocations.size() == 0;
}

void BaseItemDto::setProductionLocationsNull() {
	m_productionLocations.clear();

}
QString BaseItemDto::path() const { return m_path; }

void BaseItemDto::setPath(QString newPath) {
	m_path = newPath;
}
bool BaseItemDto::pathNull() const {
	return m_path.isNull();
}

void BaseItemDto::setPathNull() {
	m_path.clear();

}
std::optional<bool> BaseItemDto::enableMediaSourceDisplay() const { return m_enableMediaSourceDisplay; }

void BaseItemDto::setEnableMediaSourceDisplay(std::optional<bool> newEnableMediaSourceDisplay) {
	m_enableMediaSourceDisplay = newEnableMediaSourceDisplay;
}
bool BaseItemDto::enableMediaSourceDisplayNull() const {
	return !m_enableMediaSourceDisplay.has_value();
}

void BaseItemDto::setEnableMediaSourceDisplayNull() {
	m_enableMediaSourceDisplay = std::nullopt;

}
QString BaseItemDto::officialRating() const { return m_officialRating; }

void BaseItemDto::setOfficialRating(QString newOfficialRating) {
	m_officialRating = newOfficialRating;
}
bool BaseItemDto::officialRatingNull() const {
	return m_officialRating.isNull();
}

void BaseItemDto::setOfficialRatingNull() {
	m_officialRating.clear();

}
QString BaseItemDto::customRating() const { return m_customRating; }

void BaseItemDto::setCustomRating(QString newCustomRating) {
	m_customRating = newCustomRating;
}
bool BaseItemDto::customRatingNull() const {
	return m_customRating.isNull();
}

void BaseItemDto::setCustomRatingNull() {
	m_customRating.clear();

}
QString BaseItemDto::channelId() const { return m_channelId; }

void BaseItemDto::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
}
bool BaseItemDto::channelIdNull() const {
	return m_channelId.isNull();
}

void BaseItemDto::setChannelIdNull() {
	m_channelId.clear();

}
QString BaseItemDto::channelName() const { return m_channelName; }

void BaseItemDto::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
}
bool BaseItemDto::channelNameNull() const {
	return m_channelName.isNull();
}

void BaseItemDto::setChannelNameNull() {
	m_channelName.clear();

}
QString BaseItemDto::overview() const { return m_overview; }

void BaseItemDto::setOverview(QString newOverview) {
	m_overview = newOverview;
}
bool BaseItemDto::overviewNull() const {
	return m_overview.isNull();
}

void BaseItemDto::setOverviewNull() {
	m_overview.clear();

}
QStringList BaseItemDto::taglines() const { return m_taglines; }

void BaseItemDto::setTaglines(QStringList newTaglines) {
	m_taglines = newTaglines;
}
bool BaseItemDto::taglinesNull() const {
	return m_taglines.size() == 0;
}

void BaseItemDto::setTaglinesNull() {
	m_taglines.clear();

}
QStringList BaseItemDto::genres() const { return m_genres; }

void BaseItemDto::setGenres(QStringList newGenres) {
	m_genres = newGenres;
}
bool BaseItemDto::genresNull() const {
	return m_genres.size() == 0;
}

void BaseItemDto::setGenresNull() {
	m_genres.clear();

}
std::optional<float> BaseItemDto::communityRating() const { return m_communityRating; }

void BaseItemDto::setCommunityRating(std::optional<float> newCommunityRating) {
	m_communityRating = newCommunityRating;
}
bool BaseItemDto::communityRatingNull() const {
	return !m_communityRating.has_value();
}

void BaseItemDto::setCommunityRatingNull() {
	m_communityRating = std::nullopt;

}
std::optional<qint64> BaseItemDto::cumulativeRunTimeTicks() const { return m_cumulativeRunTimeTicks; }

void BaseItemDto::setCumulativeRunTimeTicks(std::optional<qint64> newCumulativeRunTimeTicks) {
	m_cumulativeRunTimeTicks = newCumulativeRunTimeTicks;
}
bool BaseItemDto::cumulativeRunTimeTicksNull() const {
	return !m_cumulativeRunTimeTicks.has_value();
}

void BaseItemDto::setCumulativeRunTimeTicksNull() {
	m_cumulativeRunTimeTicks = std::nullopt;

}
std::optional<qint64> BaseItemDto::runTimeTicks() const { return m_runTimeTicks; }

void BaseItemDto::setRunTimeTicks(std::optional<qint64> newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
}
bool BaseItemDto::runTimeTicksNull() const {
	return !m_runTimeTicks.has_value();
}

void BaseItemDto::setRunTimeTicksNull() {
	m_runTimeTicks = std::nullopt;

}
PlayAccess BaseItemDto::playAccess() const { return m_playAccess; }

void BaseItemDto::setPlayAccess(PlayAccess newPlayAccess) {
	m_playAccess = newPlayAccess;
}

QString BaseItemDto::aspectRatio() const { return m_aspectRatio; }

void BaseItemDto::setAspectRatio(QString newAspectRatio) {
	m_aspectRatio = newAspectRatio;
}
bool BaseItemDto::aspectRatioNull() const {
	return m_aspectRatio.isNull();
}

void BaseItemDto::setAspectRatioNull() {
	m_aspectRatio.clear();

}
std::optional<qint32> BaseItemDto::productionYear() const { return m_productionYear; }

void BaseItemDto::setProductionYear(std::optional<qint32> newProductionYear) {
	m_productionYear = newProductionYear;
}
bool BaseItemDto::productionYearNull() const {
	return !m_productionYear.has_value();
}

void BaseItemDto::setProductionYearNull() {
	m_productionYear = std::nullopt;

}
std::optional<bool> BaseItemDto::isPlaceHolder() const { return m_isPlaceHolder; }

void BaseItemDto::setIsPlaceHolder(std::optional<bool> newIsPlaceHolder) {
	m_isPlaceHolder = newIsPlaceHolder;
}
bool BaseItemDto::isPlaceHolderNull() const {
	return !m_isPlaceHolder.has_value();
}

void BaseItemDto::setIsPlaceHolderNull() {
	m_isPlaceHolder = std::nullopt;

}
QString BaseItemDto::number() const { return m_number; }

void BaseItemDto::setNumber(QString newNumber) {
	m_number = newNumber;
}
bool BaseItemDto::numberNull() const {
	return m_number.isNull();
}

void BaseItemDto::setNumberNull() {
	m_number.clear();

}
QString BaseItemDto::channelNumber() const { return m_channelNumber; }

void BaseItemDto::setChannelNumber(QString newChannelNumber) {
	m_channelNumber = newChannelNumber;
}
bool BaseItemDto::channelNumberNull() const {
	return m_channelNumber.isNull();
}

void BaseItemDto::setChannelNumberNull() {
	m_channelNumber.clear();

}
std::optional<qint32> BaseItemDto::indexNumber() const { return m_indexNumber; }

void BaseItemDto::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool BaseItemDto::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void BaseItemDto::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> BaseItemDto::indexNumberEnd() const { return m_indexNumberEnd; }

void BaseItemDto::setIndexNumberEnd(std::optional<qint32> newIndexNumberEnd) {
	m_indexNumberEnd = newIndexNumberEnd;
}
bool BaseItemDto::indexNumberEndNull() const {
	return !m_indexNumberEnd.has_value();
}

void BaseItemDto::setIndexNumberEndNull() {
	m_indexNumberEnd = std::nullopt;

}
std::optional<qint32> BaseItemDto::parentIndexNumber() const { return m_parentIndexNumber; }

void BaseItemDto::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool BaseItemDto::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void BaseItemDto::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QList<MediaUrl> BaseItemDto::remoteTrailers() const { return m_remoteTrailers; }

void BaseItemDto::setRemoteTrailers(QList<MediaUrl> newRemoteTrailers) {
	m_remoteTrailers = newRemoteTrailers;
}
bool BaseItemDto::remoteTrailersNull() const {
	return m_remoteTrailers.size() == 0;
}

void BaseItemDto::setRemoteTrailersNull() {
	m_remoteTrailers.clear();

}
QJsonObject BaseItemDto::providerIds() const { return m_providerIds; }

void BaseItemDto::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
bool BaseItemDto::providerIdsNull() const {
	return m_providerIds.isEmpty();
}

void BaseItemDto::setProviderIdsNull() {
	m_providerIds= QJsonObject();

}
std::optional<bool> BaseItemDto::isHD() const { return m_isHD; }

void BaseItemDto::setIsHD(std::optional<bool> newIsHD) {
	m_isHD = newIsHD;
}
bool BaseItemDto::isHDNull() const {
	return !m_isHD.has_value();
}

void BaseItemDto::setIsHDNull() {
	m_isHD = std::nullopt;

}
std::optional<bool> BaseItemDto::isFolder() const { return m_isFolder; }

void BaseItemDto::setIsFolder(std::optional<bool> newIsFolder) {
	m_isFolder = newIsFolder;
}
bool BaseItemDto::isFolderNull() const {
	return !m_isFolder.has_value();
}

void BaseItemDto::setIsFolderNull() {
	m_isFolder = std::nullopt;

}
QString BaseItemDto::parentId() const { return m_parentId; }

void BaseItemDto::setParentId(QString newParentId) {
	m_parentId = newParentId;
}
bool BaseItemDto::parentIdNull() const {
	return m_parentId.isNull();
}

void BaseItemDto::setParentIdNull() {
	m_parentId.clear();

}
QString BaseItemDto::type() const { return m_type; }

void BaseItemDto::setType(QString newType) {
	m_type = newType;
}
bool BaseItemDto::typeNull() const {
	return m_type.isNull();
}

void BaseItemDto::setTypeNull() {
	m_type.clear();

}
QList<BaseItemPerson> BaseItemDto::people() const { return m_people; }

void BaseItemDto::setPeople(QList<BaseItemPerson> newPeople) {
	m_people = newPeople;
}
bool BaseItemDto::peopleNull() const {
	return m_people.size() == 0;
}

void BaseItemDto::setPeopleNull() {
	m_people.clear();

}
QList<NameGuidPair> BaseItemDto::studios() const { return m_studios; }

void BaseItemDto::setStudios(QList<NameGuidPair> newStudios) {
	m_studios = newStudios;
}
bool BaseItemDto::studiosNull() const {
	return m_studios.size() == 0;
}

void BaseItemDto::setStudiosNull() {
	m_studios.clear();

}
QList<NameGuidPair> BaseItemDto::genreItems() const { return m_genreItems; }

void BaseItemDto::setGenreItems(QList<NameGuidPair> newGenreItems) {
	m_genreItems = newGenreItems;
}
bool BaseItemDto::genreItemsNull() const {
	return m_genreItems.size() == 0;
}

void BaseItemDto::setGenreItemsNull() {
	m_genreItems.clear();

}
QString BaseItemDto::parentLogoItemId() const { return m_parentLogoItemId; }

void BaseItemDto::setParentLogoItemId(QString newParentLogoItemId) {
	m_parentLogoItemId = newParentLogoItemId;
}
bool BaseItemDto::parentLogoItemIdNull() const {
	return m_parentLogoItemId.isNull();
}

void BaseItemDto::setParentLogoItemIdNull() {
	m_parentLogoItemId.clear();

}
QString BaseItemDto::parentBackdropItemId() const { return m_parentBackdropItemId; }

void BaseItemDto::setParentBackdropItemId(QString newParentBackdropItemId) {
	m_parentBackdropItemId = newParentBackdropItemId;
}
bool BaseItemDto::parentBackdropItemIdNull() const {
	return m_parentBackdropItemId.isNull();
}

void BaseItemDto::setParentBackdropItemIdNull() {
	m_parentBackdropItemId.clear();

}
QStringList BaseItemDto::parentBackdropImageTags() const { return m_parentBackdropImageTags; }

void BaseItemDto::setParentBackdropImageTags(QStringList newParentBackdropImageTags) {
	m_parentBackdropImageTags = newParentBackdropImageTags;
}
bool BaseItemDto::parentBackdropImageTagsNull() const {
	return m_parentBackdropImageTags.size() == 0;
}

void BaseItemDto::setParentBackdropImageTagsNull() {
	m_parentBackdropImageTags.clear();

}
std::optional<qint32> BaseItemDto::localTrailerCount() const { return m_localTrailerCount; }

void BaseItemDto::setLocalTrailerCount(std::optional<qint32> newLocalTrailerCount) {
	m_localTrailerCount = newLocalTrailerCount;
}
bool BaseItemDto::localTrailerCountNull() const {
	return !m_localTrailerCount.has_value();
}

void BaseItemDto::setLocalTrailerCountNull() {
	m_localTrailerCount = std::nullopt;

}
QSharedPointer<UserItemDataDto> BaseItemDto::userData() const { return m_userData; }

void BaseItemDto::setUserData(QSharedPointer<UserItemDataDto> newUserData) {
	m_userData = newUserData;
}

std::optional<qint32> BaseItemDto::recursiveItemCount() const { return m_recursiveItemCount; }

void BaseItemDto::setRecursiveItemCount(std::optional<qint32> newRecursiveItemCount) {
	m_recursiveItemCount = newRecursiveItemCount;
}
bool BaseItemDto::recursiveItemCountNull() const {
	return !m_recursiveItemCount.has_value();
}

void BaseItemDto::setRecursiveItemCountNull() {
	m_recursiveItemCount = std::nullopt;

}
std::optional<qint32> BaseItemDto::childCount() const { return m_childCount; }

void BaseItemDto::setChildCount(std::optional<qint32> newChildCount) {
	m_childCount = newChildCount;
}
bool BaseItemDto::childCountNull() const {
	return !m_childCount.has_value();
}

void BaseItemDto::setChildCountNull() {
	m_childCount = std::nullopt;

}
QString BaseItemDto::seriesName() const { return m_seriesName; }

void BaseItemDto::setSeriesName(QString newSeriesName) {
	m_seriesName = newSeriesName;
}
bool BaseItemDto::seriesNameNull() const {
	return m_seriesName.isNull();
}

void BaseItemDto::setSeriesNameNull() {
	m_seriesName.clear();

}
QString BaseItemDto::seriesId() const { return m_seriesId; }

void BaseItemDto::setSeriesId(QString newSeriesId) {
	m_seriesId = newSeriesId;
}
bool BaseItemDto::seriesIdNull() const {
	return m_seriesId.isNull();
}

void BaseItemDto::setSeriesIdNull() {
	m_seriesId.clear();

}
QString BaseItemDto::seasonId() const { return m_seasonId; }

void BaseItemDto::setSeasonId(QString newSeasonId) {
	m_seasonId = newSeasonId;
}
bool BaseItemDto::seasonIdNull() const {
	return m_seasonId.isNull();
}

void BaseItemDto::setSeasonIdNull() {
	m_seasonId.clear();

}
std::optional<qint32> BaseItemDto::specialFeatureCount() const { return m_specialFeatureCount; }

void BaseItemDto::setSpecialFeatureCount(std::optional<qint32> newSpecialFeatureCount) {
	m_specialFeatureCount = newSpecialFeatureCount;
}
bool BaseItemDto::specialFeatureCountNull() const {
	return !m_specialFeatureCount.has_value();
}

void BaseItemDto::setSpecialFeatureCountNull() {
	m_specialFeatureCount = std::nullopt;

}
QString BaseItemDto::displayPreferencesId() const { return m_displayPreferencesId; }

void BaseItemDto::setDisplayPreferencesId(QString newDisplayPreferencesId) {
	m_displayPreferencesId = newDisplayPreferencesId;
}
bool BaseItemDto::displayPreferencesIdNull() const {
	return m_displayPreferencesId.isNull();
}

void BaseItemDto::setDisplayPreferencesIdNull() {
	m_displayPreferencesId.clear();

}
QString BaseItemDto::status() const { return m_status; }

void BaseItemDto::setStatus(QString newStatus) {
	m_status = newStatus;
}
bool BaseItemDto::statusNull() const {
	return m_status.isNull();
}

void BaseItemDto::setStatusNull() {
	m_status.clear();

}
QString BaseItemDto::airTime() const { return m_airTime; }

void BaseItemDto::setAirTime(QString newAirTime) {
	m_airTime = newAirTime;
}
bool BaseItemDto::airTimeNull() const {
	return m_airTime.isNull();
}

void BaseItemDto::setAirTimeNull() {
	m_airTime.clear();

}
QList<DayOfWeek> BaseItemDto::airDays() const { return m_airDays; }

void BaseItemDto::setAirDays(QList<DayOfWeek> newAirDays) {
	m_airDays = newAirDays;
}
bool BaseItemDto::airDaysNull() const {
	return m_airDays.size() == 0;
}

void BaseItemDto::setAirDaysNull() {
	m_airDays.clear();

}
QStringList BaseItemDto::tags() const { return m_tags; }

void BaseItemDto::setTags(QStringList newTags) {
	m_tags = newTags;
}
bool BaseItemDto::tagsNull() const {
	return m_tags.size() == 0;
}

void BaseItemDto::setTagsNull() {
	m_tags.clear();

}
std::optional<double> BaseItemDto::primaryImageAspectRatio() const { return m_primaryImageAspectRatio; }

void BaseItemDto::setPrimaryImageAspectRatio(std::optional<double> newPrimaryImageAspectRatio) {
	m_primaryImageAspectRatio = newPrimaryImageAspectRatio;
}
bool BaseItemDto::primaryImageAspectRatioNull() const {
	return !m_primaryImageAspectRatio.has_value();
}

void BaseItemDto::setPrimaryImageAspectRatioNull() {
	m_primaryImageAspectRatio = std::nullopt;

}
QStringList BaseItemDto::artists() const { return m_artists; }

void BaseItemDto::setArtists(QStringList newArtists) {
	m_artists = newArtists;
}
bool BaseItemDto::artistsNull() const {
	return m_artists.size() == 0;
}

void BaseItemDto::setArtistsNull() {
	m_artists.clear();

}
QList<NameGuidPair> BaseItemDto::artistItems() const { return m_artistItems; }

void BaseItemDto::setArtistItems(QList<NameGuidPair> newArtistItems) {
	m_artistItems = newArtistItems;
}
bool BaseItemDto::artistItemsNull() const {
	return m_artistItems.size() == 0;
}

void BaseItemDto::setArtistItemsNull() {
	m_artistItems.clear();

}
QString BaseItemDto::album() const { return m_album; }

void BaseItemDto::setAlbum(QString newAlbum) {
	m_album = newAlbum;
}
bool BaseItemDto::albumNull() const {
	return m_album.isNull();
}

void BaseItemDto::setAlbumNull() {
	m_album.clear();

}
QString BaseItemDto::collectionType() const { return m_collectionType; }

void BaseItemDto::setCollectionType(QString newCollectionType) {
	m_collectionType = newCollectionType;
}
bool BaseItemDto::collectionTypeNull() const {
	return m_collectionType.isNull();
}

void BaseItemDto::setCollectionTypeNull() {
	m_collectionType.clear();

}
QString BaseItemDto::displayOrder() const { return m_displayOrder; }

void BaseItemDto::setDisplayOrder(QString newDisplayOrder) {
	m_displayOrder = newDisplayOrder;
}
bool BaseItemDto::displayOrderNull() const {
	return m_displayOrder.isNull();
}

void BaseItemDto::setDisplayOrderNull() {
	m_displayOrder.clear();

}
QString BaseItemDto::albumId() const { return m_albumId; }

void BaseItemDto::setAlbumId(QString newAlbumId) {
	m_albumId = newAlbumId;
}
bool BaseItemDto::albumIdNull() const {
	return m_albumId.isNull();
}

void BaseItemDto::setAlbumIdNull() {
	m_albumId.clear();

}
QString BaseItemDto::albumPrimaryImageTag() const { return m_albumPrimaryImageTag; }

void BaseItemDto::setAlbumPrimaryImageTag(QString newAlbumPrimaryImageTag) {
	m_albumPrimaryImageTag = newAlbumPrimaryImageTag;
}
bool BaseItemDto::albumPrimaryImageTagNull() const {
	return m_albumPrimaryImageTag.isNull();
}

void BaseItemDto::setAlbumPrimaryImageTagNull() {
	m_albumPrimaryImageTag.clear();

}
QString BaseItemDto::seriesPrimaryImageTag() const { return m_seriesPrimaryImageTag; }

void BaseItemDto::setSeriesPrimaryImageTag(QString newSeriesPrimaryImageTag) {
	m_seriesPrimaryImageTag = newSeriesPrimaryImageTag;
}
bool BaseItemDto::seriesPrimaryImageTagNull() const {
	return m_seriesPrimaryImageTag.isNull();
}

void BaseItemDto::setSeriesPrimaryImageTagNull() {
	m_seriesPrimaryImageTag.clear();

}
QString BaseItemDto::albumArtist() const { return m_albumArtist; }

void BaseItemDto::setAlbumArtist(QString newAlbumArtist) {
	m_albumArtist = newAlbumArtist;
}
bool BaseItemDto::albumArtistNull() const {
	return m_albumArtist.isNull();
}

void BaseItemDto::setAlbumArtistNull() {
	m_albumArtist.clear();

}
QList<NameGuidPair> BaseItemDto::albumArtists() const { return m_albumArtists; }

void BaseItemDto::setAlbumArtists(QList<NameGuidPair> newAlbumArtists) {
	m_albumArtists = newAlbumArtists;
}
bool BaseItemDto::albumArtistsNull() const {
	return m_albumArtists.size() == 0;
}

void BaseItemDto::setAlbumArtistsNull() {
	m_albumArtists.clear();

}
QString BaseItemDto::seasonName() const { return m_seasonName; }

void BaseItemDto::setSeasonName(QString newSeasonName) {
	m_seasonName = newSeasonName;
}
bool BaseItemDto::seasonNameNull() const {
	return m_seasonName.isNull();
}

void BaseItemDto::setSeasonNameNull() {
	m_seasonName.clear();

}
QList<MediaStream> BaseItemDto::mediaStreams() const { return m_mediaStreams; }

void BaseItemDto::setMediaStreams(QList<MediaStream> newMediaStreams) {
	m_mediaStreams = newMediaStreams;
}
bool BaseItemDto::mediaStreamsNull() const {
	return m_mediaStreams.size() == 0;
}

void BaseItemDto::setMediaStreamsNull() {
	m_mediaStreams.clear();

}
VideoType BaseItemDto::videoType() const { return m_videoType; }

void BaseItemDto::setVideoType(VideoType newVideoType) {
	m_videoType = newVideoType;
}

std::optional<qint32> BaseItemDto::partCount() const { return m_partCount; }

void BaseItemDto::setPartCount(std::optional<qint32> newPartCount) {
	m_partCount = newPartCount;
}
bool BaseItemDto::partCountNull() const {
	return !m_partCount.has_value();
}

void BaseItemDto::setPartCountNull() {
	m_partCount = std::nullopt;

}
std::optional<qint32> BaseItemDto::mediaSourceCount() const { return m_mediaSourceCount; }

void BaseItemDto::setMediaSourceCount(std::optional<qint32> newMediaSourceCount) {
	m_mediaSourceCount = newMediaSourceCount;
}
bool BaseItemDto::mediaSourceCountNull() const {
	return !m_mediaSourceCount.has_value();
}

void BaseItemDto::setMediaSourceCountNull() {
	m_mediaSourceCount = std::nullopt;

}
QJsonObject BaseItemDto::imageTags() const { return m_imageTags; }

void BaseItemDto::setImageTags(QJsonObject newImageTags) {
	m_imageTags = newImageTags;
}
bool BaseItemDto::imageTagsNull() const {
	return m_imageTags.isEmpty();
}

void BaseItemDto::setImageTagsNull() {
	m_imageTags= QJsonObject();

}
QStringList BaseItemDto::backdropImageTags() const { return m_backdropImageTags; }

void BaseItemDto::setBackdropImageTags(QStringList newBackdropImageTags) {
	m_backdropImageTags = newBackdropImageTags;
}
bool BaseItemDto::backdropImageTagsNull() const {
	return m_backdropImageTags.size() == 0;
}

void BaseItemDto::setBackdropImageTagsNull() {
	m_backdropImageTags.clear();

}
QStringList BaseItemDto::screenshotImageTags() const { return m_screenshotImageTags; }

void BaseItemDto::setScreenshotImageTags(QStringList newScreenshotImageTags) {
	m_screenshotImageTags = newScreenshotImageTags;
}
bool BaseItemDto::screenshotImageTagsNull() const {
	return m_screenshotImageTags.size() == 0;
}

void BaseItemDto::setScreenshotImageTagsNull() {
	m_screenshotImageTags.clear();

}
QString BaseItemDto::parentLogoImageTag() const { return m_parentLogoImageTag; }

void BaseItemDto::setParentLogoImageTag(QString newParentLogoImageTag) {
	m_parentLogoImageTag = newParentLogoImageTag;
}
bool BaseItemDto::parentLogoImageTagNull() const {
	return m_parentLogoImageTag.isNull();
}

void BaseItemDto::setParentLogoImageTagNull() {
	m_parentLogoImageTag.clear();

}
QString BaseItemDto::parentArtItemId() const { return m_parentArtItemId; }

void BaseItemDto::setParentArtItemId(QString newParentArtItemId) {
	m_parentArtItemId = newParentArtItemId;
}
bool BaseItemDto::parentArtItemIdNull() const {
	return m_parentArtItemId.isNull();
}

void BaseItemDto::setParentArtItemIdNull() {
	m_parentArtItemId.clear();

}
QString BaseItemDto::parentArtImageTag() const { return m_parentArtImageTag; }

void BaseItemDto::setParentArtImageTag(QString newParentArtImageTag) {
	m_parentArtImageTag = newParentArtImageTag;
}
bool BaseItemDto::parentArtImageTagNull() const {
	return m_parentArtImageTag.isNull();
}

void BaseItemDto::setParentArtImageTagNull() {
	m_parentArtImageTag.clear();

}
QString BaseItemDto::seriesThumbImageTag() const { return m_seriesThumbImageTag; }

void BaseItemDto::setSeriesThumbImageTag(QString newSeriesThumbImageTag) {
	m_seriesThumbImageTag = newSeriesThumbImageTag;
}
bool BaseItemDto::seriesThumbImageTagNull() const {
	return m_seriesThumbImageTag.isNull();
}

void BaseItemDto::setSeriesThumbImageTagNull() {
	m_seriesThumbImageTag.clear();

}
QJsonObject BaseItemDto::imageBlurHashes() const { return m_imageBlurHashes; }

void BaseItemDto::setImageBlurHashes(QJsonObject newImageBlurHashes) {
	m_imageBlurHashes = newImageBlurHashes;
}
bool BaseItemDto::imageBlurHashesNull() const {
	return m_imageBlurHashes.isEmpty();
}

void BaseItemDto::setImageBlurHashesNull() {
	m_imageBlurHashes= QJsonObject();

}
QString BaseItemDto::seriesStudio() const { return m_seriesStudio; }

void BaseItemDto::setSeriesStudio(QString newSeriesStudio) {
	m_seriesStudio = newSeriesStudio;
}
bool BaseItemDto::seriesStudioNull() const {
	return m_seriesStudio.isNull();
}

void BaseItemDto::setSeriesStudioNull() {
	m_seriesStudio.clear();

}
QString BaseItemDto::parentThumbItemId() const { return m_parentThumbItemId; }

void BaseItemDto::setParentThumbItemId(QString newParentThumbItemId) {
	m_parentThumbItemId = newParentThumbItemId;
}
bool BaseItemDto::parentThumbItemIdNull() const {
	return m_parentThumbItemId.isNull();
}

void BaseItemDto::setParentThumbItemIdNull() {
	m_parentThumbItemId.clear();

}
QString BaseItemDto::parentThumbImageTag() const { return m_parentThumbImageTag; }

void BaseItemDto::setParentThumbImageTag(QString newParentThumbImageTag) {
	m_parentThumbImageTag = newParentThumbImageTag;
}
bool BaseItemDto::parentThumbImageTagNull() const {
	return m_parentThumbImageTag.isNull();
}

void BaseItemDto::setParentThumbImageTagNull() {
	m_parentThumbImageTag.clear();

}
QString BaseItemDto::parentPrimaryImageItemId() const { return m_parentPrimaryImageItemId; }

void BaseItemDto::setParentPrimaryImageItemId(QString newParentPrimaryImageItemId) {
	m_parentPrimaryImageItemId = newParentPrimaryImageItemId;
}
bool BaseItemDto::parentPrimaryImageItemIdNull() const {
	return m_parentPrimaryImageItemId.isNull();
}

void BaseItemDto::setParentPrimaryImageItemIdNull() {
	m_parentPrimaryImageItemId.clear();

}
QString BaseItemDto::parentPrimaryImageTag() const { return m_parentPrimaryImageTag; }

void BaseItemDto::setParentPrimaryImageTag(QString newParentPrimaryImageTag) {
	m_parentPrimaryImageTag = newParentPrimaryImageTag;
}
bool BaseItemDto::parentPrimaryImageTagNull() const {
	return m_parentPrimaryImageTag.isNull();
}

void BaseItemDto::setParentPrimaryImageTagNull() {
	m_parentPrimaryImageTag.clear();

}
QList<ChapterInfo> BaseItemDto::chapters() const { return m_chapters; }

void BaseItemDto::setChapters(QList<ChapterInfo> newChapters) {
	m_chapters = newChapters;
}
bool BaseItemDto::chaptersNull() const {
	return m_chapters.size() == 0;
}

void BaseItemDto::setChaptersNull() {
	m_chapters.clear();

}
LocationType BaseItemDto::locationType() const { return m_locationType; }

void BaseItemDto::setLocationType(LocationType newLocationType) {
	m_locationType = newLocationType;
}

IsoType BaseItemDto::isoType() const { return m_isoType; }

void BaseItemDto::setIsoType(IsoType newIsoType) {
	m_isoType = newIsoType;
}

QString BaseItemDto::mediaType() const { return m_mediaType; }

void BaseItemDto::setMediaType(QString newMediaType) {
	m_mediaType = newMediaType;
}
bool BaseItemDto::mediaTypeNull() const {
	return m_mediaType.isNull();
}

void BaseItemDto::setMediaTypeNull() {
	m_mediaType.clear();

}
QDateTime BaseItemDto::endDate() const { return m_endDate; }

void BaseItemDto::setEndDate(QDateTime newEndDate) {
	m_endDate = newEndDate;
}
bool BaseItemDto::endDateNull() const {
	return m_endDate.isNull();
}

void BaseItemDto::setEndDateNull() {
	m_endDate= QDateTime();

}
QList<MetadataField> BaseItemDto::lockedFields() const { return m_lockedFields; }

void BaseItemDto::setLockedFields(QList<MetadataField> newLockedFields) {
	m_lockedFields = newLockedFields;
}
bool BaseItemDto::lockedFieldsNull() const {
	return m_lockedFields.size() == 0;
}

void BaseItemDto::setLockedFieldsNull() {
	m_lockedFields.clear();

}
std::optional<qint32> BaseItemDto::trailerCount() const { return m_trailerCount; }

void BaseItemDto::setTrailerCount(std::optional<qint32> newTrailerCount) {
	m_trailerCount = newTrailerCount;
}
bool BaseItemDto::trailerCountNull() const {
	return !m_trailerCount.has_value();
}

void BaseItemDto::setTrailerCountNull() {
	m_trailerCount = std::nullopt;

}
std::optional<qint32> BaseItemDto::movieCount() const { return m_movieCount; }

void BaseItemDto::setMovieCount(std::optional<qint32> newMovieCount) {
	m_movieCount = newMovieCount;
}
bool BaseItemDto::movieCountNull() const {
	return !m_movieCount.has_value();
}

void BaseItemDto::setMovieCountNull() {
	m_movieCount = std::nullopt;

}
std::optional<qint32> BaseItemDto::seriesCount() const { return m_seriesCount; }

void BaseItemDto::setSeriesCount(std::optional<qint32> newSeriesCount) {
	m_seriesCount = newSeriesCount;
}
bool BaseItemDto::seriesCountNull() const {
	return !m_seriesCount.has_value();
}

void BaseItemDto::setSeriesCountNull() {
	m_seriesCount = std::nullopt;

}
std::optional<qint32> BaseItemDto::programCount() const { return m_programCount; }

void BaseItemDto::setProgramCount(std::optional<qint32> newProgramCount) {
	m_programCount = newProgramCount;
}
bool BaseItemDto::programCountNull() const {
	return !m_programCount.has_value();
}

void BaseItemDto::setProgramCountNull() {
	m_programCount = std::nullopt;

}
std::optional<qint32> BaseItemDto::episodeCount() const { return m_episodeCount; }

void BaseItemDto::setEpisodeCount(std::optional<qint32> newEpisodeCount) {
	m_episodeCount = newEpisodeCount;
}
bool BaseItemDto::episodeCountNull() const {
	return !m_episodeCount.has_value();
}

void BaseItemDto::setEpisodeCountNull() {
	m_episodeCount = std::nullopt;

}
std::optional<qint32> BaseItemDto::songCount() const { return m_songCount; }

void BaseItemDto::setSongCount(std::optional<qint32> newSongCount) {
	m_songCount = newSongCount;
}
bool BaseItemDto::songCountNull() const {
	return !m_songCount.has_value();
}

void BaseItemDto::setSongCountNull() {
	m_songCount = std::nullopt;

}
std::optional<qint32> BaseItemDto::albumCount() const { return m_albumCount; }

void BaseItemDto::setAlbumCount(std::optional<qint32> newAlbumCount) {
	m_albumCount = newAlbumCount;
}
bool BaseItemDto::albumCountNull() const {
	return !m_albumCount.has_value();
}

void BaseItemDto::setAlbumCountNull() {
	m_albumCount = std::nullopt;

}
std::optional<qint32> BaseItemDto::artistCount() const { return m_artistCount; }

void BaseItemDto::setArtistCount(std::optional<qint32> newArtistCount) {
	m_artistCount = newArtistCount;
}
bool BaseItemDto::artistCountNull() const {
	return !m_artistCount.has_value();
}

void BaseItemDto::setArtistCountNull() {
	m_artistCount = std::nullopt;

}
std::optional<qint32> BaseItemDto::musicVideoCount() const { return m_musicVideoCount; }

void BaseItemDto::setMusicVideoCount(std::optional<qint32> newMusicVideoCount) {
	m_musicVideoCount = newMusicVideoCount;
}
bool BaseItemDto::musicVideoCountNull() const {
	return !m_musicVideoCount.has_value();
}

void BaseItemDto::setMusicVideoCountNull() {
	m_musicVideoCount = std::nullopt;

}
std::optional<bool> BaseItemDto::lockData() const { return m_lockData; }

void BaseItemDto::setLockData(std::optional<bool> newLockData) {
	m_lockData = newLockData;
}
bool BaseItemDto::lockDataNull() const {
	return !m_lockData.has_value();
}

void BaseItemDto::setLockDataNull() {
	m_lockData = std::nullopt;

}
std::optional<qint32> BaseItemDto::width() const { return m_width; }

void BaseItemDto::setWidth(std::optional<qint32> newWidth) {
	m_width = newWidth;
}
bool BaseItemDto::widthNull() const {
	return !m_width.has_value();
}

void BaseItemDto::setWidthNull() {
	m_width = std::nullopt;

}
std::optional<qint32> BaseItemDto::height() const { return m_height; }

void BaseItemDto::setHeight(std::optional<qint32> newHeight) {
	m_height = newHeight;
}
bool BaseItemDto::heightNull() const {
	return !m_height.has_value();
}

void BaseItemDto::setHeightNull() {
	m_height = std::nullopt;

}
QString BaseItemDto::cameraMake() const { return m_cameraMake; }

void BaseItemDto::setCameraMake(QString newCameraMake) {
	m_cameraMake = newCameraMake;
}
bool BaseItemDto::cameraMakeNull() const {
	return m_cameraMake.isNull();
}

void BaseItemDto::setCameraMakeNull() {
	m_cameraMake.clear();

}
QString BaseItemDto::cameraModel() const { return m_cameraModel; }

void BaseItemDto::setCameraModel(QString newCameraModel) {
	m_cameraModel = newCameraModel;
}
bool BaseItemDto::cameraModelNull() const {
	return m_cameraModel.isNull();
}

void BaseItemDto::setCameraModelNull() {
	m_cameraModel.clear();

}
QString BaseItemDto::software() const { return m_software; }

void BaseItemDto::setSoftware(QString newSoftware) {
	m_software = newSoftware;
}
bool BaseItemDto::softwareNull() const {
	return m_software.isNull();
}

void BaseItemDto::setSoftwareNull() {
	m_software.clear();

}
std::optional<double> BaseItemDto::exposureTime() const { return m_exposureTime; }

void BaseItemDto::setExposureTime(std::optional<double> newExposureTime) {
	m_exposureTime = newExposureTime;
}
bool BaseItemDto::exposureTimeNull() const {
	return !m_exposureTime.has_value();
}

void BaseItemDto::setExposureTimeNull() {
	m_exposureTime = std::nullopt;

}
std::optional<double> BaseItemDto::focalLength() const { return m_focalLength; }

void BaseItemDto::setFocalLength(std::optional<double> newFocalLength) {
	m_focalLength = newFocalLength;
}
bool BaseItemDto::focalLengthNull() const {
	return !m_focalLength.has_value();
}

void BaseItemDto::setFocalLengthNull() {
	m_focalLength = std::nullopt;

}
ImageOrientation BaseItemDto::imageOrientation() const { return m_imageOrientation; }

void BaseItemDto::setImageOrientation(ImageOrientation newImageOrientation) {
	m_imageOrientation = newImageOrientation;
}

std::optional<double> BaseItemDto::aperture() const { return m_aperture; }

void BaseItemDto::setAperture(std::optional<double> newAperture) {
	m_aperture = newAperture;
}
bool BaseItemDto::apertureNull() const {
	return !m_aperture.has_value();
}

void BaseItemDto::setApertureNull() {
	m_aperture = std::nullopt;

}
std::optional<double> BaseItemDto::shutterSpeed() const { return m_shutterSpeed; }

void BaseItemDto::setShutterSpeed(std::optional<double> newShutterSpeed) {
	m_shutterSpeed = newShutterSpeed;
}
bool BaseItemDto::shutterSpeedNull() const {
	return !m_shutterSpeed.has_value();
}

void BaseItemDto::setShutterSpeedNull() {
	m_shutterSpeed = std::nullopt;

}
std::optional<double> BaseItemDto::latitude() const { return m_latitude; }

void BaseItemDto::setLatitude(std::optional<double> newLatitude) {
	m_latitude = newLatitude;
}
bool BaseItemDto::latitudeNull() const {
	return !m_latitude.has_value();
}

void BaseItemDto::setLatitudeNull() {
	m_latitude = std::nullopt;

}
std::optional<double> BaseItemDto::longitude() const { return m_longitude; }

void BaseItemDto::setLongitude(std::optional<double> newLongitude) {
	m_longitude = newLongitude;
}
bool BaseItemDto::longitudeNull() const {
	return !m_longitude.has_value();
}

void BaseItemDto::setLongitudeNull() {
	m_longitude = std::nullopt;

}
std::optional<double> BaseItemDto::altitude() const { return m_altitude; }

void BaseItemDto::setAltitude(std::optional<double> newAltitude) {
	m_altitude = newAltitude;
}
bool BaseItemDto::altitudeNull() const {
	return !m_altitude.has_value();
}

void BaseItemDto::setAltitudeNull() {
	m_altitude = std::nullopt;

}
std::optional<qint32> BaseItemDto::isoSpeedRating() const { return m_isoSpeedRating; }

void BaseItemDto::setIsoSpeedRating(std::optional<qint32> newIsoSpeedRating) {
	m_isoSpeedRating = newIsoSpeedRating;
}
bool BaseItemDto::isoSpeedRatingNull() const {
	return !m_isoSpeedRating.has_value();
}

void BaseItemDto::setIsoSpeedRatingNull() {
	m_isoSpeedRating = std::nullopt;

}
QString BaseItemDto::seriesTimerId() const { return m_seriesTimerId; }

void BaseItemDto::setSeriesTimerId(QString newSeriesTimerId) {
	m_seriesTimerId = newSeriesTimerId;
}
bool BaseItemDto::seriesTimerIdNull() const {
	return m_seriesTimerId.isNull();
}

void BaseItemDto::setSeriesTimerIdNull() {
	m_seriesTimerId.clear();

}
QString BaseItemDto::programId() const { return m_programId; }

void BaseItemDto::setProgramId(QString newProgramId) {
	m_programId = newProgramId;
}
bool BaseItemDto::programIdNull() const {
	return m_programId.isNull();
}

void BaseItemDto::setProgramIdNull() {
	m_programId.clear();

}
QString BaseItemDto::channelPrimaryImageTag() const { return m_channelPrimaryImageTag; }

void BaseItemDto::setChannelPrimaryImageTag(QString newChannelPrimaryImageTag) {
	m_channelPrimaryImageTag = newChannelPrimaryImageTag;
}
bool BaseItemDto::channelPrimaryImageTagNull() const {
	return m_channelPrimaryImageTag.isNull();
}

void BaseItemDto::setChannelPrimaryImageTagNull() {
	m_channelPrimaryImageTag.clear();

}
QDateTime BaseItemDto::startDate() const { return m_startDate; }

void BaseItemDto::setStartDate(QDateTime newStartDate) {
	m_startDate = newStartDate;
}
bool BaseItemDto::startDateNull() const {
	return m_startDate.isNull();
}

void BaseItemDto::setStartDateNull() {
	m_startDate= QDateTime();

}
std::optional<double> BaseItemDto::completionPercentage() const { return m_completionPercentage; }

void BaseItemDto::setCompletionPercentage(std::optional<double> newCompletionPercentage) {
	m_completionPercentage = newCompletionPercentage;
}
bool BaseItemDto::completionPercentageNull() const {
	return !m_completionPercentage.has_value();
}

void BaseItemDto::setCompletionPercentageNull() {
	m_completionPercentage = std::nullopt;

}
std::optional<bool> BaseItemDto::isRepeat() const { return m_isRepeat; }

void BaseItemDto::setIsRepeat(std::optional<bool> newIsRepeat) {
	m_isRepeat = newIsRepeat;
}
bool BaseItemDto::isRepeatNull() const {
	return !m_isRepeat.has_value();
}

void BaseItemDto::setIsRepeatNull() {
	m_isRepeat = std::nullopt;

}
QString BaseItemDto::episodeTitle() const { return m_episodeTitle; }

void BaseItemDto::setEpisodeTitle(QString newEpisodeTitle) {
	m_episodeTitle = newEpisodeTitle;
}
bool BaseItemDto::episodeTitleNull() const {
	return m_episodeTitle.isNull();
}

void BaseItemDto::setEpisodeTitleNull() {
	m_episodeTitle.clear();

}
ChannelType BaseItemDto::channelType() const { return m_channelType; }

void BaseItemDto::setChannelType(ChannelType newChannelType) {
	m_channelType = newChannelType;
}

ProgramAudio BaseItemDto::audio() const { return m_audio; }

void BaseItemDto::setAudio(ProgramAudio newAudio) {
	m_audio = newAudio;
}

std::optional<bool> BaseItemDto::isMovie() const { return m_isMovie; }

void BaseItemDto::setIsMovie(std::optional<bool> newIsMovie) {
	m_isMovie = newIsMovie;
}
bool BaseItemDto::isMovieNull() const {
	return !m_isMovie.has_value();
}

void BaseItemDto::setIsMovieNull() {
	m_isMovie = std::nullopt;

}
std::optional<bool> BaseItemDto::isSports() const { return m_isSports; }

void BaseItemDto::setIsSports(std::optional<bool> newIsSports) {
	m_isSports = newIsSports;
}
bool BaseItemDto::isSportsNull() const {
	return !m_isSports.has_value();
}

void BaseItemDto::setIsSportsNull() {
	m_isSports = std::nullopt;

}
std::optional<bool> BaseItemDto::isSeries() const { return m_isSeries; }

void BaseItemDto::setIsSeries(std::optional<bool> newIsSeries) {
	m_isSeries = newIsSeries;
}
bool BaseItemDto::isSeriesNull() const {
	return !m_isSeries.has_value();
}

void BaseItemDto::setIsSeriesNull() {
	m_isSeries = std::nullopt;

}
std::optional<bool> BaseItemDto::isLive() const { return m_isLive; }

void BaseItemDto::setIsLive(std::optional<bool> newIsLive) {
	m_isLive = newIsLive;
}
bool BaseItemDto::isLiveNull() const {
	return !m_isLive.has_value();
}

void BaseItemDto::setIsLiveNull() {
	m_isLive = std::nullopt;

}
std::optional<bool> BaseItemDto::isNews() const { return m_isNews; }

void BaseItemDto::setIsNews(std::optional<bool> newIsNews) {
	m_isNews = newIsNews;
}
bool BaseItemDto::isNewsNull() const {
	return !m_isNews.has_value();
}

void BaseItemDto::setIsNewsNull() {
	m_isNews = std::nullopt;

}
std::optional<bool> BaseItemDto::isKids() const { return m_isKids; }

void BaseItemDto::setIsKids(std::optional<bool> newIsKids) {
	m_isKids = newIsKids;
}
bool BaseItemDto::isKidsNull() const {
	return !m_isKids.has_value();
}

void BaseItemDto::setIsKidsNull() {
	m_isKids = std::nullopt;

}
std::optional<bool> BaseItemDto::isPremiere() const { return m_isPremiere; }

void BaseItemDto::setIsPremiere(std::optional<bool> newIsPremiere) {
	m_isPremiere = newIsPremiere;
}
bool BaseItemDto::isPremiereNull() const {
	return !m_isPremiere.has_value();
}

void BaseItemDto::setIsPremiereNull() {
	m_isPremiere = std::nullopt;

}
QString BaseItemDto::timerId() const { return m_timerId; }

void BaseItemDto::setTimerId(QString newTimerId) {
	m_timerId = newTimerId;
}
bool BaseItemDto::timerIdNull() const {
	return m_timerId.isNull();
}

void BaseItemDto::setTimerIdNull() {
	m_timerId.clear();

}
QSharedPointer<BaseItemDto> BaseItemDto::currentProgram() const { return m_currentProgram; }

void BaseItemDto::setCurrentProgram(QSharedPointer<BaseItemDto> newCurrentProgram) {
	m_currentProgram = newCurrentProgram;
}


} // NS DTO

namespace Support {

using BaseItemDto = Jellyfin::DTO::BaseItemDto;

template <>
BaseItemDto fromJsonValue(const QJsonValue &source, convertType<BaseItemDto>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return BaseItemDto::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const BaseItemDto &source, convertType<BaseItemDto>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

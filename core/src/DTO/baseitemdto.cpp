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

#include <JellyfinQt/DTO/baseitemdto.h>

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

BaseItemDto BaseItemDto::fromJson(QJsonObject source) {
	BaseItemDto instance;
	instance.setFromJson(source);
	return instance;
}


void BaseItemDto::setFromJson(QJsonObject source) {
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_originalTitle = Jellyfin::Support::fromJsonValue<QString>(source["OriginalTitle"]);
	m_serverId = Jellyfin::Support::fromJsonValue<QString>(source["ServerId"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QUuid>(source["Id"]);
	m_etag = Jellyfin::Support::fromJsonValue<QString>(source["Etag"]);
	m_sourceType = Jellyfin::Support::fromJsonValue<QString>(source["SourceType"]);
	m_playlistItemId = Jellyfin::Support::fromJsonValue<QString>(source["PlaylistItemId"]);
	m_dateCreated = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateCreated"]);
	m_dateLastMediaAdded = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateLastMediaAdded"]);
	m_extraType = Jellyfin::Support::fromJsonValue<QString>(source["ExtraType"]);
	m_airsBeforeSeasonNumber = Jellyfin::Support::fromJsonValue<qint32>(source["AirsBeforeSeasonNumber"]);
	m_airsAfterSeasonNumber = Jellyfin::Support::fromJsonValue<qint32>(source["AirsAfterSeasonNumber"]);
	m_airsBeforeEpisodeNumber = Jellyfin::Support::fromJsonValue<qint32>(source["AirsBeforeEpisodeNumber"]);
	m_canDelete = Jellyfin::Support::fromJsonValue<bool>(source["CanDelete"]);
	m_canDownload = Jellyfin::Support::fromJsonValue<bool>(source["CanDownload"]);
	m_hasSubtitles = Jellyfin::Support::fromJsonValue<bool>(source["HasSubtitles"]);
	m_preferredMetadataLanguage = Jellyfin::Support::fromJsonValue<QString>(source["PreferredMetadataLanguage"]);
	m_preferredMetadataCountryCode = Jellyfin::Support::fromJsonValue<QString>(source["PreferredMetadataCountryCode"]);
	m_supportsSync = Jellyfin::Support::fromJsonValue<bool>(source["SupportsSync"]);
	m_container = Jellyfin::Support::fromJsonValue<QString>(source["Container"]);
	m_sortName = Jellyfin::Support::fromJsonValue<QString>(source["SortName"]);
	m_forcedSortName = Jellyfin::Support::fromJsonValue<QString>(source["ForcedSortName"]);
	m_video3DFormat = Jellyfin::Support::fromJsonValue<Video3DFormat>(source["Video3DFormat"]);
	m_premiereDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["PremiereDate"]);
	m_externalUrls = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<ExternalUrl>>>(source["ExternalUrls"]);
	m_mediaSources = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<MediaSourceInfo>>>(source["MediaSources"]);
	m_criticRating = Jellyfin::Support::fromJsonValue<float>(source["CriticRating"]);
	m_productionLocations = Jellyfin::Support::fromJsonValue<QStringList>(source["ProductionLocations"]);
	m_path = Jellyfin::Support::fromJsonValue<QString>(source["Path"]);
	m_enableMediaSourceDisplay = Jellyfin::Support::fromJsonValue<bool>(source["EnableMediaSourceDisplay"]);
	m_officialRating = Jellyfin::Support::fromJsonValue<QString>(source["OfficialRating"]);
	m_customRating = Jellyfin::Support::fromJsonValue<QString>(source["CustomRating"]);
	m_channelId = Jellyfin::Support::fromJsonValue<QUuid>(source["ChannelId"]);
	m_channelName = Jellyfin::Support::fromJsonValue<QString>(source["ChannelName"]);
	m_overview = Jellyfin::Support::fromJsonValue<QString>(source["Overview"]);
	m_taglines = Jellyfin::Support::fromJsonValue<QStringList>(source["Taglines"]);
	m_genres = Jellyfin::Support::fromJsonValue<QStringList>(source["Genres"]);
	m_communityRating = Jellyfin::Support::fromJsonValue<float>(source["CommunityRating"]);
	m_cumulativeRunTimeTicks = Jellyfin::Support::fromJsonValue<qint64>(source["CumulativeRunTimeTicks"]);
	m_runTimeTicks = Jellyfin::Support::fromJsonValue<qint64>(source["RunTimeTicks"]);
	m_playAccess = Jellyfin::Support::fromJsonValue<PlayAccess>(source["PlayAccess"]);
	m_aspectRatio = Jellyfin::Support::fromJsonValue<QString>(source["AspectRatio"]);
	m_productionYear = Jellyfin::Support::fromJsonValue<qint32>(source["ProductionYear"]);
	m_isPlaceHolder = Jellyfin::Support::fromJsonValue<bool>(source["IsPlaceHolder"]);
	m_number = Jellyfin::Support::fromJsonValue<QString>(source["Number"]);
	m_channelNumber = Jellyfin::Support::fromJsonValue<QString>(source["ChannelNumber"]);
	m_indexNumber = Jellyfin::Support::fromJsonValue<qint32>(source["IndexNumber"]);
	m_indexNumberEnd = Jellyfin::Support::fromJsonValue<qint32>(source["IndexNumberEnd"]);
	m_parentIndexNumber = Jellyfin::Support::fromJsonValue<qint32>(source["ParentIndexNumber"]);
	m_remoteTrailers = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<MediaUrl>>>(source["RemoteTrailers"]);
	m_providerIds = Jellyfin::Support::fromJsonValue<QJsonObject>(source["ProviderIds"]);
	m_isHD = Jellyfin::Support::fromJsonValue<bool>(source["IsHD"]);
	m_isFolder = Jellyfin::Support::fromJsonValue<bool>(source["IsFolder"]);
	m_parentId = Jellyfin::Support::fromJsonValue<QUuid>(source["ParentId"]);
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_people = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<BaseItemPerson>>>(source["People"]);
	m_studios = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<NameGuidPair>>>(source["Studios"]);
	m_genreItems = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<NameGuidPair>>>(source["GenreItems"]);
	m_parentLogoItemId = Jellyfin::Support::fromJsonValue<QString>(source["ParentLogoItemId"]);
	m_parentBackdropItemId = Jellyfin::Support::fromJsonValue<QString>(source["ParentBackdropItemId"]);
	m_parentBackdropImageTags = Jellyfin::Support::fromJsonValue<QStringList>(source["ParentBackdropImageTags"]);
	m_localTrailerCount = Jellyfin::Support::fromJsonValue<qint32>(source["LocalTrailerCount"]);
	m_userData = Jellyfin::Support::fromJsonValue<QSharedPointer<UserItemDataDto>>(source["UserData"]);
	m_recursiveItemCount = Jellyfin::Support::fromJsonValue<qint32>(source["RecursiveItemCount"]);
	m_childCount = Jellyfin::Support::fromJsonValue<qint32>(source["ChildCount"]);
	m_seriesName = Jellyfin::Support::fromJsonValue<QString>(source["SeriesName"]);
	m_seriesId = Jellyfin::Support::fromJsonValue<QUuid>(source["SeriesId"]);
	m_seasonId = Jellyfin::Support::fromJsonValue<QUuid>(source["SeasonId"]);
	m_specialFeatureCount = Jellyfin::Support::fromJsonValue<qint32>(source["SpecialFeatureCount"]);
	m_displayPreferencesId = Jellyfin::Support::fromJsonValue<QString>(source["DisplayPreferencesId"]);
	m_status = Jellyfin::Support::fromJsonValue<QString>(source["Status"]);
	m_airTime = Jellyfin::Support::fromJsonValue<QString>(source["AirTime"]);
	m_airDays = Jellyfin::Support::fromJsonValue<QList<DayOfWeek>>(source["AirDays"]);
	m_tags = Jellyfin::Support::fromJsonValue<QStringList>(source["Tags"]);
	m_primaryImageAspectRatio = Jellyfin::Support::fromJsonValue<double>(source["PrimaryImageAspectRatio"]);
	m_artists = Jellyfin::Support::fromJsonValue<QStringList>(source["Artists"]);
	m_artistItems = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<NameGuidPair>>>(source["ArtistItems"]);
	m_album = Jellyfin::Support::fromJsonValue<QString>(source["Album"]);
	m_collectionType = Jellyfin::Support::fromJsonValue<QString>(source["CollectionType"]);
	m_displayOrder = Jellyfin::Support::fromJsonValue<QString>(source["DisplayOrder"]);
	m_albumId = Jellyfin::Support::fromJsonValue<QUuid>(source["AlbumId"]);
	m_albumPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["AlbumPrimaryImageTag"]);
	m_seriesPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["SeriesPrimaryImageTag"]);
	m_albumArtist = Jellyfin::Support::fromJsonValue<QString>(source["AlbumArtist"]);
	m_albumArtists = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<NameGuidPair>>>(source["AlbumArtists"]);
	m_seasonName = Jellyfin::Support::fromJsonValue<QString>(source["SeasonName"]);
	m_mediaStreams = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<MediaStream>>>(source["MediaStreams"]);
	m_videoType = Jellyfin::Support::fromJsonValue<VideoType>(source["VideoType"]);
	m_partCount = Jellyfin::Support::fromJsonValue<qint32>(source["PartCount"]);
	m_mediaSourceCount = Jellyfin::Support::fromJsonValue<qint32>(source["MediaSourceCount"]);
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
	m_chapters = Jellyfin::Support::fromJsonValue<QList<QSharedPointer<ChapterInfo>>>(source["Chapters"]);
	m_locationType = Jellyfin::Support::fromJsonValue<LocationType>(source["LocationType"]);
	m_isoType = Jellyfin::Support::fromJsonValue<IsoType>(source["IsoType"]);
	m_mediaType = Jellyfin::Support::fromJsonValue<QString>(source["MediaType"]);
	m_endDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["EndDate"]);
	m_lockedFields = Jellyfin::Support::fromJsonValue<QList<MetadataField>>(source["LockedFields"]);
	m_trailerCount = Jellyfin::Support::fromJsonValue<qint32>(source["TrailerCount"]);
	m_movieCount = Jellyfin::Support::fromJsonValue<qint32>(source["MovieCount"]);
	m_seriesCount = Jellyfin::Support::fromJsonValue<qint32>(source["SeriesCount"]);
	m_programCount = Jellyfin::Support::fromJsonValue<qint32>(source["ProgramCount"]);
	m_episodeCount = Jellyfin::Support::fromJsonValue<qint32>(source["EpisodeCount"]);
	m_songCount = Jellyfin::Support::fromJsonValue<qint32>(source["SongCount"]);
	m_albumCount = Jellyfin::Support::fromJsonValue<qint32>(source["AlbumCount"]);
	m_artistCount = Jellyfin::Support::fromJsonValue<qint32>(source["ArtistCount"]);
	m_musicVideoCount = Jellyfin::Support::fromJsonValue<qint32>(source["MusicVideoCount"]);
	m_lockData = Jellyfin::Support::fromJsonValue<bool>(source["LockData"]);
	m_width = Jellyfin::Support::fromJsonValue<qint32>(source["Width"]);
	m_height = Jellyfin::Support::fromJsonValue<qint32>(source["Height"]);
	m_cameraMake = Jellyfin::Support::fromJsonValue<QString>(source["CameraMake"]);
	m_cameraModel = Jellyfin::Support::fromJsonValue<QString>(source["CameraModel"]);
	m_software = Jellyfin::Support::fromJsonValue<QString>(source["Software"]);
	m_exposureTime = Jellyfin::Support::fromJsonValue<double>(source["ExposureTime"]);
	m_focalLength = Jellyfin::Support::fromJsonValue<double>(source["FocalLength"]);
	m_imageOrientation = Jellyfin::Support::fromJsonValue<ImageOrientation>(source["ImageOrientation"]);
	m_aperture = Jellyfin::Support::fromJsonValue<double>(source["Aperture"]);
	m_shutterSpeed = Jellyfin::Support::fromJsonValue<double>(source["ShutterSpeed"]);
	m_latitude = Jellyfin::Support::fromJsonValue<double>(source["Latitude"]);
	m_longitude = Jellyfin::Support::fromJsonValue<double>(source["Longitude"]);
	m_altitude = Jellyfin::Support::fromJsonValue<double>(source["Altitude"]);
	m_isoSpeedRating = Jellyfin::Support::fromJsonValue<qint32>(source["IsoSpeedRating"]);
	m_seriesTimerId = Jellyfin::Support::fromJsonValue<QString>(source["SeriesTimerId"]);
	m_programId = Jellyfin::Support::fromJsonValue<QString>(source["ProgramId"]);
	m_channelPrimaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ChannelPrimaryImageTag"]);
	m_startDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["StartDate"]);
	m_completionPercentage = Jellyfin::Support::fromJsonValue<double>(source["CompletionPercentage"]);
	m_isRepeat = Jellyfin::Support::fromJsonValue<bool>(source["IsRepeat"]);
	m_episodeTitle = Jellyfin::Support::fromJsonValue<QString>(source["EpisodeTitle"]);
	m_channelType = Jellyfin::Support::fromJsonValue<ChannelType>(source["ChannelType"]);
	m_audio = Jellyfin::Support::fromJsonValue<ProgramAudio>(source["Audio"]);
	m_isMovie = Jellyfin::Support::fromJsonValue<bool>(source["IsMovie"]);
	m_isSports = Jellyfin::Support::fromJsonValue<bool>(source["IsSports"]);
	m_isSeries = Jellyfin::Support::fromJsonValue<bool>(source["IsSeries"]);
	m_isLive = Jellyfin::Support::fromJsonValue<bool>(source["IsLive"]);
	m_isNews = Jellyfin::Support::fromJsonValue<bool>(source["IsNews"]);
	m_isKids = Jellyfin::Support::fromJsonValue<bool>(source["IsKids"]);
	m_isPremiere = Jellyfin::Support::fromJsonValue<bool>(source["IsPremiere"]);
	m_timerId = Jellyfin::Support::fromJsonValue<QString>(source["TimerId"]);
	m_currentProgram = Jellyfin::Support::fromJsonValue<QSharedPointer<BaseItemDto>>(source["CurrentProgram"]);

}
	
QJsonObject BaseItemDto::toJson() {
	QJsonObject result;
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["OriginalTitle"] = Jellyfin::Support::toJsonValue<QString>(m_originalTitle);
	result["ServerId"] = Jellyfin::Support::toJsonValue<QString>(m_serverId);
	result["Id"] = Jellyfin::Support::toJsonValue<QUuid>(m_jellyfinId);
	result["Etag"] = Jellyfin::Support::toJsonValue<QString>(m_etag);
	result["SourceType"] = Jellyfin::Support::toJsonValue<QString>(m_sourceType);
	result["PlaylistItemId"] = Jellyfin::Support::toJsonValue<QString>(m_playlistItemId);
	result["DateCreated"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateCreated);
	result["DateLastMediaAdded"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateLastMediaAdded);
	result["ExtraType"] = Jellyfin::Support::toJsonValue<QString>(m_extraType);
	result["AirsBeforeSeasonNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_airsBeforeSeasonNumber);
	result["AirsAfterSeasonNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_airsAfterSeasonNumber);
	result["AirsBeforeEpisodeNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_airsBeforeEpisodeNumber);
	result["CanDelete"] = Jellyfin::Support::toJsonValue<bool>(m_canDelete);
	result["CanDownload"] = Jellyfin::Support::toJsonValue<bool>(m_canDownload);
	result["HasSubtitles"] = Jellyfin::Support::toJsonValue<bool>(m_hasSubtitles);
	result["PreferredMetadataLanguage"] = Jellyfin::Support::toJsonValue<QString>(m_preferredMetadataLanguage);
	result["PreferredMetadataCountryCode"] = Jellyfin::Support::toJsonValue<QString>(m_preferredMetadataCountryCode);
	result["SupportsSync"] = Jellyfin::Support::toJsonValue<bool>(m_supportsSync);
	result["Container"] = Jellyfin::Support::toJsonValue<QString>(m_container);
	result["SortName"] = Jellyfin::Support::toJsonValue<QString>(m_sortName);
	result["ForcedSortName"] = Jellyfin::Support::toJsonValue<QString>(m_forcedSortName);
	result["Video3DFormat"] = Jellyfin::Support::toJsonValue<Video3DFormat>(m_video3DFormat);
	result["PremiereDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_premiereDate);
	result["ExternalUrls"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<ExternalUrl>>>(m_externalUrls);
	result["MediaSources"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<MediaSourceInfo>>>(m_mediaSources);
	result["CriticRating"] = Jellyfin::Support::toJsonValue<float>(m_criticRating);
	result["ProductionLocations"] = Jellyfin::Support::toJsonValue<QStringList>(m_productionLocations);
	result["Path"] = Jellyfin::Support::toJsonValue<QString>(m_path);
	result["EnableMediaSourceDisplay"] = Jellyfin::Support::toJsonValue<bool>(m_enableMediaSourceDisplay);
	result["OfficialRating"] = Jellyfin::Support::toJsonValue<QString>(m_officialRating);
	result["CustomRating"] = Jellyfin::Support::toJsonValue<QString>(m_customRating);
	result["ChannelId"] = Jellyfin::Support::toJsonValue<QUuid>(m_channelId);
	result["ChannelName"] = Jellyfin::Support::toJsonValue<QString>(m_channelName);
	result["Overview"] = Jellyfin::Support::toJsonValue<QString>(m_overview);
	result["Taglines"] = Jellyfin::Support::toJsonValue<QStringList>(m_taglines);
	result["Genres"] = Jellyfin::Support::toJsonValue<QStringList>(m_genres);
	result["CommunityRating"] = Jellyfin::Support::toJsonValue<float>(m_communityRating);
	result["CumulativeRunTimeTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_cumulativeRunTimeTicks);
	result["RunTimeTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_runTimeTicks);
	result["PlayAccess"] = Jellyfin::Support::toJsonValue<PlayAccess>(m_playAccess);
	result["AspectRatio"] = Jellyfin::Support::toJsonValue<QString>(m_aspectRatio);
	result["ProductionYear"] = Jellyfin::Support::toJsonValue<qint32>(m_productionYear);
	result["IsPlaceHolder"] = Jellyfin::Support::toJsonValue<bool>(m_isPlaceHolder);
	result["Number"] = Jellyfin::Support::toJsonValue<QString>(m_number);
	result["ChannelNumber"] = Jellyfin::Support::toJsonValue<QString>(m_channelNumber);
	result["IndexNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_indexNumber);
	result["IndexNumberEnd"] = Jellyfin::Support::toJsonValue<qint32>(m_indexNumberEnd);
	result["ParentIndexNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_parentIndexNumber);
	result["RemoteTrailers"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<MediaUrl>>>(m_remoteTrailers);
	result["ProviderIds"] = Jellyfin::Support::toJsonValue<QJsonObject>(m_providerIds);
	result["IsHD"] = Jellyfin::Support::toJsonValue<bool>(m_isHD);
	result["IsFolder"] = Jellyfin::Support::toJsonValue<bool>(m_isFolder);
	result["ParentId"] = Jellyfin::Support::toJsonValue<QUuid>(m_parentId);
	result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	result["People"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<BaseItemPerson>>>(m_people);
	result["Studios"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<NameGuidPair>>>(m_studios);
	result["GenreItems"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<NameGuidPair>>>(m_genreItems);
	result["ParentLogoItemId"] = Jellyfin::Support::toJsonValue<QString>(m_parentLogoItemId);
	result["ParentBackdropItemId"] = Jellyfin::Support::toJsonValue<QString>(m_parentBackdropItemId);
	result["ParentBackdropImageTags"] = Jellyfin::Support::toJsonValue<QStringList>(m_parentBackdropImageTags);
	result["LocalTrailerCount"] = Jellyfin::Support::toJsonValue<qint32>(m_localTrailerCount);
	result["UserData"] = Jellyfin::Support::toJsonValue<QSharedPointer<UserItemDataDto>>(m_userData);
	result["RecursiveItemCount"] = Jellyfin::Support::toJsonValue<qint32>(m_recursiveItemCount);
	result["ChildCount"] = Jellyfin::Support::toJsonValue<qint32>(m_childCount);
	result["SeriesName"] = Jellyfin::Support::toJsonValue<QString>(m_seriesName);
	result["SeriesId"] = Jellyfin::Support::toJsonValue<QUuid>(m_seriesId);
	result["SeasonId"] = Jellyfin::Support::toJsonValue<QUuid>(m_seasonId);
	result["SpecialFeatureCount"] = Jellyfin::Support::toJsonValue<qint32>(m_specialFeatureCount);
	result["DisplayPreferencesId"] = Jellyfin::Support::toJsonValue<QString>(m_displayPreferencesId);
	result["Status"] = Jellyfin::Support::toJsonValue<QString>(m_status);
	result["AirTime"] = Jellyfin::Support::toJsonValue<QString>(m_airTime);
	result["AirDays"] = Jellyfin::Support::toJsonValue<QList<DayOfWeek>>(m_airDays);
	result["Tags"] = Jellyfin::Support::toJsonValue<QStringList>(m_tags);
	result["PrimaryImageAspectRatio"] = Jellyfin::Support::toJsonValue<double>(m_primaryImageAspectRatio);
	result["Artists"] = Jellyfin::Support::toJsonValue<QStringList>(m_artists);
	result["ArtistItems"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<NameGuidPair>>>(m_artistItems);
	result["Album"] = Jellyfin::Support::toJsonValue<QString>(m_album);
	result["CollectionType"] = Jellyfin::Support::toJsonValue<QString>(m_collectionType);
	result["DisplayOrder"] = Jellyfin::Support::toJsonValue<QString>(m_displayOrder);
	result["AlbumId"] = Jellyfin::Support::toJsonValue<QUuid>(m_albumId);
	result["AlbumPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_albumPrimaryImageTag);
	result["SeriesPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_seriesPrimaryImageTag);
	result["AlbumArtist"] = Jellyfin::Support::toJsonValue<QString>(m_albumArtist);
	result["AlbumArtists"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<NameGuidPair>>>(m_albumArtists);
	result["SeasonName"] = Jellyfin::Support::toJsonValue<QString>(m_seasonName);
	result["MediaStreams"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<MediaStream>>>(m_mediaStreams);
	result["VideoType"] = Jellyfin::Support::toJsonValue<VideoType>(m_videoType);
	result["PartCount"] = Jellyfin::Support::toJsonValue<qint32>(m_partCount);
	result["MediaSourceCount"] = Jellyfin::Support::toJsonValue<qint32>(m_mediaSourceCount);
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
	result["Chapters"] = Jellyfin::Support::toJsonValue<QList<QSharedPointer<ChapterInfo>>>(m_chapters);
	result["LocationType"] = Jellyfin::Support::toJsonValue<LocationType>(m_locationType);
	result["IsoType"] = Jellyfin::Support::toJsonValue<IsoType>(m_isoType);
	result["MediaType"] = Jellyfin::Support::toJsonValue<QString>(m_mediaType);
	result["EndDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_endDate);
	result["LockedFields"] = Jellyfin::Support::toJsonValue<QList<MetadataField>>(m_lockedFields);
	result["TrailerCount"] = Jellyfin::Support::toJsonValue<qint32>(m_trailerCount);
	result["MovieCount"] = Jellyfin::Support::toJsonValue<qint32>(m_movieCount);
	result["SeriesCount"] = Jellyfin::Support::toJsonValue<qint32>(m_seriesCount);
	result["ProgramCount"] = Jellyfin::Support::toJsonValue<qint32>(m_programCount);
	result["EpisodeCount"] = Jellyfin::Support::toJsonValue<qint32>(m_episodeCount);
	result["SongCount"] = Jellyfin::Support::toJsonValue<qint32>(m_songCount);
	result["AlbumCount"] = Jellyfin::Support::toJsonValue<qint32>(m_albumCount);
	result["ArtistCount"] = Jellyfin::Support::toJsonValue<qint32>(m_artistCount);
	result["MusicVideoCount"] = Jellyfin::Support::toJsonValue<qint32>(m_musicVideoCount);
	result["LockData"] = Jellyfin::Support::toJsonValue<bool>(m_lockData);
	result["Width"] = Jellyfin::Support::toJsonValue<qint32>(m_width);
	result["Height"] = Jellyfin::Support::toJsonValue<qint32>(m_height);
	result["CameraMake"] = Jellyfin::Support::toJsonValue<QString>(m_cameraMake);
	result["CameraModel"] = Jellyfin::Support::toJsonValue<QString>(m_cameraModel);
	result["Software"] = Jellyfin::Support::toJsonValue<QString>(m_software);
	result["ExposureTime"] = Jellyfin::Support::toJsonValue<double>(m_exposureTime);
	result["FocalLength"] = Jellyfin::Support::toJsonValue<double>(m_focalLength);
	result["ImageOrientation"] = Jellyfin::Support::toJsonValue<ImageOrientation>(m_imageOrientation);
	result["Aperture"] = Jellyfin::Support::toJsonValue<double>(m_aperture);
	result["ShutterSpeed"] = Jellyfin::Support::toJsonValue<double>(m_shutterSpeed);
	result["Latitude"] = Jellyfin::Support::toJsonValue<double>(m_latitude);
	result["Longitude"] = Jellyfin::Support::toJsonValue<double>(m_longitude);
	result["Altitude"] = Jellyfin::Support::toJsonValue<double>(m_altitude);
	result["IsoSpeedRating"] = Jellyfin::Support::toJsonValue<qint32>(m_isoSpeedRating);
	result["SeriesTimerId"] = Jellyfin::Support::toJsonValue<QString>(m_seriesTimerId);
	result["ProgramId"] = Jellyfin::Support::toJsonValue<QString>(m_programId);
	result["ChannelPrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_channelPrimaryImageTag);
	result["StartDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_startDate);
	result["CompletionPercentage"] = Jellyfin::Support::toJsonValue<double>(m_completionPercentage);
	result["IsRepeat"] = Jellyfin::Support::toJsonValue<bool>(m_isRepeat);
	result["EpisodeTitle"] = Jellyfin::Support::toJsonValue<QString>(m_episodeTitle);
	result["ChannelType"] = Jellyfin::Support::toJsonValue<ChannelType>(m_channelType);
	result["Audio"] = Jellyfin::Support::toJsonValue<ProgramAudio>(m_audio);
	result["IsMovie"] = Jellyfin::Support::toJsonValue<bool>(m_isMovie);
	result["IsSports"] = Jellyfin::Support::toJsonValue<bool>(m_isSports);
	result["IsSeries"] = Jellyfin::Support::toJsonValue<bool>(m_isSeries);
	result["IsLive"] = Jellyfin::Support::toJsonValue<bool>(m_isLive);
	result["IsNews"] = Jellyfin::Support::toJsonValue<bool>(m_isNews);
	result["IsKids"] = Jellyfin::Support::toJsonValue<bool>(m_isKids);
	result["IsPremiere"] = Jellyfin::Support::toJsonValue<bool>(m_isPremiere);
	result["TimerId"] = Jellyfin::Support::toJsonValue<QString>(m_timerId);
	result["CurrentProgram"] = Jellyfin::Support::toJsonValue<QSharedPointer<BaseItemDto>>(m_currentProgram);

	return result;
}

QString BaseItemDto::name() const { return m_name; }

void BaseItemDto::setName(QString newName) {
	m_name = newName;
}
QString BaseItemDto::originalTitle() const { return m_originalTitle; }

void BaseItemDto::setOriginalTitle(QString newOriginalTitle) {
	m_originalTitle = newOriginalTitle;
}
QString BaseItemDto::serverId() const { return m_serverId; }

void BaseItemDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
}
QUuid BaseItemDto::jellyfinId() const { return m_jellyfinId; }

void BaseItemDto::setJellyfinId(QUuid newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString BaseItemDto::etag() const { return m_etag; }

void BaseItemDto::setEtag(QString newEtag) {
	m_etag = newEtag;
}
QString BaseItemDto::sourceType() const { return m_sourceType; }

void BaseItemDto::setSourceType(QString newSourceType) {
	m_sourceType = newSourceType;
}
QString BaseItemDto::playlistItemId() const { return m_playlistItemId; }

void BaseItemDto::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
}
QDateTime BaseItemDto::dateCreated() const { return m_dateCreated; }

void BaseItemDto::setDateCreated(QDateTime newDateCreated) {
	m_dateCreated = newDateCreated;
}
QDateTime BaseItemDto::dateLastMediaAdded() const { return m_dateLastMediaAdded; }

void BaseItemDto::setDateLastMediaAdded(QDateTime newDateLastMediaAdded) {
	m_dateLastMediaAdded = newDateLastMediaAdded;
}
QString BaseItemDto::extraType() const { return m_extraType; }

void BaseItemDto::setExtraType(QString newExtraType) {
	m_extraType = newExtraType;
}
qint32 BaseItemDto::airsBeforeSeasonNumber() const { return m_airsBeforeSeasonNumber; }

void BaseItemDto::setAirsBeforeSeasonNumber(qint32 newAirsBeforeSeasonNumber) {
	m_airsBeforeSeasonNumber = newAirsBeforeSeasonNumber;
}
qint32 BaseItemDto::airsAfterSeasonNumber() const { return m_airsAfterSeasonNumber; }

void BaseItemDto::setAirsAfterSeasonNumber(qint32 newAirsAfterSeasonNumber) {
	m_airsAfterSeasonNumber = newAirsAfterSeasonNumber;
}
qint32 BaseItemDto::airsBeforeEpisodeNumber() const { return m_airsBeforeEpisodeNumber; }

void BaseItemDto::setAirsBeforeEpisodeNumber(qint32 newAirsBeforeEpisodeNumber) {
	m_airsBeforeEpisodeNumber = newAirsBeforeEpisodeNumber;
}
bool BaseItemDto::canDelete() const { return m_canDelete; }

void BaseItemDto::setCanDelete(bool newCanDelete) {
	m_canDelete = newCanDelete;
}
bool BaseItemDto::canDownload() const { return m_canDownload; }

void BaseItemDto::setCanDownload(bool newCanDownload) {
	m_canDownload = newCanDownload;
}
bool BaseItemDto::hasSubtitles() const { return m_hasSubtitles; }

void BaseItemDto::setHasSubtitles(bool newHasSubtitles) {
	m_hasSubtitles = newHasSubtitles;
}
QString BaseItemDto::preferredMetadataLanguage() const { return m_preferredMetadataLanguage; }

void BaseItemDto::setPreferredMetadataLanguage(QString newPreferredMetadataLanguage) {
	m_preferredMetadataLanguage = newPreferredMetadataLanguage;
}
QString BaseItemDto::preferredMetadataCountryCode() const { return m_preferredMetadataCountryCode; }

void BaseItemDto::setPreferredMetadataCountryCode(QString newPreferredMetadataCountryCode) {
	m_preferredMetadataCountryCode = newPreferredMetadataCountryCode;
}
bool BaseItemDto::supportsSync() const { return m_supportsSync; }

void BaseItemDto::setSupportsSync(bool newSupportsSync) {
	m_supportsSync = newSupportsSync;
}
QString BaseItemDto::container() const { return m_container; }

void BaseItemDto::setContainer(QString newContainer) {
	m_container = newContainer;
}
QString BaseItemDto::sortName() const { return m_sortName; }

void BaseItemDto::setSortName(QString newSortName) {
	m_sortName = newSortName;
}
QString BaseItemDto::forcedSortName() const { return m_forcedSortName; }

void BaseItemDto::setForcedSortName(QString newForcedSortName) {
	m_forcedSortName = newForcedSortName;
}
Video3DFormat BaseItemDto::video3DFormat() const { return m_video3DFormat; }

void BaseItemDto::setVideo3DFormat(Video3DFormat newVideo3DFormat) {
	m_video3DFormat = newVideo3DFormat;
}
QDateTime BaseItemDto::premiereDate() const { return m_premiereDate; }

void BaseItemDto::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
}
QList<QSharedPointer<ExternalUrl>> BaseItemDto::externalUrls() const { return m_externalUrls; }

void BaseItemDto::setExternalUrls(QList<QSharedPointer<ExternalUrl>> newExternalUrls) {
	m_externalUrls = newExternalUrls;
}
QList<QSharedPointer<MediaSourceInfo>> BaseItemDto::mediaSources() const { return m_mediaSources; }

void BaseItemDto::setMediaSources(QList<QSharedPointer<MediaSourceInfo>> newMediaSources) {
	m_mediaSources = newMediaSources;
}
float BaseItemDto::criticRating() const { return m_criticRating; }

void BaseItemDto::setCriticRating(float newCriticRating) {
	m_criticRating = newCriticRating;
}
QStringList BaseItemDto::productionLocations() const { return m_productionLocations; }

void BaseItemDto::setProductionLocations(QStringList newProductionLocations) {
	m_productionLocations = newProductionLocations;
}
QString BaseItemDto::path() const { return m_path; }

void BaseItemDto::setPath(QString newPath) {
	m_path = newPath;
}
bool BaseItemDto::enableMediaSourceDisplay() const { return m_enableMediaSourceDisplay; }

void BaseItemDto::setEnableMediaSourceDisplay(bool newEnableMediaSourceDisplay) {
	m_enableMediaSourceDisplay = newEnableMediaSourceDisplay;
}
QString BaseItemDto::officialRating() const { return m_officialRating; }

void BaseItemDto::setOfficialRating(QString newOfficialRating) {
	m_officialRating = newOfficialRating;
}
QString BaseItemDto::customRating() const { return m_customRating; }

void BaseItemDto::setCustomRating(QString newCustomRating) {
	m_customRating = newCustomRating;
}
QUuid BaseItemDto::channelId() const { return m_channelId; }

void BaseItemDto::setChannelId(QUuid newChannelId) {
	m_channelId = newChannelId;
}
QString BaseItemDto::channelName() const { return m_channelName; }

void BaseItemDto::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
}
QString BaseItemDto::overview() const { return m_overview; }

void BaseItemDto::setOverview(QString newOverview) {
	m_overview = newOverview;
}
QStringList BaseItemDto::taglines() const { return m_taglines; }

void BaseItemDto::setTaglines(QStringList newTaglines) {
	m_taglines = newTaglines;
}
QStringList BaseItemDto::genres() const { return m_genres; }

void BaseItemDto::setGenres(QStringList newGenres) {
	m_genres = newGenres;
}
float BaseItemDto::communityRating() const { return m_communityRating; }

void BaseItemDto::setCommunityRating(float newCommunityRating) {
	m_communityRating = newCommunityRating;
}
qint64 BaseItemDto::cumulativeRunTimeTicks() const { return m_cumulativeRunTimeTicks; }

void BaseItemDto::setCumulativeRunTimeTicks(qint64 newCumulativeRunTimeTicks) {
	m_cumulativeRunTimeTicks = newCumulativeRunTimeTicks;
}
qint64 BaseItemDto::runTimeTicks() const { return m_runTimeTicks; }

void BaseItemDto::setRunTimeTicks(qint64 newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
}
PlayAccess BaseItemDto::playAccess() const { return m_playAccess; }

void BaseItemDto::setPlayAccess(PlayAccess newPlayAccess) {
	m_playAccess = newPlayAccess;
}
QString BaseItemDto::aspectRatio() const { return m_aspectRatio; }

void BaseItemDto::setAspectRatio(QString newAspectRatio) {
	m_aspectRatio = newAspectRatio;
}
qint32 BaseItemDto::productionYear() const { return m_productionYear; }

void BaseItemDto::setProductionYear(qint32 newProductionYear) {
	m_productionYear = newProductionYear;
}
bool BaseItemDto::isPlaceHolder() const { return m_isPlaceHolder; }

void BaseItemDto::setIsPlaceHolder(bool newIsPlaceHolder) {
	m_isPlaceHolder = newIsPlaceHolder;
}
QString BaseItemDto::number() const { return m_number; }

void BaseItemDto::setNumber(QString newNumber) {
	m_number = newNumber;
}
QString BaseItemDto::channelNumber() const { return m_channelNumber; }

void BaseItemDto::setChannelNumber(QString newChannelNumber) {
	m_channelNumber = newChannelNumber;
}
qint32 BaseItemDto::indexNumber() const { return m_indexNumber; }

void BaseItemDto::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
qint32 BaseItemDto::indexNumberEnd() const { return m_indexNumberEnd; }

void BaseItemDto::setIndexNumberEnd(qint32 newIndexNumberEnd) {
	m_indexNumberEnd = newIndexNumberEnd;
}
qint32 BaseItemDto::parentIndexNumber() const { return m_parentIndexNumber; }

void BaseItemDto::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
QList<QSharedPointer<MediaUrl>> BaseItemDto::remoteTrailers() const { return m_remoteTrailers; }

void BaseItemDto::setRemoteTrailers(QList<QSharedPointer<MediaUrl>> newRemoteTrailers) {
	m_remoteTrailers = newRemoteTrailers;
}
QJsonObject BaseItemDto::providerIds() const { return m_providerIds; }

void BaseItemDto::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
}
bool BaseItemDto::isHD() const { return m_isHD; }

void BaseItemDto::setIsHD(bool newIsHD) {
	m_isHD = newIsHD;
}
bool BaseItemDto::isFolder() const { return m_isFolder; }

void BaseItemDto::setIsFolder(bool newIsFolder) {
	m_isFolder = newIsFolder;
}
QUuid BaseItemDto::parentId() const { return m_parentId; }

void BaseItemDto::setParentId(QUuid newParentId) {
	m_parentId = newParentId;
}
QString BaseItemDto::type() const { return m_type; }

void BaseItemDto::setType(QString newType) {
	m_type = newType;
}
QList<QSharedPointer<BaseItemPerson>> BaseItemDto::people() const { return m_people; }

void BaseItemDto::setPeople(QList<QSharedPointer<BaseItemPerson>> newPeople) {
	m_people = newPeople;
}
QList<QSharedPointer<NameGuidPair>> BaseItemDto::studios() const { return m_studios; }

void BaseItemDto::setStudios(QList<QSharedPointer<NameGuidPair>> newStudios) {
	m_studios = newStudios;
}
QList<QSharedPointer<NameGuidPair>> BaseItemDto::genreItems() const { return m_genreItems; }

void BaseItemDto::setGenreItems(QList<QSharedPointer<NameGuidPair>> newGenreItems) {
	m_genreItems = newGenreItems;
}
QString BaseItemDto::parentLogoItemId() const { return m_parentLogoItemId; }

void BaseItemDto::setParentLogoItemId(QString newParentLogoItemId) {
	m_parentLogoItemId = newParentLogoItemId;
}
QString BaseItemDto::parentBackdropItemId() const { return m_parentBackdropItemId; }

void BaseItemDto::setParentBackdropItemId(QString newParentBackdropItemId) {
	m_parentBackdropItemId = newParentBackdropItemId;
}
QStringList BaseItemDto::parentBackdropImageTags() const { return m_parentBackdropImageTags; }

void BaseItemDto::setParentBackdropImageTags(QStringList newParentBackdropImageTags) {
	m_parentBackdropImageTags = newParentBackdropImageTags;
}
qint32 BaseItemDto::localTrailerCount() const { return m_localTrailerCount; }

void BaseItemDto::setLocalTrailerCount(qint32 newLocalTrailerCount) {
	m_localTrailerCount = newLocalTrailerCount;
}
QSharedPointer<UserItemDataDto> BaseItemDto::userData() const { return m_userData; }

void BaseItemDto::setUserData(QSharedPointer<UserItemDataDto> newUserData) {
	m_userData = newUserData;
}
qint32 BaseItemDto::recursiveItemCount() const { return m_recursiveItemCount; }

void BaseItemDto::setRecursiveItemCount(qint32 newRecursiveItemCount) {
	m_recursiveItemCount = newRecursiveItemCount;
}
qint32 BaseItemDto::childCount() const { return m_childCount; }

void BaseItemDto::setChildCount(qint32 newChildCount) {
	m_childCount = newChildCount;
}
QString BaseItemDto::seriesName() const { return m_seriesName; }

void BaseItemDto::setSeriesName(QString newSeriesName) {
	m_seriesName = newSeriesName;
}
QUuid BaseItemDto::seriesId() const { return m_seriesId; }

void BaseItemDto::setSeriesId(QUuid newSeriesId) {
	m_seriesId = newSeriesId;
}
QUuid BaseItemDto::seasonId() const { return m_seasonId; }

void BaseItemDto::setSeasonId(QUuid newSeasonId) {
	m_seasonId = newSeasonId;
}
qint32 BaseItemDto::specialFeatureCount() const { return m_specialFeatureCount; }

void BaseItemDto::setSpecialFeatureCount(qint32 newSpecialFeatureCount) {
	m_specialFeatureCount = newSpecialFeatureCount;
}
QString BaseItemDto::displayPreferencesId() const { return m_displayPreferencesId; }

void BaseItemDto::setDisplayPreferencesId(QString newDisplayPreferencesId) {
	m_displayPreferencesId = newDisplayPreferencesId;
}
QString BaseItemDto::status() const { return m_status; }

void BaseItemDto::setStatus(QString newStatus) {
	m_status = newStatus;
}
QString BaseItemDto::airTime() const { return m_airTime; }

void BaseItemDto::setAirTime(QString newAirTime) {
	m_airTime = newAirTime;
}
QList<DayOfWeek> BaseItemDto::airDays() const { return m_airDays; }

void BaseItemDto::setAirDays(QList<DayOfWeek> newAirDays) {
	m_airDays = newAirDays;
}
QStringList BaseItemDto::tags() const { return m_tags; }

void BaseItemDto::setTags(QStringList newTags) {
	m_tags = newTags;
}
double BaseItemDto::primaryImageAspectRatio() const { return m_primaryImageAspectRatio; }

void BaseItemDto::setPrimaryImageAspectRatio(double newPrimaryImageAspectRatio) {
	m_primaryImageAspectRatio = newPrimaryImageAspectRatio;
}
QStringList BaseItemDto::artists() const { return m_artists; }

void BaseItemDto::setArtists(QStringList newArtists) {
	m_artists = newArtists;
}
QList<QSharedPointer<NameGuidPair>> BaseItemDto::artistItems() const { return m_artistItems; }

void BaseItemDto::setArtistItems(QList<QSharedPointer<NameGuidPair>> newArtistItems) {
	m_artistItems = newArtistItems;
}
QString BaseItemDto::album() const { return m_album; }

void BaseItemDto::setAlbum(QString newAlbum) {
	m_album = newAlbum;
}
QString BaseItemDto::collectionType() const { return m_collectionType; }

void BaseItemDto::setCollectionType(QString newCollectionType) {
	m_collectionType = newCollectionType;
}
QString BaseItemDto::displayOrder() const { return m_displayOrder; }

void BaseItemDto::setDisplayOrder(QString newDisplayOrder) {
	m_displayOrder = newDisplayOrder;
}
QUuid BaseItemDto::albumId() const { return m_albumId; }

void BaseItemDto::setAlbumId(QUuid newAlbumId) {
	m_albumId = newAlbumId;
}
QString BaseItemDto::albumPrimaryImageTag() const { return m_albumPrimaryImageTag; }

void BaseItemDto::setAlbumPrimaryImageTag(QString newAlbumPrimaryImageTag) {
	m_albumPrimaryImageTag = newAlbumPrimaryImageTag;
}
QString BaseItemDto::seriesPrimaryImageTag() const { return m_seriesPrimaryImageTag; }

void BaseItemDto::setSeriesPrimaryImageTag(QString newSeriesPrimaryImageTag) {
	m_seriesPrimaryImageTag = newSeriesPrimaryImageTag;
}
QString BaseItemDto::albumArtist() const { return m_albumArtist; }

void BaseItemDto::setAlbumArtist(QString newAlbumArtist) {
	m_albumArtist = newAlbumArtist;
}
QList<QSharedPointer<NameGuidPair>> BaseItemDto::albumArtists() const { return m_albumArtists; }

void BaseItemDto::setAlbumArtists(QList<QSharedPointer<NameGuidPair>> newAlbumArtists) {
	m_albumArtists = newAlbumArtists;
}
QString BaseItemDto::seasonName() const { return m_seasonName; }

void BaseItemDto::setSeasonName(QString newSeasonName) {
	m_seasonName = newSeasonName;
}
QList<QSharedPointer<MediaStream>> BaseItemDto::mediaStreams() const { return m_mediaStreams; }

void BaseItemDto::setMediaStreams(QList<QSharedPointer<MediaStream>> newMediaStreams) {
	m_mediaStreams = newMediaStreams;
}
VideoType BaseItemDto::videoType() const { return m_videoType; }

void BaseItemDto::setVideoType(VideoType newVideoType) {
	m_videoType = newVideoType;
}
qint32 BaseItemDto::partCount() const { return m_partCount; }

void BaseItemDto::setPartCount(qint32 newPartCount) {
	m_partCount = newPartCount;
}
qint32 BaseItemDto::mediaSourceCount() const { return m_mediaSourceCount; }

void BaseItemDto::setMediaSourceCount(qint32 newMediaSourceCount) {
	m_mediaSourceCount = newMediaSourceCount;
}
QJsonObject BaseItemDto::imageTags() const { return m_imageTags; }

void BaseItemDto::setImageTags(QJsonObject newImageTags) {
	m_imageTags = newImageTags;
}
QStringList BaseItemDto::backdropImageTags() const { return m_backdropImageTags; }

void BaseItemDto::setBackdropImageTags(QStringList newBackdropImageTags) {
	m_backdropImageTags = newBackdropImageTags;
}
QStringList BaseItemDto::screenshotImageTags() const { return m_screenshotImageTags; }

void BaseItemDto::setScreenshotImageTags(QStringList newScreenshotImageTags) {
	m_screenshotImageTags = newScreenshotImageTags;
}
QString BaseItemDto::parentLogoImageTag() const { return m_parentLogoImageTag; }

void BaseItemDto::setParentLogoImageTag(QString newParentLogoImageTag) {
	m_parentLogoImageTag = newParentLogoImageTag;
}
QString BaseItemDto::parentArtItemId() const { return m_parentArtItemId; }

void BaseItemDto::setParentArtItemId(QString newParentArtItemId) {
	m_parentArtItemId = newParentArtItemId;
}
QString BaseItemDto::parentArtImageTag() const { return m_parentArtImageTag; }

void BaseItemDto::setParentArtImageTag(QString newParentArtImageTag) {
	m_parentArtImageTag = newParentArtImageTag;
}
QString BaseItemDto::seriesThumbImageTag() const { return m_seriesThumbImageTag; }

void BaseItemDto::setSeriesThumbImageTag(QString newSeriesThumbImageTag) {
	m_seriesThumbImageTag = newSeriesThumbImageTag;
}
QJsonObject BaseItemDto::imageBlurHashes() const { return m_imageBlurHashes; }

void BaseItemDto::setImageBlurHashes(QJsonObject newImageBlurHashes) {
	m_imageBlurHashes = newImageBlurHashes;
}
QString BaseItemDto::seriesStudio() const { return m_seriesStudio; }

void BaseItemDto::setSeriesStudio(QString newSeriesStudio) {
	m_seriesStudio = newSeriesStudio;
}
QString BaseItemDto::parentThumbItemId() const { return m_parentThumbItemId; }

void BaseItemDto::setParentThumbItemId(QString newParentThumbItemId) {
	m_parentThumbItemId = newParentThumbItemId;
}
QString BaseItemDto::parentThumbImageTag() const { return m_parentThumbImageTag; }

void BaseItemDto::setParentThumbImageTag(QString newParentThumbImageTag) {
	m_parentThumbImageTag = newParentThumbImageTag;
}
QString BaseItemDto::parentPrimaryImageItemId() const { return m_parentPrimaryImageItemId; }

void BaseItemDto::setParentPrimaryImageItemId(QString newParentPrimaryImageItemId) {
	m_parentPrimaryImageItemId = newParentPrimaryImageItemId;
}
QString BaseItemDto::parentPrimaryImageTag() const { return m_parentPrimaryImageTag; }

void BaseItemDto::setParentPrimaryImageTag(QString newParentPrimaryImageTag) {
	m_parentPrimaryImageTag = newParentPrimaryImageTag;
}
QList<QSharedPointer<ChapterInfo>> BaseItemDto::chapters() const { return m_chapters; }

void BaseItemDto::setChapters(QList<QSharedPointer<ChapterInfo>> newChapters) {
	m_chapters = newChapters;
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
QDateTime BaseItemDto::endDate() const { return m_endDate; }

void BaseItemDto::setEndDate(QDateTime newEndDate) {
	m_endDate = newEndDate;
}
QList<MetadataField> BaseItemDto::lockedFields() const { return m_lockedFields; }

void BaseItemDto::setLockedFields(QList<MetadataField> newLockedFields) {
	m_lockedFields = newLockedFields;
}
qint32 BaseItemDto::trailerCount() const { return m_trailerCount; }

void BaseItemDto::setTrailerCount(qint32 newTrailerCount) {
	m_trailerCount = newTrailerCount;
}
qint32 BaseItemDto::movieCount() const { return m_movieCount; }

void BaseItemDto::setMovieCount(qint32 newMovieCount) {
	m_movieCount = newMovieCount;
}
qint32 BaseItemDto::seriesCount() const { return m_seriesCount; }

void BaseItemDto::setSeriesCount(qint32 newSeriesCount) {
	m_seriesCount = newSeriesCount;
}
qint32 BaseItemDto::programCount() const { return m_programCount; }

void BaseItemDto::setProgramCount(qint32 newProgramCount) {
	m_programCount = newProgramCount;
}
qint32 BaseItemDto::episodeCount() const { return m_episodeCount; }

void BaseItemDto::setEpisodeCount(qint32 newEpisodeCount) {
	m_episodeCount = newEpisodeCount;
}
qint32 BaseItemDto::songCount() const { return m_songCount; }

void BaseItemDto::setSongCount(qint32 newSongCount) {
	m_songCount = newSongCount;
}
qint32 BaseItemDto::albumCount() const { return m_albumCount; }

void BaseItemDto::setAlbumCount(qint32 newAlbumCount) {
	m_albumCount = newAlbumCount;
}
qint32 BaseItemDto::artistCount() const { return m_artistCount; }

void BaseItemDto::setArtistCount(qint32 newArtistCount) {
	m_artistCount = newArtistCount;
}
qint32 BaseItemDto::musicVideoCount() const { return m_musicVideoCount; }

void BaseItemDto::setMusicVideoCount(qint32 newMusicVideoCount) {
	m_musicVideoCount = newMusicVideoCount;
}
bool BaseItemDto::lockData() const { return m_lockData; }

void BaseItemDto::setLockData(bool newLockData) {
	m_lockData = newLockData;
}
qint32 BaseItemDto::width() const { return m_width; }

void BaseItemDto::setWidth(qint32 newWidth) {
	m_width = newWidth;
}
qint32 BaseItemDto::height() const { return m_height; }

void BaseItemDto::setHeight(qint32 newHeight) {
	m_height = newHeight;
}
QString BaseItemDto::cameraMake() const { return m_cameraMake; }

void BaseItemDto::setCameraMake(QString newCameraMake) {
	m_cameraMake = newCameraMake;
}
QString BaseItemDto::cameraModel() const { return m_cameraModel; }

void BaseItemDto::setCameraModel(QString newCameraModel) {
	m_cameraModel = newCameraModel;
}
QString BaseItemDto::software() const { return m_software; }

void BaseItemDto::setSoftware(QString newSoftware) {
	m_software = newSoftware;
}
double BaseItemDto::exposureTime() const { return m_exposureTime; }

void BaseItemDto::setExposureTime(double newExposureTime) {
	m_exposureTime = newExposureTime;
}
double BaseItemDto::focalLength() const { return m_focalLength; }

void BaseItemDto::setFocalLength(double newFocalLength) {
	m_focalLength = newFocalLength;
}
ImageOrientation BaseItemDto::imageOrientation() const { return m_imageOrientation; }

void BaseItemDto::setImageOrientation(ImageOrientation newImageOrientation) {
	m_imageOrientation = newImageOrientation;
}
double BaseItemDto::aperture() const { return m_aperture; }

void BaseItemDto::setAperture(double newAperture) {
	m_aperture = newAperture;
}
double BaseItemDto::shutterSpeed() const { return m_shutterSpeed; }

void BaseItemDto::setShutterSpeed(double newShutterSpeed) {
	m_shutterSpeed = newShutterSpeed;
}
double BaseItemDto::latitude() const { return m_latitude; }

void BaseItemDto::setLatitude(double newLatitude) {
	m_latitude = newLatitude;
}
double BaseItemDto::longitude() const { return m_longitude; }

void BaseItemDto::setLongitude(double newLongitude) {
	m_longitude = newLongitude;
}
double BaseItemDto::altitude() const { return m_altitude; }

void BaseItemDto::setAltitude(double newAltitude) {
	m_altitude = newAltitude;
}
qint32 BaseItemDto::isoSpeedRating() const { return m_isoSpeedRating; }

void BaseItemDto::setIsoSpeedRating(qint32 newIsoSpeedRating) {
	m_isoSpeedRating = newIsoSpeedRating;
}
QString BaseItemDto::seriesTimerId() const { return m_seriesTimerId; }

void BaseItemDto::setSeriesTimerId(QString newSeriesTimerId) {
	m_seriesTimerId = newSeriesTimerId;
}
QString BaseItemDto::programId() const { return m_programId; }

void BaseItemDto::setProgramId(QString newProgramId) {
	m_programId = newProgramId;
}
QString BaseItemDto::channelPrimaryImageTag() const { return m_channelPrimaryImageTag; }

void BaseItemDto::setChannelPrimaryImageTag(QString newChannelPrimaryImageTag) {
	m_channelPrimaryImageTag = newChannelPrimaryImageTag;
}
QDateTime BaseItemDto::startDate() const { return m_startDate; }

void BaseItemDto::setStartDate(QDateTime newStartDate) {
	m_startDate = newStartDate;
}
double BaseItemDto::completionPercentage() const { return m_completionPercentage; }

void BaseItemDto::setCompletionPercentage(double newCompletionPercentage) {
	m_completionPercentage = newCompletionPercentage;
}
bool BaseItemDto::isRepeat() const { return m_isRepeat; }

void BaseItemDto::setIsRepeat(bool newIsRepeat) {
	m_isRepeat = newIsRepeat;
}
QString BaseItemDto::episodeTitle() const { return m_episodeTitle; }

void BaseItemDto::setEpisodeTitle(QString newEpisodeTitle) {
	m_episodeTitle = newEpisodeTitle;
}
ChannelType BaseItemDto::channelType() const { return m_channelType; }

void BaseItemDto::setChannelType(ChannelType newChannelType) {
	m_channelType = newChannelType;
}
ProgramAudio BaseItemDto::audio() const { return m_audio; }

void BaseItemDto::setAudio(ProgramAudio newAudio) {
	m_audio = newAudio;
}
bool BaseItemDto::isMovie() const { return m_isMovie; }

void BaseItemDto::setIsMovie(bool newIsMovie) {
	m_isMovie = newIsMovie;
}
bool BaseItemDto::isSports() const { return m_isSports; }

void BaseItemDto::setIsSports(bool newIsSports) {
	m_isSports = newIsSports;
}
bool BaseItemDto::isSeries() const { return m_isSeries; }

void BaseItemDto::setIsSeries(bool newIsSeries) {
	m_isSeries = newIsSeries;
}
bool BaseItemDto::isLive() const { return m_isLive; }

void BaseItemDto::setIsLive(bool newIsLive) {
	m_isLive = newIsLive;
}
bool BaseItemDto::isNews() const { return m_isNews; }

void BaseItemDto::setIsNews(bool newIsNews) {
	m_isNews = newIsNews;
}
bool BaseItemDto::isKids() const { return m_isKids; }

void BaseItemDto::setIsKids(bool newIsKids) {
	m_isKids = newIsKids;
}
bool BaseItemDto::isPremiere() const { return m_isPremiere; }

void BaseItemDto::setIsPremiere(bool newIsPremiere) {
	m_isPremiere = newIsPremiere;
}
QString BaseItemDto::timerId() const { return m_timerId; }

void BaseItemDto::setTimerId(QString newTimerId) {
	m_timerId = newTimerId;
}
QSharedPointer<BaseItemDto> BaseItemDto::currentProgram() const { return m_currentProgram; }

void BaseItemDto::setCurrentProgram(QSharedPointer<BaseItemDto> newCurrentProgram) {
	m_currentProgram = newCurrentProgram;
}

} // NS DTO

namespace Support {

using BaseItemDto = Jellyfin::DTO::BaseItemDto;

template <>
BaseItemDto fromJsonValue<BaseItemDto>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return BaseItemDto::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

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

BaseItemDto::BaseItemDto(QObject *parent) {}

BaseItemDto BaseItemDto::fromJson(QJsonObject source) {BaseItemDto instance;
	instance->setFromJson(source, false);
	return instance;
}


void BaseItemDto::setFromJson(QJsonObject source) {
	m_name = fromJsonValue<QString>(source["Name"]);
	m_originalTitle = fromJsonValue<QString>(source["OriginalTitle"]);
	m_serverId = fromJsonValue<QString>(source["ServerId"]);
	m_jellyfinId = fromJsonValue<QUuid>(source["Id"]);
	m_etag = fromJsonValue<QString>(source["Etag"]);
	m_sourceType = fromJsonValue<QString>(source["SourceType"]);
	m_playlistItemId = fromJsonValue<QString>(source["PlaylistItemId"]);
	m_dateCreated = fromJsonValue<QDateTime>(source["DateCreated"]);
	m_dateLastMediaAdded = fromJsonValue<QDateTime>(source["DateLastMediaAdded"]);
	m_extraType = fromJsonValue<QString>(source["ExtraType"]);
	m_airsBeforeSeasonNumber = fromJsonValue<qint32>(source["AirsBeforeSeasonNumber"]);
	m_airsAfterSeasonNumber = fromJsonValue<qint32>(source["AirsAfterSeasonNumber"]);
	m_airsBeforeEpisodeNumber = fromJsonValue<qint32>(source["AirsBeforeEpisodeNumber"]);
	m_canDelete = fromJsonValue<bool>(source["CanDelete"]);
	m_canDownload = fromJsonValue<bool>(source["CanDownload"]);
	m_hasSubtitles = fromJsonValue<bool>(source["HasSubtitles"]);
	m_preferredMetadataLanguage = fromJsonValue<QString>(source["PreferredMetadataLanguage"]);
	m_preferredMetadataCountryCode = fromJsonValue<QString>(source["PreferredMetadataCountryCode"]);
	m_supportsSync = fromJsonValue<bool>(source["SupportsSync"]);
	m_container = fromJsonValue<QString>(source["Container"]);
	m_sortName = fromJsonValue<QString>(source["SortName"]);
	m_forcedSortName = fromJsonValue<QString>(source["ForcedSortName"]);
	m_video3DFormat = fromJsonValue<Video3DFormat>(source["Video3DFormat"]);
	m_premiereDate = fromJsonValue<QDateTime>(source["PremiereDate"]);
	m_externalUrls = fromJsonValue<QList<QSharedPointer<ExternalUrl>>>(source["ExternalUrls"]);
	m_mediaSources = fromJsonValue<QList<QSharedPointer<MediaSourceInfo>>>(source["MediaSources"]);
	m_criticRating = fromJsonValue<float>(source["CriticRating"]);
	m_productionLocations = fromJsonValue<QStringList>(source["ProductionLocations"]);
	m_path = fromJsonValue<QString>(source["Path"]);
	m_enableMediaSourceDisplay = fromJsonValue<bool>(source["EnableMediaSourceDisplay"]);
	m_officialRating = fromJsonValue<QString>(source["OfficialRating"]);
	m_customRating = fromJsonValue<QString>(source["CustomRating"]);
	m_channelId = fromJsonValue<QUuid>(source["ChannelId"]);
	m_channelName = fromJsonValue<QString>(source["ChannelName"]);
	m_overview = fromJsonValue<QString>(source["Overview"]);
	m_taglines = fromJsonValue<QStringList>(source["Taglines"]);
	m_genres = fromJsonValue<QStringList>(source["Genres"]);
	m_communityRating = fromJsonValue<float>(source["CommunityRating"]);
	m_cumulativeRunTimeTicks = fromJsonValue<qint64>(source["CumulativeRunTimeTicks"]);
	m_runTimeTicks = fromJsonValue<qint64>(source["RunTimeTicks"]);
	m_playAccess = fromJsonValue<PlayAccess>(source["PlayAccess"]);
	m_aspectRatio = fromJsonValue<QString>(source["AspectRatio"]);
	m_productionYear = fromJsonValue<qint32>(source["ProductionYear"]);
	m_isPlaceHolder = fromJsonValue<bool>(source["IsPlaceHolder"]);
	m_number = fromJsonValue<QString>(source["Number"]);
	m_channelNumber = fromJsonValue<QString>(source["ChannelNumber"]);
	m_indexNumber = fromJsonValue<qint32>(source["IndexNumber"]);
	m_indexNumberEnd = fromJsonValue<qint32>(source["IndexNumberEnd"]);
	m_parentIndexNumber = fromJsonValue<qint32>(source["ParentIndexNumber"]);
	m_remoteTrailers = fromJsonValue<QList<QSharedPointer<MediaUrl>>>(source["RemoteTrailers"]);
	m_providerIds = fromJsonValue<QJsonObject>(source["ProviderIds"]);
	m_isHD = fromJsonValue<bool>(source["IsHD"]);
	m_isFolder = fromJsonValue<bool>(source["IsFolder"]);
	m_parentId = fromJsonValue<QUuid>(source["ParentId"]);
	m_type = fromJsonValue<QString>(source["Type"]);
	m_people = fromJsonValue<QList<QSharedPointer<BaseItemPerson>>>(source["People"]);
	m_studios = fromJsonValue<QList<QSharedPointer<NameGuidPair>>>(source["Studios"]);
	m_genreItems = fromJsonValue<QList<QSharedPointer<NameGuidPair>>>(source["GenreItems"]);
	m_parentLogoItemId = fromJsonValue<QString>(source["ParentLogoItemId"]);
	m_parentBackdropItemId = fromJsonValue<QString>(source["ParentBackdropItemId"]);
	m_parentBackdropImageTags = fromJsonValue<QStringList>(source["ParentBackdropImageTags"]);
	m_localTrailerCount = fromJsonValue<qint32>(source["LocalTrailerCount"]);
	m_userData = fromJsonValue<QSharedPointer<UserItemDataDto>>(source["UserData"]);
	m_recursiveItemCount = fromJsonValue<qint32>(source["RecursiveItemCount"]);
	m_childCount = fromJsonValue<qint32>(source["ChildCount"]);
	m_seriesName = fromJsonValue<QString>(source["SeriesName"]);
	m_seriesId = fromJsonValue<QUuid>(source["SeriesId"]);
	m_seasonId = fromJsonValue<QUuid>(source["SeasonId"]);
	m_specialFeatureCount = fromJsonValue<qint32>(source["SpecialFeatureCount"]);
	m_displayPreferencesId = fromJsonValue<QString>(source["DisplayPreferencesId"]);
	m_status = fromJsonValue<QString>(source["Status"]);
	m_airTime = fromJsonValue<QString>(source["AirTime"]);
	m_airDays = fromJsonValue<QList<DayOfWeek>>(source["AirDays"]);
	m_tags = fromJsonValue<QStringList>(source["Tags"]);
	m_primaryImageAspectRatio = fromJsonValue<double>(source["PrimaryImageAspectRatio"]);
	m_artists = fromJsonValue<QStringList>(source["Artists"]);
	m_artistItems = fromJsonValue<QList<QSharedPointer<NameGuidPair>>>(source["ArtistItems"]);
	m_album = fromJsonValue<QString>(source["Album"]);
	m_collectionType = fromJsonValue<QString>(source["CollectionType"]);
	m_displayOrder = fromJsonValue<QString>(source["DisplayOrder"]);
	m_albumId = fromJsonValue<QUuid>(source["AlbumId"]);
	m_albumPrimaryImageTag = fromJsonValue<QString>(source["AlbumPrimaryImageTag"]);
	m_seriesPrimaryImageTag = fromJsonValue<QString>(source["SeriesPrimaryImageTag"]);
	m_albumArtist = fromJsonValue<QString>(source["AlbumArtist"]);
	m_albumArtists = fromJsonValue<QList<QSharedPointer<NameGuidPair>>>(source["AlbumArtists"]);
	m_seasonName = fromJsonValue<QString>(source["SeasonName"]);
	m_mediaStreams = fromJsonValue<QList<QSharedPointer<MediaStream>>>(source["MediaStreams"]);
	m_videoType = fromJsonValue<VideoType>(source["VideoType"]);
	m_partCount = fromJsonValue<qint32>(source["PartCount"]);
	m_mediaSourceCount = fromJsonValue<qint32>(source["MediaSourceCount"]);
	m_imageTags = fromJsonValue<QJsonObject>(source["ImageTags"]);
	m_backdropImageTags = fromJsonValue<QStringList>(source["BackdropImageTags"]);
	m_screenshotImageTags = fromJsonValue<QStringList>(source["ScreenshotImageTags"]);
	m_parentLogoImageTag = fromJsonValue<QString>(source["ParentLogoImageTag"]);
	m_parentArtItemId = fromJsonValue<QString>(source["ParentArtItemId"]);
	m_parentArtImageTag = fromJsonValue<QString>(source["ParentArtImageTag"]);
	m_seriesThumbImageTag = fromJsonValue<QString>(source["SeriesThumbImageTag"]);
	m_imageBlurHashes = fromJsonValue<QJsonObject>(source["ImageBlurHashes"]);
	m_seriesStudio = fromJsonValue<QString>(source["SeriesStudio"]);
	m_parentThumbItemId = fromJsonValue<QString>(source["ParentThumbItemId"]);
	m_parentThumbImageTag = fromJsonValue<QString>(source["ParentThumbImageTag"]);
	m_parentPrimaryImageItemId = fromJsonValue<QString>(source["ParentPrimaryImageItemId"]);
	m_parentPrimaryImageTag = fromJsonValue<QString>(source["ParentPrimaryImageTag"]);
	m_chapters = fromJsonValue<QList<QSharedPointer<ChapterInfo>>>(source["Chapters"]);
	m_locationType = fromJsonValue<LocationType>(source["LocationType"]);
	m_isoType = fromJsonValue<IsoType>(source["IsoType"]);
	m_mediaType = fromJsonValue<QString>(source["MediaType"]);
	m_endDate = fromJsonValue<QDateTime>(source["EndDate"]);
	m_lockedFields = fromJsonValue<QList<MetadataField>>(source["LockedFields"]);
	m_trailerCount = fromJsonValue<qint32>(source["TrailerCount"]);
	m_movieCount = fromJsonValue<qint32>(source["MovieCount"]);
	m_seriesCount = fromJsonValue<qint32>(source["SeriesCount"]);
	m_programCount = fromJsonValue<qint32>(source["ProgramCount"]);
	m_episodeCount = fromJsonValue<qint32>(source["EpisodeCount"]);
	m_songCount = fromJsonValue<qint32>(source["SongCount"]);
	m_albumCount = fromJsonValue<qint32>(source["AlbumCount"]);
	m_artistCount = fromJsonValue<qint32>(source["ArtistCount"]);
	m_musicVideoCount = fromJsonValue<qint32>(source["MusicVideoCount"]);
	m_lockData = fromJsonValue<bool>(source["LockData"]);
	m_width = fromJsonValue<qint32>(source["Width"]);
	m_height = fromJsonValue<qint32>(source["Height"]);
	m_cameraMake = fromJsonValue<QString>(source["CameraMake"]);
	m_cameraModel = fromJsonValue<QString>(source["CameraModel"]);
	m_software = fromJsonValue<QString>(source["Software"]);
	m_exposureTime = fromJsonValue<double>(source["ExposureTime"]);
	m_focalLength = fromJsonValue<double>(source["FocalLength"]);
	m_imageOrientation = fromJsonValue<ImageOrientation>(source["ImageOrientation"]);
	m_aperture = fromJsonValue<double>(source["Aperture"]);
	m_shutterSpeed = fromJsonValue<double>(source["ShutterSpeed"]);
	m_latitude = fromJsonValue<double>(source["Latitude"]);
	m_longitude = fromJsonValue<double>(source["Longitude"]);
	m_altitude = fromJsonValue<double>(source["Altitude"]);
	m_isoSpeedRating = fromJsonValue<qint32>(source["IsoSpeedRating"]);
	m_seriesTimerId = fromJsonValue<QString>(source["SeriesTimerId"]);
	m_programId = fromJsonValue<QString>(source["ProgramId"]);
	m_channelPrimaryImageTag = fromJsonValue<QString>(source["ChannelPrimaryImageTag"]);
	m_startDate = fromJsonValue<QDateTime>(source["StartDate"]);
	m_completionPercentage = fromJsonValue<double>(source["CompletionPercentage"]);
	m_isRepeat = fromJsonValue<bool>(source["IsRepeat"]);
	m_episodeTitle = fromJsonValue<QString>(source["EpisodeTitle"]);
	m_channelType = fromJsonValue<ChannelType>(source["ChannelType"]);
	m_audio = fromJsonValue<ProgramAudio>(source["Audio"]);
	m_isMovie = fromJsonValue<bool>(source["IsMovie"]);
	m_isSports = fromJsonValue<bool>(source["IsSports"]);
	m_isSeries = fromJsonValue<bool>(source["IsSeries"]);
	m_isLive = fromJsonValue<bool>(source["IsLive"]);
	m_isNews = fromJsonValue<bool>(source["IsNews"]);
	m_isKids = fromJsonValue<bool>(source["IsKids"]);
	m_isPremiere = fromJsonValue<bool>(source["IsPremiere"]);
	m_timerId = fromJsonValue<QString>(source["TimerId"]);
	m_currentProgram = fromJsonValue<QSharedPointer<BaseItemDto>>(source["CurrentProgram"]);

}
	
QJsonObject BaseItemDto::toJson() {
	QJsonObject result;
	result["Name"] = toJsonValue<QString>(m_name);
	result["OriginalTitle"] = toJsonValue<QString>(m_originalTitle);
	result["ServerId"] = toJsonValue<QString>(m_serverId);
	result["Id"] = toJsonValue<QUuid>(m_jellyfinId);
	result["Etag"] = toJsonValue<QString>(m_etag);
	result["SourceType"] = toJsonValue<QString>(m_sourceType);
	result["PlaylistItemId"] = toJsonValue<QString>(m_playlistItemId);
	result["DateCreated"] = toJsonValue<QDateTime>(m_dateCreated);
	result["DateLastMediaAdded"] = toJsonValue<QDateTime>(m_dateLastMediaAdded);
	result["ExtraType"] = toJsonValue<QString>(m_extraType);
	result["AirsBeforeSeasonNumber"] = toJsonValue<qint32>(m_airsBeforeSeasonNumber);
	result["AirsAfterSeasonNumber"] = toJsonValue<qint32>(m_airsAfterSeasonNumber);
	result["AirsBeforeEpisodeNumber"] = toJsonValue<qint32>(m_airsBeforeEpisodeNumber);
	result["CanDelete"] = toJsonValue<bool>(m_canDelete);
	result["CanDownload"] = toJsonValue<bool>(m_canDownload);
	result["HasSubtitles"] = toJsonValue<bool>(m_hasSubtitles);
	result["PreferredMetadataLanguage"] = toJsonValue<QString>(m_preferredMetadataLanguage);
	result["PreferredMetadataCountryCode"] = toJsonValue<QString>(m_preferredMetadataCountryCode);
	result["SupportsSync"] = toJsonValue<bool>(m_supportsSync);
	result["Container"] = toJsonValue<QString>(m_container);
	result["SortName"] = toJsonValue<QString>(m_sortName);
	result["ForcedSortName"] = toJsonValue<QString>(m_forcedSortName);
	result["Video3DFormat"] = toJsonValue<Video3DFormat>(m_video3DFormat);
	result["PremiereDate"] = toJsonValue<QDateTime>(m_premiereDate);
	result["ExternalUrls"] = toJsonValue<QList<QSharedPointer<ExternalUrl>>>(m_externalUrls);
	result["MediaSources"] = toJsonValue<QList<QSharedPointer<MediaSourceInfo>>>(m_mediaSources);
	result["CriticRating"] = toJsonValue<float>(m_criticRating);
	result["ProductionLocations"] = toJsonValue<QStringList>(m_productionLocations);
	result["Path"] = toJsonValue<QString>(m_path);
	result["EnableMediaSourceDisplay"] = toJsonValue<bool>(m_enableMediaSourceDisplay);
	result["OfficialRating"] = toJsonValue<QString>(m_officialRating);
	result["CustomRating"] = toJsonValue<QString>(m_customRating);
	result["ChannelId"] = toJsonValue<QUuid>(m_channelId);
	result["ChannelName"] = toJsonValue<QString>(m_channelName);
	result["Overview"] = toJsonValue<QString>(m_overview);
	result["Taglines"] = toJsonValue<QStringList>(m_taglines);
	result["Genres"] = toJsonValue<QStringList>(m_genres);
	result["CommunityRating"] = toJsonValue<float>(m_communityRating);
	result["CumulativeRunTimeTicks"] = toJsonValue<qint64>(m_cumulativeRunTimeTicks);
	result["RunTimeTicks"] = toJsonValue<qint64>(m_runTimeTicks);
	result["PlayAccess"] = toJsonValue<PlayAccess>(m_playAccess);
	result["AspectRatio"] = toJsonValue<QString>(m_aspectRatio);
	result["ProductionYear"] = toJsonValue<qint32>(m_productionYear);
	result["IsPlaceHolder"] = toJsonValue<bool>(m_isPlaceHolder);
	result["Number"] = toJsonValue<QString>(m_number);
	result["ChannelNumber"] = toJsonValue<QString>(m_channelNumber);
	result["IndexNumber"] = toJsonValue<qint32>(m_indexNumber);
	result["IndexNumberEnd"] = toJsonValue<qint32>(m_indexNumberEnd);
	result["ParentIndexNumber"] = toJsonValue<qint32>(m_parentIndexNumber);
	result["RemoteTrailers"] = toJsonValue<QList<QSharedPointer<MediaUrl>>>(m_remoteTrailers);
	result["ProviderIds"] = toJsonValue<QJsonObject>(m_providerIds);
	result["IsHD"] = toJsonValue<bool>(m_isHD);
	result["IsFolder"] = toJsonValue<bool>(m_isFolder);
	result["ParentId"] = toJsonValue<QUuid>(m_parentId);
	result["Type"] = toJsonValue<QString>(m_type);
	result["People"] = toJsonValue<QList<QSharedPointer<BaseItemPerson>>>(m_people);
	result["Studios"] = toJsonValue<QList<QSharedPointer<NameGuidPair>>>(m_studios);
	result["GenreItems"] = toJsonValue<QList<QSharedPointer<NameGuidPair>>>(m_genreItems);
	result["ParentLogoItemId"] = toJsonValue<QString>(m_parentLogoItemId);
	result["ParentBackdropItemId"] = toJsonValue<QString>(m_parentBackdropItemId);
	result["ParentBackdropImageTags"] = toJsonValue<QStringList>(m_parentBackdropImageTags);
	result["LocalTrailerCount"] = toJsonValue<qint32>(m_localTrailerCount);
	result["UserData"] = toJsonValue<QSharedPointer<UserItemDataDto>>(m_userData);
	result["RecursiveItemCount"] = toJsonValue<qint32>(m_recursiveItemCount);
	result["ChildCount"] = toJsonValue<qint32>(m_childCount);
	result["SeriesName"] = toJsonValue<QString>(m_seriesName);
	result["SeriesId"] = toJsonValue<QUuid>(m_seriesId);
	result["SeasonId"] = toJsonValue<QUuid>(m_seasonId);
	result["SpecialFeatureCount"] = toJsonValue<qint32>(m_specialFeatureCount);
	result["DisplayPreferencesId"] = toJsonValue<QString>(m_displayPreferencesId);
	result["Status"] = toJsonValue<QString>(m_status);
	result["AirTime"] = toJsonValue<QString>(m_airTime);
	result["AirDays"] = toJsonValue<QList<DayOfWeek>>(m_airDays);
	result["Tags"] = toJsonValue<QStringList>(m_tags);
	result["PrimaryImageAspectRatio"] = toJsonValue<double>(m_primaryImageAspectRatio);
	result["Artists"] = toJsonValue<QStringList>(m_artists);
	result["ArtistItems"] = toJsonValue<QList<QSharedPointer<NameGuidPair>>>(m_artistItems);
	result["Album"] = toJsonValue<QString>(m_album);
	result["CollectionType"] = toJsonValue<QString>(m_collectionType);
	result["DisplayOrder"] = toJsonValue<QString>(m_displayOrder);
	result["AlbumId"] = toJsonValue<QUuid>(m_albumId);
	result["AlbumPrimaryImageTag"] = toJsonValue<QString>(m_albumPrimaryImageTag);
	result["SeriesPrimaryImageTag"] = toJsonValue<QString>(m_seriesPrimaryImageTag);
	result["AlbumArtist"] = toJsonValue<QString>(m_albumArtist);
	result["AlbumArtists"] = toJsonValue<QList<QSharedPointer<NameGuidPair>>>(m_albumArtists);
	result["SeasonName"] = toJsonValue<QString>(m_seasonName);
	result["MediaStreams"] = toJsonValue<QList<QSharedPointer<MediaStream>>>(m_mediaStreams);
	result["VideoType"] = toJsonValue<VideoType>(m_videoType);
	result["PartCount"] = toJsonValue<qint32>(m_partCount);
	result["MediaSourceCount"] = toJsonValue<qint32>(m_mediaSourceCount);
	result["ImageTags"] = toJsonValue<QJsonObject>(m_imageTags);
	result["BackdropImageTags"] = toJsonValue<QStringList>(m_backdropImageTags);
	result["ScreenshotImageTags"] = toJsonValue<QStringList>(m_screenshotImageTags);
	result["ParentLogoImageTag"] = toJsonValue<QString>(m_parentLogoImageTag);
	result["ParentArtItemId"] = toJsonValue<QString>(m_parentArtItemId);
	result["ParentArtImageTag"] = toJsonValue<QString>(m_parentArtImageTag);
	result["SeriesThumbImageTag"] = toJsonValue<QString>(m_seriesThumbImageTag);
	result["ImageBlurHashes"] = toJsonValue<QJsonObject>(m_imageBlurHashes);
	result["SeriesStudio"] = toJsonValue<QString>(m_seriesStudio);
	result["ParentThumbItemId"] = toJsonValue<QString>(m_parentThumbItemId);
	result["ParentThumbImageTag"] = toJsonValue<QString>(m_parentThumbImageTag);
	result["ParentPrimaryImageItemId"] = toJsonValue<QString>(m_parentPrimaryImageItemId);
	result["ParentPrimaryImageTag"] = toJsonValue<QString>(m_parentPrimaryImageTag);
	result["Chapters"] = toJsonValue<QList<QSharedPointer<ChapterInfo>>>(m_chapters);
	result["LocationType"] = toJsonValue<LocationType>(m_locationType);
	result["IsoType"] = toJsonValue<IsoType>(m_isoType);
	result["MediaType"] = toJsonValue<QString>(m_mediaType);
	result["EndDate"] = toJsonValue<QDateTime>(m_endDate);
	result["LockedFields"] = toJsonValue<QList<MetadataField>>(m_lockedFields);
	result["TrailerCount"] = toJsonValue<qint32>(m_trailerCount);
	result["MovieCount"] = toJsonValue<qint32>(m_movieCount);
	result["SeriesCount"] = toJsonValue<qint32>(m_seriesCount);
	result["ProgramCount"] = toJsonValue<qint32>(m_programCount);
	result["EpisodeCount"] = toJsonValue<qint32>(m_episodeCount);
	result["SongCount"] = toJsonValue<qint32>(m_songCount);
	result["AlbumCount"] = toJsonValue<qint32>(m_albumCount);
	result["ArtistCount"] = toJsonValue<qint32>(m_artistCount);
	result["MusicVideoCount"] = toJsonValue<qint32>(m_musicVideoCount);
	result["LockData"] = toJsonValue<bool>(m_lockData);
	result["Width"] = toJsonValue<qint32>(m_width);
	result["Height"] = toJsonValue<qint32>(m_height);
	result["CameraMake"] = toJsonValue<QString>(m_cameraMake);
	result["CameraModel"] = toJsonValue<QString>(m_cameraModel);
	result["Software"] = toJsonValue<QString>(m_software);
	result["ExposureTime"] = toJsonValue<double>(m_exposureTime);
	result["FocalLength"] = toJsonValue<double>(m_focalLength);
	result["ImageOrientation"] = toJsonValue<ImageOrientation>(m_imageOrientation);
	result["Aperture"] = toJsonValue<double>(m_aperture);
	result["ShutterSpeed"] = toJsonValue<double>(m_shutterSpeed);
	result["Latitude"] = toJsonValue<double>(m_latitude);
	result["Longitude"] = toJsonValue<double>(m_longitude);
	result["Altitude"] = toJsonValue<double>(m_altitude);
	result["IsoSpeedRating"] = toJsonValue<qint32>(m_isoSpeedRating);
	result["SeriesTimerId"] = toJsonValue<QString>(m_seriesTimerId);
	result["ProgramId"] = toJsonValue<QString>(m_programId);
	result["ChannelPrimaryImageTag"] = toJsonValue<QString>(m_channelPrimaryImageTag);
	result["StartDate"] = toJsonValue<QDateTime>(m_startDate);
	result["CompletionPercentage"] = toJsonValue<double>(m_completionPercentage);
	result["IsRepeat"] = toJsonValue<bool>(m_isRepeat);
	result["EpisodeTitle"] = toJsonValue<QString>(m_episodeTitle);
	result["ChannelType"] = toJsonValue<ChannelType>(m_channelType);
	result["Audio"] = toJsonValue<ProgramAudio>(m_audio);
	result["IsMovie"] = toJsonValue<bool>(m_isMovie);
	result["IsSports"] = toJsonValue<bool>(m_isSports);
	result["IsSeries"] = toJsonValue<bool>(m_isSeries);
	result["IsLive"] = toJsonValue<bool>(m_isLive);
	result["IsNews"] = toJsonValue<bool>(m_isNews);
	result["IsKids"] = toJsonValue<bool>(m_isKids);
	result["IsPremiere"] = toJsonValue<bool>(m_isPremiere);
	result["TimerId"] = toJsonValue<QString>(m_timerId);
	result["CurrentProgram"] = toJsonValue<QSharedPointer<BaseItemDto>>(m_currentProgram);

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


} // NS Jellyfin
} // NS DTO

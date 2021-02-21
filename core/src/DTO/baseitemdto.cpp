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

#include <JellyfinQt/DTO/channeltype.h>
#include <JellyfinQt/DTO/dayofweek.h>
#include <JellyfinQt/DTO/imageorientation.h>
#include <JellyfinQt/DTO/isotype.h>
#include <JellyfinQt/DTO/locationtype.h>
#include <JellyfinQt/DTO/metadatafield.h>
#include <JellyfinQt/DTO/playaccess.h>
#include <JellyfinQt/DTO/programaudio.h>
#include <JellyfinQt/DTO/video3dformat.h>
#include <JellyfinQt/DTO/videotype.h>

namespace Jellyfin {
namespace DTO {

BaseItemDto::BaseItemDto(QObject *parent) : QObject(parent) {}

BaseItemDto *BaseItemDto::fromJSON(QJsonObject source, QObject *parent) {
	BaseItemDto *instance = new BaseItemDto(parent);
	instance->updateFromJSON(source);
	return instance;
}

void BaseItemDto::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject BaseItemDto::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString BaseItemDto::name() const { return m_name; }
void BaseItemDto::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString BaseItemDto::originalTitle() const { return m_originalTitle; }
void BaseItemDto::setOriginalTitle(QString newOriginalTitle) {
	m_originalTitle = newOriginalTitle;
	emit originalTitleChanged(newOriginalTitle);
}

QString BaseItemDto::serverId() const { return m_serverId; }
void BaseItemDto::setServerId(QString newServerId) {
	m_serverId = newServerId;
	emit serverIdChanged(newServerId);
}

QString BaseItemDto::jellyfinId() const { return m_jellyfinId; }
void BaseItemDto::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString BaseItemDto::etag() const { return m_etag; }
void BaseItemDto::setEtag(QString newEtag) {
	m_etag = newEtag;
	emit etagChanged(newEtag);
}

QString BaseItemDto::sourceType() const { return m_sourceType; }
void BaseItemDto::setSourceType(QString newSourceType) {
	m_sourceType = newSourceType;
	emit sourceTypeChanged(newSourceType);
}

QString BaseItemDto::playlistItemId() const { return m_playlistItemId; }
void BaseItemDto::setPlaylistItemId(QString newPlaylistItemId) {
	m_playlistItemId = newPlaylistItemId;
	emit playlistItemIdChanged(newPlaylistItemId);
}

QDateTime BaseItemDto::dateCreated() const { return m_dateCreated; }
void BaseItemDto::setDateCreated(QDateTime newDateCreated) {
	m_dateCreated = newDateCreated;
	emit dateCreatedChanged(newDateCreated);
}

QDateTime BaseItemDto::dateLastMediaAdded() const { return m_dateLastMediaAdded; }
void BaseItemDto::setDateLastMediaAdded(QDateTime newDateLastMediaAdded) {
	m_dateLastMediaAdded = newDateLastMediaAdded;
	emit dateLastMediaAddedChanged(newDateLastMediaAdded);
}

QString BaseItemDto::extraType() const { return m_extraType; }
void BaseItemDto::setExtraType(QString newExtraType) {
	m_extraType = newExtraType;
	emit extraTypeChanged(newExtraType);
}

qint32 BaseItemDto::airsBeforeSeasonNumber() const { return m_airsBeforeSeasonNumber; }
void BaseItemDto::setAirsBeforeSeasonNumber(qint32 newAirsBeforeSeasonNumber) {
	m_airsBeforeSeasonNumber = newAirsBeforeSeasonNumber;
	emit airsBeforeSeasonNumberChanged(newAirsBeforeSeasonNumber);
}

qint32 BaseItemDto::airsAfterSeasonNumber() const { return m_airsAfterSeasonNumber; }
void BaseItemDto::setAirsAfterSeasonNumber(qint32 newAirsAfterSeasonNumber) {
	m_airsAfterSeasonNumber = newAirsAfterSeasonNumber;
	emit airsAfterSeasonNumberChanged(newAirsAfterSeasonNumber);
}

qint32 BaseItemDto::airsBeforeEpisodeNumber() const { return m_airsBeforeEpisodeNumber; }
void BaseItemDto::setAirsBeforeEpisodeNumber(qint32 newAirsBeforeEpisodeNumber) {
	m_airsBeforeEpisodeNumber = newAirsBeforeEpisodeNumber;
	emit airsBeforeEpisodeNumberChanged(newAirsBeforeEpisodeNumber);
}

bool BaseItemDto::canDelete() const { return m_canDelete; }
void BaseItemDto::setCanDelete(bool newCanDelete) {
	m_canDelete = newCanDelete;
	emit canDeleteChanged(newCanDelete);
}

bool BaseItemDto::canDownload() const { return m_canDownload; }
void BaseItemDto::setCanDownload(bool newCanDownload) {
	m_canDownload = newCanDownload;
	emit canDownloadChanged(newCanDownload);
}

bool BaseItemDto::hasSubtitles() const { return m_hasSubtitles; }
void BaseItemDto::setHasSubtitles(bool newHasSubtitles) {
	m_hasSubtitles = newHasSubtitles;
	emit hasSubtitlesChanged(newHasSubtitles);
}

QString BaseItemDto::preferredMetadataLanguage() const { return m_preferredMetadataLanguage; }
void BaseItemDto::setPreferredMetadataLanguage(QString newPreferredMetadataLanguage) {
	m_preferredMetadataLanguage = newPreferredMetadataLanguage;
	emit preferredMetadataLanguageChanged(newPreferredMetadataLanguage);
}

QString BaseItemDto::preferredMetadataCountryCode() const { return m_preferredMetadataCountryCode; }
void BaseItemDto::setPreferredMetadataCountryCode(QString newPreferredMetadataCountryCode) {
	m_preferredMetadataCountryCode = newPreferredMetadataCountryCode;
	emit preferredMetadataCountryCodeChanged(newPreferredMetadataCountryCode);
}

bool BaseItemDto::supportsSync() const { return m_supportsSync; }
void BaseItemDto::setSupportsSync(bool newSupportsSync) {
	m_supportsSync = newSupportsSync;
	emit supportsSyncChanged(newSupportsSync);
}

QString BaseItemDto::container() const { return m_container; }
void BaseItemDto::setContainer(QString newContainer) {
	m_container = newContainer;
	emit containerChanged(newContainer);
}

QString BaseItemDto::sortName() const { return m_sortName; }
void BaseItemDto::setSortName(QString newSortName) {
	m_sortName = newSortName;
	emit sortNameChanged(newSortName);
}

QString BaseItemDto::forcedSortName() const { return m_forcedSortName; }
void BaseItemDto::setForcedSortName(QString newForcedSortName) {
	m_forcedSortName = newForcedSortName;
	emit forcedSortNameChanged(newForcedSortName);
}

Video3DFormat BaseItemDto::video3DFormat() const { return m_video3DFormat; }
void BaseItemDto::setVideo3DFormat(Video3DFormat newVideo3DFormat) {
	m_video3DFormat = newVideo3DFormat;
	emit video3DFormatChanged(newVideo3DFormat);
}

QDateTime BaseItemDto::premiereDate() const { return m_premiereDate; }
void BaseItemDto::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
	emit premiereDateChanged(newPremiereDate);
}

QList<ExternalUrl *> BaseItemDto::externalUrls() const { return m_externalUrls; }
void BaseItemDto::setExternalUrls(QList<ExternalUrl *> newExternalUrls) {
	m_externalUrls = newExternalUrls;
	emit externalUrlsChanged(newExternalUrls);
}

QList<MediaSourceInfo *> BaseItemDto::mediaSources() const { return m_mediaSources; }
void BaseItemDto::setMediaSources(QList<MediaSourceInfo *> newMediaSources) {
	m_mediaSources = newMediaSources;
	emit mediaSourcesChanged(newMediaSources);
}

float BaseItemDto::criticRating() const { return m_criticRating; }
void BaseItemDto::setCriticRating(float newCriticRating) {
	m_criticRating = newCriticRating;
	emit criticRatingChanged(newCriticRating);
}

QStringList BaseItemDto::productionLocations() const { return m_productionLocations; }
void BaseItemDto::setProductionLocations(QStringList newProductionLocations) {
	m_productionLocations = newProductionLocations;
	emit productionLocationsChanged(newProductionLocations);
}

QString BaseItemDto::path() const { return m_path; }
void BaseItemDto::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

bool BaseItemDto::enableMediaSourceDisplay() const { return m_enableMediaSourceDisplay; }
void BaseItemDto::setEnableMediaSourceDisplay(bool newEnableMediaSourceDisplay) {
	m_enableMediaSourceDisplay = newEnableMediaSourceDisplay;
	emit enableMediaSourceDisplayChanged(newEnableMediaSourceDisplay);
}

QString BaseItemDto::officialRating() const { return m_officialRating; }
void BaseItemDto::setOfficialRating(QString newOfficialRating) {
	m_officialRating = newOfficialRating;
	emit officialRatingChanged(newOfficialRating);
}

QString BaseItemDto::customRating() const { return m_customRating; }
void BaseItemDto::setCustomRating(QString newCustomRating) {
	m_customRating = newCustomRating;
	emit customRatingChanged(newCustomRating);
}

QString BaseItemDto::channelId() const { return m_channelId; }
void BaseItemDto::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
	emit channelIdChanged(newChannelId);
}

QString BaseItemDto::channelName() const { return m_channelName; }
void BaseItemDto::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
	emit channelNameChanged(newChannelName);
}

QString BaseItemDto::overview() const { return m_overview; }
void BaseItemDto::setOverview(QString newOverview) {
	m_overview = newOverview;
	emit overviewChanged(newOverview);
}

QStringList BaseItemDto::taglines() const { return m_taglines; }
void BaseItemDto::setTaglines(QStringList newTaglines) {
	m_taglines = newTaglines;
	emit taglinesChanged(newTaglines);
}

QStringList BaseItemDto::genres() const { return m_genres; }
void BaseItemDto::setGenres(QStringList newGenres) {
	m_genres = newGenres;
	emit genresChanged(newGenres);
}

float BaseItemDto::communityRating() const { return m_communityRating; }
void BaseItemDto::setCommunityRating(float newCommunityRating) {
	m_communityRating = newCommunityRating;
	emit communityRatingChanged(newCommunityRating);
}

qint64 BaseItemDto::cumulativeRunTimeTicks() const { return m_cumulativeRunTimeTicks; }
void BaseItemDto::setCumulativeRunTimeTicks(qint64 newCumulativeRunTimeTicks) {
	m_cumulativeRunTimeTicks = newCumulativeRunTimeTicks;
	emit cumulativeRunTimeTicksChanged(newCumulativeRunTimeTicks);
}

qint64 BaseItemDto::runTimeTicks() const { return m_runTimeTicks; }
void BaseItemDto::setRunTimeTicks(qint64 newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
	emit runTimeTicksChanged(newRunTimeTicks);
}

PlayAccess BaseItemDto::playAccess() const { return m_playAccess; }
void BaseItemDto::setPlayAccess(PlayAccess newPlayAccess) {
	m_playAccess = newPlayAccess;
	emit playAccessChanged(newPlayAccess);
}

QString BaseItemDto::aspectRatio() const { return m_aspectRatio; }
void BaseItemDto::setAspectRatio(QString newAspectRatio) {
	m_aspectRatio = newAspectRatio;
	emit aspectRatioChanged(newAspectRatio);
}

qint32 BaseItemDto::productionYear() const { return m_productionYear; }
void BaseItemDto::setProductionYear(qint32 newProductionYear) {
	m_productionYear = newProductionYear;
	emit productionYearChanged(newProductionYear);
}

bool BaseItemDto::isPlaceHolder() const { return m_isPlaceHolder; }
void BaseItemDto::setIsPlaceHolder(bool newIsPlaceHolder) {
	m_isPlaceHolder = newIsPlaceHolder;
	emit isPlaceHolderChanged(newIsPlaceHolder);
}

QString BaseItemDto::number() const { return m_number; }
void BaseItemDto::setNumber(QString newNumber) {
	m_number = newNumber;
	emit numberChanged(newNumber);
}

QString BaseItemDto::channelNumber() const { return m_channelNumber; }
void BaseItemDto::setChannelNumber(QString newChannelNumber) {
	m_channelNumber = newChannelNumber;
	emit channelNumberChanged(newChannelNumber);
}

qint32 BaseItemDto::indexNumber() const { return m_indexNumber; }
void BaseItemDto::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
	emit indexNumberChanged(newIndexNumber);
}

qint32 BaseItemDto::indexNumberEnd() const { return m_indexNumberEnd; }
void BaseItemDto::setIndexNumberEnd(qint32 newIndexNumberEnd) {
	m_indexNumberEnd = newIndexNumberEnd;
	emit indexNumberEndChanged(newIndexNumberEnd);
}

qint32 BaseItemDto::parentIndexNumber() const { return m_parentIndexNumber; }
void BaseItemDto::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
	emit parentIndexNumberChanged(newParentIndexNumber);
}

QList<MediaUrl *> BaseItemDto::remoteTrailers() const { return m_remoteTrailers; }
void BaseItemDto::setRemoteTrailers(QList<MediaUrl *> newRemoteTrailers) {
	m_remoteTrailers = newRemoteTrailers;
	emit remoteTrailersChanged(newRemoteTrailers);
}

QJsonObject BaseItemDto::providerIds() const { return m_providerIds; }
void BaseItemDto::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
	emit providerIdsChanged(newProviderIds);
}

bool BaseItemDto::isHD() const { return m_isHD; }
void BaseItemDto::setIsHD(bool newIsHD) {
	m_isHD = newIsHD;
	emit isHDChanged(newIsHD);
}

bool BaseItemDto::isFolder() const { return m_isFolder; }
void BaseItemDto::setIsFolder(bool newIsFolder) {
	m_isFolder = newIsFolder;
	emit isFolderChanged(newIsFolder);
}

QString BaseItemDto::parentId() const { return m_parentId; }
void BaseItemDto::setParentId(QString newParentId) {
	m_parentId = newParentId;
	emit parentIdChanged(newParentId);
}

QString BaseItemDto::type() const { return m_type; }
void BaseItemDto::setType(QString newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QList<BaseItemPerson *> BaseItemDto::people() const { return m_people; }
void BaseItemDto::setPeople(QList<BaseItemPerson *> newPeople) {
	m_people = newPeople;
	emit peopleChanged(newPeople);
}

QList<NameGuidPair *> BaseItemDto::studios() const { return m_studios; }
void BaseItemDto::setStudios(QList<NameGuidPair *> newStudios) {
	m_studios = newStudios;
	emit studiosChanged(newStudios);
}

QList<NameGuidPair *> BaseItemDto::genreItems() const { return m_genreItems; }
void BaseItemDto::setGenreItems(QList<NameGuidPair *> newGenreItems) {
	m_genreItems = newGenreItems;
	emit genreItemsChanged(newGenreItems);
}

QString BaseItemDto::parentLogoItemId() const { return m_parentLogoItemId; }
void BaseItemDto::setParentLogoItemId(QString newParentLogoItemId) {
	m_parentLogoItemId = newParentLogoItemId;
	emit parentLogoItemIdChanged(newParentLogoItemId);
}

QString BaseItemDto::parentBackdropItemId() const { return m_parentBackdropItemId; }
void BaseItemDto::setParentBackdropItemId(QString newParentBackdropItemId) {
	m_parentBackdropItemId = newParentBackdropItemId;
	emit parentBackdropItemIdChanged(newParentBackdropItemId);
}

QStringList BaseItemDto::parentBackdropImageTags() const { return m_parentBackdropImageTags; }
void BaseItemDto::setParentBackdropImageTags(QStringList newParentBackdropImageTags) {
	m_parentBackdropImageTags = newParentBackdropImageTags;
	emit parentBackdropImageTagsChanged(newParentBackdropImageTags);
}

qint32 BaseItemDto::localTrailerCount() const { return m_localTrailerCount; }
void BaseItemDto::setLocalTrailerCount(qint32 newLocalTrailerCount) {
	m_localTrailerCount = newLocalTrailerCount;
	emit localTrailerCountChanged(newLocalTrailerCount);
}

UserItemDataDto * BaseItemDto::userData() const { return m_userData; }
void BaseItemDto::setUserData(UserItemDataDto * newUserData) {
	m_userData = newUserData;
	emit userDataChanged(newUserData);
}

qint32 BaseItemDto::recursiveItemCount() const { return m_recursiveItemCount; }
void BaseItemDto::setRecursiveItemCount(qint32 newRecursiveItemCount) {
	m_recursiveItemCount = newRecursiveItemCount;
	emit recursiveItemCountChanged(newRecursiveItemCount);
}

qint32 BaseItemDto::childCount() const { return m_childCount; }
void BaseItemDto::setChildCount(qint32 newChildCount) {
	m_childCount = newChildCount;
	emit childCountChanged(newChildCount);
}

QString BaseItemDto::seriesName() const { return m_seriesName; }
void BaseItemDto::setSeriesName(QString newSeriesName) {
	m_seriesName = newSeriesName;
	emit seriesNameChanged(newSeriesName);
}

QString BaseItemDto::seriesId() const { return m_seriesId; }
void BaseItemDto::setSeriesId(QString newSeriesId) {
	m_seriesId = newSeriesId;
	emit seriesIdChanged(newSeriesId);
}

QString BaseItemDto::seasonId() const { return m_seasonId; }
void BaseItemDto::setSeasonId(QString newSeasonId) {
	m_seasonId = newSeasonId;
	emit seasonIdChanged(newSeasonId);
}

qint32 BaseItemDto::specialFeatureCount() const { return m_specialFeatureCount; }
void BaseItemDto::setSpecialFeatureCount(qint32 newSpecialFeatureCount) {
	m_specialFeatureCount = newSpecialFeatureCount;
	emit specialFeatureCountChanged(newSpecialFeatureCount);
}

QString BaseItemDto::displayPreferencesId() const { return m_displayPreferencesId; }
void BaseItemDto::setDisplayPreferencesId(QString newDisplayPreferencesId) {
	m_displayPreferencesId = newDisplayPreferencesId;
	emit displayPreferencesIdChanged(newDisplayPreferencesId);
}

QString BaseItemDto::status() const { return m_status; }
void BaseItemDto::setStatus(QString newStatus) {
	m_status = newStatus;
	emit statusChanged(newStatus);
}

QString BaseItemDto::airTime() const { return m_airTime; }
void BaseItemDto::setAirTime(QString newAirTime) {
	m_airTime = newAirTime;
	emit airTimeChanged(newAirTime);
}

QList<DayOfWeek> BaseItemDto::airDays() const { return m_airDays; }
void BaseItemDto::setAirDays(QList<DayOfWeek> newAirDays) {
	m_airDays = newAirDays;
	emit airDaysChanged(newAirDays);
}

QStringList BaseItemDto::tags() const { return m_tags; }
void BaseItemDto::setTags(QStringList newTags) {
	m_tags = newTags;
	emit tagsChanged(newTags);
}

double BaseItemDto::primaryImageAspectRatio() const { return m_primaryImageAspectRatio; }
void BaseItemDto::setPrimaryImageAspectRatio(double newPrimaryImageAspectRatio) {
	m_primaryImageAspectRatio = newPrimaryImageAspectRatio;
	emit primaryImageAspectRatioChanged(newPrimaryImageAspectRatio);
}

QStringList BaseItemDto::artists() const { return m_artists; }
void BaseItemDto::setArtists(QStringList newArtists) {
	m_artists = newArtists;
	emit artistsChanged(newArtists);
}

QList<NameGuidPair *> BaseItemDto::artistItems() const { return m_artistItems; }
void BaseItemDto::setArtistItems(QList<NameGuidPair *> newArtistItems) {
	m_artistItems = newArtistItems;
	emit artistItemsChanged(newArtistItems);
}

QString BaseItemDto::album() const { return m_album; }
void BaseItemDto::setAlbum(QString newAlbum) {
	m_album = newAlbum;
	emit albumChanged(newAlbum);
}

QString BaseItemDto::collectionType() const { return m_collectionType; }
void BaseItemDto::setCollectionType(QString newCollectionType) {
	m_collectionType = newCollectionType;
	emit collectionTypeChanged(newCollectionType);
}

QString BaseItemDto::displayOrder() const { return m_displayOrder; }
void BaseItemDto::setDisplayOrder(QString newDisplayOrder) {
	m_displayOrder = newDisplayOrder;
	emit displayOrderChanged(newDisplayOrder);
}

QString BaseItemDto::albumId() const { return m_albumId; }
void BaseItemDto::setAlbumId(QString newAlbumId) {
	m_albumId = newAlbumId;
	emit albumIdChanged(newAlbumId);
}

QString BaseItemDto::albumPrimaryImageTag() const { return m_albumPrimaryImageTag; }
void BaseItemDto::setAlbumPrimaryImageTag(QString newAlbumPrimaryImageTag) {
	m_albumPrimaryImageTag = newAlbumPrimaryImageTag;
	emit albumPrimaryImageTagChanged(newAlbumPrimaryImageTag);
}

QString BaseItemDto::seriesPrimaryImageTag() const { return m_seriesPrimaryImageTag; }
void BaseItemDto::setSeriesPrimaryImageTag(QString newSeriesPrimaryImageTag) {
	m_seriesPrimaryImageTag = newSeriesPrimaryImageTag;
	emit seriesPrimaryImageTagChanged(newSeriesPrimaryImageTag);
}

QString BaseItemDto::albumArtist() const { return m_albumArtist; }
void BaseItemDto::setAlbumArtist(QString newAlbumArtist) {
	m_albumArtist = newAlbumArtist;
	emit albumArtistChanged(newAlbumArtist);
}

QList<NameGuidPair *> BaseItemDto::albumArtists() const { return m_albumArtists; }
void BaseItemDto::setAlbumArtists(QList<NameGuidPair *> newAlbumArtists) {
	m_albumArtists = newAlbumArtists;
	emit albumArtistsChanged(newAlbumArtists);
}

QString BaseItemDto::seasonName() const { return m_seasonName; }
void BaseItemDto::setSeasonName(QString newSeasonName) {
	m_seasonName = newSeasonName;
	emit seasonNameChanged(newSeasonName);
}

QList<MediaStream *> BaseItemDto::mediaStreams() const { return m_mediaStreams; }
void BaseItemDto::setMediaStreams(QList<MediaStream *> newMediaStreams) {
	m_mediaStreams = newMediaStreams;
	emit mediaStreamsChanged(newMediaStreams);
}

VideoType BaseItemDto::videoType() const { return m_videoType; }
void BaseItemDto::setVideoType(VideoType newVideoType) {
	m_videoType = newVideoType;
	emit videoTypeChanged(newVideoType);
}

qint32 BaseItemDto::partCount() const { return m_partCount; }
void BaseItemDto::setPartCount(qint32 newPartCount) {
	m_partCount = newPartCount;
	emit partCountChanged(newPartCount);
}

qint32 BaseItemDto::mediaSourceCount() const { return m_mediaSourceCount; }
void BaseItemDto::setMediaSourceCount(qint32 newMediaSourceCount) {
	m_mediaSourceCount = newMediaSourceCount;
	emit mediaSourceCountChanged(newMediaSourceCount);
}

QJsonObject BaseItemDto::imageTags() const { return m_imageTags; }
void BaseItemDto::setImageTags(QJsonObject newImageTags) {
	m_imageTags = newImageTags;
	emit imageTagsChanged(newImageTags);
}

QStringList BaseItemDto::backdropImageTags() const { return m_backdropImageTags; }
void BaseItemDto::setBackdropImageTags(QStringList newBackdropImageTags) {
	m_backdropImageTags = newBackdropImageTags;
	emit backdropImageTagsChanged(newBackdropImageTags);
}

QStringList BaseItemDto::screenshotImageTags() const { return m_screenshotImageTags; }
void BaseItemDto::setScreenshotImageTags(QStringList newScreenshotImageTags) {
	m_screenshotImageTags = newScreenshotImageTags;
	emit screenshotImageTagsChanged(newScreenshotImageTags);
}

QString BaseItemDto::parentLogoImageTag() const { return m_parentLogoImageTag; }
void BaseItemDto::setParentLogoImageTag(QString newParentLogoImageTag) {
	m_parentLogoImageTag = newParentLogoImageTag;
	emit parentLogoImageTagChanged(newParentLogoImageTag);
}

QString BaseItemDto::parentArtItemId() const { return m_parentArtItemId; }
void BaseItemDto::setParentArtItemId(QString newParentArtItemId) {
	m_parentArtItemId = newParentArtItemId;
	emit parentArtItemIdChanged(newParentArtItemId);
}

QString BaseItemDto::parentArtImageTag() const { return m_parentArtImageTag; }
void BaseItemDto::setParentArtImageTag(QString newParentArtImageTag) {
	m_parentArtImageTag = newParentArtImageTag;
	emit parentArtImageTagChanged(newParentArtImageTag);
}

QString BaseItemDto::seriesThumbImageTag() const { return m_seriesThumbImageTag; }
void BaseItemDto::setSeriesThumbImageTag(QString newSeriesThumbImageTag) {
	m_seriesThumbImageTag = newSeriesThumbImageTag;
	emit seriesThumbImageTagChanged(newSeriesThumbImageTag);
}

QJsonObject BaseItemDto::imageBlurHashes() const { return m_imageBlurHashes; }
void BaseItemDto::setImageBlurHashes(QJsonObject newImageBlurHashes) {
	m_imageBlurHashes = newImageBlurHashes;
	emit imageBlurHashesChanged(newImageBlurHashes);
}

QString BaseItemDto::seriesStudio() const { return m_seriesStudio; }
void BaseItemDto::setSeriesStudio(QString newSeriesStudio) {
	m_seriesStudio = newSeriesStudio;
	emit seriesStudioChanged(newSeriesStudio);
}

QString BaseItemDto::parentThumbItemId() const { return m_parentThumbItemId; }
void BaseItemDto::setParentThumbItemId(QString newParentThumbItemId) {
	m_parentThumbItemId = newParentThumbItemId;
	emit parentThumbItemIdChanged(newParentThumbItemId);
}

QString BaseItemDto::parentThumbImageTag() const { return m_parentThumbImageTag; }
void BaseItemDto::setParentThumbImageTag(QString newParentThumbImageTag) {
	m_parentThumbImageTag = newParentThumbImageTag;
	emit parentThumbImageTagChanged(newParentThumbImageTag);
}

QString BaseItemDto::parentPrimaryImageItemId() const { return m_parentPrimaryImageItemId; }
void BaseItemDto::setParentPrimaryImageItemId(QString newParentPrimaryImageItemId) {
	m_parentPrimaryImageItemId = newParentPrimaryImageItemId;
	emit parentPrimaryImageItemIdChanged(newParentPrimaryImageItemId);
}

QString BaseItemDto::parentPrimaryImageTag() const { return m_parentPrimaryImageTag; }
void BaseItemDto::setParentPrimaryImageTag(QString newParentPrimaryImageTag) {
	m_parentPrimaryImageTag = newParentPrimaryImageTag;
	emit parentPrimaryImageTagChanged(newParentPrimaryImageTag);
}

QList<ChapterInfo *> BaseItemDto::chapters() const { return m_chapters; }
void BaseItemDto::setChapters(QList<ChapterInfo *> newChapters) {
	m_chapters = newChapters;
	emit chaptersChanged(newChapters);
}

LocationType BaseItemDto::locationType() const { return m_locationType; }
void BaseItemDto::setLocationType(LocationType newLocationType) {
	m_locationType = newLocationType;
	emit locationTypeChanged(newLocationType);
}

IsoType BaseItemDto::isoType() const { return m_isoType; }
void BaseItemDto::setIsoType(IsoType newIsoType) {
	m_isoType = newIsoType;
	emit isoTypeChanged(newIsoType);
}

QString BaseItemDto::mediaType() const { return m_mediaType; }
void BaseItemDto::setMediaType(QString newMediaType) {
	m_mediaType = newMediaType;
	emit mediaTypeChanged(newMediaType);
}

QDateTime BaseItemDto::endDate() const { return m_endDate; }
void BaseItemDto::setEndDate(QDateTime newEndDate) {
	m_endDate = newEndDate;
	emit endDateChanged(newEndDate);
}

QList<MetadataField> BaseItemDto::lockedFields() const { return m_lockedFields; }
void BaseItemDto::setLockedFields(QList<MetadataField> newLockedFields) {
	m_lockedFields = newLockedFields;
	emit lockedFieldsChanged(newLockedFields);
}

qint32 BaseItemDto::trailerCount() const { return m_trailerCount; }
void BaseItemDto::setTrailerCount(qint32 newTrailerCount) {
	m_trailerCount = newTrailerCount;
	emit trailerCountChanged(newTrailerCount);
}

qint32 BaseItemDto::movieCount() const { return m_movieCount; }
void BaseItemDto::setMovieCount(qint32 newMovieCount) {
	m_movieCount = newMovieCount;
	emit movieCountChanged(newMovieCount);
}

qint32 BaseItemDto::seriesCount() const { return m_seriesCount; }
void BaseItemDto::setSeriesCount(qint32 newSeriesCount) {
	m_seriesCount = newSeriesCount;
	emit seriesCountChanged(newSeriesCount);
}

qint32 BaseItemDto::programCount() const { return m_programCount; }
void BaseItemDto::setProgramCount(qint32 newProgramCount) {
	m_programCount = newProgramCount;
	emit programCountChanged(newProgramCount);
}

qint32 BaseItemDto::episodeCount() const { return m_episodeCount; }
void BaseItemDto::setEpisodeCount(qint32 newEpisodeCount) {
	m_episodeCount = newEpisodeCount;
	emit episodeCountChanged(newEpisodeCount);
}

qint32 BaseItemDto::songCount() const { return m_songCount; }
void BaseItemDto::setSongCount(qint32 newSongCount) {
	m_songCount = newSongCount;
	emit songCountChanged(newSongCount);
}

qint32 BaseItemDto::albumCount() const { return m_albumCount; }
void BaseItemDto::setAlbumCount(qint32 newAlbumCount) {
	m_albumCount = newAlbumCount;
	emit albumCountChanged(newAlbumCount);
}

qint32 BaseItemDto::artistCount() const { return m_artistCount; }
void BaseItemDto::setArtistCount(qint32 newArtistCount) {
	m_artistCount = newArtistCount;
	emit artistCountChanged(newArtistCount);
}

qint32 BaseItemDto::musicVideoCount() const { return m_musicVideoCount; }
void BaseItemDto::setMusicVideoCount(qint32 newMusicVideoCount) {
	m_musicVideoCount = newMusicVideoCount;
	emit musicVideoCountChanged(newMusicVideoCount);
}

bool BaseItemDto::lockData() const { return m_lockData; }
void BaseItemDto::setLockData(bool newLockData) {
	m_lockData = newLockData;
	emit lockDataChanged(newLockData);
}

qint32 BaseItemDto::width() const { return m_width; }
void BaseItemDto::setWidth(qint32 newWidth) {
	m_width = newWidth;
	emit widthChanged(newWidth);
}

qint32 BaseItemDto::height() const { return m_height; }
void BaseItemDto::setHeight(qint32 newHeight) {
	m_height = newHeight;
	emit heightChanged(newHeight);
}

QString BaseItemDto::cameraMake() const { return m_cameraMake; }
void BaseItemDto::setCameraMake(QString newCameraMake) {
	m_cameraMake = newCameraMake;
	emit cameraMakeChanged(newCameraMake);
}

QString BaseItemDto::cameraModel() const { return m_cameraModel; }
void BaseItemDto::setCameraModel(QString newCameraModel) {
	m_cameraModel = newCameraModel;
	emit cameraModelChanged(newCameraModel);
}

QString BaseItemDto::software() const { return m_software; }
void BaseItemDto::setSoftware(QString newSoftware) {
	m_software = newSoftware;
	emit softwareChanged(newSoftware);
}

double BaseItemDto::exposureTime() const { return m_exposureTime; }
void BaseItemDto::setExposureTime(double newExposureTime) {
	m_exposureTime = newExposureTime;
	emit exposureTimeChanged(newExposureTime);
}

double BaseItemDto::focalLength() const { return m_focalLength; }
void BaseItemDto::setFocalLength(double newFocalLength) {
	m_focalLength = newFocalLength;
	emit focalLengthChanged(newFocalLength);
}

ImageOrientation BaseItemDto::imageOrientation() const { return m_imageOrientation; }
void BaseItemDto::setImageOrientation(ImageOrientation newImageOrientation) {
	m_imageOrientation = newImageOrientation;
	emit imageOrientationChanged(newImageOrientation);
}

double BaseItemDto::aperture() const { return m_aperture; }
void BaseItemDto::setAperture(double newAperture) {
	m_aperture = newAperture;
	emit apertureChanged(newAperture);
}

double BaseItemDto::shutterSpeed() const { return m_shutterSpeed; }
void BaseItemDto::setShutterSpeed(double newShutterSpeed) {
	m_shutterSpeed = newShutterSpeed;
	emit shutterSpeedChanged(newShutterSpeed);
}

double BaseItemDto::latitude() const { return m_latitude; }
void BaseItemDto::setLatitude(double newLatitude) {
	m_latitude = newLatitude;
	emit latitudeChanged(newLatitude);
}

double BaseItemDto::longitude() const { return m_longitude; }
void BaseItemDto::setLongitude(double newLongitude) {
	m_longitude = newLongitude;
	emit longitudeChanged(newLongitude);
}

double BaseItemDto::altitude() const { return m_altitude; }
void BaseItemDto::setAltitude(double newAltitude) {
	m_altitude = newAltitude;
	emit altitudeChanged(newAltitude);
}

qint32 BaseItemDto::isoSpeedRating() const { return m_isoSpeedRating; }
void BaseItemDto::setIsoSpeedRating(qint32 newIsoSpeedRating) {
	m_isoSpeedRating = newIsoSpeedRating;
	emit isoSpeedRatingChanged(newIsoSpeedRating);
}

QString BaseItemDto::seriesTimerId() const { return m_seriesTimerId; }
void BaseItemDto::setSeriesTimerId(QString newSeriesTimerId) {
	m_seriesTimerId = newSeriesTimerId;
	emit seriesTimerIdChanged(newSeriesTimerId);
}

QString BaseItemDto::programId() const { return m_programId; }
void BaseItemDto::setProgramId(QString newProgramId) {
	m_programId = newProgramId;
	emit programIdChanged(newProgramId);
}

QString BaseItemDto::channelPrimaryImageTag() const { return m_channelPrimaryImageTag; }
void BaseItemDto::setChannelPrimaryImageTag(QString newChannelPrimaryImageTag) {
	m_channelPrimaryImageTag = newChannelPrimaryImageTag;
	emit channelPrimaryImageTagChanged(newChannelPrimaryImageTag);
}

QDateTime BaseItemDto::startDate() const { return m_startDate; }
void BaseItemDto::setStartDate(QDateTime newStartDate) {
	m_startDate = newStartDate;
	emit startDateChanged(newStartDate);
}

double BaseItemDto::completionPercentage() const { return m_completionPercentage; }
void BaseItemDto::setCompletionPercentage(double newCompletionPercentage) {
	m_completionPercentage = newCompletionPercentage;
	emit completionPercentageChanged(newCompletionPercentage);
}

bool BaseItemDto::isRepeat() const { return m_isRepeat; }
void BaseItemDto::setIsRepeat(bool newIsRepeat) {
	m_isRepeat = newIsRepeat;
	emit isRepeatChanged(newIsRepeat);
}

QString BaseItemDto::episodeTitle() const { return m_episodeTitle; }
void BaseItemDto::setEpisodeTitle(QString newEpisodeTitle) {
	m_episodeTitle = newEpisodeTitle;
	emit episodeTitleChanged(newEpisodeTitle);
}

ChannelType BaseItemDto::channelType() const { return m_channelType; }
void BaseItemDto::setChannelType(ChannelType newChannelType) {
	m_channelType = newChannelType;
	emit channelTypeChanged(newChannelType);
}

ProgramAudio BaseItemDto::audio() const { return m_audio; }
void BaseItemDto::setAudio(ProgramAudio newAudio) {
	m_audio = newAudio;
	emit audioChanged(newAudio);
}

bool BaseItemDto::isMovie() const { return m_isMovie; }
void BaseItemDto::setIsMovie(bool newIsMovie) {
	m_isMovie = newIsMovie;
	emit isMovieChanged(newIsMovie);
}

bool BaseItemDto::isSports() const { return m_isSports; }
void BaseItemDto::setIsSports(bool newIsSports) {
	m_isSports = newIsSports;
	emit isSportsChanged(newIsSports);
}

bool BaseItemDto::isSeries() const { return m_isSeries; }
void BaseItemDto::setIsSeries(bool newIsSeries) {
	m_isSeries = newIsSeries;
	emit isSeriesChanged(newIsSeries);
}

bool BaseItemDto::isLive() const { return m_isLive; }
void BaseItemDto::setIsLive(bool newIsLive) {
	m_isLive = newIsLive;
	emit isLiveChanged(newIsLive);
}

bool BaseItemDto::isNews() const { return m_isNews; }
void BaseItemDto::setIsNews(bool newIsNews) {
	m_isNews = newIsNews;
	emit isNewsChanged(newIsNews);
}

bool BaseItemDto::isKids() const { return m_isKids; }
void BaseItemDto::setIsKids(bool newIsKids) {
	m_isKids = newIsKids;
	emit isKidsChanged(newIsKids);
}

bool BaseItemDto::isPremiere() const { return m_isPremiere; }
void BaseItemDto::setIsPremiere(bool newIsPremiere) {
	m_isPremiere = newIsPremiere;
	emit isPremiereChanged(newIsPremiere);
}

QString BaseItemDto::timerId() const { return m_timerId; }
void BaseItemDto::setTimerId(QString newTimerId) {
	m_timerId = newTimerId;
	emit timerIdChanged(newTimerId);
}

BaseItemDto * BaseItemDto::currentProgram() const { return m_currentProgram; }
void BaseItemDto::setCurrentProgram(BaseItemDto * newCurrentProgram) {
	m_currentProgram = newCurrentProgram;
	emit currentProgramChanged(newCurrentProgram);
}


} // NS Jellyfin
} // NS DTO

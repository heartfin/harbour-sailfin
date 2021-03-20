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

#ifndef JELLYFIN_DTO_BASEITEMDTO_H
#define JELLYFIN_DTO_BASEITEMDTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/baseitemperson.h"
#include "JellyfinQt/DTO/channeltype.h"
#include "JellyfinQt/DTO/chapterinfo.h"
#include "JellyfinQt/DTO/dayofweek.h"
#include "JellyfinQt/DTO/externalurl.h"
#include "JellyfinQt/DTO/imageorientation.h"
#include "JellyfinQt/DTO/isotype.h"
#include "JellyfinQt/DTO/locationtype.h"
#include "JellyfinQt/DTO/mediasourceinfo.h"
#include "JellyfinQt/DTO/mediastream.h"
#include "JellyfinQt/DTO/mediaurl.h"
#include "JellyfinQt/DTO/metadatafield.h"
#include "JellyfinQt/DTO/nameguidpair.h"
#include "JellyfinQt/DTO/playaccess.h"
#include "JellyfinQt/DTO/programaudio.h"
#include "JellyfinQt/DTO/useritemdatadto.h"
#include "JellyfinQt/DTO/video3dformat.h"
#include "JellyfinQt/DTO/videotype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class BaseItemDto {
public:
	explicit BaseItemDto();
	static BaseItemDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);

	QString originalTitle() const;

	void setOriginalTitle(QString newOriginalTitle);
	/**
	 * @brief Gets or sets the server identifier.
	 */
	QString serverId() const;
	/**
	* @brief Gets or sets the server identifier.
	*/
	void setServerId(QString newServerId);
	/**
	 * @brief Gets or sets the id.
	 */
	QUuid jellyfinId() const;
	/**
	* @brief Gets or sets the id.
	*/
	void setJellyfinId(QUuid newJellyfinId);
	/**
	 * @brief Gets or sets the etag.
	 */
	QString etag() const;
	/**
	* @brief Gets or sets the etag.
	*/
	void setEtag(QString newEtag);
	/**
	 * @brief Gets or sets the type of the source.
	 */
	QString sourceType() const;
	/**
	* @brief Gets or sets the type of the source.
	*/
	void setSourceType(QString newSourceType);
	/**
	 * @brief Gets or sets the playlist item identifier.
	 */
	QString playlistItemId() const;
	/**
	* @brief Gets or sets the playlist item identifier.
	*/
	void setPlaylistItemId(QString newPlaylistItemId);
	/**
	 * @brief Gets or sets the date created.
	 */
	QDateTime dateCreated() const;
	/**
	* @brief Gets or sets the date created.
	*/
	void setDateCreated(QDateTime newDateCreated);

	QDateTime dateLastMediaAdded() const;

	void setDateLastMediaAdded(QDateTime newDateLastMediaAdded);

	QString extraType() const;

	void setExtraType(QString newExtraType);

	qint32 airsBeforeSeasonNumber() const;

	void setAirsBeforeSeasonNumber(qint32 newAirsBeforeSeasonNumber);

	qint32 airsAfterSeasonNumber() const;

	void setAirsAfterSeasonNumber(qint32 newAirsAfterSeasonNumber);

	qint32 airsBeforeEpisodeNumber() const;

	void setAirsBeforeEpisodeNumber(qint32 newAirsBeforeEpisodeNumber);

	bool canDelete() const;

	void setCanDelete(bool newCanDelete);

	bool canDownload() const;

	void setCanDownload(bool newCanDownload);

	bool hasSubtitles() const;

	void setHasSubtitles(bool newHasSubtitles);

	QString preferredMetadataLanguage() const;

	void setPreferredMetadataLanguage(QString newPreferredMetadataLanguage);

	QString preferredMetadataCountryCode() const;

	void setPreferredMetadataCountryCode(QString newPreferredMetadataCountryCode);
	/**
	 * @brief Gets or sets a value indicating whether [supports synchronize].
	 */
	bool supportsSync() const;
	/**
	* @brief Gets or sets a value indicating whether [supports synchronize].
	*/
	void setSupportsSync(bool newSupportsSync);

	QString container() const;

	void setContainer(QString newContainer);
	/**
	 * @brief Gets or sets the name of the sort.
	 */
	QString sortName() const;
	/**
	* @brief Gets or sets the name of the sort.
	*/
	void setSortName(QString newSortName);

	QString forcedSortName() const;

	void setForcedSortName(QString newForcedSortName);

	Video3DFormat video3DFormat() const;

	void setVideo3DFormat(Video3DFormat newVideo3DFormat);
	/**
	 * @brief Gets or sets the premiere date.
	 */
	QDateTime premiereDate() const;
	/**
	* @brief Gets or sets the premiere date.
	*/
	void setPremiereDate(QDateTime newPremiereDate);
	/**
	 * @brief Gets or sets the external urls.
	 */
	QList<QSharedPointer<ExternalUrl>> externalUrls() const;
	/**
	* @brief Gets or sets the external urls.
	*/
	void setExternalUrls(QList<QSharedPointer<ExternalUrl>> newExternalUrls);
	/**
	 * @brief Gets or sets the media versions.
	 */
	QList<QSharedPointer<MediaSourceInfo>> mediaSources() const;
	/**
	* @brief Gets or sets the media versions.
	*/
	void setMediaSources(QList<QSharedPointer<MediaSourceInfo>> newMediaSources);
	/**
	 * @brief Gets or sets the critic rating.
	 */
	float criticRating() const;
	/**
	* @brief Gets or sets the critic rating.
	*/
	void setCriticRating(float newCriticRating);

	QStringList productionLocations() const;

	void setProductionLocations(QStringList newProductionLocations);
	/**
	 * @brief Gets or sets the path.
	 */
	QString path() const;
	/**
	* @brief Gets or sets the path.
	*/
	void setPath(QString newPath);

	bool enableMediaSourceDisplay() const;

	void setEnableMediaSourceDisplay(bool newEnableMediaSourceDisplay);
	/**
	 * @brief Gets or sets the official rating.
	 */
	QString officialRating() const;
	/**
	* @brief Gets or sets the official rating.
	*/
	void setOfficialRating(QString newOfficialRating);
	/**
	 * @brief Gets or sets the custom rating.
	 */
	QString customRating() const;
	/**
	* @brief Gets or sets the custom rating.
	*/
	void setCustomRating(QString newCustomRating);
	/**
	 * @brief Gets or sets the channel identifier.
	 */
	QUuid channelId() const;
	/**
	* @brief Gets or sets the channel identifier.
	*/
	void setChannelId(QUuid newChannelId);

	QString channelName() const;

	void setChannelName(QString newChannelName);
	/**
	 * @brief Gets or sets the overview.
	 */
	QString overview() const;
	/**
	* @brief Gets or sets the overview.
	*/
	void setOverview(QString newOverview);
	/**
	 * @brief Gets or sets the taglines.
	 */
	QStringList taglines() const;
	/**
	* @brief Gets or sets the taglines.
	*/
	void setTaglines(QStringList newTaglines);
	/**
	 * @brief Gets or sets the genres.
	 */
	QStringList genres() const;
	/**
	* @brief Gets or sets the genres.
	*/
	void setGenres(QStringList newGenres);
	/**
	 * @brief Gets or sets the community rating.
	 */
	float communityRating() const;
	/**
	* @brief Gets or sets the community rating.
	*/
	void setCommunityRating(float newCommunityRating);
	/**
	 * @brief Gets or sets the cumulative run time ticks.
	 */
	qint64 cumulativeRunTimeTicks() const;
	/**
	* @brief Gets or sets the cumulative run time ticks.
	*/
	void setCumulativeRunTimeTicks(qint64 newCumulativeRunTimeTicks);
	/**
	 * @brief Gets or sets the run time ticks.
	 */
	qint64 runTimeTicks() const;
	/**
	* @brief Gets or sets the run time ticks.
	*/
	void setRunTimeTicks(qint64 newRunTimeTicks);

	PlayAccess playAccess() const;

	void setPlayAccess(PlayAccess newPlayAccess);
	/**
	 * @brief Gets or sets the aspect ratio.
	 */
	QString aspectRatio() const;
	/**
	* @brief Gets or sets the aspect ratio.
	*/
	void setAspectRatio(QString newAspectRatio);
	/**
	 * @brief Gets or sets the production year.
	 */
	qint32 productionYear() const;
	/**
	* @brief Gets or sets the production year.
	*/
	void setProductionYear(qint32 newProductionYear);
	/**
	 * @brief Gets or sets a value indicating whether this instance is place holder.
	 */
	bool isPlaceHolder() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is place holder.
	*/
	void setIsPlaceHolder(bool newIsPlaceHolder);
	/**
	 * @brief Gets or sets the number.
	 */
	QString number() const;
	/**
	* @brief Gets or sets the number.
	*/
	void setNumber(QString newNumber);

	QString channelNumber() const;

	void setChannelNumber(QString newChannelNumber);
	/**
	 * @brief Gets or sets the index number.
	 */
	qint32 indexNumber() const;
	/**
	* @brief Gets or sets the index number.
	*/
	void setIndexNumber(qint32 newIndexNumber);
	/**
	 * @brief Gets or sets the index number end.
	 */
	qint32 indexNumberEnd() const;
	/**
	* @brief Gets or sets the index number end.
	*/
	void setIndexNumberEnd(qint32 newIndexNumberEnd);
	/**
	 * @brief Gets or sets the parent index number.
	 */
	qint32 parentIndexNumber() const;
	/**
	* @brief Gets or sets the parent index number.
	*/
	void setParentIndexNumber(qint32 newParentIndexNumber);
	/**
	 * @brief Gets or sets the trailer urls.
	 */
	QList<QSharedPointer<MediaUrl>> remoteTrailers() const;
	/**
	* @brief Gets or sets the trailer urls.
	*/
	void setRemoteTrailers(QList<QSharedPointer<MediaUrl>> newRemoteTrailers);
	/**
	 * @brief Gets or sets the provider ids.
	 */
	QJsonObject providerIds() const;
	/**
	* @brief Gets or sets the provider ids.
	*/
	void setProviderIds(QJsonObject newProviderIds);
	/**
	 * @brief Gets or sets a value indicating whether this instance is HD.
	 */
	bool isHD() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is HD.
	*/
	void setIsHD(bool newIsHD);
	/**
	 * @brief Gets or sets a value indicating whether this instance is folder.
	 */
	bool isFolder() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is folder.
	*/
	void setIsFolder(bool newIsFolder);
	/**
	 * @brief Gets or sets the parent id.
	 */
	QUuid parentId() const;
	/**
	* @brief Gets or sets the parent id.
	*/
	void setParentId(QUuid newParentId);
	/**
	 * @brief Gets or sets the type.
	 */
	QString type() const;
	/**
	* @brief Gets or sets the type.
	*/
	void setType(QString newType);
	/**
	 * @brief Gets or sets the people.
	 */
	QList<QSharedPointer<BaseItemPerson>> people() const;
	/**
	* @brief Gets or sets the people.
	*/
	void setPeople(QList<QSharedPointer<BaseItemPerson>> newPeople);
	/**
	 * @brief Gets or sets the studios.
	 */
	QList<QSharedPointer<NameGuidPair>> studios() const;
	/**
	* @brief Gets or sets the studios.
	*/
	void setStudios(QList<QSharedPointer<NameGuidPair>> newStudios);

	QList<QSharedPointer<NameGuidPair>> genreItems() const;

	void setGenreItems(QList<QSharedPointer<NameGuidPair>> newGenreItems);
	/**
	 * @brief If the item does not have a logo, this will hold the Id of the Parent that has one.
	 */
	QString parentLogoItemId() const;
	/**
	* @brief If the item does not have a logo, this will hold the Id of the Parent that has one.
	*/
	void setParentLogoItemId(QString newParentLogoItemId);
	/**
	 * @brief If the item does not have any backdrops, this will hold the Id of the Parent that has one.
	 */
	QString parentBackdropItemId() const;
	/**
	* @brief If the item does not have any backdrops, this will hold the Id of the Parent that has one.
	*/
	void setParentBackdropItemId(QString newParentBackdropItemId);
	/**
	 * @brief Gets or sets the parent backdrop image tags.
	 */
	QStringList parentBackdropImageTags() const;
	/**
	* @brief Gets or sets the parent backdrop image tags.
	*/
	void setParentBackdropImageTags(QStringList newParentBackdropImageTags);
	/**
	 * @brief Gets or sets the local trailer count.
	 */
	qint32 localTrailerCount() const;
	/**
	* @brief Gets or sets the local trailer count.
	*/
	void setLocalTrailerCount(qint32 newLocalTrailerCount);

	QSharedPointer<UserItemDataDto> userData() const;

	void setUserData(QSharedPointer<UserItemDataDto> newUserData);
	/**
	 * @brief Gets or sets the recursive item count.
	 */
	qint32 recursiveItemCount() const;
	/**
	* @brief Gets or sets the recursive item count.
	*/
	void setRecursiveItemCount(qint32 newRecursiveItemCount);
	/**
	 * @brief Gets or sets the child count.
	 */
	qint32 childCount() const;
	/**
	* @brief Gets or sets the child count.
	*/
	void setChildCount(qint32 newChildCount);
	/**
	 * @brief Gets or sets the name of the series.
	 */
	QString seriesName() const;
	/**
	* @brief Gets or sets the name of the series.
	*/
	void setSeriesName(QString newSeriesName);
	/**
	 * @brief Gets or sets the series id.
	 */
	QUuid seriesId() const;
	/**
	* @brief Gets or sets the series id.
	*/
	void setSeriesId(QUuid newSeriesId);
	/**
	 * @brief Gets or sets the season identifier.
	 */
	QUuid seasonId() const;
	/**
	* @brief Gets or sets the season identifier.
	*/
	void setSeasonId(QUuid newSeasonId);
	/**
	 * @brief Gets or sets the special feature count.
	 */
	qint32 specialFeatureCount() const;
	/**
	* @brief Gets or sets the special feature count.
	*/
	void setSpecialFeatureCount(qint32 newSpecialFeatureCount);
	/**
	 * @brief Gets or sets the display preferences id.
	 */
	QString displayPreferencesId() const;
	/**
	* @brief Gets or sets the display preferences id.
	*/
	void setDisplayPreferencesId(QString newDisplayPreferencesId);
	/**
	 * @brief Gets or sets the status.
	 */
	QString status() const;
	/**
	* @brief Gets or sets the status.
	*/
	void setStatus(QString newStatus);
	/**
	 * @brief Gets or sets the air time.
	 */
	QString airTime() const;
	/**
	* @brief Gets or sets the air time.
	*/
	void setAirTime(QString newAirTime);
	/**
	 * @brief Gets or sets the air days.
	 */
	QList<DayOfWeek> airDays() const;
	/**
	* @brief Gets or sets the air days.
	*/
	void setAirDays(QList<DayOfWeek> newAirDays);
	/**
	 * @brief Gets or sets the tags.
	 */
	QStringList tags() const;
	/**
	* @brief Gets or sets the tags.
	*/
	void setTags(QStringList newTags);
	/**
	 * @brief Gets or sets the primary image aspect ratio, after image enhancements.
	 */
	double primaryImageAspectRatio() const;
	/**
	* @brief Gets or sets the primary image aspect ratio, after image enhancements.
	*/
	void setPrimaryImageAspectRatio(double newPrimaryImageAspectRatio);
	/**
	 * @brief Gets or sets the artists.
	 */
	QStringList artists() const;
	/**
	* @brief Gets or sets the artists.
	*/
	void setArtists(QStringList newArtists);
	/**
	 * @brief Gets or sets the artist items.
	 */
	QList<QSharedPointer<NameGuidPair>> artistItems() const;
	/**
	* @brief Gets or sets the artist items.
	*/
	void setArtistItems(QList<QSharedPointer<NameGuidPair>> newArtistItems);
	/**
	 * @brief Gets or sets the album.
	 */
	QString album() const;
	/**
	* @brief Gets or sets the album.
	*/
	void setAlbum(QString newAlbum);
	/**
	 * @brief Gets or sets the type of the collection.
	 */
	QString collectionType() const;
	/**
	* @brief Gets or sets the type of the collection.
	*/
	void setCollectionType(QString newCollectionType);
	/**
	 * @brief Gets or sets the display order.
	 */
	QString displayOrder() const;
	/**
	* @brief Gets or sets the display order.
	*/
	void setDisplayOrder(QString newDisplayOrder);
	/**
	 * @brief Gets or sets the album id.
	 */
	QUuid albumId() const;
	/**
	* @brief Gets or sets the album id.
	*/
	void setAlbumId(QUuid newAlbumId);
	/**
	 * @brief Gets or sets the album image tag.
	 */
	QString albumPrimaryImageTag() const;
	/**
	* @brief Gets or sets the album image tag.
	*/
	void setAlbumPrimaryImageTag(QString newAlbumPrimaryImageTag);
	/**
	 * @brief Gets or sets the series primary image tag.
	 */
	QString seriesPrimaryImageTag() const;
	/**
	* @brief Gets or sets the series primary image tag.
	*/
	void setSeriesPrimaryImageTag(QString newSeriesPrimaryImageTag);
	/**
	 * @brief Gets or sets the album artist.
	 */
	QString albumArtist() const;
	/**
	* @brief Gets or sets the album artist.
	*/
	void setAlbumArtist(QString newAlbumArtist);
	/**
	 * @brief Gets or sets the album artists.
	 */
	QList<QSharedPointer<NameGuidPair>> albumArtists() const;
	/**
	* @brief Gets or sets the album artists.
	*/
	void setAlbumArtists(QList<QSharedPointer<NameGuidPair>> newAlbumArtists);
	/**
	 * @brief Gets or sets the name of the season.
	 */
	QString seasonName() const;
	/**
	* @brief Gets or sets the name of the season.
	*/
	void setSeasonName(QString newSeasonName);
	/**
	 * @brief Gets or sets the media streams.
	 */
	QList<QSharedPointer<MediaStream>> mediaStreams() const;
	/**
	* @brief Gets or sets the media streams.
	*/
	void setMediaStreams(QList<QSharedPointer<MediaStream>> newMediaStreams);

	VideoType videoType() const;

	void setVideoType(VideoType newVideoType);
	/**
	 * @brief Gets or sets the part count.
	 */
	qint32 partCount() const;
	/**
	* @brief Gets or sets the part count.
	*/
	void setPartCount(qint32 newPartCount);

	qint32 mediaSourceCount() const;

	void setMediaSourceCount(qint32 newMediaSourceCount);
	/**
	 * @brief Gets or sets the image tags.
	 */
	QJsonObject imageTags() const;
	/**
	* @brief Gets or sets the image tags.
	*/
	void setImageTags(QJsonObject newImageTags);
	/**
	 * @brief Gets or sets the backdrop image tags.
	 */
	QStringList backdropImageTags() const;
	/**
	* @brief Gets or sets the backdrop image tags.
	*/
	void setBackdropImageTags(QStringList newBackdropImageTags);
	/**
	 * @brief Gets or sets the screenshot image tags.
	 */
	QStringList screenshotImageTags() const;
	/**
	* @brief Gets or sets the screenshot image tags.
	*/
	void setScreenshotImageTags(QStringList newScreenshotImageTags);
	/**
	 * @brief Gets or sets the parent logo image tag.
	 */
	QString parentLogoImageTag() const;
	/**
	* @brief Gets or sets the parent logo image tag.
	*/
	void setParentLogoImageTag(QString newParentLogoImageTag);
	/**
	 * @brief If the item does not have a art, this will hold the Id of the Parent that has one.
	 */
	QString parentArtItemId() const;
	/**
	* @brief If the item does not have a art, this will hold the Id of the Parent that has one.
	*/
	void setParentArtItemId(QString newParentArtItemId);
	/**
	 * @brief Gets or sets the parent art image tag.
	 */
	QString parentArtImageTag() const;
	/**
	* @brief Gets or sets the parent art image tag.
	*/
	void setParentArtImageTag(QString newParentArtImageTag);
	/**
	 * @brief Gets or sets the series thumb image tag.
	 */
	QString seriesThumbImageTag() const;
	/**
	* @brief Gets or sets the series thumb image tag.
	*/
	void setSeriesThumbImageTag(QString newSeriesThumbImageTag);
	/**
	 * @brief Gets or sets the blurhashes for the image tags.
Maps image type to dictionary mapping image tag to blurhash value.
	 */
	QJsonObject imageBlurHashes() const;
	/**
	* @brief Gets or sets the blurhashes for the image tags.
Maps image type to dictionary mapping image tag to blurhash value.
	*/
	void setImageBlurHashes(QJsonObject newImageBlurHashes);
	/**
	 * @brief Gets or sets the series studio.
	 */
	QString seriesStudio() const;
	/**
	* @brief Gets or sets the series studio.
	*/
	void setSeriesStudio(QString newSeriesStudio);
	/**
	 * @brief Gets or sets the parent thumb item id.
	 */
	QString parentThumbItemId() const;
	/**
	* @brief Gets or sets the parent thumb item id.
	*/
	void setParentThumbItemId(QString newParentThumbItemId);
	/**
	 * @brief Gets or sets the parent thumb image tag.
	 */
	QString parentThumbImageTag() const;
	/**
	* @brief Gets or sets the parent thumb image tag.
	*/
	void setParentThumbImageTag(QString newParentThumbImageTag);
	/**
	 * @brief Gets or sets the parent primary image item identifier.
	 */
	QString parentPrimaryImageItemId() const;
	/**
	* @brief Gets or sets the parent primary image item identifier.
	*/
	void setParentPrimaryImageItemId(QString newParentPrimaryImageItemId);
	/**
	 * @brief Gets or sets the parent primary image tag.
	 */
	QString parentPrimaryImageTag() const;
	/**
	* @brief Gets or sets the parent primary image tag.
	*/
	void setParentPrimaryImageTag(QString newParentPrimaryImageTag);
	/**
	 * @brief Gets or sets the chapters.
	 */
	QList<QSharedPointer<ChapterInfo>> chapters() const;
	/**
	* @brief Gets or sets the chapters.
	*/
	void setChapters(QList<QSharedPointer<ChapterInfo>> newChapters);

	LocationType locationType() const;

	void setLocationType(LocationType newLocationType);

	IsoType isoType() const;

	void setIsoType(IsoType newIsoType);
	/**
	 * @brief Gets or sets the type of the media.
	 */
	QString mediaType() const;
	/**
	* @brief Gets or sets the type of the media.
	*/
	void setMediaType(QString newMediaType);
	/**
	 * @brief Gets or sets the end date.
	 */
	QDateTime endDate() const;
	/**
	* @brief Gets or sets the end date.
	*/
	void setEndDate(QDateTime newEndDate);
	/**
	 * @brief Gets or sets the locked fields.
	 */
	QList<MetadataField> lockedFields() const;
	/**
	* @brief Gets or sets the locked fields.
	*/
	void setLockedFields(QList<MetadataField> newLockedFields);
	/**
	 * @brief Gets or sets the trailer count.
	 */
	qint32 trailerCount() const;
	/**
	* @brief Gets or sets the trailer count.
	*/
	void setTrailerCount(qint32 newTrailerCount);
	/**
	 * @brief Gets or sets the movie count.
	 */
	qint32 movieCount() const;
	/**
	* @brief Gets or sets the movie count.
	*/
	void setMovieCount(qint32 newMovieCount);
	/**
	 * @brief Gets or sets the series count.
	 */
	qint32 seriesCount() const;
	/**
	* @brief Gets or sets the series count.
	*/
	void setSeriesCount(qint32 newSeriesCount);

	qint32 programCount() const;

	void setProgramCount(qint32 newProgramCount);
	/**
	 * @brief Gets or sets the episode count.
	 */
	qint32 episodeCount() const;
	/**
	* @brief Gets or sets the episode count.
	*/
	void setEpisodeCount(qint32 newEpisodeCount);
	/**
	 * @brief Gets or sets the song count.
	 */
	qint32 songCount() const;
	/**
	* @brief Gets or sets the song count.
	*/
	void setSongCount(qint32 newSongCount);
	/**
	 * @brief Gets or sets the album count.
	 */
	qint32 albumCount() const;
	/**
	* @brief Gets or sets the album count.
	*/
	void setAlbumCount(qint32 newAlbumCount);

	qint32 artistCount() const;

	void setArtistCount(qint32 newArtistCount);
	/**
	 * @brief Gets or sets the music video count.
	 */
	qint32 musicVideoCount() const;
	/**
	* @brief Gets or sets the music video count.
	*/
	void setMusicVideoCount(qint32 newMusicVideoCount);
	/**
	 * @brief Gets or sets a value indicating whether [enable internet providers].
	 */
	bool lockData() const;
	/**
	* @brief Gets or sets a value indicating whether [enable internet providers].
	*/
	void setLockData(bool newLockData);

	qint32 width() const;

	void setWidth(qint32 newWidth);

	qint32 height() const;

	void setHeight(qint32 newHeight);

	QString cameraMake() const;

	void setCameraMake(QString newCameraMake);

	QString cameraModel() const;

	void setCameraModel(QString newCameraModel);

	QString software() const;

	void setSoftware(QString newSoftware);

	double exposureTime() const;

	void setExposureTime(double newExposureTime);

	double focalLength() const;

	void setFocalLength(double newFocalLength);

	ImageOrientation imageOrientation() const;

	void setImageOrientation(ImageOrientation newImageOrientation);

	double aperture() const;

	void setAperture(double newAperture);

	double shutterSpeed() const;

	void setShutterSpeed(double newShutterSpeed);

	double latitude() const;

	void setLatitude(double newLatitude);

	double longitude() const;

	void setLongitude(double newLongitude);

	double altitude() const;

	void setAltitude(double newAltitude);

	qint32 isoSpeedRating() const;

	void setIsoSpeedRating(qint32 newIsoSpeedRating);
	/**
	 * @brief Gets or sets the series timer identifier.
	 */
	QString seriesTimerId() const;
	/**
	* @brief Gets or sets the series timer identifier.
	*/
	void setSeriesTimerId(QString newSeriesTimerId);
	/**
	 * @brief Gets or sets the program identifier.
	 */
	QString programId() const;
	/**
	* @brief Gets or sets the program identifier.
	*/
	void setProgramId(QString newProgramId);
	/**
	 * @brief Gets or sets the channel primary image tag.
	 */
	QString channelPrimaryImageTag() const;
	/**
	* @brief Gets or sets the channel primary image tag.
	*/
	void setChannelPrimaryImageTag(QString newChannelPrimaryImageTag);
	/**
	 * @brief The start date of the recording, in UTC.
	 */
	QDateTime startDate() const;
	/**
	* @brief The start date of the recording, in UTC.
	*/
	void setStartDate(QDateTime newStartDate);
	/**
	 * @brief Gets or sets the completion percentage.
	 */
	double completionPercentage() const;
	/**
	* @brief Gets or sets the completion percentage.
	*/
	void setCompletionPercentage(double newCompletionPercentage);
	/**
	 * @brief Gets or sets a value indicating whether this instance is repeat.
	 */
	bool isRepeat() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is repeat.
	*/
	void setIsRepeat(bool newIsRepeat);
	/**
	 * @brief Gets or sets the episode title.
	 */
	QString episodeTitle() const;
	/**
	* @brief Gets or sets the episode title.
	*/
	void setEpisodeTitle(QString newEpisodeTitle);

	ChannelType channelType() const;

	void setChannelType(ChannelType newChannelType);

	ProgramAudio audio() const;

	void setAudio(ProgramAudio newAudio);
	/**
	 * @brief Gets or sets a value indicating whether this instance is movie.
	 */
	bool isMovie() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is movie.
	*/
	void setIsMovie(bool newIsMovie);
	/**
	 * @brief Gets or sets a value indicating whether this instance is sports.
	 */
	bool isSports() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is sports.
	*/
	void setIsSports(bool newIsSports);
	/**
	 * @brief Gets or sets a value indicating whether this instance is series.
	 */
	bool isSeries() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is series.
	*/
	void setIsSeries(bool newIsSeries);
	/**
	 * @brief Gets or sets a value indicating whether this instance is live.
	 */
	bool isLive() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is live.
	*/
	void setIsLive(bool newIsLive);
	/**
	 * @brief Gets or sets a value indicating whether this instance is news.
	 */
	bool isNews() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is news.
	*/
	void setIsNews(bool newIsNews);
	/**
	 * @brief Gets or sets a value indicating whether this instance is kids.
	 */
	bool isKids() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is kids.
	*/
	void setIsKids(bool newIsKids);
	/**
	 * @brief Gets or sets a value indicating whether this instance is premiere.
	 */
	bool isPremiere() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is premiere.
	*/
	void setIsPremiere(bool newIsPremiere);
	/**
	 * @brief Gets or sets the timer identifier.
	 */
	QString timerId() const;
	/**
	* @brief Gets or sets the timer identifier.
	*/
	void setTimerId(QString newTimerId);

	QSharedPointer<BaseItemDto> currentProgram() const;

	void setCurrentProgram(QSharedPointer<BaseItemDto> newCurrentProgram);

protected:
	QString m_name;
	QString m_originalTitle;
	QString m_serverId;
	QUuid m_jellyfinId;
	QString m_etag;
	QString m_sourceType;
	QString m_playlistItemId;
	QDateTime m_dateCreated;
	QDateTime m_dateLastMediaAdded;
	QString m_extraType;
	qint32 m_airsBeforeSeasonNumber;
	qint32 m_airsAfterSeasonNumber;
	qint32 m_airsBeforeEpisodeNumber;
	bool m_canDelete;
	bool m_canDownload;
	bool m_hasSubtitles;
	QString m_preferredMetadataLanguage;
	QString m_preferredMetadataCountryCode;
	bool m_supportsSync;
	QString m_container;
	QString m_sortName;
	QString m_forcedSortName;
	Video3DFormat m_video3DFormat;
	QDateTime m_premiereDate;
	QList<QSharedPointer<ExternalUrl>> m_externalUrls;
	QList<QSharedPointer<MediaSourceInfo>> m_mediaSources;
	float m_criticRating;
	QStringList m_productionLocations;
	QString m_path;
	bool m_enableMediaSourceDisplay;
	QString m_officialRating;
	QString m_customRating;
	QUuid m_channelId;
	QString m_channelName;
	QString m_overview;
	QStringList m_taglines;
	QStringList m_genres;
	float m_communityRating;
	qint64 m_cumulativeRunTimeTicks;
	qint64 m_runTimeTicks;
	PlayAccess m_playAccess;
	QString m_aspectRatio;
	qint32 m_productionYear;
	bool m_isPlaceHolder;
	QString m_number;
	QString m_channelNumber;
	qint32 m_indexNumber;
	qint32 m_indexNumberEnd;
	qint32 m_parentIndexNumber;
	QList<QSharedPointer<MediaUrl>> m_remoteTrailers;
	QJsonObject m_providerIds;
	bool m_isHD;
	bool m_isFolder;
	QUuid m_parentId;
	QString m_type;
	QList<QSharedPointer<BaseItemPerson>> m_people;
	QList<QSharedPointer<NameGuidPair>> m_studios;
	QList<QSharedPointer<NameGuidPair>> m_genreItems;
	QString m_parentLogoItemId;
	QString m_parentBackdropItemId;
	QStringList m_parentBackdropImageTags;
	qint32 m_localTrailerCount;
	QSharedPointer<UserItemDataDto> m_userData = nullptr;
	qint32 m_recursiveItemCount;
	qint32 m_childCount;
	QString m_seriesName;
	QUuid m_seriesId;
	QUuid m_seasonId;
	qint32 m_specialFeatureCount;
	QString m_displayPreferencesId;
	QString m_status;
	QString m_airTime;
	QList<DayOfWeek> m_airDays;
	QStringList m_tags;
	double m_primaryImageAspectRatio;
	QStringList m_artists;
	QList<QSharedPointer<NameGuidPair>> m_artistItems;
	QString m_album;
	QString m_collectionType;
	QString m_displayOrder;
	QUuid m_albumId;
	QString m_albumPrimaryImageTag;
	QString m_seriesPrimaryImageTag;
	QString m_albumArtist;
	QList<QSharedPointer<NameGuidPair>> m_albumArtists;
	QString m_seasonName;
	QList<QSharedPointer<MediaStream>> m_mediaStreams;
	VideoType m_videoType;
	qint32 m_partCount;
	qint32 m_mediaSourceCount;
	QJsonObject m_imageTags;
	QStringList m_backdropImageTags;
	QStringList m_screenshotImageTags;
	QString m_parentLogoImageTag;
	QString m_parentArtItemId;
	QString m_parentArtImageTag;
	QString m_seriesThumbImageTag;
	QJsonObject m_imageBlurHashes;
	QString m_seriesStudio;
	QString m_parentThumbItemId;
	QString m_parentThumbImageTag;
	QString m_parentPrimaryImageItemId;
	QString m_parentPrimaryImageTag;
	QList<QSharedPointer<ChapterInfo>> m_chapters;
	LocationType m_locationType;
	IsoType m_isoType;
	QString m_mediaType;
	QDateTime m_endDate;
	QList<MetadataField> m_lockedFields;
	qint32 m_trailerCount;
	qint32 m_movieCount;
	qint32 m_seriesCount;
	qint32 m_programCount;
	qint32 m_episodeCount;
	qint32 m_songCount;
	qint32 m_albumCount;
	qint32 m_artistCount;
	qint32 m_musicVideoCount;
	bool m_lockData;
	qint32 m_width;
	qint32 m_height;
	QString m_cameraMake;
	QString m_cameraModel;
	QString m_software;
	double m_exposureTime;
	double m_focalLength;
	ImageOrientation m_imageOrientation;
	double m_aperture;
	double m_shutterSpeed;
	double m_latitude;
	double m_longitude;
	double m_altitude;
	qint32 m_isoSpeedRating;
	QString m_seriesTimerId;
	QString m_programId;
	QString m_channelPrimaryImageTag;
	QDateTime m_startDate;
	double m_completionPercentage;
	bool m_isRepeat;
	QString m_episodeTitle;
	ChannelType m_channelType;
	ProgramAudio m_audio;
	bool m_isMovie;
	bool m_isSports;
	bool m_isSeries;
	bool m_isLive;
	bool m_isNews;
	bool m_isKids;
	bool m_isPremiere;
	QString m_timerId;
	QSharedPointer<BaseItemDto> m_currentProgram = nullptr;
};

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

#endif // JELLYFIN_DTO_BASEITEMDTO_H

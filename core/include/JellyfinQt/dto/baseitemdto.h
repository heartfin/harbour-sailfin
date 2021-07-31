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
#include <optional>

#include "JellyfinQt/dto/baseitemperson.h"
#include "JellyfinQt/dto/channeltype.h"
#include "JellyfinQt/dto/chapterinfo.h"
#include "JellyfinQt/dto/dayofweek.h"
#include "JellyfinQt/dto/externalurl.h"
#include "JellyfinQt/dto/imageorientation.h"
#include "JellyfinQt/dto/isotype.h"
#include "JellyfinQt/dto/locationtype.h"
#include "JellyfinQt/dto/mediasourceinfo.h"
#include "JellyfinQt/dto/mediastream.h"
#include "JellyfinQt/dto/mediaurl.h"
#include "JellyfinQt/dto/metadatafield.h"
#include "JellyfinQt/dto/nameguidpair.h"
#include "JellyfinQt/dto/playaccess.h"
#include "JellyfinQt/dto/programaudio.h"
#include "JellyfinQt/dto/useritemdatadto.h"
#include "JellyfinQt/dto/video3dformat.h"
#include "JellyfinQt/dto/videotype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class BaseItemDto {
public:
	BaseItemDto();
	BaseItemDto(const BaseItemDto &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(BaseItemDto &other);
	
	static BaseItemDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();


	QString originalTitle() const;

	void setOriginalTitle(QString newOriginalTitle);
	bool originalTitleNull() const;
	void setOriginalTitleNull();

	/**
	 * @brief Gets or sets the server identifier.
	 */
	QString serverId() const;
	/**
	* @brief Gets or sets the server identifier.
	*/
	void setServerId(QString newServerId);
	bool serverIdNull() const;
	void setServerIdNull();

	/**
	 * @brief Gets or sets the id.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the id.
	*/
	void setJellyfinId(QString newJellyfinId);

	/**
	 * @brief Gets or sets the etag.
	 */
	QString etag() const;
	/**
	* @brief Gets or sets the etag.
	*/
	void setEtag(QString newEtag);
	bool etagNull() const;
	void setEtagNull();

	/**
	 * @brief Gets or sets the type of the source.
	 */
	QString sourceType() const;
	/**
	* @brief Gets or sets the type of the source.
	*/
	void setSourceType(QString newSourceType);
	bool sourceTypeNull() const;
	void setSourceTypeNull();

	/**
	 * @brief Gets or sets the playlist item identifier.
	 */
	QString playlistItemId() const;
	/**
	* @brief Gets or sets the playlist item identifier.
	*/
	void setPlaylistItemId(QString newPlaylistItemId);
	bool playlistItemIdNull() const;
	void setPlaylistItemIdNull();

	/**
	 * @brief Gets or sets the date created.
	 */
	QDateTime dateCreated() const;
	/**
	* @brief Gets or sets the date created.
	*/
	void setDateCreated(QDateTime newDateCreated);
	bool dateCreatedNull() const;
	void setDateCreatedNull();


	QDateTime dateLastMediaAdded() const;

	void setDateLastMediaAdded(QDateTime newDateLastMediaAdded);
	bool dateLastMediaAddedNull() const;
	void setDateLastMediaAddedNull();


	QString extraType() const;

	void setExtraType(QString newExtraType);
	bool extraTypeNull() const;
	void setExtraTypeNull();


	std::optional<qint32> airsBeforeSeasonNumber() const;

	void setAirsBeforeSeasonNumber(std::optional<qint32> newAirsBeforeSeasonNumber);
	bool airsBeforeSeasonNumberNull() const;
	void setAirsBeforeSeasonNumberNull();


	std::optional<qint32> airsAfterSeasonNumber() const;

	void setAirsAfterSeasonNumber(std::optional<qint32> newAirsAfterSeasonNumber);
	bool airsAfterSeasonNumberNull() const;
	void setAirsAfterSeasonNumberNull();


	std::optional<qint32> airsBeforeEpisodeNumber() const;

	void setAirsBeforeEpisodeNumber(std::optional<qint32> newAirsBeforeEpisodeNumber);
	bool airsBeforeEpisodeNumberNull() const;
	void setAirsBeforeEpisodeNumberNull();


	std::optional<bool> canDelete() const;

	void setCanDelete(std::optional<bool> newCanDelete);
	bool canDeleteNull() const;
	void setCanDeleteNull();


	std::optional<bool> canDownload() const;

	void setCanDownload(std::optional<bool> newCanDownload);
	bool canDownloadNull() const;
	void setCanDownloadNull();


	std::optional<bool> hasSubtitles() const;

	void setHasSubtitles(std::optional<bool> newHasSubtitles);
	bool hasSubtitlesNull() const;
	void setHasSubtitlesNull();


	QString preferredMetadataLanguage() const;

	void setPreferredMetadataLanguage(QString newPreferredMetadataLanguage);
	bool preferredMetadataLanguageNull() const;
	void setPreferredMetadataLanguageNull();


	QString preferredMetadataCountryCode() const;

	void setPreferredMetadataCountryCode(QString newPreferredMetadataCountryCode);
	bool preferredMetadataCountryCodeNull() const;
	void setPreferredMetadataCountryCodeNull();

	/**
	 * @brief Gets or sets a value indicating whether [supports synchronize].
	 */
	std::optional<bool> supportsSync() const;
	/**
	* @brief Gets or sets a value indicating whether [supports synchronize].
	*/
	void setSupportsSync(std::optional<bool> newSupportsSync);
	bool supportsSyncNull() const;
	void setSupportsSyncNull();


	QString container() const;

	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();

	/**
	 * @brief Gets or sets the name of the sort.
	 */
	QString sortName() const;
	/**
	* @brief Gets or sets the name of the sort.
	*/
	void setSortName(QString newSortName);
	bool sortNameNull() const;
	void setSortNameNull();


	QString forcedSortName() const;

	void setForcedSortName(QString newForcedSortName);
	bool forcedSortNameNull() const;
	void setForcedSortNameNull();


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
	bool premiereDateNull() const;
	void setPremiereDateNull();

	/**
	 * @brief Gets or sets the external urls.
	 */
	QList<ExternalUrl> externalUrls() const;
	/**
	* @brief Gets or sets the external urls.
	*/
	void setExternalUrls(QList<ExternalUrl> newExternalUrls);
	bool externalUrlsNull() const;
	void setExternalUrlsNull();

	/**
	 * @brief Gets or sets the media versions.
	 */
	QList<MediaSourceInfo> mediaSources() const;
	/**
	* @brief Gets or sets the media versions.
	*/
	void setMediaSources(QList<MediaSourceInfo> newMediaSources);
	bool mediaSourcesNull() const;
	void setMediaSourcesNull();

	/**
	 * @brief Gets or sets the critic rating.
	 */
	std::optional<float> criticRating() const;
	/**
	* @brief Gets or sets the critic rating.
	*/
	void setCriticRating(std::optional<float> newCriticRating);
	bool criticRatingNull() const;
	void setCriticRatingNull();


	QStringList productionLocations() const;

	void setProductionLocations(QStringList newProductionLocations);
	bool productionLocationsNull() const;
	void setProductionLocationsNull();

	/**
	 * @brief Gets or sets the path.
	 */
	QString path() const;
	/**
	* @brief Gets or sets the path.
	*/
	void setPath(QString newPath);
	bool pathNull() const;
	void setPathNull();


	std::optional<bool> enableMediaSourceDisplay() const;

	void setEnableMediaSourceDisplay(std::optional<bool> newEnableMediaSourceDisplay);
	bool enableMediaSourceDisplayNull() const;
	void setEnableMediaSourceDisplayNull();

	/**
	 * @brief Gets or sets the official rating.
	 */
	QString officialRating() const;
	/**
	* @brief Gets or sets the official rating.
	*/
	void setOfficialRating(QString newOfficialRating);
	bool officialRatingNull() const;
	void setOfficialRatingNull();

	/**
	 * @brief Gets or sets the custom rating.
	 */
	QString customRating() const;
	/**
	* @brief Gets or sets the custom rating.
	*/
	void setCustomRating(QString newCustomRating);
	bool customRatingNull() const;
	void setCustomRatingNull();

	/**
	 * @brief Gets or sets the channel identifier.
	 */
	QString channelId() const;
	/**
	* @brief Gets or sets the channel identifier.
	*/
	void setChannelId(QString newChannelId);
	bool channelIdNull() const;
	void setChannelIdNull();


	QString channelName() const;

	void setChannelName(QString newChannelName);
	bool channelNameNull() const;
	void setChannelNameNull();

	/**
	 * @brief Gets or sets the overview.
	 */
	QString overview() const;
	/**
	* @brief Gets or sets the overview.
	*/
	void setOverview(QString newOverview);
	bool overviewNull() const;
	void setOverviewNull();

	/**
	 * @brief Gets or sets the taglines.
	 */
	QStringList taglines() const;
	/**
	* @brief Gets or sets the taglines.
	*/
	void setTaglines(QStringList newTaglines);
	bool taglinesNull() const;
	void setTaglinesNull();

	/**
	 * @brief Gets or sets the genres.
	 */
	QStringList genres() const;
	/**
	* @brief Gets or sets the genres.
	*/
	void setGenres(QStringList newGenres);
	bool genresNull() const;
	void setGenresNull();

	/**
	 * @brief Gets or sets the community rating.
	 */
	std::optional<float> communityRating() const;
	/**
	* @brief Gets or sets the community rating.
	*/
	void setCommunityRating(std::optional<float> newCommunityRating);
	bool communityRatingNull() const;
	void setCommunityRatingNull();

	/**
	 * @brief Gets or sets the cumulative run time ticks.
	 */
	std::optional<qint64> cumulativeRunTimeTicks() const;
	/**
	* @brief Gets or sets the cumulative run time ticks.
	*/
	void setCumulativeRunTimeTicks(std::optional<qint64> newCumulativeRunTimeTicks);
	bool cumulativeRunTimeTicksNull() const;
	void setCumulativeRunTimeTicksNull();

	/**
	 * @brief Gets or sets the run time ticks.
	 */
	std::optional<qint64> runTimeTicks() const;
	/**
	* @brief Gets or sets the run time ticks.
	*/
	void setRunTimeTicks(std::optional<qint64> newRunTimeTicks);
	bool runTimeTicksNull() const;
	void setRunTimeTicksNull();


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
	bool aspectRatioNull() const;
	void setAspectRatioNull();

	/**
	 * @brief Gets or sets the production year.
	 */
	std::optional<qint32> productionYear() const;
	/**
	* @brief Gets or sets the production year.
	*/
	void setProductionYear(std::optional<qint32> newProductionYear);
	bool productionYearNull() const;
	void setProductionYearNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is place holder.
	 */
	std::optional<bool> isPlaceHolder() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is place holder.
	*/
	void setIsPlaceHolder(std::optional<bool> newIsPlaceHolder);
	bool isPlaceHolderNull() const;
	void setIsPlaceHolderNull();

	/**
	 * @brief Gets or sets the number.
	 */
	QString number() const;
	/**
	* @brief Gets or sets the number.
	*/
	void setNumber(QString newNumber);
	bool numberNull() const;
	void setNumberNull();


	QString channelNumber() const;

	void setChannelNumber(QString newChannelNumber);
	bool channelNumberNull() const;
	void setChannelNumberNull();

	/**
	 * @brief Gets or sets the index number.
	 */
	std::optional<qint32> indexNumber() const;
	/**
	* @brief Gets or sets the index number.
	*/
	void setIndexNumber(std::optional<qint32> newIndexNumber);
	bool indexNumberNull() const;
	void setIndexNumberNull();

	/**
	 * @brief Gets or sets the index number end.
	 */
	std::optional<qint32> indexNumberEnd() const;
	/**
	* @brief Gets or sets the index number end.
	*/
	void setIndexNumberEnd(std::optional<qint32> newIndexNumberEnd);
	bool indexNumberEndNull() const;
	void setIndexNumberEndNull();

	/**
	 * @brief Gets or sets the parent index number.
	 */
	std::optional<qint32> parentIndexNumber() const;
	/**
	* @brief Gets or sets the parent index number.
	*/
	void setParentIndexNumber(std::optional<qint32> newParentIndexNumber);
	bool parentIndexNumberNull() const;
	void setParentIndexNumberNull();

	/**
	 * @brief Gets or sets the trailer urls.
	 */
	QList<MediaUrl> remoteTrailers() const;
	/**
	* @brief Gets or sets the trailer urls.
	*/
	void setRemoteTrailers(QList<MediaUrl> newRemoteTrailers);
	bool remoteTrailersNull() const;
	void setRemoteTrailersNull();

	/**
	 * @brief Gets or sets the provider ids.
	 */
	QJsonObject providerIds() const;
	/**
	* @brief Gets or sets the provider ids.
	*/
	void setProviderIds(QJsonObject newProviderIds);
	bool providerIdsNull() const;
	void setProviderIdsNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is HD.
	 */
	std::optional<bool> isHD() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is HD.
	*/
	void setIsHD(std::optional<bool> newIsHD);
	bool isHDNull() const;
	void setIsHDNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is folder.
	 */
	std::optional<bool> isFolder() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is folder.
	*/
	void setIsFolder(std::optional<bool> newIsFolder);
	bool isFolderNull() const;
	void setIsFolderNull();

	/**
	 * @brief Gets or sets the parent id.
	 */
	QString parentId() const;
	/**
	* @brief Gets or sets the parent id.
	*/
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();

	/**
	 * @brief Gets or sets the type.
	 */
	QString type() const;
	/**
	* @brief Gets or sets the type.
	*/
	void setType(QString newType);
	bool typeNull() const;
	void setTypeNull();

	/**
	 * @brief Gets or sets the people.
	 */
	QList<BaseItemPerson> people() const;
	/**
	* @brief Gets or sets the people.
	*/
	void setPeople(QList<BaseItemPerson> newPeople);
	bool peopleNull() const;
	void setPeopleNull();

	/**
	 * @brief Gets or sets the studios.
	 */
	QList<NameGuidPair> studios() const;
	/**
	* @brief Gets or sets the studios.
	*/
	void setStudios(QList<NameGuidPair> newStudios);
	bool studiosNull() const;
	void setStudiosNull();


	QList<NameGuidPair> genreItems() const;

	void setGenreItems(QList<NameGuidPair> newGenreItems);
	bool genreItemsNull() const;
	void setGenreItemsNull();

	/**
	 * @brief If the item does not have a logo, this will hold the Id of the Parent that has one.
	 */
	QString parentLogoItemId() const;
	/**
	* @brief If the item does not have a logo, this will hold the Id of the Parent that has one.
	*/
	void setParentLogoItemId(QString newParentLogoItemId);
	bool parentLogoItemIdNull() const;
	void setParentLogoItemIdNull();

	/**
	 * @brief If the item does not have any backdrops, this will hold the Id of the Parent that has one.
	 */
	QString parentBackdropItemId() const;
	/**
	* @brief If the item does not have any backdrops, this will hold the Id of the Parent that has one.
	*/
	void setParentBackdropItemId(QString newParentBackdropItemId);
	bool parentBackdropItemIdNull() const;
	void setParentBackdropItemIdNull();

	/**
	 * @brief Gets or sets the parent backdrop image tags.
	 */
	QStringList parentBackdropImageTags() const;
	/**
	* @brief Gets or sets the parent backdrop image tags.
	*/
	void setParentBackdropImageTags(QStringList newParentBackdropImageTags);
	bool parentBackdropImageTagsNull() const;
	void setParentBackdropImageTagsNull();

	/**
	 * @brief Gets or sets the local trailer count.
	 */
	std::optional<qint32> localTrailerCount() const;
	/**
	* @brief Gets or sets the local trailer count.
	*/
	void setLocalTrailerCount(std::optional<qint32> newLocalTrailerCount);
	bool localTrailerCountNull() const;
	void setLocalTrailerCountNull();


	QSharedPointer<UserItemDataDto> userData() const;

	void setUserData(QSharedPointer<UserItemDataDto> newUserData);

	/**
	 * @brief Gets or sets the recursive item count.
	 */
	std::optional<qint32> recursiveItemCount() const;
	/**
	* @brief Gets or sets the recursive item count.
	*/
	void setRecursiveItemCount(std::optional<qint32> newRecursiveItemCount);
	bool recursiveItemCountNull() const;
	void setRecursiveItemCountNull();

	/**
	 * @brief Gets or sets the child count.
	 */
	std::optional<qint32> childCount() const;
	/**
	* @brief Gets or sets the child count.
	*/
	void setChildCount(std::optional<qint32> newChildCount);
	bool childCountNull() const;
	void setChildCountNull();

	/**
	 * @brief Gets or sets the name of the series.
	 */
	QString seriesName() const;
	/**
	* @brief Gets or sets the name of the series.
	*/
	void setSeriesName(QString newSeriesName);
	bool seriesNameNull() const;
	void setSeriesNameNull();

	/**
	 * @brief Gets or sets the series id.
	 */
	QString seriesId() const;
	/**
	* @brief Gets or sets the series id.
	*/
	void setSeriesId(QString newSeriesId);
	bool seriesIdNull() const;
	void setSeriesIdNull();

	/**
	 * @brief Gets or sets the season identifier.
	 */
	QString seasonId() const;
	/**
	* @brief Gets or sets the season identifier.
	*/
	void setSeasonId(QString newSeasonId);
	bool seasonIdNull() const;
	void setSeasonIdNull();

	/**
	 * @brief Gets or sets the special feature count.
	 */
	std::optional<qint32> specialFeatureCount() const;
	/**
	* @brief Gets or sets the special feature count.
	*/
	void setSpecialFeatureCount(std::optional<qint32> newSpecialFeatureCount);
	bool specialFeatureCountNull() const;
	void setSpecialFeatureCountNull();

	/**
	 * @brief Gets or sets the display preferences id.
	 */
	QString displayPreferencesId() const;
	/**
	* @brief Gets or sets the display preferences id.
	*/
	void setDisplayPreferencesId(QString newDisplayPreferencesId);
	bool displayPreferencesIdNull() const;
	void setDisplayPreferencesIdNull();

	/**
	 * @brief Gets or sets the status.
	 */
	QString status() const;
	/**
	* @brief Gets or sets the status.
	*/
	void setStatus(QString newStatus);
	bool statusNull() const;
	void setStatusNull();

	/**
	 * @brief Gets or sets the air time.
	 */
	QString airTime() const;
	/**
	* @brief Gets or sets the air time.
	*/
	void setAirTime(QString newAirTime);
	bool airTimeNull() const;
	void setAirTimeNull();

	/**
	 * @brief Gets or sets the air days.
	 */
	QList<DayOfWeek> airDays() const;
	/**
	* @brief Gets or sets the air days.
	*/
	void setAirDays(QList<DayOfWeek> newAirDays);
	bool airDaysNull() const;
	void setAirDaysNull();

	/**
	 * @brief Gets or sets the tags.
	 */
	QStringList tags() const;
	/**
	* @brief Gets or sets the tags.
	*/
	void setTags(QStringList newTags);
	bool tagsNull() const;
	void setTagsNull();

	/**
	 * @brief Gets or sets the primary image aspect ratio, after image enhancements.
	 */
	std::optional<double> primaryImageAspectRatio() const;
	/**
	* @brief Gets or sets the primary image aspect ratio, after image enhancements.
	*/
	void setPrimaryImageAspectRatio(std::optional<double> newPrimaryImageAspectRatio);
	bool primaryImageAspectRatioNull() const;
	void setPrimaryImageAspectRatioNull();

	/**
	 * @brief Gets or sets the artists.
	 */
	QStringList artists() const;
	/**
	* @brief Gets or sets the artists.
	*/
	void setArtists(QStringList newArtists);
	bool artistsNull() const;
	void setArtistsNull();

	/**
	 * @brief Gets or sets the artist items.
	 */
	QList<NameGuidPair> artistItems() const;
	/**
	* @brief Gets or sets the artist items.
	*/
	void setArtistItems(QList<NameGuidPair> newArtistItems);
	bool artistItemsNull() const;
	void setArtistItemsNull();

	/**
	 * @brief Gets or sets the album.
	 */
	QString album() const;
	/**
	* @brief Gets or sets the album.
	*/
	void setAlbum(QString newAlbum);
	bool albumNull() const;
	void setAlbumNull();

	/**
	 * @brief Gets or sets the type of the collection.
	 */
	QString collectionType() const;
	/**
	* @brief Gets or sets the type of the collection.
	*/
	void setCollectionType(QString newCollectionType);
	bool collectionTypeNull() const;
	void setCollectionTypeNull();

	/**
	 * @brief Gets or sets the display order.
	 */
	QString displayOrder() const;
	/**
	* @brief Gets or sets the display order.
	*/
	void setDisplayOrder(QString newDisplayOrder);
	bool displayOrderNull() const;
	void setDisplayOrderNull();

	/**
	 * @brief Gets or sets the album id.
	 */
	QString albumId() const;
	/**
	* @brief Gets or sets the album id.
	*/
	void setAlbumId(QString newAlbumId);
	bool albumIdNull() const;
	void setAlbumIdNull();

	/**
	 * @brief Gets or sets the album image tag.
	 */
	QString albumPrimaryImageTag() const;
	/**
	* @brief Gets or sets the album image tag.
	*/
	void setAlbumPrimaryImageTag(QString newAlbumPrimaryImageTag);
	bool albumPrimaryImageTagNull() const;
	void setAlbumPrimaryImageTagNull();

	/**
	 * @brief Gets or sets the series primary image tag.
	 */
	QString seriesPrimaryImageTag() const;
	/**
	* @brief Gets or sets the series primary image tag.
	*/
	void setSeriesPrimaryImageTag(QString newSeriesPrimaryImageTag);
	bool seriesPrimaryImageTagNull() const;
	void setSeriesPrimaryImageTagNull();

	/**
	 * @brief Gets or sets the album artist.
	 */
	QString albumArtist() const;
	/**
	* @brief Gets or sets the album artist.
	*/
	void setAlbumArtist(QString newAlbumArtist);
	bool albumArtistNull() const;
	void setAlbumArtistNull();

	/**
	 * @brief Gets or sets the album artists.
	 */
	QList<NameGuidPair> albumArtists() const;
	/**
	* @brief Gets or sets the album artists.
	*/
	void setAlbumArtists(QList<NameGuidPair> newAlbumArtists);
	bool albumArtistsNull() const;
	void setAlbumArtistsNull();

	/**
	 * @brief Gets or sets the name of the season.
	 */
	QString seasonName() const;
	/**
	* @brief Gets or sets the name of the season.
	*/
	void setSeasonName(QString newSeasonName);
	bool seasonNameNull() const;
	void setSeasonNameNull();

	/**
	 * @brief Gets or sets the media streams.
	 */
	QList<MediaStream> mediaStreams() const;
	/**
	* @brief Gets or sets the media streams.
	*/
	void setMediaStreams(QList<MediaStream> newMediaStreams);
	bool mediaStreamsNull() const;
	void setMediaStreamsNull();


	VideoType videoType() const;

	void setVideoType(VideoType newVideoType);

	/**
	 * @brief Gets or sets the part count.
	 */
	std::optional<qint32> partCount() const;
	/**
	* @brief Gets or sets the part count.
	*/
	void setPartCount(std::optional<qint32> newPartCount);
	bool partCountNull() const;
	void setPartCountNull();


	std::optional<qint32> mediaSourceCount() const;

	void setMediaSourceCount(std::optional<qint32> newMediaSourceCount);
	bool mediaSourceCountNull() const;
	void setMediaSourceCountNull();

	/**
	 * @brief Gets or sets the image tags.
	 */
	QJsonObject imageTags() const;
	/**
	* @brief Gets or sets the image tags.
	*/
	void setImageTags(QJsonObject newImageTags);
	bool imageTagsNull() const;
	void setImageTagsNull();

	/**
	 * @brief Gets or sets the backdrop image tags.
	 */
	QStringList backdropImageTags() const;
	/**
	* @brief Gets or sets the backdrop image tags.
	*/
	void setBackdropImageTags(QStringList newBackdropImageTags);
	bool backdropImageTagsNull() const;
	void setBackdropImageTagsNull();

	/**
	 * @brief Gets or sets the screenshot image tags.
	 */
	QStringList screenshotImageTags() const;
	/**
	* @brief Gets or sets the screenshot image tags.
	*/
	void setScreenshotImageTags(QStringList newScreenshotImageTags);
	bool screenshotImageTagsNull() const;
	void setScreenshotImageTagsNull();

	/**
	 * @brief Gets or sets the parent logo image tag.
	 */
	QString parentLogoImageTag() const;
	/**
	* @brief Gets or sets the parent logo image tag.
	*/
	void setParentLogoImageTag(QString newParentLogoImageTag);
	bool parentLogoImageTagNull() const;
	void setParentLogoImageTagNull();

	/**
	 * @brief If the item does not have a art, this will hold the Id of the Parent that has one.
	 */
	QString parentArtItemId() const;
	/**
	* @brief If the item does not have a art, this will hold the Id of the Parent that has one.
	*/
	void setParentArtItemId(QString newParentArtItemId);
	bool parentArtItemIdNull() const;
	void setParentArtItemIdNull();

	/**
	 * @brief Gets or sets the parent art image tag.
	 */
	QString parentArtImageTag() const;
	/**
	* @brief Gets or sets the parent art image tag.
	*/
	void setParentArtImageTag(QString newParentArtImageTag);
	bool parentArtImageTagNull() const;
	void setParentArtImageTagNull();

	/**
	 * @brief Gets or sets the series thumb image tag.
	 */
	QString seriesThumbImageTag() const;
	/**
	* @brief Gets or sets the series thumb image tag.
	*/
	void setSeriesThumbImageTag(QString newSeriesThumbImageTag);
	bool seriesThumbImageTagNull() const;
	void setSeriesThumbImageTagNull();

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
	bool imageBlurHashesNull() const;
	void setImageBlurHashesNull();

	/**
	 * @brief Gets or sets the series studio.
	 */
	QString seriesStudio() const;
	/**
	* @brief Gets or sets the series studio.
	*/
	void setSeriesStudio(QString newSeriesStudio);
	bool seriesStudioNull() const;
	void setSeriesStudioNull();

	/**
	 * @brief Gets or sets the parent thumb item id.
	 */
	QString parentThumbItemId() const;
	/**
	* @brief Gets or sets the parent thumb item id.
	*/
	void setParentThumbItemId(QString newParentThumbItemId);
	bool parentThumbItemIdNull() const;
	void setParentThumbItemIdNull();

	/**
	 * @brief Gets or sets the parent thumb image tag.
	 */
	QString parentThumbImageTag() const;
	/**
	* @brief Gets or sets the parent thumb image tag.
	*/
	void setParentThumbImageTag(QString newParentThumbImageTag);
	bool parentThumbImageTagNull() const;
	void setParentThumbImageTagNull();

	/**
	 * @brief Gets or sets the parent primary image item identifier.
	 */
	QString parentPrimaryImageItemId() const;
	/**
	* @brief Gets or sets the parent primary image item identifier.
	*/
	void setParentPrimaryImageItemId(QString newParentPrimaryImageItemId);
	bool parentPrimaryImageItemIdNull() const;
	void setParentPrimaryImageItemIdNull();

	/**
	 * @brief Gets or sets the parent primary image tag.
	 */
	QString parentPrimaryImageTag() const;
	/**
	* @brief Gets or sets the parent primary image tag.
	*/
	void setParentPrimaryImageTag(QString newParentPrimaryImageTag);
	bool parentPrimaryImageTagNull() const;
	void setParentPrimaryImageTagNull();

	/**
	 * @brief Gets or sets the chapters.
	 */
	QList<ChapterInfo> chapters() const;
	/**
	* @brief Gets or sets the chapters.
	*/
	void setChapters(QList<ChapterInfo> newChapters);
	bool chaptersNull() const;
	void setChaptersNull();


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
	bool mediaTypeNull() const;
	void setMediaTypeNull();

	/**
	 * @brief Gets or sets the end date.
	 */
	QDateTime endDate() const;
	/**
	* @brief Gets or sets the end date.
	*/
	void setEndDate(QDateTime newEndDate);
	bool endDateNull() const;
	void setEndDateNull();

	/**
	 * @brief Gets or sets the locked fields.
	 */
	QList<MetadataField> lockedFields() const;
	/**
	* @brief Gets or sets the locked fields.
	*/
	void setLockedFields(QList<MetadataField> newLockedFields);
	bool lockedFieldsNull() const;
	void setLockedFieldsNull();

	/**
	 * @brief Gets or sets the trailer count.
	 */
	std::optional<qint32> trailerCount() const;
	/**
	* @brief Gets or sets the trailer count.
	*/
	void setTrailerCount(std::optional<qint32> newTrailerCount);
	bool trailerCountNull() const;
	void setTrailerCountNull();

	/**
	 * @brief Gets or sets the movie count.
	 */
	std::optional<qint32> movieCount() const;
	/**
	* @brief Gets or sets the movie count.
	*/
	void setMovieCount(std::optional<qint32> newMovieCount);
	bool movieCountNull() const;
	void setMovieCountNull();

	/**
	 * @brief Gets or sets the series count.
	 */
	std::optional<qint32> seriesCount() const;
	/**
	* @brief Gets or sets the series count.
	*/
	void setSeriesCount(std::optional<qint32> newSeriesCount);
	bool seriesCountNull() const;
	void setSeriesCountNull();


	std::optional<qint32> programCount() const;

	void setProgramCount(std::optional<qint32> newProgramCount);
	bool programCountNull() const;
	void setProgramCountNull();

	/**
	 * @brief Gets or sets the episode count.
	 */
	std::optional<qint32> episodeCount() const;
	/**
	* @brief Gets or sets the episode count.
	*/
	void setEpisodeCount(std::optional<qint32> newEpisodeCount);
	bool episodeCountNull() const;
	void setEpisodeCountNull();

	/**
	 * @brief Gets or sets the song count.
	 */
	std::optional<qint32> songCount() const;
	/**
	* @brief Gets or sets the song count.
	*/
	void setSongCount(std::optional<qint32> newSongCount);
	bool songCountNull() const;
	void setSongCountNull();

	/**
	 * @brief Gets or sets the album count.
	 */
	std::optional<qint32> albumCount() const;
	/**
	* @brief Gets or sets the album count.
	*/
	void setAlbumCount(std::optional<qint32> newAlbumCount);
	bool albumCountNull() const;
	void setAlbumCountNull();


	std::optional<qint32> artistCount() const;

	void setArtistCount(std::optional<qint32> newArtistCount);
	bool artistCountNull() const;
	void setArtistCountNull();

	/**
	 * @brief Gets or sets the music video count.
	 */
	std::optional<qint32> musicVideoCount() const;
	/**
	* @brief Gets or sets the music video count.
	*/
	void setMusicVideoCount(std::optional<qint32> newMusicVideoCount);
	bool musicVideoCountNull() const;
	void setMusicVideoCountNull();

	/**
	 * @brief Gets or sets a value indicating whether [enable internet providers].
	 */
	std::optional<bool> lockData() const;
	/**
	* @brief Gets or sets a value indicating whether [enable internet providers].
	*/
	void setLockData(std::optional<bool> newLockData);
	bool lockDataNull() const;
	void setLockDataNull();


	std::optional<qint32> width() const;

	void setWidth(std::optional<qint32> newWidth);
	bool widthNull() const;
	void setWidthNull();


	std::optional<qint32> height() const;

	void setHeight(std::optional<qint32> newHeight);
	bool heightNull() const;
	void setHeightNull();


	QString cameraMake() const;

	void setCameraMake(QString newCameraMake);
	bool cameraMakeNull() const;
	void setCameraMakeNull();


	QString cameraModel() const;

	void setCameraModel(QString newCameraModel);
	bool cameraModelNull() const;
	void setCameraModelNull();


	QString software() const;

	void setSoftware(QString newSoftware);
	bool softwareNull() const;
	void setSoftwareNull();


	std::optional<double> exposureTime() const;

	void setExposureTime(std::optional<double> newExposureTime);
	bool exposureTimeNull() const;
	void setExposureTimeNull();


	std::optional<double> focalLength() const;

	void setFocalLength(std::optional<double> newFocalLength);
	bool focalLengthNull() const;
	void setFocalLengthNull();


	ImageOrientation imageOrientation() const;

	void setImageOrientation(ImageOrientation newImageOrientation);


	std::optional<double> aperture() const;

	void setAperture(std::optional<double> newAperture);
	bool apertureNull() const;
	void setApertureNull();


	std::optional<double> shutterSpeed() const;

	void setShutterSpeed(std::optional<double> newShutterSpeed);
	bool shutterSpeedNull() const;
	void setShutterSpeedNull();


	std::optional<double> latitude() const;

	void setLatitude(std::optional<double> newLatitude);
	bool latitudeNull() const;
	void setLatitudeNull();


	std::optional<double> longitude() const;

	void setLongitude(std::optional<double> newLongitude);
	bool longitudeNull() const;
	void setLongitudeNull();


	std::optional<double> altitude() const;

	void setAltitude(std::optional<double> newAltitude);
	bool altitudeNull() const;
	void setAltitudeNull();


	std::optional<qint32> isoSpeedRating() const;

	void setIsoSpeedRating(std::optional<qint32> newIsoSpeedRating);
	bool isoSpeedRatingNull() const;
	void setIsoSpeedRatingNull();

	/**
	 * @brief Gets or sets the series timer identifier.
	 */
	QString seriesTimerId() const;
	/**
	* @brief Gets or sets the series timer identifier.
	*/
	void setSeriesTimerId(QString newSeriesTimerId);
	bool seriesTimerIdNull() const;
	void setSeriesTimerIdNull();

	/**
	 * @brief Gets or sets the program identifier.
	 */
	QString programId() const;
	/**
	* @brief Gets or sets the program identifier.
	*/
	void setProgramId(QString newProgramId);
	bool programIdNull() const;
	void setProgramIdNull();

	/**
	 * @brief Gets or sets the channel primary image tag.
	 */
	QString channelPrimaryImageTag() const;
	/**
	* @brief Gets or sets the channel primary image tag.
	*/
	void setChannelPrimaryImageTag(QString newChannelPrimaryImageTag);
	bool channelPrimaryImageTagNull() const;
	void setChannelPrimaryImageTagNull();

	/**
	 * @brief The start date of the recording, in UTC.
	 */
	QDateTime startDate() const;
	/**
	* @brief The start date of the recording, in UTC.
	*/
	void setStartDate(QDateTime newStartDate);
	bool startDateNull() const;
	void setStartDateNull();

	/**
	 * @brief Gets or sets the completion percentage.
	 */
	std::optional<double> completionPercentage() const;
	/**
	* @brief Gets or sets the completion percentage.
	*/
	void setCompletionPercentage(std::optional<double> newCompletionPercentage);
	bool completionPercentageNull() const;
	void setCompletionPercentageNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is repeat.
	 */
	std::optional<bool> isRepeat() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is repeat.
	*/
	void setIsRepeat(std::optional<bool> newIsRepeat);
	bool isRepeatNull() const;
	void setIsRepeatNull();

	/**
	 * @brief Gets or sets the episode title.
	 */
	QString episodeTitle() const;
	/**
	* @brief Gets or sets the episode title.
	*/
	void setEpisodeTitle(QString newEpisodeTitle);
	bool episodeTitleNull() const;
	void setEpisodeTitleNull();


	ChannelType channelType() const;

	void setChannelType(ChannelType newChannelType);


	ProgramAudio audio() const;

	void setAudio(ProgramAudio newAudio);

	/**
	 * @brief Gets or sets a value indicating whether this instance is movie.
	 */
	std::optional<bool> isMovie() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is movie.
	*/
	void setIsMovie(std::optional<bool> newIsMovie);
	bool isMovieNull() const;
	void setIsMovieNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is sports.
	 */
	std::optional<bool> isSports() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is sports.
	*/
	void setIsSports(std::optional<bool> newIsSports);
	bool isSportsNull() const;
	void setIsSportsNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is series.
	 */
	std::optional<bool> isSeries() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is series.
	*/
	void setIsSeries(std::optional<bool> newIsSeries);
	bool isSeriesNull() const;
	void setIsSeriesNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is live.
	 */
	std::optional<bool> isLive() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is live.
	*/
	void setIsLive(std::optional<bool> newIsLive);
	bool isLiveNull() const;
	void setIsLiveNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is news.
	 */
	std::optional<bool> isNews() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is news.
	*/
	void setIsNews(std::optional<bool> newIsNews);
	bool isNewsNull() const;
	void setIsNewsNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is kids.
	 */
	std::optional<bool> isKids() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is kids.
	*/
	void setIsKids(std::optional<bool> newIsKids);
	bool isKidsNull() const;
	void setIsKidsNull();

	/**
	 * @brief Gets or sets a value indicating whether this instance is premiere.
	 */
	std::optional<bool> isPremiere() const;
	/**
	* @brief Gets or sets a value indicating whether this instance is premiere.
	*/
	void setIsPremiere(std::optional<bool> newIsPremiere);
	bool isPremiereNull() const;
	void setIsPremiereNull();

	/**
	 * @brief Gets or sets the timer identifier.
	 */
	QString timerId() const;
	/**
	* @brief Gets or sets the timer identifier.
	*/
	void setTimerId(QString newTimerId);
	bool timerIdNull() const;
	void setTimerIdNull();


	QSharedPointer<BaseItemDto> currentProgram() const;

	void setCurrentProgram(QSharedPointer<BaseItemDto> newCurrentProgram);


protected:
	QString m_name;
	QString m_originalTitle;
	QString m_serverId;
	QString m_jellyfinId;
	QString m_etag;
	QString m_sourceType;
	QString m_playlistItemId;
	QDateTime m_dateCreated;
	QDateTime m_dateLastMediaAdded;
	QString m_extraType;
	std::optional<qint32> m_airsBeforeSeasonNumber = std::nullopt;
	std::optional<qint32> m_airsAfterSeasonNumber = std::nullopt;
	std::optional<qint32> m_airsBeforeEpisodeNumber = std::nullopt;
	std::optional<bool> m_canDelete = std::nullopt;
	std::optional<bool> m_canDownload = std::nullopt;
	std::optional<bool> m_hasSubtitles = std::nullopt;
	QString m_preferredMetadataLanguage;
	QString m_preferredMetadataCountryCode;
	std::optional<bool> m_supportsSync = std::nullopt;
	QString m_container;
	QString m_sortName;
	QString m_forcedSortName;
	Video3DFormat m_video3DFormat;
	QDateTime m_premiereDate;
	QList<ExternalUrl> m_externalUrls;
	QList<MediaSourceInfo> m_mediaSources;
	std::optional<float> m_criticRating = std::nullopt;
	QStringList m_productionLocations;
	QString m_path;
	std::optional<bool> m_enableMediaSourceDisplay = std::nullopt;
	QString m_officialRating;
	QString m_customRating;
	QString m_channelId;
	QString m_channelName;
	QString m_overview;
	QStringList m_taglines;
	QStringList m_genres;
	std::optional<float> m_communityRating = std::nullopt;
	std::optional<qint64> m_cumulativeRunTimeTicks = std::nullopt;
	std::optional<qint64> m_runTimeTicks = std::nullopt;
	PlayAccess m_playAccess;
	QString m_aspectRatio;
	std::optional<qint32> m_productionYear = std::nullopt;
	std::optional<bool> m_isPlaceHolder = std::nullopt;
	QString m_number;
	QString m_channelNumber;
	std::optional<qint32> m_indexNumber = std::nullopt;
	std::optional<qint32> m_indexNumberEnd = std::nullopt;
	std::optional<qint32> m_parentIndexNumber = std::nullopt;
	QList<MediaUrl> m_remoteTrailers;
	QJsonObject m_providerIds;
	std::optional<bool> m_isHD = std::nullopt;
	std::optional<bool> m_isFolder = std::nullopt;
	QString m_parentId;
	QString m_type;
	QList<BaseItemPerson> m_people;
	QList<NameGuidPair> m_studios;
	QList<NameGuidPair> m_genreItems;
	QString m_parentLogoItemId;
	QString m_parentBackdropItemId;
	QStringList m_parentBackdropImageTags;
	std::optional<qint32> m_localTrailerCount = std::nullopt;
	QSharedPointer<UserItemDataDto> m_userData = QSharedPointer<UserItemDataDto>();
	std::optional<qint32> m_recursiveItemCount = std::nullopt;
	std::optional<qint32> m_childCount = std::nullopt;
	QString m_seriesName;
	QString m_seriesId;
	QString m_seasonId;
	std::optional<qint32> m_specialFeatureCount = std::nullopt;
	QString m_displayPreferencesId;
	QString m_status;
	QString m_airTime;
	QList<DayOfWeek> m_airDays;
	QStringList m_tags;
	std::optional<double> m_primaryImageAspectRatio = std::nullopt;
	QStringList m_artists;
	QList<NameGuidPair> m_artistItems;
	QString m_album;
	QString m_collectionType;
	QString m_displayOrder;
	QString m_albumId;
	QString m_albumPrimaryImageTag;
	QString m_seriesPrimaryImageTag;
	QString m_albumArtist;
	QList<NameGuidPair> m_albumArtists;
	QString m_seasonName;
	QList<MediaStream> m_mediaStreams;
	VideoType m_videoType;
	std::optional<qint32> m_partCount = std::nullopt;
	std::optional<qint32> m_mediaSourceCount = std::nullopt;
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
	QList<ChapterInfo> m_chapters;
	LocationType m_locationType;
	IsoType m_isoType;
	QString m_mediaType;
	QDateTime m_endDate;
	QList<MetadataField> m_lockedFields;
	std::optional<qint32> m_trailerCount = std::nullopt;
	std::optional<qint32> m_movieCount = std::nullopt;
	std::optional<qint32> m_seriesCount = std::nullopt;
	std::optional<qint32> m_programCount = std::nullopt;
	std::optional<qint32> m_episodeCount = std::nullopt;
	std::optional<qint32> m_songCount = std::nullopt;
	std::optional<qint32> m_albumCount = std::nullopt;
	std::optional<qint32> m_artistCount = std::nullopt;
	std::optional<qint32> m_musicVideoCount = std::nullopt;
	std::optional<bool> m_lockData = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_cameraMake;
	QString m_cameraModel;
	QString m_software;
	std::optional<double> m_exposureTime = std::nullopt;
	std::optional<double> m_focalLength = std::nullopt;
	ImageOrientation m_imageOrientation;
	std::optional<double> m_aperture = std::nullopt;
	std::optional<double> m_shutterSpeed = std::nullopt;
	std::optional<double> m_latitude = std::nullopt;
	std::optional<double> m_longitude = std::nullopt;
	std::optional<double> m_altitude = std::nullopt;
	std::optional<qint32> m_isoSpeedRating = std::nullopt;
	QString m_seriesTimerId;
	QString m_programId;
	QString m_channelPrimaryImageTag;
	QDateTime m_startDate;
	std::optional<double> m_completionPercentage = std::nullopt;
	std::optional<bool> m_isRepeat = std::nullopt;
	QString m_episodeTitle;
	ChannelType m_channelType;
	ProgramAudio m_audio;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isLive = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isPremiere = std::nullopt;
	QString m_timerId;
	QSharedPointer<BaseItemDto> m_currentProgram = QSharedPointer<BaseItemDto>();
};

} // NS DTO

namespace Support {

using BaseItemDto = Jellyfin::DTO::BaseItemDto;

template <>
BaseItemDto fromJsonValue(const QJsonValue &source, convertType<BaseItemDto>);

template<>
QJsonValue toJsonValue(const BaseItemDto &source, convertType<BaseItemDto>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_BASEITEMDTO_H

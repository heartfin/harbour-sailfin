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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/channeltype.h"
#include "JellyfinQt/DTO/dayofweek.h"
#include "JellyfinQt/DTO/imageorientation.h"
#include "JellyfinQt/DTO/isotype.h"
#include "JellyfinQt/DTO/locationtype.h"
#include "JellyfinQt/DTO/metadatafield.h"
#include "JellyfinQt/DTO/playaccess.h"
#include "JellyfinQt/DTO/programaudio.h"
#include "JellyfinQt/DTO/video3dformat.h"
#include "JellyfinQt/DTO/videotype.h"

namespace Jellyfin {
namespace DTO {

class BaseItemPerson;
class ChapterInfo;
class ExternalUrl;
class MediaSourceInfo;
class MediaStream;
class MediaUrl;
class NameGuidPair;
class NameGuidPair;
class NameGuidPair;
class NameGuidPair;
class UserItemDataDto;

class BaseItemDto : public QObject {
	Q_OBJECT
public:
	explicit BaseItemDto(QObject *parent = nullptr);
	static BaseItemDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	Q_PROPERTY(QString originalTitle READ originalTitle WRITE setOriginalTitle NOTIFY originalTitleChanged)
	/**
	 * @brief Gets or sets the server identifier.
	 */
	Q_PROPERTY(QString serverId READ serverId WRITE setServerId NOTIFY serverIdChanged)
	/**
	 * @brief Gets or sets the id.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the etag.
	 */
	Q_PROPERTY(QString etag READ etag WRITE setEtag NOTIFY etagChanged)
	/**
	 * @brief Gets or sets the type of the source.
	 */
	Q_PROPERTY(QString sourceType READ sourceType WRITE setSourceType NOTIFY sourceTypeChanged)
	/**
	 * @brief Gets or sets the playlist item identifier.
	 */
	Q_PROPERTY(QString playlistItemId READ playlistItemId WRITE setPlaylistItemId NOTIFY playlistItemIdChanged)
	/**
	 * @brief Gets or sets the date created.
	 */
	Q_PROPERTY(QDateTime dateCreated READ dateCreated WRITE setDateCreated NOTIFY dateCreatedChanged)
	Q_PROPERTY(QDateTime dateLastMediaAdded READ dateLastMediaAdded WRITE setDateLastMediaAdded NOTIFY dateLastMediaAddedChanged)
	Q_PROPERTY(QString extraType READ extraType WRITE setExtraType NOTIFY extraTypeChanged)
	Q_PROPERTY(qint32 airsBeforeSeasonNumber READ airsBeforeSeasonNumber WRITE setAirsBeforeSeasonNumber NOTIFY airsBeforeSeasonNumberChanged)
	Q_PROPERTY(qint32 airsAfterSeasonNumber READ airsAfterSeasonNumber WRITE setAirsAfterSeasonNumber NOTIFY airsAfterSeasonNumberChanged)
	Q_PROPERTY(qint32 airsBeforeEpisodeNumber READ airsBeforeEpisodeNumber WRITE setAirsBeforeEpisodeNumber NOTIFY airsBeforeEpisodeNumberChanged)
	Q_PROPERTY(bool canDelete READ canDelete WRITE setCanDelete NOTIFY canDeleteChanged)
	Q_PROPERTY(bool canDownload READ canDownload WRITE setCanDownload NOTIFY canDownloadChanged)
	Q_PROPERTY(bool hasSubtitles READ hasSubtitles WRITE setHasSubtitles NOTIFY hasSubtitlesChanged)
	Q_PROPERTY(QString preferredMetadataLanguage READ preferredMetadataLanguage WRITE setPreferredMetadataLanguage NOTIFY preferredMetadataLanguageChanged)
	Q_PROPERTY(QString preferredMetadataCountryCode READ preferredMetadataCountryCode WRITE setPreferredMetadataCountryCode NOTIFY preferredMetadataCountryCodeChanged)
	/**
	 * @brief Gets or sets a value indicating whether [supports synchronize].
	 */
	Q_PROPERTY(bool supportsSync READ supportsSync WRITE setSupportsSync NOTIFY supportsSyncChanged)
	Q_PROPERTY(QString container READ container WRITE setContainer NOTIFY containerChanged)
	/**
	 * @brief Gets or sets the name of the sort.
	 */
	Q_PROPERTY(QString sortName READ sortName WRITE setSortName NOTIFY sortNameChanged)
	Q_PROPERTY(QString forcedSortName READ forcedSortName WRITE setForcedSortName NOTIFY forcedSortNameChanged)
	Q_PROPERTY(Video3DFormat video3DFormat READ video3DFormat WRITE setVideo3DFormat NOTIFY video3DFormatChanged)
	/**
	 * @brief Gets or sets the premiere date.
	 */
	Q_PROPERTY(QDateTime premiereDate READ premiereDate WRITE setPremiereDate NOTIFY premiereDateChanged)
	/**
	 * @brief Gets or sets the external urls.
	 */
	Q_PROPERTY(QList<ExternalUrl *> externalUrls READ externalUrls WRITE setExternalUrls NOTIFY externalUrlsChanged)
	/**
	 * @brief Gets or sets the media versions.
	 */
	Q_PROPERTY(QList<MediaSourceInfo *> mediaSources READ mediaSources WRITE setMediaSources NOTIFY mediaSourcesChanged)
	/**
	 * @brief Gets or sets the critic rating.
	 */
	Q_PROPERTY(float criticRating READ criticRating WRITE setCriticRating NOTIFY criticRatingChanged)
	Q_PROPERTY(QStringList productionLocations READ productionLocations WRITE setProductionLocations NOTIFY productionLocationsChanged)
	/**
	 * @brief Gets or sets the path.
	 */
	Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged)
	Q_PROPERTY(bool enableMediaSourceDisplay READ enableMediaSourceDisplay WRITE setEnableMediaSourceDisplay NOTIFY enableMediaSourceDisplayChanged)
	/**
	 * @brief Gets or sets the official rating.
	 */
	Q_PROPERTY(QString officialRating READ officialRating WRITE setOfficialRating NOTIFY officialRatingChanged)
	/**
	 * @brief Gets or sets the custom rating.
	 */
	Q_PROPERTY(QString customRating READ customRating WRITE setCustomRating NOTIFY customRatingChanged)
	/**
	 * @brief Gets or sets the channel identifier.
	 */
	Q_PROPERTY(QString channelId READ channelId WRITE setChannelId NOTIFY channelIdChanged)
	Q_PROPERTY(QString channelName READ channelName WRITE setChannelName NOTIFY channelNameChanged)
	/**
	 * @brief Gets or sets the overview.
	 */
	Q_PROPERTY(QString overview READ overview WRITE setOverview NOTIFY overviewChanged)
	/**
	 * @brief Gets or sets the taglines.
	 */
	Q_PROPERTY(QStringList taglines READ taglines WRITE setTaglines NOTIFY taglinesChanged)
	/**
	 * @brief Gets or sets the genres.
	 */
	Q_PROPERTY(QStringList genres READ genres WRITE setGenres NOTIFY genresChanged)
	/**
	 * @brief Gets or sets the community rating.
	 */
	Q_PROPERTY(float communityRating READ communityRating WRITE setCommunityRating NOTIFY communityRatingChanged)
	/**
	 * @brief Gets or sets the cumulative run time ticks.
	 */
	Q_PROPERTY(qint64 cumulativeRunTimeTicks READ cumulativeRunTimeTicks WRITE setCumulativeRunTimeTicks NOTIFY cumulativeRunTimeTicksChanged)
	/**
	 * @brief Gets or sets the run time ticks.
	 */
	Q_PROPERTY(qint64 runTimeTicks READ runTimeTicks WRITE setRunTimeTicks NOTIFY runTimeTicksChanged)
	Q_PROPERTY(PlayAccess playAccess READ playAccess WRITE setPlayAccess NOTIFY playAccessChanged)
	/**
	 * @brief Gets or sets the aspect ratio.
	 */
	Q_PROPERTY(QString aspectRatio READ aspectRatio WRITE setAspectRatio NOTIFY aspectRatioChanged)
	/**
	 * @brief Gets or sets the production year.
	 */
	Q_PROPERTY(qint32 productionYear READ productionYear WRITE setProductionYear NOTIFY productionYearChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is place holder.
	 */
	Q_PROPERTY(bool isPlaceHolder READ isPlaceHolder WRITE setIsPlaceHolder NOTIFY isPlaceHolderChanged)
	/**
	 * @brief Gets or sets the number.
	 */
	Q_PROPERTY(QString number READ number WRITE setNumber NOTIFY numberChanged)
	Q_PROPERTY(QString channelNumber READ channelNumber WRITE setChannelNumber NOTIFY channelNumberChanged)
	/**
	 * @brief Gets or sets the index number.
	 */
	Q_PROPERTY(qint32 indexNumber READ indexNumber WRITE setIndexNumber NOTIFY indexNumberChanged)
	/**
	 * @brief Gets or sets the index number end.
	 */
	Q_PROPERTY(qint32 indexNumberEnd READ indexNumberEnd WRITE setIndexNumberEnd NOTIFY indexNumberEndChanged)
	/**
	 * @brief Gets or sets the parent index number.
	 */
	Q_PROPERTY(qint32 parentIndexNumber READ parentIndexNumber WRITE setParentIndexNumber NOTIFY parentIndexNumberChanged)
	/**
	 * @brief Gets or sets the trailer urls.
	 */
	Q_PROPERTY(QList<MediaUrl *> remoteTrailers READ remoteTrailers WRITE setRemoteTrailers NOTIFY remoteTrailersChanged)
	/**
	 * @brief Gets or sets the provider ids.
	 */
	Q_PROPERTY(QJsonObject providerIds READ providerIds WRITE setProviderIds NOTIFY providerIdsChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is HD.
	 */
	Q_PROPERTY(bool isHD READ isHD WRITE setIsHD NOTIFY isHDChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is folder.
	 */
	Q_PROPERTY(bool isFolder READ isFolder WRITE setIsFolder NOTIFY isFolderChanged)
	/**
	 * @brief Gets or sets the parent id.
	 */
	Q_PROPERTY(QString parentId READ parentId WRITE setParentId NOTIFY parentIdChanged)
	/**
	 * @brief Gets or sets the type.
	 */
	Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
	/**
	 * @brief Gets or sets the people.
	 */
	Q_PROPERTY(QList<BaseItemPerson *> people READ people WRITE setPeople NOTIFY peopleChanged)
	/**
	 * @brief Gets or sets the studios.
	 */
	Q_PROPERTY(QList<NameGuidPair *> studios READ studios WRITE setStudios NOTIFY studiosChanged)
	Q_PROPERTY(QList<NameGuidPair *> genreItems READ genreItems WRITE setGenreItems NOTIFY genreItemsChanged)
	/**
	 * @brief If the item does not have a logo, this will hold the Id of the Parent that has one.
	 */
	Q_PROPERTY(QString parentLogoItemId READ parentLogoItemId WRITE setParentLogoItemId NOTIFY parentLogoItemIdChanged)
	/**
	 * @brief If the item does not have any backdrops, this will hold the Id of the Parent that has one.
	 */
	Q_PROPERTY(QString parentBackdropItemId READ parentBackdropItemId WRITE setParentBackdropItemId NOTIFY parentBackdropItemIdChanged)
	/**
	 * @brief Gets or sets the parent backdrop image tags.
	 */
	Q_PROPERTY(QStringList parentBackdropImageTags READ parentBackdropImageTags WRITE setParentBackdropImageTags NOTIFY parentBackdropImageTagsChanged)
	/**
	 * @brief Gets or sets the local trailer count.
	 */
	Q_PROPERTY(qint32 localTrailerCount READ localTrailerCount WRITE setLocalTrailerCount NOTIFY localTrailerCountChanged)
	Q_PROPERTY(UserItemDataDto * userData READ userData WRITE setUserData NOTIFY userDataChanged)
	/**
	 * @brief Gets or sets the recursive item count.
	 */
	Q_PROPERTY(qint32 recursiveItemCount READ recursiveItemCount WRITE setRecursiveItemCount NOTIFY recursiveItemCountChanged)
	/**
	 * @brief Gets or sets the child count.
	 */
	Q_PROPERTY(qint32 childCount READ childCount WRITE setChildCount NOTIFY childCountChanged)
	/**
	 * @brief Gets or sets the name of the series.
	 */
	Q_PROPERTY(QString seriesName READ seriesName WRITE setSeriesName NOTIFY seriesNameChanged)
	/**
	 * @brief Gets or sets the series id.
	 */
	Q_PROPERTY(QString seriesId READ seriesId WRITE setSeriesId NOTIFY seriesIdChanged)
	/**
	 * @brief Gets or sets the season identifier.
	 */
	Q_PROPERTY(QString seasonId READ seasonId WRITE setSeasonId NOTIFY seasonIdChanged)
	/**
	 * @brief Gets or sets the special feature count.
	 */
	Q_PROPERTY(qint32 specialFeatureCount READ specialFeatureCount WRITE setSpecialFeatureCount NOTIFY specialFeatureCountChanged)
	/**
	 * @brief Gets or sets the display preferences id.
	 */
	Q_PROPERTY(QString displayPreferencesId READ displayPreferencesId WRITE setDisplayPreferencesId NOTIFY displayPreferencesIdChanged)
	/**
	 * @brief Gets or sets the status.
	 */
	Q_PROPERTY(QString status READ status WRITE setStatus NOTIFY statusChanged)
	/**
	 * @brief Gets or sets the air time.
	 */
	Q_PROPERTY(QString airTime READ airTime WRITE setAirTime NOTIFY airTimeChanged)
	/**
	 * @brief Gets or sets the air days.
	 */
	Q_PROPERTY(QList<DayOfWeek> airDays READ airDays WRITE setAirDays NOTIFY airDaysChanged)
	/**
	 * @brief Gets or sets the tags.
	 */
	Q_PROPERTY(QStringList tags READ tags WRITE setTags NOTIFY tagsChanged)
	/**
	 * @brief Gets or sets the primary image aspect ratio, after image enhancements.
	 */
	Q_PROPERTY(double primaryImageAspectRatio READ primaryImageAspectRatio WRITE setPrimaryImageAspectRatio NOTIFY primaryImageAspectRatioChanged)
	/**
	 * @brief Gets or sets the artists.
	 */
	Q_PROPERTY(QStringList artists READ artists WRITE setArtists NOTIFY artistsChanged)
	/**
	 * @brief Gets or sets the artist items.
	 */
	Q_PROPERTY(QList<NameGuidPair *> artistItems READ artistItems WRITE setArtistItems NOTIFY artistItemsChanged)
	/**
	 * @brief Gets or sets the album.
	 */
	Q_PROPERTY(QString album READ album WRITE setAlbum NOTIFY albumChanged)
	/**
	 * @brief Gets or sets the type of the collection.
	 */
	Q_PROPERTY(QString collectionType READ collectionType WRITE setCollectionType NOTIFY collectionTypeChanged)
	/**
	 * @brief Gets or sets the display order.
	 */
	Q_PROPERTY(QString displayOrder READ displayOrder WRITE setDisplayOrder NOTIFY displayOrderChanged)
	/**
	 * @brief Gets or sets the album id.
	 */
	Q_PROPERTY(QString albumId READ albumId WRITE setAlbumId NOTIFY albumIdChanged)
	/**
	 * @brief Gets or sets the album image tag.
	 */
	Q_PROPERTY(QString albumPrimaryImageTag READ albumPrimaryImageTag WRITE setAlbumPrimaryImageTag NOTIFY albumPrimaryImageTagChanged)
	/**
	 * @brief Gets or sets the series primary image tag.
	 */
	Q_PROPERTY(QString seriesPrimaryImageTag READ seriesPrimaryImageTag WRITE setSeriesPrimaryImageTag NOTIFY seriesPrimaryImageTagChanged)
	/**
	 * @brief Gets or sets the album artist.
	 */
	Q_PROPERTY(QString albumArtist READ albumArtist WRITE setAlbumArtist NOTIFY albumArtistChanged)
	/**
	 * @brief Gets or sets the album artists.
	 */
	Q_PROPERTY(QList<NameGuidPair *> albumArtists READ albumArtists WRITE setAlbumArtists NOTIFY albumArtistsChanged)
	/**
	 * @brief Gets or sets the name of the season.
	 */
	Q_PROPERTY(QString seasonName READ seasonName WRITE setSeasonName NOTIFY seasonNameChanged)
	/**
	 * @brief Gets or sets the media streams.
	 */
	Q_PROPERTY(QList<MediaStream *> mediaStreams READ mediaStreams WRITE setMediaStreams NOTIFY mediaStreamsChanged)
	Q_PROPERTY(VideoType videoType READ videoType WRITE setVideoType NOTIFY videoTypeChanged)
	/**
	 * @brief Gets or sets the part count.
	 */
	Q_PROPERTY(qint32 partCount READ partCount WRITE setPartCount NOTIFY partCountChanged)
	Q_PROPERTY(qint32 mediaSourceCount READ mediaSourceCount WRITE setMediaSourceCount NOTIFY mediaSourceCountChanged)
	/**
	 * @brief Gets or sets the image tags.
	 */
	Q_PROPERTY(QJsonObject imageTags READ imageTags WRITE setImageTags NOTIFY imageTagsChanged)
	/**
	 * @brief Gets or sets the backdrop image tags.
	 */
	Q_PROPERTY(QStringList backdropImageTags READ backdropImageTags WRITE setBackdropImageTags NOTIFY backdropImageTagsChanged)
	/**
	 * @brief Gets or sets the screenshot image tags.
	 */
	Q_PROPERTY(QStringList screenshotImageTags READ screenshotImageTags WRITE setScreenshotImageTags NOTIFY screenshotImageTagsChanged)
	/**
	 * @brief Gets or sets the parent logo image tag.
	 */
	Q_PROPERTY(QString parentLogoImageTag READ parentLogoImageTag WRITE setParentLogoImageTag NOTIFY parentLogoImageTagChanged)
	/**
	 * @brief If the item does not have a art, this will hold the Id of the Parent that has one.
	 */
	Q_PROPERTY(QString parentArtItemId READ parentArtItemId WRITE setParentArtItemId NOTIFY parentArtItemIdChanged)
	/**
	 * @brief Gets or sets the parent art image tag.
	 */
	Q_PROPERTY(QString parentArtImageTag READ parentArtImageTag WRITE setParentArtImageTag NOTIFY parentArtImageTagChanged)
	/**
	 * @brief Gets or sets the series thumb image tag.
	 */
	Q_PROPERTY(QString seriesThumbImageTag READ seriesThumbImageTag WRITE setSeriesThumbImageTag NOTIFY seriesThumbImageTagChanged)
	/**
	 * @brief Gets or sets the blurhashes for the image tags.
Maps image type to dictionary mapping image tag to blurhash value.
	 */
	Q_PROPERTY(QJsonObject imageBlurHashes READ imageBlurHashes WRITE setImageBlurHashes NOTIFY imageBlurHashesChanged)
	/**
	 * @brief Gets or sets the series studio.
	 */
	Q_PROPERTY(QString seriesStudio READ seriesStudio WRITE setSeriesStudio NOTIFY seriesStudioChanged)
	/**
	 * @brief Gets or sets the parent thumb item id.
	 */
	Q_PROPERTY(QString parentThumbItemId READ parentThumbItemId WRITE setParentThumbItemId NOTIFY parentThumbItemIdChanged)
	/**
	 * @brief Gets or sets the parent thumb image tag.
	 */
	Q_PROPERTY(QString parentThumbImageTag READ parentThumbImageTag WRITE setParentThumbImageTag NOTIFY parentThumbImageTagChanged)
	/**
	 * @brief Gets or sets the parent primary image item identifier.
	 */
	Q_PROPERTY(QString parentPrimaryImageItemId READ parentPrimaryImageItemId WRITE setParentPrimaryImageItemId NOTIFY parentPrimaryImageItemIdChanged)
	/**
	 * @brief Gets or sets the parent primary image tag.
	 */
	Q_PROPERTY(QString parentPrimaryImageTag READ parentPrimaryImageTag WRITE setParentPrimaryImageTag NOTIFY parentPrimaryImageTagChanged)
	/**
	 * @brief Gets or sets the chapters.
	 */
	Q_PROPERTY(QList<ChapterInfo *> chapters READ chapters WRITE setChapters NOTIFY chaptersChanged)
	Q_PROPERTY(LocationType locationType READ locationType WRITE setLocationType NOTIFY locationTypeChanged)
	Q_PROPERTY(IsoType isoType READ isoType WRITE setIsoType NOTIFY isoTypeChanged)
	/**
	 * @brief Gets or sets the type of the media.
	 */
	Q_PROPERTY(QString mediaType READ mediaType WRITE setMediaType NOTIFY mediaTypeChanged)
	/**
	 * @brief Gets or sets the end date.
	 */
	Q_PROPERTY(QDateTime endDate READ endDate WRITE setEndDate NOTIFY endDateChanged)
	/**
	 * @brief Gets or sets the locked fields.
	 */
	Q_PROPERTY(QList<MetadataField> lockedFields READ lockedFields WRITE setLockedFields NOTIFY lockedFieldsChanged)
	/**
	 * @brief Gets or sets the trailer count.
	 */
	Q_PROPERTY(qint32 trailerCount READ trailerCount WRITE setTrailerCount NOTIFY trailerCountChanged)
	/**
	 * @brief Gets or sets the movie count.
	 */
	Q_PROPERTY(qint32 movieCount READ movieCount WRITE setMovieCount NOTIFY movieCountChanged)
	/**
	 * @brief Gets or sets the series count.
	 */
	Q_PROPERTY(qint32 seriesCount READ seriesCount WRITE setSeriesCount NOTIFY seriesCountChanged)
	Q_PROPERTY(qint32 programCount READ programCount WRITE setProgramCount NOTIFY programCountChanged)
	/**
	 * @brief Gets or sets the episode count.
	 */
	Q_PROPERTY(qint32 episodeCount READ episodeCount WRITE setEpisodeCount NOTIFY episodeCountChanged)
	/**
	 * @brief Gets or sets the song count.
	 */
	Q_PROPERTY(qint32 songCount READ songCount WRITE setSongCount NOTIFY songCountChanged)
	/**
	 * @brief Gets or sets the album count.
	 */
	Q_PROPERTY(qint32 albumCount READ albumCount WRITE setAlbumCount NOTIFY albumCountChanged)
	Q_PROPERTY(qint32 artistCount READ artistCount WRITE setArtistCount NOTIFY artistCountChanged)
	/**
	 * @brief Gets or sets the music video count.
	 */
	Q_PROPERTY(qint32 musicVideoCount READ musicVideoCount WRITE setMusicVideoCount NOTIFY musicVideoCountChanged)
	/**
	 * @brief Gets or sets a value indicating whether [enable internet providers].
	 */
	Q_PROPERTY(bool lockData READ lockData WRITE setLockData NOTIFY lockDataChanged)
	Q_PROPERTY(qint32 width READ width WRITE setWidth NOTIFY widthChanged)
	Q_PROPERTY(qint32 height READ height WRITE setHeight NOTIFY heightChanged)
	Q_PROPERTY(QString cameraMake READ cameraMake WRITE setCameraMake NOTIFY cameraMakeChanged)
	Q_PROPERTY(QString cameraModel READ cameraModel WRITE setCameraModel NOTIFY cameraModelChanged)
	Q_PROPERTY(QString software READ software WRITE setSoftware NOTIFY softwareChanged)
	Q_PROPERTY(double exposureTime READ exposureTime WRITE setExposureTime NOTIFY exposureTimeChanged)
	Q_PROPERTY(double focalLength READ focalLength WRITE setFocalLength NOTIFY focalLengthChanged)
	Q_PROPERTY(ImageOrientation imageOrientation READ imageOrientation WRITE setImageOrientation NOTIFY imageOrientationChanged)
	Q_PROPERTY(double aperture READ aperture WRITE setAperture NOTIFY apertureChanged)
	Q_PROPERTY(double shutterSpeed READ shutterSpeed WRITE setShutterSpeed NOTIFY shutterSpeedChanged)
	Q_PROPERTY(double latitude READ latitude WRITE setLatitude NOTIFY latitudeChanged)
	Q_PROPERTY(double longitude READ longitude WRITE setLongitude NOTIFY longitudeChanged)
	Q_PROPERTY(double altitude READ altitude WRITE setAltitude NOTIFY altitudeChanged)
	Q_PROPERTY(qint32 isoSpeedRating READ isoSpeedRating WRITE setIsoSpeedRating NOTIFY isoSpeedRatingChanged)
	/**
	 * @brief Gets or sets the series timer identifier.
	 */
	Q_PROPERTY(QString seriesTimerId READ seriesTimerId WRITE setSeriesTimerId NOTIFY seriesTimerIdChanged)
	/**
	 * @brief Gets or sets the program identifier.
	 */
	Q_PROPERTY(QString programId READ programId WRITE setProgramId NOTIFY programIdChanged)
	/**
	 * @brief Gets or sets the channel primary image tag.
	 */
	Q_PROPERTY(QString channelPrimaryImageTag READ channelPrimaryImageTag WRITE setChannelPrimaryImageTag NOTIFY channelPrimaryImageTagChanged)
	/**
	 * @brief The start date of the recording, in UTC.
	 */
	Q_PROPERTY(QDateTime startDate READ startDate WRITE setStartDate NOTIFY startDateChanged)
	/**
	 * @brief Gets or sets the completion percentage.
	 */
	Q_PROPERTY(double completionPercentage READ completionPercentage WRITE setCompletionPercentage NOTIFY completionPercentageChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is repeat.
	 */
	Q_PROPERTY(bool isRepeat READ isRepeat WRITE setIsRepeat NOTIFY isRepeatChanged)
	/**
	 * @brief Gets or sets the episode title.
	 */
	Q_PROPERTY(QString episodeTitle READ episodeTitle WRITE setEpisodeTitle NOTIFY episodeTitleChanged)
	Q_PROPERTY(ChannelType channelType READ channelType WRITE setChannelType NOTIFY channelTypeChanged)
	Q_PROPERTY(ProgramAudio audio READ audio WRITE setAudio NOTIFY audioChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is movie.
	 */
	Q_PROPERTY(bool isMovie READ isMovie WRITE setIsMovie NOTIFY isMovieChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is sports.
	 */
	Q_PROPERTY(bool isSports READ isSports WRITE setIsSports NOTIFY isSportsChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is series.
	 */
	Q_PROPERTY(bool isSeries READ isSeries WRITE setIsSeries NOTIFY isSeriesChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is live.
	 */
	Q_PROPERTY(bool isLive READ isLive WRITE setIsLive NOTIFY isLiveChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is news.
	 */
	Q_PROPERTY(bool isNews READ isNews WRITE setIsNews NOTIFY isNewsChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is kids.
	 */
	Q_PROPERTY(bool isKids READ isKids WRITE setIsKids NOTIFY isKidsChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is premiere.
	 */
	Q_PROPERTY(bool isPremiere READ isPremiere WRITE setIsPremiere NOTIFY isPremiereChanged)
	/**
	 * @brief Gets or sets the timer identifier.
	 */
	Q_PROPERTY(QString timerId READ timerId WRITE setTimerId NOTIFY timerIdChanged)
	Q_PROPERTY(BaseItemDto * currentProgram READ currentProgram WRITE setCurrentProgram NOTIFY currentProgramChanged)

	QString name() const;
	void setName(QString newName);
	
	QString originalTitle() const;
	void setOriginalTitle(QString newOriginalTitle);
	
	QString serverId() const;
	void setServerId(QString newServerId);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString etag() const;
	void setEtag(QString newEtag);
	
	QString sourceType() const;
	void setSourceType(QString newSourceType);
	
	QString playlistItemId() const;
	void setPlaylistItemId(QString newPlaylistItemId);
	
	QDateTime dateCreated() const;
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
	
	bool supportsSync() const;
	void setSupportsSync(bool newSupportsSync);
	
	QString container() const;
	void setContainer(QString newContainer);
	
	QString sortName() const;
	void setSortName(QString newSortName);
	
	QString forcedSortName() const;
	void setForcedSortName(QString newForcedSortName);
	
	Video3DFormat video3DFormat() const;
	void setVideo3DFormat(Video3DFormat newVideo3DFormat);
	
	QDateTime premiereDate() const;
	void setPremiereDate(QDateTime newPremiereDate);
	
	QList<ExternalUrl *> externalUrls() const;
	void setExternalUrls(QList<ExternalUrl *> newExternalUrls);
	
	QList<MediaSourceInfo *> mediaSources() const;
	void setMediaSources(QList<MediaSourceInfo *> newMediaSources);
	
	float criticRating() const;
	void setCriticRating(float newCriticRating);
	
	QStringList productionLocations() const;
	void setProductionLocations(QStringList newProductionLocations);
	
	QString path() const;
	void setPath(QString newPath);
	
	bool enableMediaSourceDisplay() const;
	void setEnableMediaSourceDisplay(bool newEnableMediaSourceDisplay);
	
	QString officialRating() const;
	void setOfficialRating(QString newOfficialRating);
	
	QString customRating() const;
	void setCustomRating(QString newCustomRating);
	
	QString channelId() const;
	void setChannelId(QString newChannelId);
	
	QString channelName() const;
	void setChannelName(QString newChannelName);
	
	QString overview() const;
	void setOverview(QString newOverview);
	
	QStringList taglines() const;
	void setTaglines(QStringList newTaglines);
	
	QStringList genres() const;
	void setGenres(QStringList newGenres);
	
	float communityRating() const;
	void setCommunityRating(float newCommunityRating);
	
	qint64 cumulativeRunTimeTicks() const;
	void setCumulativeRunTimeTicks(qint64 newCumulativeRunTimeTicks);
	
	qint64 runTimeTicks() const;
	void setRunTimeTicks(qint64 newRunTimeTicks);
	
	PlayAccess playAccess() const;
	void setPlayAccess(PlayAccess newPlayAccess);
	
	QString aspectRatio() const;
	void setAspectRatio(QString newAspectRatio);
	
	qint32 productionYear() const;
	void setProductionYear(qint32 newProductionYear);
	
	bool isPlaceHolder() const;
	void setIsPlaceHolder(bool newIsPlaceHolder);
	
	QString number() const;
	void setNumber(QString newNumber);
	
	QString channelNumber() const;
	void setChannelNumber(QString newChannelNumber);
	
	qint32 indexNumber() const;
	void setIndexNumber(qint32 newIndexNumber);
	
	qint32 indexNumberEnd() const;
	void setIndexNumberEnd(qint32 newIndexNumberEnd);
	
	qint32 parentIndexNumber() const;
	void setParentIndexNumber(qint32 newParentIndexNumber);
	
	QList<MediaUrl *> remoteTrailers() const;
	void setRemoteTrailers(QList<MediaUrl *> newRemoteTrailers);
	
	QJsonObject providerIds() const;
	void setProviderIds(QJsonObject newProviderIds);
	
	bool isHD() const;
	void setIsHD(bool newIsHD);
	
	bool isFolder() const;
	void setIsFolder(bool newIsFolder);
	
	QString parentId() const;
	void setParentId(QString newParentId);
	
	QString type() const;
	void setType(QString newType);
	
	QList<BaseItemPerson *> people() const;
	void setPeople(QList<BaseItemPerson *> newPeople);
	
	QList<NameGuidPair *> studios() const;
	void setStudios(QList<NameGuidPair *> newStudios);
	
	QList<NameGuidPair *> genreItems() const;
	void setGenreItems(QList<NameGuidPair *> newGenreItems);
	
	QString parentLogoItemId() const;
	void setParentLogoItemId(QString newParentLogoItemId);
	
	QString parentBackdropItemId() const;
	void setParentBackdropItemId(QString newParentBackdropItemId);
	
	QStringList parentBackdropImageTags() const;
	void setParentBackdropImageTags(QStringList newParentBackdropImageTags);
	
	qint32 localTrailerCount() const;
	void setLocalTrailerCount(qint32 newLocalTrailerCount);
	
	UserItemDataDto * userData() const;
	void setUserData(UserItemDataDto * newUserData);
	
	qint32 recursiveItemCount() const;
	void setRecursiveItemCount(qint32 newRecursiveItemCount);
	
	qint32 childCount() const;
	void setChildCount(qint32 newChildCount);
	
	QString seriesName() const;
	void setSeriesName(QString newSeriesName);
	
	QString seriesId() const;
	void setSeriesId(QString newSeriesId);
	
	QString seasonId() const;
	void setSeasonId(QString newSeasonId);
	
	qint32 specialFeatureCount() const;
	void setSpecialFeatureCount(qint32 newSpecialFeatureCount);
	
	QString displayPreferencesId() const;
	void setDisplayPreferencesId(QString newDisplayPreferencesId);
	
	QString status() const;
	void setStatus(QString newStatus);
	
	QString airTime() const;
	void setAirTime(QString newAirTime);
	
	QList<DayOfWeek> airDays() const;
	void setAirDays(QList<DayOfWeek> newAirDays);
	
	QStringList tags() const;
	void setTags(QStringList newTags);
	
	double primaryImageAspectRatio() const;
	void setPrimaryImageAspectRatio(double newPrimaryImageAspectRatio);
	
	QStringList artists() const;
	void setArtists(QStringList newArtists);
	
	QList<NameGuidPair *> artistItems() const;
	void setArtistItems(QList<NameGuidPair *> newArtistItems);
	
	QString album() const;
	void setAlbum(QString newAlbum);
	
	QString collectionType() const;
	void setCollectionType(QString newCollectionType);
	
	QString displayOrder() const;
	void setDisplayOrder(QString newDisplayOrder);
	
	QString albumId() const;
	void setAlbumId(QString newAlbumId);
	
	QString albumPrimaryImageTag() const;
	void setAlbumPrimaryImageTag(QString newAlbumPrimaryImageTag);
	
	QString seriesPrimaryImageTag() const;
	void setSeriesPrimaryImageTag(QString newSeriesPrimaryImageTag);
	
	QString albumArtist() const;
	void setAlbumArtist(QString newAlbumArtist);
	
	QList<NameGuidPair *> albumArtists() const;
	void setAlbumArtists(QList<NameGuidPair *> newAlbumArtists);
	
	QString seasonName() const;
	void setSeasonName(QString newSeasonName);
	
	QList<MediaStream *> mediaStreams() const;
	void setMediaStreams(QList<MediaStream *> newMediaStreams);
	
	VideoType videoType() const;
	void setVideoType(VideoType newVideoType);
	
	qint32 partCount() const;
	void setPartCount(qint32 newPartCount);
	
	qint32 mediaSourceCount() const;
	void setMediaSourceCount(qint32 newMediaSourceCount);
	
	QJsonObject imageTags() const;
	void setImageTags(QJsonObject newImageTags);
	
	QStringList backdropImageTags() const;
	void setBackdropImageTags(QStringList newBackdropImageTags);
	
	QStringList screenshotImageTags() const;
	void setScreenshotImageTags(QStringList newScreenshotImageTags);
	
	QString parentLogoImageTag() const;
	void setParentLogoImageTag(QString newParentLogoImageTag);
	
	QString parentArtItemId() const;
	void setParentArtItemId(QString newParentArtItemId);
	
	QString parentArtImageTag() const;
	void setParentArtImageTag(QString newParentArtImageTag);
	
	QString seriesThumbImageTag() const;
	void setSeriesThumbImageTag(QString newSeriesThumbImageTag);
	
	QJsonObject imageBlurHashes() const;
	void setImageBlurHashes(QJsonObject newImageBlurHashes);
	
	QString seriesStudio() const;
	void setSeriesStudio(QString newSeriesStudio);
	
	QString parentThumbItemId() const;
	void setParentThumbItemId(QString newParentThumbItemId);
	
	QString parentThumbImageTag() const;
	void setParentThumbImageTag(QString newParentThumbImageTag);
	
	QString parentPrimaryImageItemId() const;
	void setParentPrimaryImageItemId(QString newParentPrimaryImageItemId);
	
	QString parentPrimaryImageTag() const;
	void setParentPrimaryImageTag(QString newParentPrimaryImageTag);
	
	QList<ChapterInfo *> chapters() const;
	void setChapters(QList<ChapterInfo *> newChapters);
	
	LocationType locationType() const;
	void setLocationType(LocationType newLocationType);
	
	IsoType isoType() const;
	void setIsoType(IsoType newIsoType);
	
	QString mediaType() const;
	void setMediaType(QString newMediaType);
	
	QDateTime endDate() const;
	void setEndDate(QDateTime newEndDate);
	
	QList<MetadataField> lockedFields() const;
	void setLockedFields(QList<MetadataField> newLockedFields);
	
	qint32 trailerCount() const;
	void setTrailerCount(qint32 newTrailerCount);
	
	qint32 movieCount() const;
	void setMovieCount(qint32 newMovieCount);
	
	qint32 seriesCount() const;
	void setSeriesCount(qint32 newSeriesCount);
	
	qint32 programCount() const;
	void setProgramCount(qint32 newProgramCount);
	
	qint32 episodeCount() const;
	void setEpisodeCount(qint32 newEpisodeCount);
	
	qint32 songCount() const;
	void setSongCount(qint32 newSongCount);
	
	qint32 albumCount() const;
	void setAlbumCount(qint32 newAlbumCount);
	
	qint32 artistCount() const;
	void setArtistCount(qint32 newArtistCount);
	
	qint32 musicVideoCount() const;
	void setMusicVideoCount(qint32 newMusicVideoCount);
	
	bool lockData() const;
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
	
	QString seriesTimerId() const;
	void setSeriesTimerId(QString newSeriesTimerId);
	
	QString programId() const;
	void setProgramId(QString newProgramId);
	
	QString channelPrimaryImageTag() const;
	void setChannelPrimaryImageTag(QString newChannelPrimaryImageTag);
	
	QDateTime startDate() const;
	void setStartDate(QDateTime newStartDate);
	
	double completionPercentage() const;
	void setCompletionPercentage(double newCompletionPercentage);
	
	bool isRepeat() const;
	void setIsRepeat(bool newIsRepeat);
	
	QString episodeTitle() const;
	void setEpisodeTitle(QString newEpisodeTitle);
	
	ChannelType channelType() const;
	void setChannelType(ChannelType newChannelType);
	
	ProgramAudio audio() const;
	void setAudio(ProgramAudio newAudio);
	
	bool isMovie() const;
	void setIsMovie(bool newIsMovie);
	
	bool isSports() const;
	void setIsSports(bool newIsSports);
	
	bool isSeries() const;
	void setIsSeries(bool newIsSeries);
	
	bool isLive() const;
	void setIsLive(bool newIsLive);
	
	bool isNews() const;
	void setIsNews(bool newIsNews);
	
	bool isKids() const;
	void setIsKids(bool newIsKids);
	
	bool isPremiere() const;
	void setIsPremiere(bool newIsPremiere);
	
	QString timerId() const;
	void setTimerId(QString newTimerId);
	
	BaseItemDto * currentProgram() const;
	void setCurrentProgram(BaseItemDto * newCurrentProgram);
	
signals:
	void nameChanged(QString newName);
	void originalTitleChanged(QString newOriginalTitle);
	void serverIdChanged(QString newServerId);
	void jellyfinIdChanged(QString newJellyfinId);
	void etagChanged(QString newEtag);
	void sourceTypeChanged(QString newSourceType);
	void playlistItemIdChanged(QString newPlaylistItemId);
	void dateCreatedChanged(QDateTime newDateCreated);
	void dateLastMediaAddedChanged(QDateTime newDateLastMediaAdded);
	void extraTypeChanged(QString newExtraType);
	void airsBeforeSeasonNumberChanged(qint32 newAirsBeforeSeasonNumber);
	void airsAfterSeasonNumberChanged(qint32 newAirsAfterSeasonNumber);
	void airsBeforeEpisodeNumberChanged(qint32 newAirsBeforeEpisodeNumber);
	void canDeleteChanged(bool newCanDelete);
	void canDownloadChanged(bool newCanDownload);
	void hasSubtitlesChanged(bool newHasSubtitles);
	void preferredMetadataLanguageChanged(QString newPreferredMetadataLanguage);
	void preferredMetadataCountryCodeChanged(QString newPreferredMetadataCountryCode);
	void supportsSyncChanged(bool newSupportsSync);
	void containerChanged(QString newContainer);
	void sortNameChanged(QString newSortName);
	void forcedSortNameChanged(QString newForcedSortName);
	void video3DFormatChanged(Video3DFormat newVideo3DFormat);
	void premiereDateChanged(QDateTime newPremiereDate);
	void externalUrlsChanged(QList<ExternalUrl *> newExternalUrls);
	void mediaSourcesChanged(QList<MediaSourceInfo *> newMediaSources);
	void criticRatingChanged(float newCriticRating);
	void productionLocationsChanged(QStringList newProductionLocations);
	void pathChanged(QString newPath);
	void enableMediaSourceDisplayChanged(bool newEnableMediaSourceDisplay);
	void officialRatingChanged(QString newOfficialRating);
	void customRatingChanged(QString newCustomRating);
	void channelIdChanged(QString newChannelId);
	void channelNameChanged(QString newChannelName);
	void overviewChanged(QString newOverview);
	void taglinesChanged(QStringList newTaglines);
	void genresChanged(QStringList newGenres);
	void communityRatingChanged(float newCommunityRating);
	void cumulativeRunTimeTicksChanged(qint64 newCumulativeRunTimeTicks);
	void runTimeTicksChanged(qint64 newRunTimeTicks);
	void playAccessChanged(PlayAccess newPlayAccess);
	void aspectRatioChanged(QString newAspectRatio);
	void productionYearChanged(qint32 newProductionYear);
	void isPlaceHolderChanged(bool newIsPlaceHolder);
	void numberChanged(QString newNumber);
	void channelNumberChanged(QString newChannelNumber);
	void indexNumberChanged(qint32 newIndexNumber);
	void indexNumberEndChanged(qint32 newIndexNumberEnd);
	void parentIndexNumberChanged(qint32 newParentIndexNumber);
	void remoteTrailersChanged(QList<MediaUrl *> newRemoteTrailers);
	void providerIdsChanged(QJsonObject newProviderIds);
	void isHDChanged(bool newIsHD);
	void isFolderChanged(bool newIsFolder);
	void parentIdChanged(QString newParentId);
	void typeChanged(QString newType);
	void peopleChanged(QList<BaseItemPerson *> newPeople);
	void studiosChanged(QList<NameGuidPair *> newStudios);
	void genreItemsChanged(QList<NameGuidPair *> newGenreItems);
	void parentLogoItemIdChanged(QString newParentLogoItemId);
	void parentBackdropItemIdChanged(QString newParentBackdropItemId);
	void parentBackdropImageTagsChanged(QStringList newParentBackdropImageTags);
	void localTrailerCountChanged(qint32 newLocalTrailerCount);
	void userDataChanged(UserItemDataDto * newUserData);
	void recursiveItemCountChanged(qint32 newRecursiveItemCount);
	void childCountChanged(qint32 newChildCount);
	void seriesNameChanged(QString newSeriesName);
	void seriesIdChanged(QString newSeriesId);
	void seasonIdChanged(QString newSeasonId);
	void specialFeatureCountChanged(qint32 newSpecialFeatureCount);
	void displayPreferencesIdChanged(QString newDisplayPreferencesId);
	void statusChanged(QString newStatus);
	void airTimeChanged(QString newAirTime);
	void airDaysChanged(QList<DayOfWeek> newAirDays);
	void tagsChanged(QStringList newTags);
	void primaryImageAspectRatioChanged(double newPrimaryImageAspectRatio);
	void artistsChanged(QStringList newArtists);
	void artistItemsChanged(QList<NameGuidPair *> newArtistItems);
	void albumChanged(QString newAlbum);
	void collectionTypeChanged(QString newCollectionType);
	void displayOrderChanged(QString newDisplayOrder);
	void albumIdChanged(QString newAlbumId);
	void albumPrimaryImageTagChanged(QString newAlbumPrimaryImageTag);
	void seriesPrimaryImageTagChanged(QString newSeriesPrimaryImageTag);
	void albumArtistChanged(QString newAlbumArtist);
	void albumArtistsChanged(QList<NameGuidPair *> newAlbumArtists);
	void seasonNameChanged(QString newSeasonName);
	void mediaStreamsChanged(QList<MediaStream *> newMediaStreams);
	void videoTypeChanged(VideoType newVideoType);
	void partCountChanged(qint32 newPartCount);
	void mediaSourceCountChanged(qint32 newMediaSourceCount);
	void imageTagsChanged(QJsonObject newImageTags);
	void backdropImageTagsChanged(QStringList newBackdropImageTags);
	void screenshotImageTagsChanged(QStringList newScreenshotImageTags);
	void parentLogoImageTagChanged(QString newParentLogoImageTag);
	void parentArtItemIdChanged(QString newParentArtItemId);
	void parentArtImageTagChanged(QString newParentArtImageTag);
	void seriesThumbImageTagChanged(QString newSeriesThumbImageTag);
	void imageBlurHashesChanged(QJsonObject newImageBlurHashes);
	void seriesStudioChanged(QString newSeriesStudio);
	void parentThumbItemIdChanged(QString newParentThumbItemId);
	void parentThumbImageTagChanged(QString newParentThumbImageTag);
	void parentPrimaryImageItemIdChanged(QString newParentPrimaryImageItemId);
	void parentPrimaryImageTagChanged(QString newParentPrimaryImageTag);
	void chaptersChanged(QList<ChapterInfo *> newChapters);
	void locationTypeChanged(LocationType newLocationType);
	void isoTypeChanged(IsoType newIsoType);
	void mediaTypeChanged(QString newMediaType);
	void endDateChanged(QDateTime newEndDate);
	void lockedFieldsChanged(QList<MetadataField> newLockedFields);
	void trailerCountChanged(qint32 newTrailerCount);
	void movieCountChanged(qint32 newMovieCount);
	void seriesCountChanged(qint32 newSeriesCount);
	void programCountChanged(qint32 newProgramCount);
	void episodeCountChanged(qint32 newEpisodeCount);
	void songCountChanged(qint32 newSongCount);
	void albumCountChanged(qint32 newAlbumCount);
	void artistCountChanged(qint32 newArtistCount);
	void musicVideoCountChanged(qint32 newMusicVideoCount);
	void lockDataChanged(bool newLockData);
	void widthChanged(qint32 newWidth);
	void heightChanged(qint32 newHeight);
	void cameraMakeChanged(QString newCameraMake);
	void cameraModelChanged(QString newCameraModel);
	void softwareChanged(QString newSoftware);
	void exposureTimeChanged(double newExposureTime);
	void focalLengthChanged(double newFocalLength);
	void imageOrientationChanged(ImageOrientation newImageOrientation);
	void apertureChanged(double newAperture);
	void shutterSpeedChanged(double newShutterSpeed);
	void latitudeChanged(double newLatitude);
	void longitudeChanged(double newLongitude);
	void altitudeChanged(double newAltitude);
	void isoSpeedRatingChanged(qint32 newIsoSpeedRating);
	void seriesTimerIdChanged(QString newSeriesTimerId);
	void programIdChanged(QString newProgramId);
	void channelPrimaryImageTagChanged(QString newChannelPrimaryImageTag);
	void startDateChanged(QDateTime newStartDate);
	void completionPercentageChanged(double newCompletionPercentage);
	void isRepeatChanged(bool newIsRepeat);
	void episodeTitleChanged(QString newEpisodeTitle);
	void channelTypeChanged(ChannelType newChannelType);
	void audioChanged(ProgramAudio newAudio);
	void isMovieChanged(bool newIsMovie);
	void isSportsChanged(bool newIsSports);
	void isSeriesChanged(bool newIsSeries);
	void isLiveChanged(bool newIsLive);
	void isNewsChanged(bool newIsNews);
	void isKidsChanged(bool newIsKids);
	void isPremiereChanged(bool newIsPremiere);
	void timerIdChanged(QString newTimerId);
	void currentProgramChanged(BaseItemDto * newCurrentProgram);
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
	QList<ExternalUrl *> m_externalUrls;
	QList<MediaSourceInfo *> m_mediaSources;
	float m_criticRating;
	QStringList m_productionLocations;
	QString m_path;
	bool m_enableMediaSourceDisplay;
	QString m_officialRating;
	QString m_customRating;
	QString m_channelId;
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
	QList<MediaUrl *> m_remoteTrailers;
	QJsonObject m_providerIds;
	bool m_isHD;
	bool m_isFolder;
	QString m_parentId;
	QString m_type;
	QList<BaseItemPerson *> m_people;
	QList<NameGuidPair *> m_studios;
	QList<NameGuidPair *> m_genreItems;
	QString m_parentLogoItemId;
	QString m_parentBackdropItemId;
	QStringList m_parentBackdropImageTags;
	qint32 m_localTrailerCount;
	UserItemDataDto * m_userData = nullptr;
	qint32 m_recursiveItemCount;
	qint32 m_childCount;
	QString m_seriesName;
	QString m_seriesId;
	QString m_seasonId;
	qint32 m_specialFeatureCount;
	QString m_displayPreferencesId;
	QString m_status;
	QString m_airTime;
	QList<DayOfWeek> m_airDays;
	QStringList m_tags;
	double m_primaryImageAspectRatio;
	QStringList m_artists;
	QList<NameGuidPair *> m_artistItems;
	QString m_album;
	QString m_collectionType;
	QString m_displayOrder;
	QString m_albumId;
	QString m_albumPrimaryImageTag;
	QString m_seriesPrimaryImageTag;
	QString m_albumArtist;
	QList<NameGuidPair *> m_albumArtists;
	QString m_seasonName;
	QList<MediaStream *> m_mediaStreams;
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
	QList<ChapterInfo *> m_chapters;
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
	BaseItemDto * m_currentProgram = nullptr;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_BASEITEMDTO_H

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

#ifndef JELLYFIN_DTO_GETPROGRAMSDTO_H
#define JELLYFIN_DTO_GETPROGRAMSDTO_H

#include <QDateTime>
#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/imagetype.h"
#include "JellyfinQt/DTO/itemfields.h"

namespace Jellyfin {
namespace DTO {

class GetProgramsDto : public QObject {
	Q_OBJECT
public:
	explicit GetProgramsDto(QObject *parent = nullptr);
	static GetProgramsDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the channels to return guide information for.
	 */
	Q_PROPERTY(QStringList channelIds READ channelIds WRITE setChannelIds NOTIFY channelIdsChanged)
	/**
	 * @brief Gets or sets optional. Filter by user id.
	 */
	Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)
	/**
	 * @brief Gets or sets the minimum premiere start date.
Optional.
	 */
	Q_PROPERTY(QDateTime minStartDate READ minStartDate WRITE setMinStartDate NOTIFY minStartDateChanged)
	/**
	 * @brief Gets or sets filter by programs that have completed airing, or not.
Optional.
	 */
	Q_PROPERTY(bool hasAired READ hasAired WRITE setHasAired NOTIFY hasAiredChanged)
	/**
	 * @brief Gets or sets filter by programs that are currently airing, or not.
Optional.
	 */
	Q_PROPERTY(bool isAiring READ isAiring WRITE setIsAiring NOTIFY isAiringChanged)
	/**
	 * @brief Gets or sets the maximum premiere start date.
Optional.
	 */
	Q_PROPERTY(QDateTime maxStartDate READ maxStartDate WRITE setMaxStartDate NOTIFY maxStartDateChanged)
	/**
	 * @brief Gets or sets the minimum premiere end date.
Optional.
	 */
	Q_PROPERTY(QDateTime minEndDate READ minEndDate WRITE setMinEndDate NOTIFY minEndDateChanged)
	/**
	 * @brief Gets or sets the maximum premiere end date.
Optional.
	 */
	Q_PROPERTY(QDateTime maxEndDate READ maxEndDate WRITE setMaxEndDate NOTIFY maxEndDateChanged)
	/**
	 * @brief Gets or sets filter for movies.
Optional.
	 */
	Q_PROPERTY(bool isMovie READ isMovie WRITE setIsMovie NOTIFY isMovieChanged)
	/**
	 * @brief Gets or sets filter for series.
Optional.
	 */
	Q_PROPERTY(bool isSeries READ isSeries WRITE setIsSeries NOTIFY isSeriesChanged)
	/**
	 * @brief Gets or sets filter for news.
Optional.
	 */
	Q_PROPERTY(bool isNews READ isNews WRITE setIsNews NOTIFY isNewsChanged)
	/**
	 * @brief Gets or sets filter for kids.
Optional.
	 */
	Q_PROPERTY(bool isKids READ isKids WRITE setIsKids NOTIFY isKidsChanged)
	/**
	 * @brief Gets or sets filter for sports.
Optional.
	 */
	Q_PROPERTY(bool isSports READ isSports WRITE setIsSports NOTIFY isSportsChanged)
	/**
	 * @brief Gets or sets the record index to start at. All items with a lower index will be dropped from the results.
Optional.
	 */
	Q_PROPERTY(qint32 startIndex READ startIndex WRITE setStartIndex NOTIFY startIndexChanged)
	/**
	 * @brief Gets or sets the maximum number of records to return.
Optional.
	 */
	Q_PROPERTY(qint32 limit READ limit WRITE setLimit NOTIFY limitChanged)
	/**
	 * @brief Gets or sets specify one or more sort orders, comma delimited. Options: Name, StartDate.
Optional.
	 */
	Q_PROPERTY(QString sortBy READ sortBy WRITE setSortBy NOTIFY sortByChanged)
	/**
	 * @brief Gets or sets sort Order - Ascending,Descending.
	 */
	Q_PROPERTY(QString sortOrder READ sortOrder WRITE setSortOrder NOTIFY sortOrderChanged)
	/**
	 * @brief Gets or sets the genres to return guide information for.
	 */
	Q_PROPERTY(QStringList genres READ genres WRITE setGenres NOTIFY genresChanged)
	/**
	 * @brief Gets or sets the genre ids to return guide information for.
	 */
	Q_PROPERTY(QStringList genreIds READ genreIds WRITE setGenreIds NOTIFY genreIdsChanged)
	/**
	 * @brief Gets or sets include image information in output.
Optional.
	 */
	Q_PROPERTY(bool enableImages READ enableImages WRITE setEnableImages NOTIFY enableImagesChanged)
	/**
	 * @brief Gets or sets a value indicating whether retrieve total record count.
	 */
	Q_PROPERTY(bool enableTotalRecordCount READ enableTotalRecordCount WRITE setEnableTotalRecordCount NOTIFY enableTotalRecordCountChanged)
	/**
	 * @brief Gets or sets the max number of images to return, per image type.
Optional.
	 */
	Q_PROPERTY(qint32 imageTypeLimit READ imageTypeLimit WRITE setImageTypeLimit NOTIFY imageTypeLimitChanged)
	/**
	 * @brief Gets or sets the image types to include in the output.
Optional.
	 */
	Q_PROPERTY(QList<ImageType> enableImageTypes READ enableImageTypes WRITE setEnableImageTypes NOTIFY enableImageTypesChanged)
	/**
	 * @brief Gets or sets include user data.
Optional.
	 */
	Q_PROPERTY(bool enableUserData READ enableUserData WRITE setEnableUserData NOTIFY enableUserDataChanged)
	/**
	 * @brief Gets or sets filter by series timer id.
Optional.
	 */
	Q_PROPERTY(QString seriesTimerId READ seriesTimerId WRITE setSeriesTimerId NOTIFY seriesTimerIdChanged)
	/**
	 * @brief Gets or sets filter by library series id.
Optional.
	 */
	Q_PROPERTY(QString librarySeriesId READ librarySeriesId WRITE setLibrarySeriesId NOTIFY librarySeriesIdChanged)
	/**
	 * @brief Gets or sets specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines.
Optional.
	 */
	Q_PROPERTY(QList<ItemFields> fields READ fields WRITE setFields NOTIFY fieldsChanged)

	QStringList channelIds() const;
	void setChannelIds(QStringList newChannelIds);
	
	QString userId() const;
	void setUserId(QString newUserId);
	
	QDateTime minStartDate() const;
	void setMinStartDate(QDateTime newMinStartDate);
	
	bool hasAired() const;
	void setHasAired(bool newHasAired);
	
	bool isAiring() const;
	void setIsAiring(bool newIsAiring);
	
	QDateTime maxStartDate() const;
	void setMaxStartDate(QDateTime newMaxStartDate);
	
	QDateTime minEndDate() const;
	void setMinEndDate(QDateTime newMinEndDate);
	
	QDateTime maxEndDate() const;
	void setMaxEndDate(QDateTime newMaxEndDate);
	
	bool isMovie() const;
	void setIsMovie(bool newIsMovie);
	
	bool isSeries() const;
	void setIsSeries(bool newIsSeries);
	
	bool isNews() const;
	void setIsNews(bool newIsNews);
	
	bool isKids() const;
	void setIsKids(bool newIsKids);
	
	bool isSports() const;
	void setIsSports(bool newIsSports);
	
	qint32 startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	
	qint32 limit() const;
	void setLimit(qint32 newLimit);
	
	QString sortBy() const;
	void setSortBy(QString newSortBy);
	
	QString sortOrder() const;
	void setSortOrder(QString newSortOrder);
	
	QStringList genres() const;
	void setGenres(QStringList newGenres);
	
	QStringList genreIds() const;
	void setGenreIds(QStringList newGenreIds);
	
	bool enableImages() const;
	void setEnableImages(bool newEnableImages);
	
	bool enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	
	qint32 imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	
	QList<ImageType> enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	
	bool enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	
	QString seriesTimerId() const;
	void setSeriesTimerId(QString newSeriesTimerId);
	
	QString librarySeriesId() const;
	void setLibrarySeriesId(QString newLibrarySeriesId);
	
	QList<ItemFields> fields() const;
	void setFields(QList<ItemFields> newFields);
	
signals:
	void channelIdsChanged(QStringList newChannelIds);
	void userIdChanged(QString newUserId);
	void minStartDateChanged(QDateTime newMinStartDate);
	void hasAiredChanged(bool newHasAired);
	void isAiringChanged(bool newIsAiring);
	void maxStartDateChanged(QDateTime newMaxStartDate);
	void minEndDateChanged(QDateTime newMinEndDate);
	void maxEndDateChanged(QDateTime newMaxEndDate);
	void isMovieChanged(bool newIsMovie);
	void isSeriesChanged(bool newIsSeries);
	void isNewsChanged(bool newIsNews);
	void isKidsChanged(bool newIsKids);
	void isSportsChanged(bool newIsSports);
	void startIndexChanged(qint32 newStartIndex);
	void limitChanged(qint32 newLimit);
	void sortByChanged(QString newSortBy);
	void sortOrderChanged(QString newSortOrder);
	void genresChanged(QStringList newGenres);
	void genreIdsChanged(QStringList newGenreIds);
	void enableImagesChanged(bool newEnableImages);
	void enableTotalRecordCountChanged(bool newEnableTotalRecordCount);
	void imageTypeLimitChanged(qint32 newImageTypeLimit);
	void enableImageTypesChanged(QList<ImageType> newEnableImageTypes);
	void enableUserDataChanged(bool newEnableUserData);
	void seriesTimerIdChanged(QString newSeriesTimerId);
	void librarySeriesIdChanged(QString newLibrarySeriesId);
	void fieldsChanged(QList<ItemFields> newFields);
protected:
	QStringList m_channelIds;
	QString m_userId;
	QDateTime m_minStartDate;
	bool m_hasAired;
	bool m_isAiring;
	QDateTime m_maxStartDate;
	QDateTime m_minEndDate;
	QDateTime m_maxEndDate;
	bool m_isMovie;
	bool m_isSeries;
	bool m_isNews;
	bool m_isKids;
	bool m_isSports;
	qint32 m_startIndex;
	qint32 m_limit;
	QString m_sortBy;
	QString m_sortOrder;
	QStringList m_genres;
	QStringList m_genreIds;
	bool m_enableImages;
	bool m_enableTotalRecordCount;
	qint32 m_imageTypeLimit;
	QList<ImageType> m_enableImageTypes;
	bool m_enableUserData;
	QString m_seriesTimerId;
	QString m_librarySeriesId;
	QList<ItemFields> m_fields;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_GETPROGRAMSDTO_H

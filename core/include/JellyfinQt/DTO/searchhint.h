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

#ifndef JELLYFIN_DTO_SEARCHHINT_H
#define JELLYFIN_DTO_SEARCHHINT_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <QUuid>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class SearchHint {
public:
	explicit SearchHint();
	static SearchHint fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the item id.
	 */
	QUuid itemId() const;
	/**
	* @brief Gets or sets the item id.
	*/
	void setItemId(QUuid newItemId);

	QUuid jellyfinId() const;

	void setJellyfinId(QUuid newJellyfinId);
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	/**
	 * @brief Gets or sets the matched term.
	 */
	QString matchedTerm() const;
	/**
	* @brief Gets or sets the matched term.
	*/
	void setMatchedTerm(QString newMatchedTerm);
	/**
	 * @brief Gets or sets the index number.
	 */
	qint32 indexNumber() const;
	/**
	* @brief Gets or sets the index number.
	*/
	void setIndexNumber(qint32 newIndexNumber);
	/**
	 * @brief Gets or sets the production year.
	 */
	qint32 productionYear() const;
	/**
	* @brief Gets or sets the production year.
	*/
	void setProductionYear(qint32 newProductionYear);
	/**
	 * @brief Gets or sets the parent index number.
	 */
	qint32 parentIndexNumber() const;
	/**
	* @brief Gets or sets the parent index number.
	*/
	void setParentIndexNumber(qint32 newParentIndexNumber);
	/**
	 * @brief Gets or sets the image tag.
	 */
	QString primaryImageTag() const;
	/**
	* @brief Gets or sets the image tag.
	*/
	void setPrimaryImageTag(QString newPrimaryImageTag);
	/**
	 * @brief Gets or sets the thumb image tag.
	 */
	QString thumbImageTag() const;
	/**
	* @brief Gets or sets the thumb image tag.
	*/
	void setThumbImageTag(QString newThumbImageTag);
	/**
	 * @brief Gets or sets the thumb image item identifier.
	 */
	QString thumbImageItemId() const;
	/**
	* @brief Gets or sets the thumb image item identifier.
	*/
	void setThumbImageItemId(QString newThumbImageItemId);
	/**
	 * @brief Gets or sets the backdrop image tag.
	 */
	QString backdropImageTag() const;
	/**
	* @brief Gets or sets the backdrop image tag.
	*/
	void setBackdropImageTag(QString newBackdropImageTag);
	/**
	 * @brief Gets or sets the backdrop image item identifier.
	 */
	QString backdropImageItemId() const;
	/**
	* @brief Gets or sets the backdrop image item identifier.
	*/
	void setBackdropImageItemId(QString newBackdropImageItemId);
	/**
	 * @brief Gets or sets the type.
	 */
	QString type() const;
	/**
	* @brief Gets or sets the type.
	*/
	void setType(QString newType);

	bool isFolder() const;

	void setIsFolder(bool newIsFolder);
	/**
	 * @brief Gets or sets the run time ticks.
	 */
	qint64 runTimeTicks() const;
	/**
	* @brief Gets or sets the run time ticks.
	*/
	void setRunTimeTicks(qint64 newRunTimeTicks);
	/**
	 * @brief Gets or sets the type of the media.
	 */
	QString mediaType() const;
	/**
	* @brief Gets or sets the type of the media.
	*/
	void setMediaType(QString newMediaType);

	QDateTime startDate() const;

	void setStartDate(QDateTime newStartDate);

	QDateTime endDate() const;

	void setEndDate(QDateTime newEndDate);
	/**
	 * @brief Gets or sets the series.
	 */
	QString series() const;
	/**
	* @brief Gets or sets the series.
	*/
	void setSeries(QString newSeries);

	QString status() const;

	void setStatus(QString newStatus);
	/**
	 * @brief Gets or sets the album.
	 */
	QString album() const;
	/**
	* @brief Gets or sets the album.
	*/
	void setAlbum(QString newAlbum);

	QUuid albumId() const;

	void setAlbumId(QUuid newAlbumId);
	/**
	 * @brief Gets or sets the album artist.
	 */
	QString albumArtist() const;
	/**
	* @brief Gets or sets the album artist.
	*/
	void setAlbumArtist(QString newAlbumArtist);
	/**
	 * @brief Gets or sets the artists.
	 */
	QStringList artists() const;
	/**
	* @brief Gets or sets the artists.
	*/
	void setArtists(QStringList newArtists);
	/**
	 * @brief Gets or sets the song count.
	 */
	qint32 songCount() const;
	/**
	* @brief Gets or sets the song count.
	*/
	void setSongCount(qint32 newSongCount);
	/**
	 * @brief Gets or sets the episode count.
	 */
	qint32 episodeCount() const;
	/**
	* @brief Gets or sets the episode count.
	*/
	void setEpisodeCount(qint32 newEpisodeCount);
	/**
	 * @brief Gets or sets the channel identifier.
	 */
	QUuid channelId() const;
	/**
	* @brief Gets or sets the channel identifier.
	*/
	void setChannelId(QUuid newChannelId);
	/**
	 * @brief Gets or sets the name of the channel.
	 */
	QString channelName() const;
	/**
	* @brief Gets or sets the name of the channel.
	*/
	void setChannelName(QString newChannelName);
	/**
	 * @brief Gets or sets the primary image aspect ratio.
	 */
	double primaryImageAspectRatio() const;
	/**
	* @brief Gets or sets the primary image aspect ratio.
	*/
	void setPrimaryImageAspectRatio(double newPrimaryImageAspectRatio);

protected:
	QUuid m_itemId;
	QUuid m_jellyfinId;
	QString m_name;
	QString m_matchedTerm;
	qint32 m_indexNumber;
	qint32 m_productionYear;
	qint32 m_parentIndexNumber;
	QString m_primaryImageTag;
	QString m_thumbImageTag;
	QString m_thumbImageItemId;
	QString m_backdropImageTag;
	QString m_backdropImageItemId;
	QString m_type;
	bool m_isFolder;
	qint64 m_runTimeTicks;
	QString m_mediaType;
	QDateTime m_startDate;
	QDateTime m_endDate;
	QString m_series;
	QString m_status;
	QString m_album;
	QUuid m_albumId;
	QString m_albumArtist;
	QStringList m_artists;
	qint32 m_songCount;
	qint32 m_episodeCount;
	QUuid m_channelId;
	QString m_channelName;
	double m_primaryImageAspectRatio;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_SEARCHHINT_H

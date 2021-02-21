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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class SearchHint : public QObject {
	Q_OBJECT
public:
	explicit SearchHint(QObject *parent = nullptr);
	static SearchHint *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the item id.
	 */
	Q_PROPERTY(QString itemId READ itemId WRITE setItemId NOTIFY itemIdChanged)
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the matched term.
	 */
	Q_PROPERTY(QString matchedTerm READ matchedTerm WRITE setMatchedTerm NOTIFY matchedTermChanged)
	/**
	 * @brief Gets or sets the index number.
	 */
	Q_PROPERTY(qint32 indexNumber READ indexNumber WRITE setIndexNumber NOTIFY indexNumberChanged)
	/**
	 * @brief Gets or sets the production year.
	 */
	Q_PROPERTY(qint32 productionYear READ productionYear WRITE setProductionYear NOTIFY productionYearChanged)
	/**
	 * @brief Gets or sets the parent index number.
	 */
	Q_PROPERTY(qint32 parentIndexNumber READ parentIndexNumber WRITE setParentIndexNumber NOTIFY parentIndexNumberChanged)
	/**
	 * @brief Gets or sets the image tag.
	 */
	Q_PROPERTY(QString primaryImageTag READ primaryImageTag WRITE setPrimaryImageTag NOTIFY primaryImageTagChanged)
	/**
	 * @brief Gets or sets the thumb image tag.
	 */
	Q_PROPERTY(QString thumbImageTag READ thumbImageTag WRITE setThumbImageTag NOTIFY thumbImageTagChanged)
	/**
	 * @brief Gets or sets the thumb image item identifier.
	 */
	Q_PROPERTY(QString thumbImageItemId READ thumbImageItemId WRITE setThumbImageItemId NOTIFY thumbImageItemIdChanged)
	/**
	 * @brief Gets or sets the backdrop image tag.
	 */
	Q_PROPERTY(QString backdropImageTag READ backdropImageTag WRITE setBackdropImageTag NOTIFY backdropImageTagChanged)
	/**
	 * @brief Gets or sets the backdrop image item identifier.
	 */
	Q_PROPERTY(QString backdropImageItemId READ backdropImageItemId WRITE setBackdropImageItemId NOTIFY backdropImageItemIdChanged)
	/**
	 * @brief Gets or sets the type.
	 */
	Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
	Q_PROPERTY(bool isFolder READ isFolder WRITE setIsFolder NOTIFY isFolderChanged)
	/**
	 * @brief Gets or sets the run time ticks.
	 */
	Q_PROPERTY(qint64 runTimeTicks READ runTimeTicks WRITE setRunTimeTicks NOTIFY runTimeTicksChanged)
	/**
	 * @brief Gets or sets the type of the media.
	 */
	Q_PROPERTY(QString mediaType READ mediaType WRITE setMediaType NOTIFY mediaTypeChanged)
	Q_PROPERTY(QDateTime startDate READ startDate WRITE setStartDate NOTIFY startDateChanged)
	Q_PROPERTY(QDateTime endDate READ endDate WRITE setEndDate NOTIFY endDateChanged)
	/**
	 * @brief Gets or sets the series.
	 */
	Q_PROPERTY(QString series READ series WRITE setSeries NOTIFY seriesChanged)
	Q_PROPERTY(QString status READ status WRITE setStatus NOTIFY statusChanged)
	/**
	 * @brief Gets or sets the album.
	 */
	Q_PROPERTY(QString album READ album WRITE setAlbum NOTIFY albumChanged)
	Q_PROPERTY(QString albumId READ albumId WRITE setAlbumId NOTIFY albumIdChanged)
	/**
	 * @brief Gets or sets the album artist.
	 */
	Q_PROPERTY(QString albumArtist READ albumArtist WRITE setAlbumArtist NOTIFY albumArtistChanged)
	/**
	 * @brief Gets or sets the artists.
	 */
	Q_PROPERTY(QStringList artists READ artists WRITE setArtists NOTIFY artistsChanged)
	/**
	 * @brief Gets or sets the song count.
	 */
	Q_PROPERTY(qint32 songCount READ songCount WRITE setSongCount NOTIFY songCountChanged)
	/**
	 * @brief Gets or sets the episode count.
	 */
	Q_PROPERTY(qint32 episodeCount READ episodeCount WRITE setEpisodeCount NOTIFY episodeCountChanged)
	/**
	 * @brief Gets or sets the channel identifier.
	 */
	Q_PROPERTY(QString channelId READ channelId WRITE setChannelId NOTIFY channelIdChanged)
	/**
	 * @brief Gets or sets the name of the channel.
	 */
	Q_PROPERTY(QString channelName READ channelName WRITE setChannelName NOTIFY channelNameChanged)
	/**
	 * @brief Gets or sets the primary image aspect ratio.
	 */
	Q_PROPERTY(double primaryImageAspectRatio READ primaryImageAspectRatio WRITE setPrimaryImageAspectRatio NOTIFY primaryImageAspectRatioChanged)

	QString itemId() const;
	void setItemId(QString newItemId);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString name() const;
	void setName(QString newName);
	
	QString matchedTerm() const;
	void setMatchedTerm(QString newMatchedTerm);
	
	qint32 indexNumber() const;
	void setIndexNumber(qint32 newIndexNumber);
	
	qint32 productionYear() const;
	void setProductionYear(qint32 newProductionYear);
	
	qint32 parentIndexNumber() const;
	void setParentIndexNumber(qint32 newParentIndexNumber);
	
	QString primaryImageTag() const;
	void setPrimaryImageTag(QString newPrimaryImageTag);
	
	QString thumbImageTag() const;
	void setThumbImageTag(QString newThumbImageTag);
	
	QString thumbImageItemId() const;
	void setThumbImageItemId(QString newThumbImageItemId);
	
	QString backdropImageTag() const;
	void setBackdropImageTag(QString newBackdropImageTag);
	
	QString backdropImageItemId() const;
	void setBackdropImageItemId(QString newBackdropImageItemId);
	
	QString type() const;
	void setType(QString newType);
	
	bool isFolder() const;
	void setIsFolder(bool newIsFolder);
	
	qint64 runTimeTicks() const;
	void setRunTimeTicks(qint64 newRunTimeTicks);
	
	QString mediaType() const;
	void setMediaType(QString newMediaType);
	
	QDateTime startDate() const;
	void setStartDate(QDateTime newStartDate);
	
	QDateTime endDate() const;
	void setEndDate(QDateTime newEndDate);
	
	QString series() const;
	void setSeries(QString newSeries);
	
	QString status() const;
	void setStatus(QString newStatus);
	
	QString album() const;
	void setAlbum(QString newAlbum);
	
	QString albumId() const;
	void setAlbumId(QString newAlbumId);
	
	QString albumArtist() const;
	void setAlbumArtist(QString newAlbumArtist);
	
	QStringList artists() const;
	void setArtists(QStringList newArtists);
	
	qint32 songCount() const;
	void setSongCount(qint32 newSongCount);
	
	qint32 episodeCount() const;
	void setEpisodeCount(qint32 newEpisodeCount);
	
	QString channelId() const;
	void setChannelId(QString newChannelId);
	
	QString channelName() const;
	void setChannelName(QString newChannelName);
	
	double primaryImageAspectRatio() const;
	void setPrimaryImageAspectRatio(double newPrimaryImageAspectRatio);
	
signals:
	void itemIdChanged(QString newItemId);
	void jellyfinIdChanged(QString newJellyfinId);
	void nameChanged(QString newName);
	void matchedTermChanged(QString newMatchedTerm);
	void indexNumberChanged(qint32 newIndexNumber);
	void productionYearChanged(qint32 newProductionYear);
	void parentIndexNumberChanged(qint32 newParentIndexNumber);
	void primaryImageTagChanged(QString newPrimaryImageTag);
	void thumbImageTagChanged(QString newThumbImageTag);
	void thumbImageItemIdChanged(QString newThumbImageItemId);
	void backdropImageTagChanged(QString newBackdropImageTag);
	void backdropImageItemIdChanged(QString newBackdropImageItemId);
	void typeChanged(QString newType);
	void isFolderChanged(bool newIsFolder);
	void runTimeTicksChanged(qint64 newRunTimeTicks);
	void mediaTypeChanged(QString newMediaType);
	void startDateChanged(QDateTime newStartDate);
	void endDateChanged(QDateTime newEndDate);
	void seriesChanged(QString newSeries);
	void statusChanged(QString newStatus);
	void albumChanged(QString newAlbum);
	void albumIdChanged(QString newAlbumId);
	void albumArtistChanged(QString newAlbumArtist);
	void artistsChanged(QStringList newArtists);
	void songCountChanged(qint32 newSongCount);
	void episodeCountChanged(qint32 newEpisodeCount);
	void channelIdChanged(QString newChannelId);
	void channelNameChanged(QString newChannelName);
	void primaryImageAspectRatioChanged(double newPrimaryImageAspectRatio);
protected:
	QString m_itemId;
	QString m_jellyfinId;
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
	QString m_albumId;
	QString m_albumArtist;
	QStringList m_artists;
	qint32 m_songCount;
	qint32 m_episodeCount;
	QString m_channelId;
	QString m_channelName;
	double m_primaryImageAspectRatio;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_SEARCHHINT_H

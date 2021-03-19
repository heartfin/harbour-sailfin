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

#include <JellyfinQt/DTO/searchhint.h>

namespace Jellyfin {
namespace DTO {

SearchHint::SearchHint(QObject *parent) : QObject(parent) {}

SearchHint *SearchHint::fromJSON(QJsonObject source, QObject *parent) {
	SearchHint *instance = new SearchHint(parent);
	instance->updateFromJSON(source);
	return instance;
}

void SearchHint::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject SearchHint::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString SearchHint::itemId() const { return m_itemId; }
void SearchHint::setItemId(QString newItemId) {
	m_itemId = newItemId;
	emit itemIdChanged(newItemId);
}

QString SearchHint::jellyfinId() const { return m_jellyfinId; }
void SearchHint::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString SearchHint::name() const { return m_name; }
void SearchHint::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString SearchHint::matchedTerm() const { return m_matchedTerm; }
void SearchHint::setMatchedTerm(QString newMatchedTerm) {
	m_matchedTerm = newMatchedTerm;
	emit matchedTermChanged(newMatchedTerm);
}

qint32 SearchHint::indexNumber() const { return m_indexNumber; }
void SearchHint::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
	emit indexNumberChanged(newIndexNumber);
}

qint32 SearchHint::productionYear() const { return m_productionYear; }
void SearchHint::setProductionYear(qint32 newProductionYear) {
	m_productionYear = newProductionYear;
	emit productionYearChanged(newProductionYear);
}

qint32 SearchHint::parentIndexNumber() const { return m_parentIndexNumber; }
void SearchHint::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
	emit parentIndexNumberChanged(newParentIndexNumber);
}

QString SearchHint::primaryImageTag() const { return m_primaryImageTag; }
void SearchHint::setPrimaryImageTag(QString newPrimaryImageTag) {
	m_primaryImageTag = newPrimaryImageTag;
	emit primaryImageTagChanged(newPrimaryImageTag);
}

QString SearchHint::thumbImageTag() const { return m_thumbImageTag; }
void SearchHint::setThumbImageTag(QString newThumbImageTag) {
	m_thumbImageTag = newThumbImageTag;
	emit thumbImageTagChanged(newThumbImageTag);
}

QString SearchHint::thumbImageItemId() const { return m_thumbImageItemId; }
void SearchHint::setThumbImageItemId(QString newThumbImageItemId) {
	m_thumbImageItemId = newThumbImageItemId;
	emit thumbImageItemIdChanged(newThumbImageItemId);
}

QString SearchHint::backdropImageTag() const { return m_backdropImageTag; }
void SearchHint::setBackdropImageTag(QString newBackdropImageTag) {
	m_backdropImageTag = newBackdropImageTag;
	emit backdropImageTagChanged(newBackdropImageTag);
}

QString SearchHint::backdropImageItemId() const { return m_backdropImageItemId; }
void SearchHint::setBackdropImageItemId(QString newBackdropImageItemId) {
	m_backdropImageItemId = newBackdropImageItemId;
	emit backdropImageItemIdChanged(newBackdropImageItemId);
}

QString SearchHint::type() const { return m_type; }
void SearchHint::setType(QString newType) {
	m_type = newType;
	emit typeChanged(newType);
}

bool SearchHint::isFolder() const { return m_isFolder; }
void SearchHint::setIsFolder(bool newIsFolder) {
	m_isFolder = newIsFolder;
	emit isFolderChanged(newIsFolder);
}

qint64 SearchHint::runTimeTicks() const { return m_runTimeTicks; }
void SearchHint::setRunTimeTicks(qint64 newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
	emit runTimeTicksChanged(newRunTimeTicks);
}

QString SearchHint::mediaType() const { return m_mediaType; }
void SearchHint::setMediaType(QString newMediaType) {
	m_mediaType = newMediaType;
	emit mediaTypeChanged(newMediaType);
}

QDateTime SearchHint::startDate() const { return m_startDate; }
void SearchHint::setStartDate(QDateTime newStartDate) {
	m_startDate = newStartDate;
	emit startDateChanged(newStartDate);
}

QDateTime SearchHint::endDate() const { return m_endDate; }
void SearchHint::setEndDate(QDateTime newEndDate) {
	m_endDate = newEndDate;
	emit endDateChanged(newEndDate);
}

QString SearchHint::series() const { return m_series; }
void SearchHint::setSeries(QString newSeries) {
	m_series = newSeries;
	emit seriesChanged(newSeries);
}

QString SearchHint::status() const { return m_status; }
void SearchHint::setStatus(QString newStatus) {
	m_status = newStatus;
	emit statusChanged(newStatus);
}

QString SearchHint::album() const { return m_album; }
void SearchHint::setAlbum(QString newAlbum) {
	m_album = newAlbum;
	emit albumChanged(newAlbum);
}

QString SearchHint::albumId() const { return m_albumId; }
void SearchHint::setAlbumId(QString newAlbumId) {
	m_albumId = newAlbumId;
	emit albumIdChanged(newAlbumId);
}

QString SearchHint::albumArtist() const { return m_albumArtist; }
void SearchHint::setAlbumArtist(QString newAlbumArtist) {
	m_albumArtist = newAlbumArtist;
	emit albumArtistChanged(newAlbumArtist);
}

QStringList SearchHint::artists() const { return m_artists; }
void SearchHint::setArtists(QStringList newArtists) {
	m_artists = newArtists;
	emit artistsChanged(newArtists);
}

qint32 SearchHint::songCount() const { return m_songCount; }
void SearchHint::setSongCount(qint32 newSongCount) {
	m_songCount = newSongCount;
	emit songCountChanged(newSongCount);
}

qint32 SearchHint::episodeCount() const { return m_episodeCount; }
void SearchHint::setEpisodeCount(qint32 newEpisodeCount) {
	m_episodeCount = newEpisodeCount;
	emit episodeCountChanged(newEpisodeCount);
}

QString SearchHint::channelId() const { return m_channelId; }
void SearchHint::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
	emit channelIdChanged(newChannelId);
}

QString SearchHint::channelName() const { return m_channelName; }
void SearchHint::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
	emit channelNameChanged(newChannelName);
}

double SearchHint::primaryImageAspectRatio() const { return m_primaryImageAspectRatio; }
void SearchHint::setPrimaryImageAspectRatio(double newPrimaryImageAspectRatio) {
	m_primaryImageAspectRatio = newPrimaryImageAspectRatio;
	emit primaryImageAspectRatioChanged(newPrimaryImageAspectRatio);
}


} // NS Jellyfin
} // NS DTO

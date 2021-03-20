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

SearchHint::SearchHint(QObject *parent) {}

SearchHint SearchHint::fromJson(QJsonObject source) {SearchHint instance;
	instance->setFromJson(source, false);
	return instance;
}


void SearchHint::setFromJson(QJsonObject source) {
	m_itemId = fromJsonValue<QUuid>(source["ItemId"]);
	m_jellyfinId = fromJsonValue<QUuid>(source["Id"]);
	m_name = fromJsonValue<QString>(source["Name"]);
	m_matchedTerm = fromJsonValue<QString>(source["MatchedTerm"]);
	m_indexNumber = fromJsonValue<qint32>(source["IndexNumber"]);
	m_productionYear = fromJsonValue<qint32>(source["ProductionYear"]);
	m_parentIndexNumber = fromJsonValue<qint32>(source["ParentIndexNumber"]);
	m_primaryImageTag = fromJsonValue<QString>(source["PrimaryImageTag"]);
	m_thumbImageTag = fromJsonValue<QString>(source["ThumbImageTag"]);
	m_thumbImageItemId = fromJsonValue<QString>(source["ThumbImageItemId"]);
	m_backdropImageTag = fromJsonValue<QString>(source["BackdropImageTag"]);
	m_backdropImageItemId = fromJsonValue<QString>(source["BackdropImageItemId"]);
	m_type = fromJsonValue<QString>(source["Type"]);
	m_isFolder = fromJsonValue<bool>(source["IsFolder"]);
	m_runTimeTicks = fromJsonValue<qint64>(source["RunTimeTicks"]);
	m_mediaType = fromJsonValue<QString>(source["MediaType"]);
	m_startDate = fromJsonValue<QDateTime>(source["StartDate"]);
	m_endDate = fromJsonValue<QDateTime>(source["EndDate"]);
	m_series = fromJsonValue<QString>(source["Series"]);
	m_status = fromJsonValue<QString>(source["Status"]);
	m_album = fromJsonValue<QString>(source["Album"]);
	m_albumId = fromJsonValue<QUuid>(source["AlbumId"]);
	m_albumArtist = fromJsonValue<QString>(source["AlbumArtist"]);
	m_artists = fromJsonValue<QStringList>(source["Artists"]);
	m_songCount = fromJsonValue<qint32>(source["SongCount"]);
	m_episodeCount = fromJsonValue<qint32>(source["EpisodeCount"]);
	m_channelId = fromJsonValue<QUuid>(source["ChannelId"]);
	m_channelName = fromJsonValue<QString>(source["ChannelName"]);
	m_primaryImageAspectRatio = fromJsonValue<double>(source["PrimaryImageAspectRatio"]);

}
	
QJsonObject SearchHint::toJson() {
	QJsonObject result;
	result["ItemId"] = toJsonValue<QUuid>(m_itemId);
	result["Id"] = toJsonValue<QUuid>(m_jellyfinId);
	result["Name"] = toJsonValue<QString>(m_name);
	result["MatchedTerm"] = toJsonValue<QString>(m_matchedTerm);
	result["IndexNumber"] = toJsonValue<qint32>(m_indexNumber);
	result["ProductionYear"] = toJsonValue<qint32>(m_productionYear);
	result["ParentIndexNumber"] = toJsonValue<qint32>(m_parentIndexNumber);
	result["PrimaryImageTag"] = toJsonValue<QString>(m_primaryImageTag);
	result["ThumbImageTag"] = toJsonValue<QString>(m_thumbImageTag);
	result["ThumbImageItemId"] = toJsonValue<QString>(m_thumbImageItemId);
	result["BackdropImageTag"] = toJsonValue<QString>(m_backdropImageTag);
	result["BackdropImageItemId"] = toJsonValue<QString>(m_backdropImageItemId);
	result["Type"] = toJsonValue<QString>(m_type);
	result["IsFolder"] = toJsonValue<bool>(m_isFolder);
	result["RunTimeTicks"] = toJsonValue<qint64>(m_runTimeTicks);
	result["MediaType"] = toJsonValue<QString>(m_mediaType);
	result["StartDate"] = toJsonValue<QDateTime>(m_startDate);
	result["EndDate"] = toJsonValue<QDateTime>(m_endDate);
	result["Series"] = toJsonValue<QString>(m_series);
	result["Status"] = toJsonValue<QString>(m_status);
	result["Album"] = toJsonValue<QString>(m_album);
	result["AlbumId"] = toJsonValue<QUuid>(m_albumId);
	result["AlbumArtist"] = toJsonValue<QString>(m_albumArtist);
	result["Artists"] = toJsonValue<QStringList>(m_artists);
	result["SongCount"] = toJsonValue<qint32>(m_songCount);
	result["EpisodeCount"] = toJsonValue<qint32>(m_episodeCount);
	result["ChannelId"] = toJsonValue<QUuid>(m_channelId);
	result["ChannelName"] = toJsonValue<QString>(m_channelName);
	result["PrimaryImageAspectRatio"] = toJsonValue<double>(m_primaryImageAspectRatio);

	return result;
}

QUuid SearchHint::itemId() const { return m_itemId; }

void SearchHint::setItemId(QUuid newItemId) {
	m_itemId = newItemId;
}
QUuid SearchHint::jellyfinId() const { return m_jellyfinId; }

void SearchHint::setJellyfinId(QUuid newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
QString SearchHint::name() const { return m_name; }

void SearchHint::setName(QString newName) {
	m_name = newName;
}
QString SearchHint::matchedTerm() const { return m_matchedTerm; }

void SearchHint::setMatchedTerm(QString newMatchedTerm) {
	m_matchedTerm = newMatchedTerm;
}
qint32 SearchHint::indexNumber() const { return m_indexNumber; }

void SearchHint::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
qint32 SearchHint::productionYear() const { return m_productionYear; }

void SearchHint::setProductionYear(qint32 newProductionYear) {
	m_productionYear = newProductionYear;
}
qint32 SearchHint::parentIndexNumber() const { return m_parentIndexNumber; }

void SearchHint::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
QString SearchHint::primaryImageTag() const { return m_primaryImageTag; }

void SearchHint::setPrimaryImageTag(QString newPrimaryImageTag) {
	m_primaryImageTag = newPrimaryImageTag;
}
QString SearchHint::thumbImageTag() const { return m_thumbImageTag; }

void SearchHint::setThumbImageTag(QString newThumbImageTag) {
	m_thumbImageTag = newThumbImageTag;
}
QString SearchHint::thumbImageItemId() const { return m_thumbImageItemId; }

void SearchHint::setThumbImageItemId(QString newThumbImageItemId) {
	m_thumbImageItemId = newThumbImageItemId;
}
QString SearchHint::backdropImageTag() const { return m_backdropImageTag; }

void SearchHint::setBackdropImageTag(QString newBackdropImageTag) {
	m_backdropImageTag = newBackdropImageTag;
}
QString SearchHint::backdropImageItemId() const { return m_backdropImageItemId; }

void SearchHint::setBackdropImageItemId(QString newBackdropImageItemId) {
	m_backdropImageItemId = newBackdropImageItemId;
}
QString SearchHint::type() const { return m_type; }

void SearchHint::setType(QString newType) {
	m_type = newType;
}
bool SearchHint::isFolder() const { return m_isFolder; }

void SearchHint::setIsFolder(bool newIsFolder) {
	m_isFolder = newIsFolder;
}
qint64 SearchHint::runTimeTicks() const { return m_runTimeTicks; }

void SearchHint::setRunTimeTicks(qint64 newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
}
QString SearchHint::mediaType() const { return m_mediaType; }

void SearchHint::setMediaType(QString newMediaType) {
	m_mediaType = newMediaType;
}
QDateTime SearchHint::startDate() const { return m_startDate; }

void SearchHint::setStartDate(QDateTime newStartDate) {
	m_startDate = newStartDate;
}
QDateTime SearchHint::endDate() const { return m_endDate; }

void SearchHint::setEndDate(QDateTime newEndDate) {
	m_endDate = newEndDate;
}
QString SearchHint::series() const { return m_series; }

void SearchHint::setSeries(QString newSeries) {
	m_series = newSeries;
}
QString SearchHint::status() const { return m_status; }

void SearchHint::setStatus(QString newStatus) {
	m_status = newStatus;
}
QString SearchHint::album() const { return m_album; }

void SearchHint::setAlbum(QString newAlbum) {
	m_album = newAlbum;
}
QUuid SearchHint::albumId() const { return m_albumId; }

void SearchHint::setAlbumId(QUuid newAlbumId) {
	m_albumId = newAlbumId;
}
QString SearchHint::albumArtist() const { return m_albumArtist; }

void SearchHint::setAlbumArtist(QString newAlbumArtist) {
	m_albumArtist = newAlbumArtist;
}
QStringList SearchHint::artists() const { return m_artists; }

void SearchHint::setArtists(QStringList newArtists) {
	m_artists = newArtists;
}
qint32 SearchHint::songCount() const { return m_songCount; }

void SearchHint::setSongCount(qint32 newSongCount) {
	m_songCount = newSongCount;
}
qint32 SearchHint::episodeCount() const { return m_episodeCount; }

void SearchHint::setEpisodeCount(qint32 newEpisodeCount) {
	m_episodeCount = newEpisodeCount;
}
QUuid SearchHint::channelId() const { return m_channelId; }

void SearchHint::setChannelId(QUuid newChannelId) {
	m_channelId = newChannelId;
}
QString SearchHint::channelName() const { return m_channelName; }

void SearchHint::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
}
double SearchHint::primaryImageAspectRatio() const { return m_primaryImageAspectRatio; }

void SearchHint::setPrimaryImageAspectRatio(double newPrimaryImageAspectRatio) {
	m_primaryImageAspectRatio = newPrimaryImageAspectRatio;
}


} // NS Jellyfin
} // NS DTO

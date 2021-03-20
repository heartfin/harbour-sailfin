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

SearchHint::SearchHint() {}

SearchHint SearchHint::fromJson(QJsonObject source) {
	SearchHint instance;
	instance.setFromJson(source);
	return instance;
}


void SearchHint::setFromJson(QJsonObject source) {
	m_itemId = Jellyfin::Support::fromJsonValue<QUuid>(source["ItemId"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QUuid>(source["Id"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_matchedTerm = Jellyfin::Support::fromJsonValue<QString>(source["MatchedTerm"]);
	m_indexNumber = Jellyfin::Support::fromJsonValue<qint32>(source["IndexNumber"]);
	m_productionYear = Jellyfin::Support::fromJsonValue<qint32>(source["ProductionYear"]);
	m_parentIndexNumber = Jellyfin::Support::fromJsonValue<qint32>(source["ParentIndexNumber"]);
	m_primaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["PrimaryImageTag"]);
	m_thumbImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ThumbImageTag"]);
	m_thumbImageItemId = Jellyfin::Support::fromJsonValue<QString>(source["ThumbImageItemId"]);
	m_backdropImageTag = Jellyfin::Support::fromJsonValue<QString>(source["BackdropImageTag"]);
	m_backdropImageItemId = Jellyfin::Support::fromJsonValue<QString>(source["BackdropImageItemId"]);
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_isFolder = Jellyfin::Support::fromJsonValue<bool>(source["IsFolder"]);
	m_runTimeTicks = Jellyfin::Support::fromJsonValue<qint64>(source["RunTimeTicks"]);
	m_mediaType = Jellyfin::Support::fromJsonValue<QString>(source["MediaType"]);
	m_startDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["StartDate"]);
	m_endDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["EndDate"]);
	m_series = Jellyfin::Support::fromJsonValue<QString>(source["Series"]);
	m_status = Jellyfin::Support::fromJsonValue<QString>(source["Status"]);
	m_album = Jellyfin::Support::fromJsonValue<QString>(source["Album"]);
	m_albumId = Jellyfin::Support::fromJsonValue<QUuid>(source["AlbumId"]);
	m_albumArtist = Jellyfin::Support::fromJsonValue<QString>(source["AlbumArtist"]);
	m_artists = Jellyfin::Support::fromJsonValue<QStringList>(source["Artists"]);
	m_songCount = Jellyfin::Support::fromJsonValue<qint32>(source["SongCount"]);
	m_episodeCount = Jellyfin::Support::fromJsonValue<qint32>(source["EpisodeCount"]);
	m_channelId = Jellyfin::Support::fromJsonValue<QUuid>(source["ChannelId"]);
	m_channelName = Jellyfin::Support::fromJsonValue<QString>(source["ChannelName"]);
	m_primaryImageAspectRatio = Jellyfin::Support::fromJsonValue<double>(source["PrimaryImageAspectRatio"]);

}
	
QJsonObject SearchHint::toJson() {
	QJsonObject result;
	result["ItemId"] = Jellyfin::Support::toJsonValue<QUuid>(m_itemId);
	result["Id"] = Jellyfin::Support::toJsonValue<QUuid>(m_jellyfinId);
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["MatchedTerm"] = Jellyfin::Support::toJsonValue<QString>(m_matchedTerm);
	result["IndexNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_indexNumber);
	result["ProductionYear"] = Jellyfin::Support::toJsonValue<qint32>(m_productionYear);
	result["ParentIndexNumber"] = Jellyfin::Support::toJsonValue<qint32>(m_parentIndexNumber);
	result["PrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_primaryImageTag);
	result["ThumbImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_thumbImageTag);
	result["ThumbImageItemId"] = Jellyfin::Support::toJsonValue<QString>(m_thumbImageItemId);
	result["BackdropImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_backdropImageTag);
	result["BackdropImageItemId"] = Jellyfin::Support::toJsonValue<QString>(m_backdropImageItemId);
	result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	result["IsFolder"] = Jellyfin::Support::toJsonValue<bool>(m_isFolder);
	result["RunTimeTicks"] = Jellyfin::Support::toJsonValue<qint64>(m_runTimeTicks);
	result["MediaType"] = Jellyfin::Support::toJsonValue<QString>(m_mediaType);
	result["StartDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_startDate);
	result["EndDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_endDate);
	result["Series"] = Jellyfin::Support::toJsonValue<QString>(m_series);
	result["Status"] = Jellyfin::Support::toJsonValue<QString>(m_status);
	result["Album"] = Jellyfin::Support::toJsonValue<QString>(m_album);
	result["AlbumId"] = Jellyfin::Support::toJsonValue<QUuid>(m_albumId);
	result["AlbumArtist"] = Jellyfin::Support::toJsonValue<QString>(m_albumArtist);
	result["Artists"] = Jellyfin::Support::toJsonValue<QStringList>(m_artists);
	result["SongCount"] = Jellyfin::Support::toJsonValue<qint32>(m_songCount);
	result["EpisodeCount"] = Jellyfin::Support::toJsonValue<qint32>(m_episodeCount);
	result["ChannelId"] = Jellyfin::Support::toJsonValue<QUuid>(m_channelId);
	result["ChannelName"] = Jellyfin::Support::toJsonValue<QString>(m_channelName);
	result["PrimaryImageAspectRatio"] = Jellyfin::Support::toJsonValue<double>(m_primaryImageAspectRatio);

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

} // NS DTO

namespace Support {

using SearchHint = Jellyfin::DTO::SearchHint;

template <>
SearchHint fromJsonValue<SearchHint>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return SearchHint::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

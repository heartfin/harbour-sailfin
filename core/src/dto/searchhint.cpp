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

#include <JellyfinQt/dto/searchhint.h>

namespace Jellyfin {
namespace DTO {

SearchHint::SearchHint() {}

SearchHint::SearchHint(const SearchHint &other) :

	m_itemId(other.m_itemId),
	m_jellyfinId(other.m_jellyfinId),
	m_name(other.m_name),
	m_matchedTerm(other.m_matchedTerm),
	m_indexNumber(other.m_indexNumber),
	m_productionYear(other.m_productionYear),
	m_parentIndexNumber(other.m_parentIndexNumber),
	m_primaryImageTag(other.m_primaryImageTag),
	m_thumbImageTag(other.m_thumbImageTag),
	m_thumbImageItemId(other.m_thumbImageItemId),
	m_backdropImageTag(other.m_backdropImageTag),
	m_backdropImageItemId(other.m_backdropImageItemId),
	m_type(other.m_type),
	m_isFolder(other.m_isFolder),
	m_runTimeTicks(other.m_runTimeTicks),
	m_mediaType(other.m_mediaType),
	m_startDate(other.m_startDate),
	m_endDate(other.m_endDate),
	m_series(other.m_series),
	m_status(other.m_status),
	m_album(other.m_album),
	m_albumId(other.m_albumId),
	m_albumArtist(other.m_albumArtist),
	m_artists(other.m_artists),
	m_songCount(other.m_songCount),
	m_episodeCount(other.m_episodeCount),
	m_channelId(other.m_channelId),
	m_channelName(other.m_channelName),
	m_primaryImageAspectRatio(other.m_primaryImageAspectRatio){}


void SearchHint::replaceData(SearchHint &other) {
	m_itemId = other.m_itemId;
	m_jellyfinId = other.m_jellyfinId;
	m_name = other.m_name;
	m_matchedTerm = other.m_matchedTerm;
	m_indexNumber = other.m_indexNumber;
	m_productionYear = other.m_productionYear;
	m_parentIndexNumber = other.m_parentIndexNumber;
	m_primaryImageTag = other.m_primaryImageTag;
	m_thumbImageTag = other.m_thumbImageTag;
	m_thumbImageItemId = other.m_thumbImageItemId;
	m_backdropImageTag = other.m_backdropImageTag;
	m_backdropImageItemId = other.m_backdropImageItemId;
	m_type = other.m_type;
	m_isFolder = other.m_isFolder;
	m_runTimeTicks = other.m_runTimeTicks;
	m_mediaType = other.m_mediaType;
	m_startDate = other.m_startDate;
	m_endDate = other.m_endDate;
	m_series = other.m_series;
	m_status = other.m_status;
	m_album = other.m_album;
	m_albumId = other.m_albumId;
	m_albumArtist = other.m_albumArtist;
	m_artists = other.m_artists;
	m_songCount = other.m_songCount;
	m_episodeCount = other.m_episodeCount;
	m_channelId = other.m_channelId;
	m_channelName = other.m_channelName;
	m_primaryImageAspectRatio = other.m_primaryImageAspectRatio;
}

SearchHint SearchHint::fromJson(QJsonObject source) {
	SearchHint instance;
	instance.setFromJson(source);
	return instance;
}


void SearchHint::setFromJson(QJsonObject source) {
	m_itemId = Jellyfin::Support::fromJsonValue<QString>(source["ItemId"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_matchedTerm = Jellyfin::Support::fromJsonValue<QString>(source["MatchedTerm"]);
	m_indexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["IndexNumber"]);
	m_productionYear = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ProductionYear"]);
	m_parentIndexNumber = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["ParentIndexNumber"]);
	m_primaryImageTag = Jellyfin::Support::fromJsonValue<QString>(source["PrimaryImageTag"]);
	m_thumbImageTag = Jellyfin::Support::fromJsonValue<QString>(source["ThumbImageTag"]);
	m_thumbImageItemId = Jellyfin::Support::fromJsonValue<QString>(source["ThumbImageItemId"]);
	m_backdropImageTag = Jellyfin::Support::fromJsonValue<QString>(source["BackdropImageTag"]);
	m_backdropImageItemId = Jellyfin::Support::fromJsonValue<QString>(source["BackdropImageItemId"]);
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_isFolder = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsFolder"]);
	m_runTimeTicks = Jellyfin::Support::fromJsonValue<std::optional<qint64>>(source["RunTimeTicks"]);
	m_mediaType = Jellyfin::Support::fromJsonValue<QString>(source["MediaType"]);
	m_startDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["StartDate"]);
	m_endDate = Jellyfin::Support::fromJsonValue<QDateTime>(source["EndDate"]);
	m_series = Jellyfin::Support::fromJsonValue<QString>(source["Series"]);
	m_status = Jellyfin::Support::fromJsonValue<QString>(source["Status"]);
	m_album = Jellyfin::Support::fromJsonValue<QString>(source["Album"]);
	m_albumId = Jellyfin::Support::fromJsonValue<QString>(source["AlbumId"]);
	m_albumArtist = Jellyfin::Support::fromJsonValue<QString>(source["AlbumArtist"]);
	m_artists = Jellyfin::Support::fromJsonValue<QStringList>(source["Artists"]);
	m_songCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["SongCount"]);
	m_episodeCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["EpisodeCount"]);
	m_channelId = Jellyfin::Support::fromJsonValue<QString>(source["ChannelId"]);
	m_channelName = Jellyfin::Support::fromJsonValue<QString>(source["ChannelName"]);
	m_primaryImageAspectRatio = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["PrimaryImageAspectRatio"]);

}
	
QJsonObject SearchHint::toJson() const {
	QJsonObject result;
	
	result["ItemId"] = Jellyfin::Support::toJsonValue<QString>(m_itemId);		
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);		
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_matchedTerm.isNull())) {
		result["MatchedTerm"] = Jellyfin::Support::toJsonValue<QString>(m_matchedTerm);
	}
			
	
	if (!(!m_indexNumber.has_value())) {
		result["IndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_indexNumber);
	}
			
	
	if (!(!m_productionYear.has_value())) {
		result["ProductionYear"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_productionYear);
	}
			
	
	if (!(!m_parentIndexNumber.has_value())) {
		result["ParentIndexNumber"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_parentIndexNumber);
	}
			
	
	if (!(m_primaryImageTag.isNull())) {
		result["PrimaryImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_primaryImageTag);
	}
			
	
	if (!(m_thumbImageTag.isNull())) {
		result["ThumbImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_thumbImageTag);
	}
			
	
	if (!(m_thumbImageItemId.isNull())) {
		result["ThumbImageItemId"] = Jellyfin::Support::toJsonValue<QString>(m_thumbImageItemId);
	}
			
	
	if (!(m_backdropImageTag.isNull())) {
		result["BackdropImageTag"] = Jellyfin::Support::toJsonValue<QString>(m_backdropImageTag);
	}
			
	
	if (!(m_backdropImageItemId.isNull())) {
		result["BackdropImageItemId"] = Jellyfin::Support::toJsonValue<QString>(m_backdropImageItemId);
	}
			
	
	if (!(m_type.isNull())) {
		result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	}
			
	
	if (!(!m_isFolder.has_value())) {
		result["IsFolder"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isFolder);
	}
			
	
	if (!(!m_runTimeTicks.has_value())) {
		result["RunTimeTicks"] = Jellyfin::Support::toJsonValue<std::optional<qint64>>(m_runTimeTicks);
	}
			
	
	if (!(m_mediaType.isNull())) {
		result["MediaType"] = Jellyfin::Support::toJsonValue<QString>(m_mediaType);
	}
			
	
	if (!(m_startDate.isNull())) {
		result["StartDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_startDate);
	}
			
	
	if (!(m_endDate.isNull())) {
		result["EndDate"] = Jellyfin::Support::toJsonValue<QDateTime>(m_endDate);
	}
			
	
	if (!(m_series.isNull())) {
		result["Series"] = Jellyfin::Support::toJsonValue<QString>(m_series);
	}
			
	
	if (!(m_status.isNull())) {
		result["Status"] = Jellyfin::Support::toJsonValue<QString>(m_status);
	}
			
	
	if (!(m_album.isNull())) {
		result["Album"] = Jellyfin::Support::toJsonValue<QString>(m_album);
	}
			
	result["AlbumId"] = Jellyfin::Support::toJsonValue<QString>(m_albumId);		
	
	if (!(m_albumArtist.isNull())) {
		result["AlbumArtist"] = Jellyfin::Support::toJsonValue<QString>(m_albumArtist);
	}
			
	
	if (!(m_artists.size() == 0)) {
		result["Artists"] = Jellyfin::Support::toJsonValue<QStringList>(m_artists);
	}
			
	
	if (!(!m_songCount.has_value())) {
		result["SongCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_songCount);
	}
			
	
	if (!(!m_episodeCount.has_value())) {
		result["EpisodeCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_episodeCount);
	}
			
	result["ChannelId"] = Jellyfin::Support::toJsonValue<QString>(m_channelId);		
	
	if (!(m_channelName.isNull())) {
		result["ChannelName"] = Jellyfin::Support::toJsonValue<QString>(m_channelName);
	}
			
	
	if (!(!m_primaryImageAspectRatio.has_value())) {
		result["PrimaryImageAspectRatio"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_primaryImageAspectRatio);
	}
		
	return result;
}

QString SearchHint::itemId() const { return m_itemId; }

void SearchHint::setItemId(QString newItemId) {
	m_itemId = newItemId;
}

QString SearchHint::jellyfinId() const { return m_jellyfinId; }

void SearchHint::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}

QString SearchHint::name() const { return m_name; }

void SearchHint::setName(QString newName) {
	m_name = newName;
}
bool SearchHint::nameNull() const {
	return m_name.isNull();
}

void SearchHint::setNameNull() {
	m_name.clear();

}
QString SearchHint::matchedTerm() const { return m_matchedTerm; }

void SearchHint::setMatchedTerm(QString newMatchedTerm) {
	m_matchedTerm = newMatchedTerm;
}
bool SearchHint::matchedTermNull() const {
	return m_matchedTerm.isNull();
}

void SearchHint::setMatchedTermNull() {
	m_matchedTerm.clear();

}
std::optional<qint32> SearchHint::indexNumber() const { return m_indexNumber; }

void SearchHint::setIndexNumber(std::optional<qint32> newIndexNumber) {
	m_indexNumber = newIndexNumber;
}
bool SearchHint::indexNumberNull() const {
	return !m_indexNumber.has_value();
}

void SearchHint::setIndexNumberNull() {
	m_indexNumber = std::nullopt;

}
std::optional<qint32> SearchHint::productionYear() const { return m_productionYear; }

void SearchHint::setProductionYear(std::optional<qint32> newProductionYear) {
	m_productionYear = newProductionYear;
}
bool SearchHint::productionYearNull() const {
	return !m_productionYear.has_value();
}

void SearchHint::setProductionYearNull() {
	m_productionYear = std::nullopt;

}
std::optional<qint32> SearchHint::parentIndexNumber() const { return m_parentIndexNumber; }

void SearchHint::setParentIndexNumber(std::optional<qint32> newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
}
bool SearchHint::parentIndexNumberNull() const {
	return !m_parentIndexNumber.has_value();
}

void SearchHint::setParentIndexNumberNull() {
	m_parentIndexNumber = std::nullopt;

}
QString SearchHint::primaryImageTag() const { return m_primaryImageTag; }

void SearchHint::setPrimaryImageTag(QString newPrimaryImageTag) {
	m_primaryImageTag = newPrimaryImageTag;
}
bool SearchHint::primaryImageTagNull() const {
	return m_primaryImageTag.isNull();
}

void SearchHint::setPrimaryImageTagNull() {
	m_primaryImageTag.clear();

}
QString SearchHint::thumbImageTag() const { return m_thumbImageTag; }

void SearchHint::setThumbImageTag(QString newThumbImageTag) {
	m_thumbImageTag = newThumbImageTag;
}
bool SearchHint::thumbImageTagNull() const {
	return m_thumbImageTag.isNull();
}

void SearchHint::setThumbImageTagNull() {
	m_thumbImageTag.clear();

}
QString SearchHint::thumbImageItemId() const { return m_thumbImageItemId; }

void SearchHint::setThumbImageItemId(QString newThumbImageItemId) {
	m_thumbImageItemId = newThumbImageItemId;
}
bool SearchHint::thumbImageItemIdNull() const {
	return m_thumbImageItemId.isNull();
}

void SearchHint::setThumbImageItemIdNull() {
	m_thumbImageItemId.clear();

}
QString SearchHint::backdropImageTag() const { return m_backdropImageTag; }

void SearchHint::setBackdropImageTag(QString newBackdropImageTag) {
	m_backdropImageTag = newBackdropImageTag;
}
bool SearchHint::backdropImageTagNull() const {
	return m_backdropImageTag.isNull();
}

void SearchHint::setBackdropImageTagNull() {
	m_backdropImageTag.clear();

}
QString SearchHint::backdropImageItemId() const { return m_backdropImageItemId; }

void SearchHint::setBackdropImageItemId(QString newBackdropImageItemId) {
	m_backdropImageItemId = newBackdropImageItemId;
}
bool SearchHint::backdropImageItemIdNull() const {
	return m_backdropImageItemId.isNull();
}

void SearchHint::setBackdropImageItemIdNull() {
	m_backdropImageItemId.clear();

}
QString SearchHint::type() const { return m_type; }

void SearchHint::setType(QString newType) {
	m_type = newType;
}
bool SearchHint::typeNull() const {
	return m_type.isNull();
}

void SearchHint::setTypeNull() {
	m_type.clear();

}
std::optional<bool> SearchHint::isFolder() const { return m_isFolder; }

void SearchHint::setIsFolder(std::optional<bool> newIsFolder) {
	m_isFolder = newIsFolder;
}
bool SearchHint::isFolderNull() const {
	return !m_isFolder.has_value();
}

void SearchHint::setIsFolderNull() {
	m_isFolder = std::nullopt;

}
std::optional<qint64> SearchHint::runTimeTicks() const { return m_runTimeTicks; }

void SearchHint::setRunTimeTicks(std::optional<qint64> newRunTimeTicks) {
	m_runTimeTicks = newRunTimeTicks;
}
bool SearchHint::runTimeTicksNull() const {
	return !m_runTimeTicks.has_value();
}

void SearchHint::setRunTimeTicksNull() {
	m_runTimeTicks = std::nullopt;

}
QString SearchHint::mediaType() const { return m_mediaType; }

void SearchHint::setMediaType(QString newMediaType) {
	m_mediaType = newMediaType;
}
bool SearchHint::mediaTypeNull() const {
	return m_mediaType.isNull();
}

void SearchHint::setMediaTypeNull() {
	m_mediaType.clear();

}
QDateTime SearchHint::startDate() const { return m_startDate; }

void SearchHint::setStartDate(QDateTime newStartDate) {
	m_startDate = newStartDate;
}
bool SearchHint::startDateNull() const {
	return m_startDate.isNull();
}

void SearchHint::setStartDateNull() {
	m_startDate= QDateTime();

}
QDateTime SearchHint::endDate() const { return m_endDate; }

void SearchHint::setEndDate(QDateTime newEndDate) {
	m_endDate = newEndDate;
}
bool SearchHint::endDateNull() const {
	return m_endDate.isNull();
}

void SearchHint::setEndDateNull() {
	m_endDate= QDateTime();

}
QString SearchHint::series() const { return m_series; }

void SearchHint::setSeries(QString newSeries) {
	m_series = newSeries;
}
bool SearchHint::seriesNull() const {
	return m_series.isNull();
}

void SearchHint::setSeriesNull() {
	m_series.clear();

}
QString SearchHint::status() const { return m_status; }

void SearchHint::setStatus(QString newStatus) {
	m_status = newStatus;
}
bool SearchHint::statusNull() const {
	return m_status.isNull();
}

void SearchHint::setStatusNull() {
	m_status.clear();

}
QString SearchHint::album() const { return m_album; }

void SearchHint::setAlbum(QString newAlbum) {
	m_album = newAlbum;
}
bool SearchHint::albumNull() const {
	return m_album.isNull();
}

void SearchHint::setAlbumNull() {
	m_album.clear();

}
QString SearchHint::albumId() const { return m_albumId; }

void SearchHint::setAlbumId(QString newAlbumId) {
	m_albumId = newAlbumId;
}

QString SearchHint::albumArtist() const { return m_albumArtist; }

void SearchHint::setAlbumArtist(QString newAlbumArtist) {
	m_albumArtist = newAlbumArtist;
}
bool SearchHint::albumArtistNull() const {
	return m_albumArtist.isNull();
}

void SearchHint::setAlbumArtistNull() {
	m_albumArtist.clear();

}
QStringList SearchHint::artists() const { return m_artists; }

void SearchHint::setArtists(QStringList newArtists) {
	m_artists = newArtists;
}
bool SearchHint::artistsNull() const {
	return m_artists.size() == 0;
}

void SearchHint::setArtistsNull() {
	m_artists.clear();

}
std::optional<qint32> SearchHint::songCount() const { return m_songCount; }

void SearchHint::setSongCount(std::optional<qint32> newSongCount) {
	m_songCount = newSongCount;
}
bool SearchHint::songCountNull() const {
	return !m_songCount.has_value();
}

void SearchHint::setSongCountNull() {
	m_songCount = std::nullopt;

}
std::optional<qint32> SearchHint::episodeCount() const { return m_episodeCount; }

void SearchHint::setEpisodeCount(std::optional<qint32> newEpisodeCount) {
	m_episodeCount = newEpisodeCount;
}
bool SearchHint::episodeCountNull() const {
	return !m_episodeCount.has_value();
}

void SearchHint::setEpisodeCountNull() {
	m_episodeCount = std::nullopt;

}
QString SearchHint::channelId() const { return m_channelId; }

void SearchHint::setChannelId(QString newChannelId) {
	m_channelId = newChannelId;
}

QString SearchHint::channelName() const { return m_channelName; }

void SearchHint::setChannelName(QString newChannelName) {
	m_channelName = newChannelName;
}
bool SearchHint::channelNameNull() const {
	return m_channelName.isNull();
}

void SearchHint::setChannelNameNull() {
	m_channelName.clear();

}
std::optional<double> SearchHint::primaryImageAspectRatio() const { return m_primaryImageAspectRatio; }

void SearchHint::setPrimaryImageAspectRatio(std::optional<double> newPrimaryImageAspectRatio) {
	m_primaryImageAspectRatio = newPrimaryImageAspectRatio;
}
bool SearchHint::primaryImageAspectRatioNull() const {
	return !m_primaryImageAspectRatio.has_value();
}

void SearchHint::setPrimaryImageAspectRatioNull() {
	m_primaryImageAspectRatio = std::nullopt;

}

} // NS DTO

namespace Support {

using SearchHint = Jellyfin::DTO::SearchHint;

template <>
SearchHint fromJsonValue(const QJsonValue &source, convertType<SearchHint>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SearchHint::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SearchHint &source, convertType<SearchHint>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

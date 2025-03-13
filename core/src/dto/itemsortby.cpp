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

#include <JellyfinQt/dto/itemsortby.h>

namespace Jellyfin {
namespace DTO {

ItemSortByClass::ItemSortByClass() {}

} // NS DTO

namespace Support {

using ItemSortBy = Jellyfin::DTO::ItemSortBy;

template <>
ItemSortBy fromJsonValue(const QJsonValue &source, convertType<ItemSortBy>) {
	if (!source.isString()) return ItemSortBy::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("Default")) {
		return ItemSortBy::Default;
	}
	if (str == QStringLiteral("AiredEpisodeOrder")) {
		return ItemSortBy::AiredEpisodeOrder;
	}
	if (str == QStringLiteral("Album")) {
		return ItemSortBy::Album;
	}
	if (str == QStringLiteral("AlbumArtist")) {
		return ItemSortBy::AlbumArtist;
	}
	if (str == QStringLiteral("Artist")) {
		return ItemSortBy::Artist;
	}
	if (str == QStringLiteral("DateCreated")) {
		return ItemSortBy::DateCreated;
	}
	if (str == QStringLiteral("OfficialRating")) {
		return ItemSortBy::OfficialRating;
	}
	if (str == QStringLiteral("DatePlayed")) {
		return ItemSortBy::DatePlayed;
	}
	if (str == QStringLiteral("PremiereDate")) {
		return ItemSortBy::PremiereDate;
	}
	if (str == QStringLiteral("StartDate")) {
		return ItemSortBy::StartDate;
	}
	if (str == QStringLiteral("SortName")) {
		return ItemSortBy::SortName;
	}
	if (str == QStringLiteral("Name")) {
		return ItemSortBy::Name;
	}
	if (str == QStringLiteral("Random")) {
		return ItemSortBy::Random;
	}
	if (str == QStringLiteral("Runtime")) {
		return ItemSortBy::Runtime;
	}
	if (str == QStringLiteral("CommunityRating")) {
		return ItemSortBy::CommunityRating;
	}
	if (str == QStringLiteral("ProductionYear")) {
		return ItemSortBy::ProductionYear;
	}
	if (str == QStringLiteral("PlayCount")) {
		return ItemSortBy::PlayCount;
	}
	if (str == QStringLiteral("CriticRating")) {
		return ItemSortBy::CriticRating;
	}
	if (str == QStringLiteral("IsFolder")) {
		return ItemSortBy::IsFolder;
	}
	if (str == QStringLiteral("IsUnplayed")) {
		return ItemSortBy::IsUnplayed;
	}
	if (str == QStringLiteral("IsPlayed")) {
		return ItemSortBy::IsPlayed;
	}
	if (str == QStringLiteral("SeriesSortName")) {
		return ItemSortBy::SeriesSortName;
	}
	if (str == QStringLiteral("VideoBitRate")) {
		return ItemSortBy::VideoBitRate;
	}
	if (str == QStringLiteral("AirTime")) {
		return ItemSortBy::AirTime;
	}
	if (str == QStringLiteral("Studio")) {
		return ItemSortBy::Studio;
	}
	if (str == QStringLiteral("IsFavoriteOrLiked")) {
		return ItemSortBy::IsFavoriteOrLiked;
	}
	if (str == QStringLiteral("DateLastContentAdded")) {
		return ItemSortBy::DateLastContentAdded;
	}
	if (str == QStringLiteral("SeriesDatePlayed")) {
		return ItemSortBy::SeriesDatePlayed;
	}
	if (str == QStringLiteral("ParentIndexNumber")) {
		return ItemSortBy::ParentIndexNumber;
	}
	if (str == QStringLiteral("IndexNumber")) {
		return ItemSortBy::IndexNumber;
	}
	if (str == QStringLiteral("SimilarityScore")) {
		return ItemSortBy::SimilarityScore;
	}
	if (str == QStringLiteral("SearchScore")) {
		return ItemSortBy::SearchScore;
	}
	
	return ItemSortBy::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const ItemSortBy &source, convertType<ItemSortBy>) {
	switch(source) {
	case ItemSortBy::Default:
		return QStringLiteral("Default");
	case ItemSortBy::AiredEpisodeOrder:
		return QStringLiteral("AiredEpisodeOrder");
	case ItemSortBy::Album:
		return QStringLiteral("Album");
	case ItemSortBy::AlbumArtist:
		return QStringLiteral("AlbumArtist");
	case ItemSortBy::Artist:
		return QStringLiteral("Artist");
	case ItemSortBy::DateCreated:
		return QStringLiteral("DateCreated");
	case ItemSortBy::OfficialRating:
		return QStringLiteral("OfficialRating");
	case ItemSortBy::DatePlayed:
		return QStringLiteral("DatePlayed");
	case ItemSortBy::PremiereDate:
		return QStringLiteral("PremiereDate");
	case ItemSortBy::StartDate:
		return QStringLiteral("StartDate");
	case ItemSortBy::SortName:
		return QStringLiteral("SortName");
	case ItemSortBy::Name:
		return QStringLiteral("Name");
	case ItemSortBy::Random:
		return QStringLiteral("Random");
	case ItemSortBy::Runtime:
		return QStringLiteral("Runtime");
	case ItemSortBy::CommunityRating:
		return QStringLiteral("CommunityRating");
	case ItemSortBy::ProductionYear:
		return QStringLiteral("ProductionYear");
	case ItemSortBy::PlayCount:
		return QStringLiteral("PlayCount");
	case ItemSortBy::CriticRating:
		return QStringLiteral("CriticRating");
	case ItemSortBy::IsFolder:
		return QStringLiteral("IsFolder");
	case ItemSortBy::IsUnplayed:
		return QStringLiteral("IsUnplayed");
	case ItemSortBy::IsPlayed:
		return QStringLiteral("IsPlayed");
	case ItemSortBy::SeriesSortName:
		return QStringLiteral("SeriesSortName");
	case ItemSortBy::VideoBitRate:
		return QStringLiteral("VideoBitRate");
	case ItemSortBy::AirTime:
		return QStringLiteral("AirTime");
	case ItemSortBy::Studio:
		return QStringLiteral("Studio");
	case ItemSortBy::IsFavoriteOrLiked:
		return QStringLiteral("IsFavoriteOrLiked");
	case ItemSortBy::DateLastContentAdded:
		return QStringLiteral("DateLastContentAdded");
	case ItemSortBy::SeriesDatePlayed:
		return QStringLiteral("SeriesDatePlayed");
	case ItemSortBy::ParentIndexNumber:
		return QStringLiteral("ParentIndexNumber");
	case ItemSortBy::IndexNumber:
		return QStringLiteral("IndexNumber");
	case ItemSortBy::SimilarityScore:
		return QStringLiteral("SimilarityScore");
	case ItemSortBy::SearchScore:
		return QStringLiteral("SearchScore");

	case ItemSortBy::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin

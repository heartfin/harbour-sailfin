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

#include <JellyfinQt/dto/itemfields.h>

namespace Jellyfin {
namespace DTO {

ItemFieldsClass::ItemFieldsClass() {}

} // NS DTO

namespace Support {

using ItemFields = Jellyfin::DTO::ItemFields;

template <>
ItemFields fromJsonValue(const QJsonValue &source, convertType<ItemFields>) {
	if (!source.isString()) return ItemFields::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("AirTime")) {
		return ItemFields::AirTime;
	}
	if (str == QStringLiteral("CanDelete")) {
		return ItemFields::CanDelete;
	}
	if (str == QStringLiteral("CanDownload")) {
		return ItemFields::CanDownload;
	}
	if (str == QStringLiteral("ChannelInfo")) {
		return ItemFields::ChannelInfo;
	}
	if (str == QStringLiteral("Chapters")) {
		return ItemFields::Chapters;
	}
	if (str == QStringLiteral("ChildCount")) {
		return ItemFields::ChildCount;
	}
	if (str == QStringLiteral("CumulativeRunTimeTicks")) {
		return ItemFields::CumulativeRunTimeTicks;
	}
	if (str == QStringLiteral("CustomRating")) {
		return ItemFields::CustomRating;
	}
	if (str == QStringLiteral("DateCreated")) {
		return ItemFields::DateCreated;
	}
	if (str == QStringLiteral("DateLastMediaAdded")) {
		return ItemFields::DateLastMediaAdded;
	}
	if (str == QStringLiteral("DisplayPreferencesId")) {
		return ItemFields::DisplayPreferencesId;
	}
	if (str == QStringLiteral("Etag")) {
		return ItemFields::Etag;
	}
	if (str == QStringLiteral("ExternalUrls")) {
		return ItemFields::ExternalUrls;
	}
	if (str == QStringLiteral("Genres")) {
		return ItemFields::Genres;
	}
	if (str == QStringLiteral("HomePageUrl")) {
		return ItemFields::HomePageUrl;
	}
	if (str == QStringLiteral("ItemCounts")) {
		return ItemFields::ItemCounts;
	}
	if (str == QStringLiteral("MediaSourceCount")) {
		return ItemFields::MediaSourceCount;
	}
	if (str == QStringLiteral("MediaSources")) {
		return ItemFields::MediaSources;
	}
	if (str == QStringLiteral("OriginalTitle")) {
		return ItemFields::OriginalTitle;
	}
	if (str == QStringLiteral("Overview")) {
		return ItemFields::Overview;
	}
	if (str == QStringLiteral("ParentId")) {
		return ItemFields::ParentId;
	}
	if (str == QStringLiteral("Path")) {
		return ItemFields::Path;
	}
	if (str == QStringLiteral("People")) {
		return ItemFields::People;
	}
	if (str == QStringLiteral("PlayAccess")) {
		return ItemFields::PlayAccess;
	}
	if (str == QStringLiteral("ProductionLocations")) {
		return ItemFields::ProductionLocations;
	}
	if (str == QStringLiteral("ProviderIds")) {
		return ItemFields::ProviderIds;
	}
	if (str == QStringLiteral("PrimaryImageAspectRatio")) {
		return ItemFields::PrimaryImageAspectRatio;
	}
	if (str == QStringLiteral("RecursiveItemCount")) {
		return ItemFields::RecursiveItemCount;
	}
	if (str == QStringLiteral("Settings")) {
		return ItemFields::Settings;
	}
	if (str == QStringLiteral("ScreenshotImageTags")) {
		return ItemFields::ScreenshotImageTags;
	}
	if (str == QStringLiteral("SeriesPrimaryImage")) {
		return ItemFields::SeriesPrimaryImage;
	}
	if (str == QStringLiteral("SeriesStudio")) {
		return ItemFields::SeriesStudio;
	}
	if (str == QStringLiteral("SortName")) {
		return ItemFields::SortName;
	}
	if (str == QStringLiteral("SpecialEpisodeNumbers")) {
		return ItemFields::SpecialEpisodeNumbers;
	}
	if (str == QStringLiteral("Studios")) {
		return ItemFields::Studios;
	}
	if (str == QStringLiteral("BasicSyncInfo")) {
		return ItemFields::BasicSyncInfo;
	}
	if (str == QStringLiteral("SyncInfo")) {
		return ItemFields::SyncInfo;
	}
	if (str == QStringLiteral("Taglines")) {
		return ItemFields::Taglines;
	}
	if (str == QStringLiteral("Tags")) {
		return ItemFields::Tags;
	}
	if (str == QStringLiteral("RemoteTrailers")) {
		return ItemFields::RemoteTrailers;
	}
	if (str == QStringLiteral("MediaStreams")) {
		return ItemFields::MediaStreams;
	}
	if (str == QStringLiteral("SeasonUserData")) {
		return ItemFields::SeasonUserData;
	}
	if (str == QStringLiteral("ServiceName")) {
		return ItemFields::ServiceName;
	}
	if (str == QStringLiteral("ThemeSongIds")) {
		return ItemFields::ThemeSongIds;
	}
	if (str == QStringLiteral("ThemeVideoIds")) {
		return ItemFields::ThemeVideoIds;
	}
	if (str == QStringLiteral("ExternalEtag")) {
		return ItemFields::ExternalEtag;
	}
	if (str == QStringLiteral("PresentationUniqueKey")) {
		return ItemFields::PresentationUniqueKey;
	}
	if (str == QStringLiteral("InheritedParentalRatingValue")) {
		return ItemFields::InheritedParentalRatingValue;
	}
	if (str == QStringLiteral("ExternalSeriesId")) {
		return ItemFields::ExternalSeriesId;
	}
	if (str == QStringLiteral("SeriesPresentationUniqueKey")) {
		return ItemFields::SeriesPresentationUniqueKey;
	}
	if (str == QStringLiteral("DateLastRefreshed")) {
		return ItemFields::DateLastRefreshed;
	}
	if (str == QStringLiteral("DateLastSaved")) {
		return ItemFields::DateLastSaved;
	}
	if (str == QStringLiteral("RefreshState")) {
		return ItemFields::RefreshState;
	}
	if (str == QStringLiteral("ChannelImage")) {
		return ItemFields::ChannelImage;
	}
	if (str == QStringLiteral("EnableMediaSourceDisplay")) {
		return ItemFields::EnableMediaSourceDisplay;
	}
	if (str == QStringLiteral("Width")) {
		return ItemFields::Width;
	}
	if (str == QStringLiteral("Height")) {
		return ItemFields::Height;
	}
	if (str == QStringLiteral("ExtraIds")) {
		return ItemFields::ExtraIds;
	}
	if (str == QStringLiteral("LocalTrailerCount")) {
		return ItemFields::LocalTrailerCount;
	}
	if (str == QStringLiteral("IsHD")) {
		return ItemFields::IsHD;
	}
	if (str == QStringLiteral("SpecialFeatureCount")) {
		return ItemFields::SpecialFeatureCount;
	}
	
	return ItemFields::EnumNotSet;
}

template <>
QJsonValue toJsonValue(const ItemFields &source, convertType<ItemFields>) {
	switch(source) {
	case ItemFields::AirTime:
		return QStringLiteral("AirTime");
	case ItemFields::CanDelete:
		return QStringLiteral("CanDelete");
	case ItemFields::CanDownload:
		return QStringLiteral("CanDownload");
	case ItemFields::ChannelInfo:
		return QStringLiteral("ChannelInfo");
	case ItemFields::Chapters:
		return QStringLiteral("Chapters");
	case ItemFields::ChildCount:
		return QStringLiteral("ChildCount");
	case ItemFields::CumulativeRunTimeTicks:
		return QStringLiteral("CumulativeRunTimeTicks");
	case ItemFields::CustomRating:
		return QStringLiteral("CustomRating");
	case ItemFields::DateCreated:
		return QStringLiteral("DateCreated");
	case ItemFields::DateLastMediaAdded:
		return QStringLiteral("DateLastMediaAdded");
	case ItemFields::DisplayPreferencesId:
		return QStringLiteral("DisplayPreferencesId");
	case ItemFields::Etag:
		return QStringLiteral("Etag");
	case ItemFields::ExternalUrls:
		return QStringLiteral("ExternalUrls");
	case ItemFields::Genres:
		return QStringLiteral("Genres");
	case ItemFields::HomePageUrl:
		return QStringLiteral("HomePageUrl");
	case ItemFields::ItemCounts:
		return QStringLiteral("ItemCounts");
	case ItemFields::MediaSourceCount:
		return QStringLiteral("MediaSourceCount");
	case ItemFields::MediaSources:
		return QStringLiteral("MediaSources");
	case ItemFields::OriginalTitle:
		return QStringLiteral("OriginalTitle");
	case ItemFields::Overview:
		return QStringLiteral("Overview");
	case ItemFields::ParentId:
		return QStringLiteral("ParentId");
	case ItemFields::Path:
		return QStringLiteral("Path");
	case ItemFields::People:
		return QStringLiteral("People");
	case ItemFields::PlayAccess:
		return QStringLiteral("PlayAccess");
	case ItemFields::ProductionLocations:
		return QStringLiteral("ProductionLocations");
	case ItemFields::ProviderIds:
		return QStringLiteral("ProviderIds");
	case ItemFields::PrimaryImageAspectRatio:
		return QStringLiteral("PrimaryImageAspectRatio");
	case ItemFields::RecursiveItemCount:
		return QStringLiteral("RecursiveItemCount");
	case ItemFields::Settings:
		return QStringLiteral("Settings");
	case ItemFields::ScreenshotImageTags:
		return QStringLiteral("ScreenshotImageTags");
	case ItemFields::SeriesPrimaryImage:
		return QStringLiteral("SeriesPrimaryImage");
	case ItemFields::SeriesStudio:
		return QStringLiteral("SeriesStudio");
	case ItemFields::SortName:
		return QStringLiteral("SortName");
	case ItemFields::SpecialEpisodeNumbers:
		return QStringLiteral("SpecialEpisodeNumbers");
	case ItemFields::Studios:
		return QStringLiteral("Studios");
	case ItemFields::BasicSyncInfo:
		return QStringLiteral("BasicSyncInfo");
	case ItemFields::SyncInfo:
		return QStringLiteral("SyncInfo");
	case ItemFields::Taglines:
		return QStringLiteral("Taglines");
	case ItemFields::Tags:
		return QStringLiteral("Tags");
	case ItemFields::RemoteTrailers:
		return QStringLiteral("RemoteTrailers");
	case ItemFields::MediaStreams:
		return QStringLiteral("MediaStreams");
	case ItemFields::SeasonUserData:
		return QStringLiteral("SeasonUserData");
	case ItemFields::ServiceName:
		return QStringLiteral("ServiceName");
	case ItemFields::ThemeSongIds:
		return QStringLiteral("ThemeSongIds");
	case ItemFields::ThemeVideoIds:
		return QStringLiteral("ThemeVideoIds");
	case ItemFields::ExternalEtag:
		return QStringLiteral("ExternalEtag");
	case ItemFields::PresentationUniqueKey:
		return QStringLiteral("PresentationUniqueKey");
	case ItemFields::InheritedParentalRatingValue:
		return QStringLiteral("InheritedParentalRatingValue");
	case ItemFields::ExternalSeriesId:
		return QStringLiteral("ExternalSeriesId");
	case ItemFields::SeriesPresentationUniqueKey:
		return QStringLiteral("SeriesPresentationUniqueKey");
	case ItemFields::DateLastRefreshed:
		return QStringLiteral("DateLastRefreshed");
	case ItemFields::DateLastSaved:
		return QStringLiteral("DateLastSaved");
	case ItemFields::RefreshState:
		return QStringLiteral("RefreshState");
	case ItemFields::ChannelImage:
		return QStringLiteral("ChannelImage");
	case ItemFields::EnableMediaSourceDisplay:
		return QStringLiteral("EnableMediaSourceDisplay");
	case ItemFields::Width:
		return QStringLiteral("Width");
	case ItemFields::Height:
		return QStringLiteral("Height");
	case ItemFields::ExtraIds:
		return QStringLiteral("ExtraIds");
	case ItemFields::LocalTrailerCount:
		return QStringLiteral("LocalTrailerCount");
	case ItemFields::IsHD:
		return QStringLiteral("IsHD");
	case ItemFields::SpecialFeatureCount:
		return QStringLiteral("SpecialFeatureCount");

	case ItemFields::EnumNotSet: // Fallthrough
	default:
		return QJsonValue();
	}
}

} // NS DTO
} // NS Jellyfin

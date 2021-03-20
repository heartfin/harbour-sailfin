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

#include <JellyfinQt/DTO/itemfields.h>

namespace Jellyfin {
namespace DTO {

ItemFieldsClass::ItemFieldsClass() {}


} // NS DTO

namespace Support {

using ItemFields = Jellyfin::DTO::ItemFields;

template <>
ItemFields fromJsonValue<ItemFields>(const QJsonValue &source) {
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

} // NS Jellyfin
} // NS DTO

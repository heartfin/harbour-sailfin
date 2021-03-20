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

#ifndef JELLYFIN_DTO_ITEMFIELDS_H
#define JELLYFIN_DTO_ITEMFIELDS_H

#include <QJsonValue>
#include <QObject>
#include <QString>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {

class ItemFieldsClass {
	Q_GADGET
public:
	enum Value {
		EnumNotSet,
		AirTime,
		CanDelete,
		CanDownload,
		ChannelInfo,
		Chapters,
		ChildCount,
		CumulativeRunTimeTicks,
		CustomRating,
		DateCreated,
		DateLastMediaAdded,
		DisplayPreferencesId,
		Etag,
		ExternalUrls,
		Genres,
		HomePageUrl,
		ItemCounts,
		MediaSourceCount,
		MediaSources,
		OriginalTitle,
		Overview,
		ParentId,
		Path,
		People,
		PlayAccess,
		ProductionLocations,
		ProviderIds,
		PrimaryImageAspectRatio,
		RecursiveItemCount,
		Settings,
		ScreenshotImageTags,
		SeriesPrimaryImage,
		SeriesStudio,
		SortName,
		SpecialEpisodeNumbers,
		Studios,
		BasicSyncInfo,
		SyncInfo,
		Taglines,
		Tags,
		RemoteTrailers,
		MediaStreams,
		SeasonUserData,
		ServiceName,
		ThemeSongIds,
		ThemeVideoIds,
		ExternalEtag,
		PresentationUniqueKey,
		InheritedParentalRatingValue,
		ExternalSeriesId,
		SeriesPresentationUniqueKey,
		DateLastRefreshed,
		DateLastSaved,
		RefreshState,
		ChannelImage,
		EnableMediaSourceDisplay,
		Width,
		Height,
		ExtraIds,
		LocalTrailerCount,
		IsHD,
		SpecialFeatureCount,
	};
	Q_ENUM(Value)
private:
	explicit ItemFieldsClass();
};

typedef ItemFieldsClass::Value ItemFields;

} // NS DTO

namespace Support {

using ItemFields = Jellyfin::DTO::ItemFields;
using ItemFieldsClass = Jellyfin::DTO::ItemFieldsClass;

template <>
ItemFields fromJsonValue<ItemFields>(const QJsonValue &source) {
	if (!source.isString()) return ItemFieldsClass::EnumNotSet;

	QString str = source.toString();
	if (str == QStringLiteral("AirTime")) {
		return ItemFieldsClass::AirTime;
	}
	if (str == QStringLiteral("CanDelete")) {
		return ItemFieldsClass::CanDelete;
	}
	if (str == QStringLiteral("CanDownload")) {
		return ItemFieldsClass::CanDownload;
	}
	if (str == QStringLiteral("ChannelInfo")) {
		return ItemFieldsClass::ChannelInfo;
	}
	if (str == QStringLiteral("Chapters")) {
		return ItemFieldsClass::Chapters;
	}
	if (str == QStringLiteral("ChildCount")) {
		return ItemFieldsClass::ChildCount;
	}
	if (str == QStringLiteral("CumulativeRunTimeTicks")) {
		return ItemFieldsClass::CumulativeRunTimeTicks;
	}
	if (str == QStringLiteral("CustomRating")) {
		return ItemFieldsClass::CustomRating;
	}
	if (str == QStringLiteral("DateCreated")) {
		return ItemFieldsClass::DateCreated;
	}
	if (str == QStringLiteral("DateLastMediaAdded")) {
		return ItemFieldsClass::DateLastMediaAdded;
	}
	if (str == QStringLiteral("DisplayPreferencesId")) {
		return ItemFieldsClass::DisplayPreferencesId;
	}
	if (str == QStringLiteral("Etag")) {
		return ItemFieldsClass::Etag;
	}
	if (str == QStringLiteral("ExternalUrls")) {
		return ItemFieldsClass::ExternalUrls;
	}
	if (str == QStringLiteral("Genres")) {
		return ItemFieldsClass::Genres;
	}
	if (str == QStringLiteral("HomePageUrl")) {
		return ItemFieldsClass::HomePageUrl;
	}
	if (str == QStringLiteral("ItemCounts")) {
		return ItemFieldsClass::ItemCounts;
	}
	if (str == QStringLiteral("MediaSourceCount")) {
		return ItemFieldsClass::MediaSourceCount;
	}
	if (str == QStringLiteral("MediaSources")) {
		return ItemFieldsClass::MediaSources;
	}
	if (str == QStringLiteral("OriginalTitle")) {
		return ItemFieldsClass::OriginalTitle;
	}
	if (str == QStringLiteral("Overview")) {
		return ItemFieldsClass::Overview;
	}
	if (str == QStringLiteral("ParentId")) {
		return ItemFieldsClass::ParentId;
	}
	if (str == QStringLiteral("Path")) {
		return ItemFieldsClass::Path;
	}
	if (str == QStringLiteral("People")) {
		return ItemFieldsClass::People;
	}
	if (str == QStringLiteral("PlayAccess")) {
		return ItemFieldsClass::PlayAccess;
	}
	if (str == QStringLiteral("ProductionLocations")) {
		return ItemFieldsClass::ProductionLocations;
	}
	if (str == QStringLiteral("ProviderIds")) {
		return ItemFieldsClass::ProviderIds;
	}
	if (str == QStringLiteral("PrimaryImageAspectRatio")) {
		return ItemFieldsClass::PrimaryImageAspectRatio;
	}
	if (str == QStringLiteral("RecursiveItemCount")) {
		return ItemFieldsClass::RecursiveItemCount;
	}
	if (str == QStringLiteral("Settings")) {
		return ItemFieldsClass::Settings;
	}
	if (str == QStringLiteral("ScreenshotImageTags")) {
		return ItemFieldsClass::ScreenshotImageTags;
	}
	if (str == QStringLiteral("SeriesPrimaryImage")) {
		return ItemFieldsClass::SeriesPrimaryImage;
	}
	if (str == QStringLiteral("SeriesStudio")) {
		return ItemFieldsClass::SeriesStudio;
	}
	if (str == QStringLiteral("SortName")) {
		return ItemFieldsClass::SortName;
	}
	if (str == QStringLiteral("SpecialEpisodeNumbers")) {
		return ItemFieldsClass::SpecialEpisodeNumbers;
	}
	if (str == QStringLiteral("Studios")) {
		return ItemFieldsClass::Studios;
	}
	if (str == QStringLiteral("BasicSyncInfo")) {
		return ItemFieldsClass::BasicSyncInfo;
	}
	if (str == QStringLiteral("SyncInfo")) {
		return ItemFieldsClass::SyncInfo;
	}
	if (str == QStringLiteral("Taglines")) {
		return ItemFieldsClass::Taglines;
	}
	if (str == QStringLiteral("Tags")) {
		return ItemFieldsClass::Tags;
	}
	if (str == QStringLiteral("RemoteTrailers")) {
		return ItemFieldsClass::RemoteTrailers;
	}
	if (str == QStringLiteral("MediaStreams")) {
		return ItemFieldsClass::MediaStreams;
	}
	if (str == QStringLiteral("SeasonUserData")) {
		return ItemFieldsClass::SeasonUserData;
	}
	if (str == QStringLiteral("ServiceName")) {
		return ItemFieldsClass::ServiceName;
	}
	if (str == QStringLiteral("ThemeSongIds")) {
		return ItemFieldsClass::ThemeSongIds;
	}
	if (str == QStringLiteral("ThemeVideoIds")) {
		return ItemFieldsClass::ThemeVideoIds;
	}
	if (str == QStringLiteral("ExternalEtag")) {
		return ItemFieldsClass::ExternalEtag;
	}
	if (str == QStringLiteral("PresentationUniqueKey")) {
		return ItemFieldsClass::PresentationUniqueKey;
	}
	if (str == QStringLiteral("InheritedParentalRatingValue")) {
		return ItemFieldsClass::InheritedParentalRatingValue;
	}
	if (str == QStringLiteral("ExternalSeriesId")) {
		return ItemFieldsClass::ExternalSeriesId;
	}
	if (str == QStringLiteral("SeriesPresentationUniqueKey")) {
		return ItemFieldsClass::SeriesPresentationUniqueKey;
	}
	if (str == QStringLiteral("DateLastRefreshed")) {
		return ItemFieldsClass::DateLastRefreshed;
	}
	if (str == QStringLiteral("DateLastSaved")) {
		return ItemFieldsClass::DateLastSaved;
	}
	if (str == QStringLiteral("RefreshState")) {
		return ItemFieldsClass::RefreshState;
	}
	if (str == QStringLiteral("ChannelImage")) {
		return ItemFieldsClass::ChannelImage;
	}
	if (str == QStringLiteral("EnableMediaSourceDisplay")) {
		return ItemFieldsClass::EnableMediaSourceDisplay;
	}
	if (str == QStringLiteral("Width")) {
		return ItemFieldsClass::Width;
	}
	if (str == QStringLiteral("Height")) {
		return ItemFieldsClass::Height;
	}
	if (str == QStringLiteral("ExtraIds")) {
		return ItemFieldsClass::ExtraIds;
	}
	if (str == QStringLiteral("LocalTrailerCount")) {
		return ItemFieldsClass::LocalTrailerCount;
	}
	if (str == QStringLiteral("IsHD")) {
		return ItemFieldsClass::IsHD;
	}
	if (str == QStringLiteral("SpecialFeatureCount")) {
		return ItemFieldsClass::SpecialFeatureCount;
	}
	
	return ItemFieldsClass::EnumNotSet;
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_ITEMFIELDS_H

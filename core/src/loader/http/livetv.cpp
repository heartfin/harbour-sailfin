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

#include <JellyfinQt/loader/http/livetv.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetChannelMappingOptionsLoader::GetChannelMappingOptionsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<ChannelMappingOptionsDto, GetChannelMappingOptionsParams>(apiClient) {}

QString GetChannelMappingOptionsLoader::path(const GetChannelMappingOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/ChannelMappingOptions");
}

QUrlQuery GetChannelMappingOptionsLoader::query(const GetChannelMappingOptionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.providerIdNull()) {
		result.addQueryItem("providerId", Support::toString<QString>(params.providerId()));
	}
	
	return result;
}

QByteArray GetChannelMappingOptionsLoader::body(const GetChannelMappingOptionsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetChannelMappingOptionsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

SetChannelMappingLoader::SetChannelMappingLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<TunerChannelMapping, SetChannelMappingParams>(apiClient) {}

QString SetChannelMappingLoader::path(const SetChannelMappingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/ChannelMappings");
}

QUrlQuery SetChannelMappingLoader::query(const SetChannelMappingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SetChannelMappingLoader::body(const SetChannelMappingParams &params) const {
	return Support::toString<QSharedPointer<SetChannelMappingDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SetChannelMappingLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetLiveTvChannelsLoader::GetLiveTvChannelsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetLiveTvChannelsParams>(apiClient) {}

QString GetLiveTvChannelsLoader::path(const GetLiveTvChannelsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Channels");
}

QUrlQuery GetLiveTvChannelsLoader::query(const GetLiveTvChannelsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.typeNull()) {
		result.addQueryItem("type", Support::toString<ChannelType>(params.type()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.isMovieNull()) {
		result.addQueryItem("isMovie", Support::toString<std::optional<bool>>(params.isMovie()));
	}
	if (!params.isSeriesNull()) {
		result.addQueryItem("isSeries", Support::toString<std::optional<bool>>(params.isSeries()));
	}
	if (!params.isNewsNull()) {
		result.addQueryItem("isNews", Support::toString<std::optional<bool>>(params.isNews()));
	}
	if (!params.isKidsNull()) {
		result.addQueryItem("isKids", Support::toString<std::optional<bool>>(params.isKids()));
	}
	if (!params.isSportsNull()) {
		result.addQueryItem("isSports", Support::toString<std::optional<bool>>(params.isSports()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.isFavoriteNull()) {
		result.addQueryItem("isFavorite", Support::toString<std::optional<bool>>(params.isFavorite()));
	}
	if (!params.isLikedNull()) {
		result.addQueryItem("isLiked", Support::toString<std::optional<bool>>(params.isLiked()));
	}
	if (!params.isDislikedNull()) {
		result.addQueryItem("isDisliked", Support::toString<std::optional<bool>>(params.isDisliked()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString<QList<ItemSortBy>>(params.sortBy()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString<SortOrder>(params.sortOrder()));
	}
	if (!params.enableFavoriteSortingNull()) {
		result.addQueryItem("enableFavoriteSorting", Support::toString<std::optional<bool>>(params.enableFavoriteSorting()));
	}
	if (!params.addCurrentProgramNull()) {
		result.addQueryItem("addCurrentProgram", Support::toString<std::optional<bool>>(params.addCurrentProgram()));
	}
	
	return result;
}

QByteArray GetLiveTvChannelsLoader::body(const GetLiveTvChannelsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetLiveTvChannelsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetChannelLoader::GetChannelLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDto, GetChannelParams>(apiClient) {}

QString GetChannelLoader::path(const GetChannelParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Channels/") + Support::toString< QString>(params.channelId()) ;
}

QUrlQuery GetChannelLoader::query(const GetChannelParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray GetChannelLoader::body(const GetChannelParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetChannelLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetGuideInfoLoader::GetGuideInfoLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<GuideInfo, GetGuideInfoParams>(apiClient) {}

QString GetGuideInfoLoader::path(const GetGuideInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/GuideInfo");
}

QUrlQuery GetGuideInfoLoader::query(const GetGuideInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetGuideInfoLoader::body(const GetGuideInfoParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetGuideInfoLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetLiveTvInfoLoader::GetLiveTvInfoLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<LiveTvInfo, GetLiveTvInfoParams>(apiClient) {}

QString GetLiveTvInfoLoader::path(const GetLiveTvInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Info");
}

QUrlQuery GetLiveTvInfoLoader::query(const GetLiveTvInfoParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetLiveTvInfoLoader::body(const GetLiveTvInfoParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetLiveTvInfoLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

AddListingProviderLoader::AddListingProviderLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<ListingsProviderInfo, AddListingProviderParams>(apiClient) {}

QString AddListingProviderLoader::path(const AddListingProviderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/ListingProviders");
}

QUrlQuery AddListingProviderLoader::query(const AddListingProviderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.pwNull()) {
		result.addQueryItem("pw", Support::toString<QString>(params.pw()));
	}
	if (!params.validateListingsNull()) {
		result.addQueryItem("validateListings", Support::toString<std::optional<bool>>(params.validateListings()));
	}
	if (!params.validateLoginNull()) {
		result.addQueryItem("validateLogin", Support::toString<std::optional<bool>>(params.validateLogin()));
	}
	
	return result;
}

QByteArray AddListingProviderLoader::body(const AddListingProviderParams &params) const {
	return Support::toString<QSharedPointer<ListingsProviderInfo>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation AddListingProviderLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

DeleteListingProviderLoader::DeleteListingProviderLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteListingProviderParams>(apiClient) {}

QString DeleteListingProviderLoader::path(const DeleteListingProviderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/ListingProviders");
}

QUrlQuery DeleteListingProviderLoader::query(const DeleteListingProviderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.jellyfinIdNull()) {
		result.addQueryItem("id", Support::toString<QString>(params.jellyfinId()));
	}
	
	return result;
}

QByteArray DeleteListingProviderLoader::body(const DeleteListingProviderParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteListingProviderLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

GetDefaultListingProviderLoader::GetDefaultListingProviderLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<ListingsProviderInfo, GetDefaultListingProviderParams>(apiClient) {}

QString GetDefaultListingProviderLoader::path(const GetDefaultListingProviderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/ListingProviders/Default");
}

QUrlQuery GetDefaultListingProviderLoader::query(const GetDefaultListingProviderParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetDefaultListingProviderLoader::body(const GetDefaultListingProviderParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetDefaultListingProviderLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetLineupsLoader::GetLineupsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<NameIdPair>, GetLineupsParams>(apiClient) {}

QString GetLineupsLoader::path(const GetLineupsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/ListingProviders/Lineups");
}

QUrlQuery GetLineupsLoader::query(const GetLineupsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.jellyfinIdNull()) {
		result.addQueryItem("id", Support::toString<QString>(params.jellyfinId()));
	}
	if (!params.typeNull()) {
		result.addQueryItem("type", Support::toString<QString>(params.type()));
	}
	if (!params.locationNull()) {
		result.addQueryItem("location", Support::toString<QString>(params.location()));
	}
	if (!params.countryNull()) {
		result.addQueryItem("country", Support::toString<QString>(params.country()));
	}
	
	return result;
}

QByteArray GetLineupsLoader::body(const GetLineupsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetLineupsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetSchedulesDirectCountriesLoader::GetSchedulesDirectCountriesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QString, GetSchedulesDirectCountriesParams>(apiClient) {}

QString GetSchedulesDirectCountriesLoader::path(const GetSchedulesDirectCountriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/ListingProviders/SchedulesDirect/Countries");
}

QUrlQuery GetSchedulesDirectCountriesLoader::query(const GetSchedulesDirectCountriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetSchedulesDirectCountriesLoader::body(const GetSchedulesDirectCountriesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSchedulesDirectCountriesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetLiveTvProgramsLoader::GetLiveTvProgramsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetLiveTvProgramsParams>(apiClient) {}

QString GetLiveTvProgramsLoader::path(const GetLiveTvProgramsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Programs");
}

QUrlQuery GetLiveTvProgramsLoader::query(const GetLiveTvProgramsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.channelIdsNull()) {
		result.addQueryItem("channelIds", Support::toString<QStringList>(params.channelIds()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.minStartDateNull()) {
		result.addQueryItem("minStartDate", Support::toString<QDateTime>(params.minStartDate()));
	}
	if (!params.hasAiredNull()) {
		result.addQueryItem("hasAired", Support::toString<std::optional<bool>>(params.hasAired()));
	}
	if (!params.isAiringNull()) {
		result.addQueryItem("isAiring", Support::toString<std::optional<bool>>(params.isAiring()));
	}
	if (!params.maxStartDateNull()) {
		result.addQueryItem("maxStartDate", Support::toString<QDateTime>(params.maxStartDate()));
	}
	if (!params.minEndDateNull()) {
		result.addQueryItem("minEndDate", Support::toString<QDateTime>(params.minEndDate()));
	}
	if (!params.maxEndDateNull()) {
		result.addQueryItem("maxEndDate", Support::toString<QDateTime>(params.maxEndDate()));
	}
	if (!params.isMovieNull()) {
		result.addQueryItem("isMovie", Support::toString<std::optional<bool>>(params.isMovie()));
	}
	if (!params.isSeriesNull()) {
		result.addQueryItem("isSeries", Support::toString<std::optional<bool>>(params.isSeries()));
	}
	if (!params.isNewsNull()) {
		result.addQueryItem("isNews", Support::toString<std::optional<bool>>(params.isNews()));
	}
	if (!params.isKidsNull()) {
		result.addQueryItem("isKids", Support::toString<std::optional<bool>>(params.isKids()));
	}
	if (!params.isSportsNull()) {
		result.addQueryItem("isSports", Support::toString<std::optional<bool>>(params.isSports()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString<QList<ItemSortBy>>(params.sortBy()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString<QList<SortOrder>>(params.sortOrder()));
	}
	if (!params.genresNull()) {
		result.addQueryItem("genres", Support::toString<QStringList>(params.genres()));
	}
	if (!params.genreIdsNull()) {
		result.addQueryItem("genreIds", Support::toString<QStringList>(params.genreIds()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	if (!params.seriesTimerIdNull()) {
		result.addQueryItem("seriesTimerId", Support::toString<QString>(params.seriesTimerId()));
	}
	if (!params.librarySeriesIdNull()) {
		result.addQueryItem("librarySeriesId", Support::toString<QString>(params.librarySeriesId()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString<std::optional<bool>>(params.enableTotalRecordCount()));
	}
	
	return result;
}

QByteArray GetLiveTvProgramsLoader::body(const GetLiveTvProgramsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetLiveTvProgramsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetProgramsLoader::GetProgramsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetProgramsParams>(apiClient) {}

QString GetProgramsLoader::path(const GetProgramsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Programs");
}

QUrlQuery GetProgramsLoader::query(const GetProgramsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetProgramsLoader::body(const GetProgramsParams &params) const {
	return Support::toString<QSharedPointer<GetProgramsDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation GetProgramsLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetProgramLoader::GetProgramLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDto, GetProgramParams>(apiClient) {}

QString GetProgramLoader::path(const GetProgramParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Programs/") + Support::toString< QString>(params.programId()) ;
}

QUrlQuery GetProgramLoader::query(const GetProgramParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray GetProgramLoader::body(const GetProgramParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetProgramLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetRecommendedProgramsLoader::GetRecommendedProgramsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetRecommendedProgramsParams>(apiClient) {}

QString GetRecommendedProgramsLoader::path(const GetRecommendedProgramsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Programs/Recommended");
}

QUrlQuery GetRecommendedProgramsLoader::query(const GetRecommendedProgramsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.isAiringNull()) {
		result.addQueryItem("isAiring", Support::toString<std::optional<bool>>(params.isAiring()));
	}
	if (!params.hasAiredNull()) {
		result.addQueryItem("hasAired", Support::toString<std::optional<bool>>(params.hasAired()));
	}
	if (!params.isSeriesNull()) {
		result.addQueryItem("isSeries", Support::toString<std::optional<bool>>(params.isSeries()));
	}
	if (!params.isMovieNull()) {
		result.addQueryItem("isMovie", Support::toString<std::optional<bool>>(params.isMovie()));
	}
	if (!params.isNewsNull()) {
		result.addQueryItem("isNews", Support::toString<std::optional<bool>>(params.isNews()));
	}
	if (!params.isKidsNull()) {
		result.addQueryItem("isKids", Support::toString<std::optional<bool>>(params.isKids()));
	}
	if (!params.isSportsNull()) {
		result.addQueryItem("isSports", Support::toString<std::optional<bool>>(params.isSports()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.genreIdsNull()) {
		result.addQueryItem("genreIds", Support::toString<QStringList>(params.genreIds()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString<std::optional<bool>>(params.enableTotalRecordCount()));
	}
	
	return result;
}

QByteArray GetRecommendedProgramsLoader::body(const GetRecommendedProgramsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRecommendedProgramsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetRecordingsLoader::GetRecordingsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetRecordingsParams>(apiClient) {}

QString GetRecordingsLoader::path(const GetRecordingsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Recordings");
}

QUrlQuery GetRecordingsLoader::query(const GetRecordingsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.channelIdNull()) {
		result.addQueryItem("channelId", Support::toString<QString>(params.channelId()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.statusNull()) {
		result.addQueryItem("status", Support::toString<RecordingStatus>(params.status()));
	}
	if (!params.isInProgressNull()) {
		result.addQueryItem("isInProgress", Support::toString<std::optional<bool>>(params.isInProgress()));
	}
	if (!params.seriesTimerIdNull()) {
		result.addQueryItem("seriesTimerId", Support::toString<QString>(params.seriesTimerId()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	if (!params.isMovieNull()) {
		result.addQueryItem("isMovie", Support::toString<std::optional<bool>>(params.isMovie()));
	}
	if (!params.isSeriesNull()) {
		result.addQueryItem("isSeries", Support::toString<std::optional<bool>>(params.isSeries()));
	}
	if (!params.isKidsNull()) {
		result.addQueryItem("isKids", Support::toString<std::optional<bool>>(params.isKids()));
	}
	if (!params.isSportsNull()) {
		result.addQueryItem("isSports", Support::toString<std::optional<bool>>(params.isSports()));
	}
	if (!params.isNewsNull()) {
		result.addQueryItem("isNews", Support::toString<std::optional<bool>>(params.isNews()));
	}
	if (!params.isLibraryItemNull()) {
		result.addQueryItem("isLibraryItem", Support::toString<std::optional<bool>>(params.isLibraryItem()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString<std::optional<bool>>(params.enableTotalRecordCount()));
	}
	
	return result;
}

QByteArray GetRecordingsLoader::body(const GetRecordingsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRecordingsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetRecordingLoader::GetRecordingLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDto, GetRecordingParams>(apiClient) {}

QString GetRecordingLoader::path(const GetRecordingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Recordings/") + Support::toString< QString>(params.recordingId()) ;
}

QUrlQuery GetRecordingLoader::query(const GetRecordingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray GetRecordingLoader::body(const GetRecordingParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRecordingLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DeleteRecordingLoader::DeleteRecordingLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteRecordingParams>(apiClient) {}

QString DeleteRecordingLoader::path(const DeleteRecordingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Recordings/") + Support::toString< QString>(params.recordingId()) ;
}

QUrlQuery DeleteRecordingLoader::query(const DeleteRecordingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DeleteRecordingLoader::body(const DeleteRecordingParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteRecordingLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

GetRecordingFoldersLoader::GetRecordingFoldersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetRecordingFoldersParams>(apiClient) {}

QString GetRecordingFoldersLoader::path(const GetRecordingFoldersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Recordings/Folders");
}

QUrlQuery GetRecordingFoldersLoader::query(const GetRecordingFoldersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray GetRecordingFoldersLoader::body(const GetRecordingFoldersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRecordingFoldersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetRecordingGroupsLoader::GetRecordingGroupsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetRecordingGroupsParams>(apiClient) {}

QString GetRecordingGroupsLoader::path(const GetRecordingGroupsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Recordings/Groups");
}

QUrlQuery GetRecordingGroupsLoader::query(const GetRecordingGroupsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	
	return result;
}

QByteArray GetRecordingGroupsLoader::body(const GetRecordingGroupsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRecordingGroupsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetRecordingsSeriesLoader::GetRecordingsSeriesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetRecordingsSeriesParams>(apiClient) {}

QString GetRecordingsSeriesLoader::path(const GetRecordingsSeriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Recordings/Series");
}

QUrlQuery GetRecordingsSeriesLoader::query(const GetRecordingsSeriesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.channelIdNull()) {
		result.addQueryItem("channelId", Support::toString<QString>(params.channelId()));
	}
	if (!params.userIdNull()) {
		result.addQueryItem("userId", Support::toString<QString>(params.userId()));
	}
	if (!params.groupIdNull()) {
		result.addQueryItem("groupId", Support::toString<QString>(params.groupId()));
	}
	if (!params.startIndexNull()) {
		result.addQueryItem("startIndex", Support::toString<std::optional<qint32>>(params.startIndex()));
	}
	if (!params.limitNull()) {
		result.addQueryItem("limit", Support::toString<std::optional<qint32>>(params.limit()));
	}
	if (!params.statusNull()) {
		result.addQueryItem("status", Support::toString<RecordingStatus>(params.status()));
	}
	if (!params.isInProgressNull()) {
		result.addQueryItem("isInProgress", Support::toString<std::optional<bool>>(params.isInProgress()));
	}
	if (!params.seriesTimerIdNull()) {
		result.addQueryItem("seriesTimerId", Support::toString<QString>(params.seriesTimerId()));
	}
	if (!params.enableImagesNull()) {
		result.addQueryItem("enableImages", Support::toString<std::optional<bool>>(params.enableImages()));
	}
	if (!params.imageTypeLimitNull()) {
		result.addQueryItem("imageTypeLimit", Support::toString<std::optional<qint32>>(params.imageTypeLimit()));
	}
	if (!params.enableImageTypesNull()) {
		result.addQueryItem("enableImageTypes", Support::toString<QList<ImageType>>(params.enableImageTypes()));
	}
	if (!params.fieldsNull()) {
		result.addQueryItem("fields", Support::toString<QList<ItemFields>>(params.fields()));
	}
	if (!params.enableUserDataNull()) {
		result.addQueryItem("enableUserData", Support::toString<std::optional<bool>>(params.enableUserData()));
	}
	if (!params.enableTotalRecordCountNull()) {
		result.addQueryItem("enableTotalRecordCount", Support::toString<std::optional<bool>>(params.enableTotalRecordCount()));
	}
	
	return result;
}

QByteArray GetRecordingsSeriesLoader::body(const GetRecordingsSeriesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetRecordingsSeriesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetSeriesTimersLoader::GetSeriesTimersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<SeriesTimerInfoDtoQueryResult, GetSeriesTimersParams>(apiClient) {}

QString GetSeriesTimersLoader::path(const GetSeriesTimersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/SeriesTimers");
}

QUrlQuery GetSeriesTimersLoader::query(const GetSeriesTimersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.sortByNull()) {
		result.addQueryItem("sortBy", Support::toString<QString>(params.sortBy()));
	}
	if (!params.sortOrderNull()) {
		result.addQueryItem("sortOrder", Support::toString<SortOrder>(params.sortOrder()));
	}
	
	return result;
}

QByteArray GetSeriesTimersLoader::body(const GetSeriesTimersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSeriesTimersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

CreateSeriesTimerLoader::CreateSeriesTimerLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, CreateSeriesTimerParams>(apiClient) {}

QString CreateSeriesTimerLoader::path(const CreateSeriesTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/SeriesTimers");
}

QUrlQuery CreateSeriesTimerLoader::query(const CreateSeriesTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray CreateSeriesTimerLoader::body(const CreateSeriesTimerParams &params) const {
	return Support::toString<QSharedPointer<SeriesTimerInfoDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation CreateSeriesTimerLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetSeriesTimerLoader::GetSeriesTimerLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<SeriesTimerInfoDto, GetSeriesTimerParams>(apiClient) {}

QString GetSeriesTimerLoader::path(const GetSeriesTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/SeriesTimers/") + Support::toString< QString>(params.timerId()) ;
}

QUrlQuery GetSeriesTimerLoader::query(const GetSeriesTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetSeriesTimerLoader::body(const GetSeriesTimerParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSeriesTimerLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

CancelSeriesTimerLoader::CancelSeriesTimerLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, CancelSeriesTimerParams>(apiClient) {}

QString CancelSeriesTimerLoader::path(const CancelSeriesTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/SeriesTimers/") + Support::toString< QString>(params.timerId()) ;
}

QUrlQuery CancelSeriesTimerLoader::query(const CancelSeriesTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray CancelSeriesTimerLoader::body(const CancelSeriesTimerParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation CancelSeriesTimerLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

UpdateSeriesTimerLoader::UpdateSeriesTimerLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateSeriesTimerParams>(apiClient) {}

QString UpdateSeriesTimerLoader::path(const UpdateSeriesTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/SeriesTimers/") + Support::toString< QString>(params.timerId()) ;
}

QUrlQuery UpdateSeriesTimerLoader::query(const UpdateSeriesTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdateSeriesTimerLoader::body(const UpdateSeriesTimerParams &params) const {
	return Support::toString<QSharedPointer<SeriesTimerInfoDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateSeriesTimerLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetTimersLoader::GetTimersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<TimerInfoDtoQueryResult, GetTimersParams>(apiClient) {}

QString GetTimersLoader::path(const GetTimersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Timers");
}

QUrlQuery GetTimersLoader::query(const GetTimersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.channelIdNull()) {
		result.addQueryItem("channelId", Support::toString<QString>(params.channelId()));
	}
	if (!params.seriesTimerIdNull()) {
		result.addQueryItem("seriesTimerId", Support::toString<QString>(params.seriesTimerId()));
	}
	if (!params.isActiveNull()) {
		result.addQueryItem("isActive", Support::toString<std::optional<bool>>(params.isActive()));
	}
	if (!params.isScheduledNull()) {
		result.addQueryItem("isScheduled", Support::toString<std::optional<bool>>(params.isScheduled()));
	}
	
	return result;
}

QByteArray GetTimersLoader::body(const GetTimersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetTimersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

CreateTimerLoader::CreateTimerLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, CreateTimerParams>(apiClient) {}

QString CreateTimerLoader::path(const CreateTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Timers");
}

QUrlQuery CreateTimerLoader::query(const CreateTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray CreateTimerLoader::body(const CreateTimerParams &params) const {
	return Support::toString<QSharedPointer<TimerInfoDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation CreateTimerLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetTimerLoader::GetTimerLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<TimerInfoDto, GetTimerParams>(apiClient) {}

QString GetTimerLoader::path(const GetTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Timers/") + Support::toString< QString>(params.timerId()) ;
}

QUrlQuery GetTimerLoader::query(const GetTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetTimerLoader::body(const GetTimerParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetTimerLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

CancelTimerLoader::CancelTimerLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, CancelTimerParams>(apiClient) {}

QString CancelTimerLoader::path(const CancelTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Timers/") + Support::toString< QString>(params.timerId()) ;
}

QUrlQuery CancelTimerLoader::query(const CancelTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray CancelTimerLoader::body(const CancelTimerParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation CancelTimerLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

UpdateTimerLoader::UpdateTimerLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateTimerParams>(apiClient) {}

QString UpdateTimerLoader::path(const UpdateTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Timers/") + Support::toString< QString>(params.timerId()) ;
}

QUrlQuery UpdateTimerLoader::query(const UpdateTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdateTimerLoader::body(const UpdateTimerParams &params) const {
	return Support::toString<QSharedPointer<TimerInfoDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateTimerLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetDefaultTimerLoader::GetDefaultTimerLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<SeriesTimerInfoDto, GetDefaultTimerParams>(apiClient) {}

QString GetDefaultTimerLoader::path(const GetDefaultTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Timers/Defaults");
}

QUrlQuery GetDefaultTimerLoader::query(const GetDefaultTimerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.programIdNull()) {
		result.addQueryItem("programId", Support::toString<QString>(params.programId()));
	}
	
	return result;
}

QByteArray GetDefaultTimerLoader::body(const GetDefaultTimerParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetDefaultTimerLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

AddTunerHostLoader::AddTunerHostLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<TunerHostInfo, AddTunerHostParams>(apiClient) {}

QString AddTunerHostLoader::path(const AddTunerHostParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/TunerHosts");
}

QUrlQuery AddTunerHostLoader::query(const AddTunerHostParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray AddTunerHostLoader::body(const AddTunerHostParams &params) const {
	return Support::toString<QSharedPointer<TunerHostInfo>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation AddTunerHostLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

DeleteTunerHostLoader::DeleteTunerHostLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteTunerHostParams>(apiClient) {}

QString DeleteTunerHostLoader::path(const DeleteTunerHostParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/TunerHosts");
}

QUrlQuery DeleteTunerHostLoader::query(const DeleteTunerHostParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.jellyfinIdNull()) {
		result.addQueryItem("id", Support::toString<QString>(params.jellyfinId()));
	}
	
	return result;
}

QByteArray DeleteTunerHostLoader::body(const DeleteTunerHostParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteTunerHostLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

GetTunerHostTypesLoader::GetTunerHostTypesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<NameIdPair>, GetTunerHostTypesParams>(apiClient) {}

QString GetTunerHostTypesLoader::path(const GetTunerHostTypesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/TunerHosts/Types");
}

QUrlQuery GetTunerHostTypesLoader::query(const GetTunerHostTypesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetTunerHostTypesLoader::body(const GetTunerHostTypesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetTunerHostTypesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

ResetTunerLoader::ResetTunerLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, ResetTunerParams>(apiClient) {}

QString ResetTunerLoader::path(const ResetTunerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Tuners/") + Support::toString< QString>(params.tunerId()) + QStringLiteral("/Reset");
}

QUrlQuery ResetTunerLoader::query(const ResetTunerParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray ResetTunerLoader::body(const ResetTunerParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation ResetTunerLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

DiscoverTunersLoader::DiscoverTunersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<TunerHostInfo>, DiscoverTunersParams>(apiClient) {}

QString DiscoverTunersLoader::path(const DiscoverTunersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Tuners/Discover");
}

QUrlQuery DiscoverTunersLoader::query(const DiscoverTunersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.newDevicesOnlyNull()) {
		result.addQueryItem("newDevicesOnly", Support::toString<std::optional<bool>>(params.newDevicesOnly()));
	}
	
	return result;
}

QByteArray DiscoverTunersLoader::body(const DiscoverTunersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DiscoverTunersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DiscvoverTunersLoader::DiscvoverTunersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<TunerHostInfo>, DiscvoverTunersParams>(apiClient) {}

QString DiscvoverTunersLoader::path(const DiscvoverTunersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/LiveTv/Tuners/Discvover");
}

QUrlQuery DiscvoverTunersLoader::query(const DiscvoverTunersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.newDevicesOnlyNull()) {
		result.addQueryItem("newDevicesOnly", Support::toString<std::optional<bool>>(params.newDevicesOnly()));
	}
	
	return result;
}

QByteArray DiscvoverTunersLoader::body(const DiscvoverTunersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DiscvoverTunersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin

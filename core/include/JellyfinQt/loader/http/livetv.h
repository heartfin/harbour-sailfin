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

#ifndef JELLYFIN_LOADER_HTTP_LIVETV_H
#define JELLYFIN_LOADER_HTTP_LIVETV_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/channelmappingoptionsdto.h"
#include "JellyfinQt/dto/tunerchannelmapping.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/guideinfo.h"
#include "JellyfinQt/dto/livetvinfo.h"
#include "JellyfinQt/dto/listingsproviderinfo.h"
#include "JellyfinQt/dto/listingsproviderinfo.h"
#include "JellyfinQt/dto/nameidpair.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/baseitemdtoqueryresult.h"
#include "JellyfinQt/dto/seriestimerinfodtoqueryresult.h"
#include "JellyfinQt/dto/seriestimerinfodto.h"
#include "JellyfinQt/dto/timerinfodtoqueryresult.h"
#include "JellyfinQt/dto/timerinfodto.h"
#include "JellyfinQt/dto/seriestimerinfodto.h"
#include "JellyfinQt/dto/tunerhostinfo.h"
#include "JellyfinQt/dto/nameidpair.h"
#include "JellyfinQt/dto/tunerhostinfo.h"
#include "JellyfinQt/dto/tunerhostinfo.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Get channel mapping options.
 */

class GetChannelMappingOptionsLoader : public Jellyfin::Support::HttpLoader<ChannelMappingOptionsDto, GetChannelMappingOptionsParams> {
public:
	explicit GetChannelMappingOptionsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetChannelMappingOptionsParams& parameters) const override;
	QUrlQuery query(const GetChannelMappingOptionsParams& parameters) const override;
	QByteArray body(const GetChannelMappingOptionsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Set channel mappings.
 */

class SetChannelMappingLoader : public Jellyfin::Support::HttpLoader<TunerChannelMapping, SetChannelMappingParams> {
public:
	explicit SetChannelMappingLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SetChannelMappingParams& parameters) const override;
	QUrlQuery query(const SetChannelMappingParams& parameters) const override;
	QByteArray body(const SetChannelMappingParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets available live tv channels.
 */

class GetLiveTvChannelsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetLiveTvChannelsParams> {
public:
	explicit GetLiveTvChannelsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetLiveTvChannelsParams& parameters) const override;
	QUrlQuery query(const GetLiveTvChannelsParams& parameters) const override;
	QByteArray body(const GetLiveTvChannelsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a live tv channel.
 */

class GetChannelLoader : public Jellyfin::Support::HttpLoader<BaseItemDto, GetChannelParams> {
public:
	explicit GetChannelLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetChannelParams& parameters) const override;
	QUrlQuery query(const GetChannelParams& parameters) const override;
	QByteArray body(const GetChannelParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get guid info.
 */

class GetGuideInfoLoader : public Jellyfin::Support::HttpLoader<GuideInfo, GetGuideInfoParams> {
public:
	explicit GetGuideInfoLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetGuideInfoParams& parameters) const override;
	QUrlQuery query(const GetGuideInfoParams& parameters) const override;
	QByteArray body(const GetGuideInfoParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets available live tv services.
 */

class GetLiveTvInfoLoader : public Jellyfin::Support::HttpLoader<LiveTvInfo, GetLiveTvInfoParams> {
public:
	explicit GetLiveTvInfoLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetLiveTvInfoParams& parameters) const override;
	QUrlQuery query(const GetLiveTvInfoParams& parameters) const override;
	QByteArray body(const GetLiveTvInfoParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Adds a listings provider.
 */

class AddListingProviderLoader : public Jellyfin::Support::HttpLoader<ListingsProviderInfo, AddListingProviderParams> {
public:
	explicit AddListingProviderLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const AddListingProviderParams& parameters) const override;
	QUrlQuery query(const AddListingProviderParams& parameters) const override;
	QByteArray body(const AddListingProviderParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets default listings provider info.
 */

class GetDefaultListingProviderLoader : public Jellyfin::Support::HttpLoader<ListingsProviderInfo, GetDefaultListingProviderParams> {
public:
	explicit GetDefaultListingProviderLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetDefaultListingProviderParams& parameters) const override;
	QUrlQuery query(const GetDefaultListingProviderParams& parameters) const override;
	QByteArray body(const GetDefaultListingProviderParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets available lineups.
 */

class GetLineupsLoader : public Jellyfin::Support::HttpLoader<QList<NameIdPair>, GetLineupsParams> {
public:
	explicit GetLineupsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetLineupsParams& parameters) const override;
	QUrlQuery query(const GetLineupsParams& parameters) const override;
	QByteArray body(const GetLineupsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets available countries.
 */

class GetSchedulesDirectCountriesLoader : public Jellyfin::Support::HttpLoader<QString, GetSchedulesDirectCountriesParams> {
public:
	explicit GetSchedulesDirectCountriesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSchedulesDirectCountriesParams& parameters) const override;
	QUrlQuery query(const GetSchedulesDirectCountriesParams& parameters) const override;
	QByteArray body(const GetSchedulesDirectCountriesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets available live tv epgs.
 */

class GetLiveTvProgramsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetLiveTvProgramsParams> {
public:
	explicit GetLiveTvProgramsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetLiveTvProgramsParams& parameters) const override;
	QUrlQuery query(const GetLiveTvProgramsParams& parameters) const override;
	QByteArray body(const GetLiveTvProgramsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets available live tv epgs.
 */

class GetProgramsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetProgramsParams> {
public:
	explicit GetProgramsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetProgramsParams& parameters) const override;
	QUrlQuery query(const GetProgramsParams& parameters) const override;
	QByteArray body(const GetProgramsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a live tv program.
 */

class GetProgramLoader : public Jellyfin::Support::HttpLoader<BaseItemDto, GetProgramParams> {
public:
	explicit GetProgramLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetProgramParams& parameters) const override;
	QUrlQuery query(const GetProgramParams& parameters) const override;
	QByteArray body(const GetProgramParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets recommended live tv epgs.
 */

class GetRecommendedProgramsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetRecommendedProgramsParams> {
public:
	explicit GetRecommendedProgramsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetRecommendedProgramsParams& parameters) const override;
	QUrlQuery query(const GetRecommendedProgramsParams& parameters) const override;
	QByteArray body(const GetRecommendedProgramsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets live tv recordings.
 */

class GetRecordingsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetRecordingsParams> {
public:
	explicit GetRecordingsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetRecordingsParams& parameters) const override;
	QUrlQuery query(const GetRecordingsParams& parameters) const override;
	QByteArray body(const GetRecordingsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a live tv recording.
 */

class GetRecordingLoader : public Jellyfin::Support::HttpLoader<BaseItemDto, GetRecordingParams> {
public:
	explicit GetRecordingLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetRecordingParams& parameters) const override;
	QUrlQuery query(const GetRecordingParams& parameters) const override;
	QByteArray body(const GetRecordingParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets recording folders.
 */

class GetRecordingFoldersLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetRecordingFoldersParams> {
public:
	explicit GetRecordingFoldersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetRecordingFoldersParams& parameters) const override;
	QUrlQuery query(const GetRecordingFoldersParams& parameters) const override;
	QByteArray body(const GetRecordingFoldersParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets live tv recording groups.
 */

class GetRecordingGroupsLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetRecordingGroupsParams> {
public:
	explicit GetRecordingGroupsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetRecordingGroupsParams& parameters) const override;
	QUrlQuery query(const GetRecordingGroupsParams& parameters) const override;
	QByteArray body(const GetRecordingGroupsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets live tv recording series.
 */

class GetRecordingsSeriesLoader : public Jellyfin::Support::HttpLoader<BaseItemDtoQueryResult, GetRecordingsSeriesParams> {
public:
	explicit GetRecordingsSeriesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetRecordingsSeriesParams& parameters) const override;
	QUrlQuery query(const GetRecordingsSeriesParams& parameters) const override;
	QByteArray body(const GetRecordingsSeriesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets live tv series timers.
 */

class GetSeriesTimersLoader : public Jellyfin::Support::HttpLoader<SeriesTimerInfoDtoQueryResult, GetSeriesTimersParams> {
public:
	explicit GetSeriesTimersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSeriesTimersParams& parameters) const override;
	QUrlQuery query(const GetSeriesTimersParams& parameters) const override;
	QByteArray body(const GetSeriesTimersParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a live tv series timer.
 */

class GetSeriesTimerLoader : public Jellyfin::Support::HttpLoader<SeriesTimerInfoDto, GetSeriesTimerParams> {
public:
	explicit GetSeriesTimerLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetSeriesTimerParams& parameters) const override;
	QUrlQuery query(const GetSeriesTimerParams& parameters) const override;
	QByteArray body(const GetSeriesTimerParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets the live tv timers.
 */

class GetTimersLoader : public Jellyfin::Support::HttpLoader<TimerInfoDtoQueryResult, GetTimersParams> {
public:
	explicit GetTimersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetTimersParams& parameters) const override;
	QUrlQuery query(const GetTimersParams& parameters) const override;
	QByteArray body(const GetTimersParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets a timer.
 */

class GetTimerLoader : public Jellyfin::Support::HttpLoader<TimerInfoDto, GetTimerParams> {
public:
	explicit GetTimerLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetTimerParams& parameters) const override;
	QUrlQuery query(const GetTimerParams& parameters) const override;
	QByteArray body(const GetTimerParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets the default values for a new timer.
 */

class GetDefaultTimerLoader : public Jellyfin::Support::HttpLoader<SeriesTimerInfoDto, GetDefaultTimerParams> {
public:
	explicit GetDefaultTimerLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetDefaultTimerParams& parameters) const override;
	QUrlQuery query(const GetDefaultTimerParams& parameters) const override;
	QByteArray body(const GetDefaultTimerParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Adds a tuner host.
 */

class AddTunerHostLoader : public Jellyfin::Support::HttpLoader<TunerHostInfo, AddTunerHostParams> {
public:
	explicit AddTunerHostLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const AddTunerHostParams& parameters) const override;
	QUrlQuery query(const AddTunerHostParams& parameters) const override;
	QByteArray body(const AddTunerHostParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Get tuner host types.
 */

class GetTunerHostTypesLoader : public Jellyfin::Support::HttpLoader<QList<NameIdPair>, GetTunerHostTypesParams> {
public:
	explicit GetTunerHostTypesLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetTunerHostTypesParams& parameters) const override;
	QUrlQuery query(const GetTunerHostTypesParams& parameters) const override;
	QByteArray body(const GetTunerHostTypesParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Discover tuners.
 */

class DiscoverTunersLoader : public Jellyfin::Support::HttpLoader<QList<TunerHostInfo>, DiscoverTunersParams> {
public:
	explicit DiscoverTunersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DiscoverTunersParams& parameters) const override;
	QUrlQuery query(const DiscoverTunersParams& parameters) const override;
	QByteArray body(const DiscoverTunersParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Discover tuners.
 */

class DiscvoverTunersLoader : public Jellyfin::Support::HttpLoader<QList<TunerHostInfo>, DiscvoverTunersParams> {
public:
	explicit DiscvoverTunersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DiscvoverTunersParams& parameters) const override;
	QUrlQuery query(const DiscvoverTunersParams& parameters) const override;
	QByteArray body(const DiscvoverTunersParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_LIVETV_H

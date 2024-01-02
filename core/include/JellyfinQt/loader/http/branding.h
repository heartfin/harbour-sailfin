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

#ifndef JELLYFIN_LOADER_HTTP_BRANDING_H
#define JELLYFIN_LOADER_HTTP_BRANDING_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/brandingoptions.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Gets branding configuration.
 */

class GetBrandingOptionsLoader : public Jellyfin::Support::HttpLoader<BrandingOptions, GetBrandingOptionsParams> {
public:
	explicit GetBrandingOptionsLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetBrandingOptionsParams& parameters) const override;
	QUrlQuery query(const GetBrandingOptionsParams& parameters) const override;
	QByteArray body(const GetBrandingOptionsParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets branding css.
 */

class GetBrandingCssLoader : public Jellyfin::Support::HttpLoader<void, GetBrandingCssParams> {
public:
	explicit GetBrandingCssLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetBrandingCssParams& parameters) const override;
	QUrlQuery query(const GetBrandingCssParams& parameters) const override;
	QByteArray body(const GetBrandingCssParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets branding css.
 */

class GetBrandingCss_2Loader : public Jellyfin::Support::HttpLoader<void, GetBrandingCss_2Params> {
public:
	explicit GetBrandingCss_2Loader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetBrandingCss_2Params& parameters) const override;
	QUrlQuery query(const GetBrandingCss_2Params& parameters) const override;
	QByteArray body(const GetBrandingCss_2Params& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_BRANDING_H

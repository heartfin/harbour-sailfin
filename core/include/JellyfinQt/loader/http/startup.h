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

#ifndef JELLYFIN_LOADER_HTTP_STARTUP_H
#define JELLYFIN_LOADER_HTTP_STARTUP_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/startupconfigurationdto.h"
#include "JellyfinQt/dto/startupuserdto.h"
#include "JellyfinQt/dto/startupuserdto.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Completes the startup wizard.
 */

class CompleteWizardLoader : public Jellyfin::Support::HttpLoader<void, CompleteWizardParams> {
public:
	explicit CompleteWizardLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const CompleteWizardParams& parameters) const override;
	QUrlQuery query(const CompleteWizardParams& parameters) const override;
	QByteArray body(const CompleteWizardParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets the initial startup wizard configuration.
 */

class GetStartupConfigurationLoader : public Jellyfin::Support::HttpLoader<StartupConfigurationDto, GetStartupConfigurationParams> {
public:
	explicit GetStartupConfigurationLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetStartupConfigurationParams& parameters) const override;
	QUrlQuery query(const GetStartupConfigurationParams& parameters) const override;
	QByteArray body(const GetStartupConfigurationParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Sets the initial startup wizard configuration.
 */

class UpdateInitialConfigurationLoader : public Jellyfin::Support::HttpLoader<void, UpdateInitialConfigurationParams> {
public:
	explicit UpdateInitialConfigurationLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdateInitialConfigurationParams& parameters) const override;
	QUrlQuery query(const UpdateInitialConfigurationParams& parameters) const override;
	QByteArray body(const UpdateInitialConfigurationParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets the first user.
 */

class GetFirstUser_2Loader : public Jellyfin::Support::HttpLoader<StartupUserDto, GetFirstUser_2Params> {
public:
	explicit GetFirstUser_2Loader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetFirstUser_2Params& parameters) const override;
	QUrlQuery query(const GetFirstUser_2Params& parameters) const override;
	QByteArray body(const GetFirstUser_2Params& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Sets remote access and UPnP.
 */

class SetRemoteAccessLoader : public Jellyfin::Support::HttpLoader<void, SetRemoteAccessParams> {
public:
	explicit SetRemoteAccessLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SetRemoteAccessParams& parameters) const override;
	QUrlQuery query(const SetRemoteAccessParams& parameters) const override;
	QByteArray body(const SetRemoteAccessParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Gets the first user.
 */

class GetFirstUserLoader : public Jellyfin::Support::HttpLoader<StartupUserDto, GetFirstUserParams> {
public:
	explicit GetFirstUserLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetFirstUserParams& parameters) const override;
	QUrlQuery query(const GetFirstUserParams& parameters) const override;
	QByteArray body(const GetFirstUserParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Sets the user name and password.
 */

class UpdateStartupUserLoader : public Jellyfin::Support::HttpLoader<void, UpdateStartupUserParams> {
public:
	explicit UpdateStartupUserLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdateStartupUserParams& parameters) const override;
	QUrlQuery query(const UpdateStartupUserParams& parameters) const override;
	QByteArray body(const UpdateStartupUserParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_STARTUP_H

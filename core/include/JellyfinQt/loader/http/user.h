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

#ifndef JELLYFIN_LOADER_HTTP_USER_H
#define JELLYFIN_LOADER_HTTP_USER_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/userdto.h"
#include "JellyfinQt/dto/userdto.h"
#include "JellyfinQt/dto/authenticationresult.h"
#include "JellyfinQt/dto/authenticationresult.h"
#include "JellyfinQt/dto/authenticationresult.h"
#include "JellyfinQt/dto/forgotpasswordresult.h"
#include "JellyfinQt/dto/pinredeemresult.h"
#include "JellyfinQt/dto/userdto.h"
#include "JellyfinQt/dto/userdto.h"
#include "JellyfinQt/dto/userdto.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Gets a list of users.
 */

class GetUsersLoader : public Jellyfin::Support::HttpLoader<QList<UserDto>, GetUsersParams> {
public:
	explicit GetUsersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetUsersParams& parameters) const override;
	QUrlQuery query(const GetUsersParams& parameters) const override;
};
/**
 * @brief Gets a user by Id.
 */

class GetUserByIdLoader : public Jellyfin::Support::HttpLoader<UserDto, GetUserByIdParams> {
public:
	explicit GetUserByIdLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetUserByIdParams& parameters) const override;
	QUrlQuery query(const GetUserByIdParams& parameters) const override;
};
/**
 * @brief Authenticates a user.
 */

class AuthenticateUserLoader : public Jellyfin::Support::HttpLoader<AuthenticationResult, AuthenticateUserParams> {
public:
	explicit AuthenticateUserLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const AuthenticateUserParams& parameters) const override;
	QUrlQuery query(const AuthenticateUserParams& parameters) const override;
};
/**
 * @brief Authenticates a user by name.
 */

class AuthenticateUserByNameLoader : public Jellyfin::Support::HttpLoader<AuthenticationResult, AuthenticateUserByNameParams> {
public:
	explicit AuthenticateUserByNameLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const AuthenticateUserByNameParams& parameters) const override;
	QUrlQuery query(const AuthenticateUserByNameParams& parameters) const override;
};
/**
 * @brief Authenticates a user with quick connect.
 */

class AuthenticateWithQuickConnectLoader : public Jellyfin::Support::HttpLoader<AuthenticationResult, AuthenticateWithQuickConnectParams> {
public:
	explicit AuthenticateWithQuickConnectLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const AuthenticateWithQuickConnectParams& parameters) const override;
	QUrlQuery query(const AuthenticateWithQuickConnectParams& parameters) const override;
};
/**
 * @brief Initiates the forgot password process for a local user.
 */

class ForgotPasswordLoader : public Jellyfin::Support::HttpLoader<ForgotPasswordResult, ForgotPasswordParams> {
public:
	explicit ForgotPasswordLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const ForgotPasswordParams& parameters) const override;
	QUrlQuery query(const ForgotPasswordParams& parameters) const override;
};
/**
 * @brief Redeems a forgot password pin.
 */

class ForgotPasswordPinLoader : public Jellyfin::Support::HttpLoader<PinRedeemResult, ForgotPasswordPinParams> {
public:
	explicit ForgotPasswordPinLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const ForgotPasswordPinParams& parameters) const override;
	QUrlQuery query(const ForgotPasswordPinParams& parameters) const override;
};
/**
 * @brief Gets the user based on auth token.
 */

class GetCurrentUserLoader : public Jellyfin::Support::HttpLoader<UserDto, GetCurrentUserParams> {
public:
	explicit GetCurrentUserLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetCurrentUserParams& parameters) const override;
	QUrlQuery query(const GetCurrentUserParams& parameters) const override;
};
/**
 * @brief Creates a user.
 */

class CreateUserByNameLoader : public Jellyfin::Support::HttpLoader<UserDto, CreateUserByNameParams> {
public:
	explicit CreateUserByNameLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const CreateUserByNameParams& parameters) const override;
	QUrlQuery query(const CreateUserByNameParams& parameters) const override;
};
/**
 * @brief Gets a list of publicly visible users for display on a login screen.
 */

class GetPublicUsersLoader : public Jellyfin::Support::HttpLoader<QList<UserDto>, GetPublicUsersParams> {
public:
	explicit GetPublicUsersLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetPublicUsersParams& parameters) const override;
	QUrlQuery query(const GetPublicUsersParams& parameters) const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_USER_H

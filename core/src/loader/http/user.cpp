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

#include <JellyfinQt/loader/http/user.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetUsersLoader::GetUsersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<UserDto>, GetUsersParams>(apiClient) {}

QString GetUsersLoader::path(const GetUsersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users");
}

QUrlQuery GetUsersLoader::query(const GetUsersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.isHiddenNull()) {
		result.addQueryItem("isHidden", Support::toString<std::optional<bool>>(params.isHidden()));
	}
	if (!params.isDisabledNull()) {
		result.addQueryItem("isDisabled", Support::toString<std::optional<bool>>(params.isDisabled()));
	}
	
	return result;
}

GetUserByIdLoader::GetUserByIdLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<UserDto, GetUserByIdParams>(apiClient) {}

QString GetUserByIdLoader::path(const GetUserByIdParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) ;
}

QUrlQuery GetUserByIdLoader::query(const GetUserByIdParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

AuthenticateUserLoader::AuthenticateUserLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<AuthenticationResult, AuthenticateUserParams>(apiClient) {}

QString AuthenticateUserLoader::path(const AuthenticateUserParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Authenticate");
}

QUrlQuery AuthenticateUserLoader::query(const AuthenticateUserParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("pw", Support::toString<QString>(params.pw()));

	// Optional parameters
	if (!params.passwordNull()) {
		result.addQueryItem("password", Support::toString<QString>(params.password()));
	}
	
	return result;
}

AuthenticateUserByNameLoader::AuthenticateUserByNameLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<AuthenticationResult, AuthenticateUserByNameParams>(apiClient) {}

QString AuthenticateUserByNameLoader::path(const AuthenticateUserByNameParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/AuthenticateByName");
}

QUrlQuery AuthenticateUserByNameLoader::query(const AuthenticateUserByNameParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

AuthenticateWithQuickConnectLoader::AuthenticateWithQuickConnectLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<AuthenticationResult, AuthenticateWithQuickConnectParams>(apiClient) {}

QString AuthenticateWithQuickConnectLoader::path(const AuthenticateWithQuickConnectParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/AuthenticateWithQuickConnect");
}

QUrlQuery AuthenticateWithQuickConnectLoader::query(const AuthenticateWithQuickConnectParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

ForgotPasswordLoader::ForgotPasswordLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<ForgotPasswordResult, ForgotPasswordParams>(apiClient) {}

QString ForgotPasswordLoader::path(const ForgotPasswordParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/ForgotPassword");
}

QUrlQuery ForgotPasswordLoader::query(const ForgotPasswordParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

ForgotPasswordPinLoader::ForgotPasswordPinLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<PinRedeemResult, ForgotPasswordPinParams>(apiClient) {}

QString ForgotPasswordPinLoader::path(const ForgotPasswordPinParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/ForgotPassword/Pin");
}

QUrlQuery ForgotPasswordPinLoader::query(const ForgotPasswordPinParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetCurrentUserLoader::GetCurrentUserLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<UserDto, GetCurrentUserParams>(apiClient) {}

QString GetCurrentUserLoader::path(const GetCurrentUserParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/Me");
}

QUrlQuery GetCurrentUserLoader::query(const GetCurrentUserParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

CreateUserByNameLoader::CreateUserByNameLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<UserDto, CreateUserByNameParams>(apiClient) {}

QString CreateUserByNameLoader::path(const CreateUserByNameParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/New");
}

QUrlQuery CreateUserByNameLoader::query(const CreateUserByNameParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

GetPublicUsersLoader::GetPublicUsersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<UserDto>, GetPublicUsersParams>(apiClient) {}

QString GetPublicUsersLoader::path(const GetPublicUsersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/Public");
}

QUrlQuery GetPublicUsersLoader::query(const GetPublicUsersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}


} // NS HTTP
} // NS Loader
} // NS Jellyfin

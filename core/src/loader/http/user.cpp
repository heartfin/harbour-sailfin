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

QByteArray GetUsersLoader::body(const GetUsersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetUsersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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

QByteArray GetUserByIdLoader::body(const GetUserByIdParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetUserByIdLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DeleteUserLoader::DeleteUserLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteUserParams>(apiClient) {}

QString DeleteUserLoader::path(const DeleteUserParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) ;
}

QUrlQuery DeleteUserLoader::query(const DeleteUserParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DeleteUserLoader::body(const DeleteUserParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteUserLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

UpdateUserLoader::UpdateUserLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateUserParams>(apiClient) {}

QString UpdateUserLoader::path(const UpdateUserParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) ;
}

QUrlQuery UpdateUserLoader::query(const UpdateUserParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdateUserLoader::body(const UpdateUserParams &params) const {
	return Support::toString<QSharedPointer<UserDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateUserLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

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

QByteArray AuthenticateUserLoader::body(const AuthenticateUserParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation AuthenticateUserLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

UpdateUserConfigurationLoader::UpdateUserConfigurationLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateUserConfigurationParams>(apiClient) {}

QString UpdateUserConfigurationLoader::path(const UpdateUserConfigurationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Configuration");
}

QUrlQuery UpdateUserConfigurationLoader::query(const UpdateUserConfigurationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdateUserConfigurationLoader::body(const UpdateUserConfigurationParams &params) const {
	return Support::toString<QSharedPointer<UserConfiguration>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateUserConfigurationLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

UpdateUserEasyPasswordLoader::UpdateUserEasyPasswordLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateUserEasyPasswordParams>(apiClient) {}

QString UpdateUserEasyPasswordLoader::path(const UpdateUserEasyPasswordParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/EasyPassword");
}

QUrlQuery UpdateUserEasyPasswordLoader::query(const UpdateUserEasyPasswordParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdateUserEasyPasswordLoader::body(const UpdateUserEasyPasswordParams &params) const {
	return Support::toString<QSharedPointer<UpdateUserEasyPassword>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateUserEasyPasswordLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

UpdateUserPasswordLoader::UpdateUserPasswordLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateUserPasswordParams>(apiClient) {}

QString UpdateUserPasswordLoader::path(const UpdateUserPasswordParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Password");
}

QUrlQuery UpdateUserPasswordLoader::query(const UpdateUserPasswordParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdateUserPasswordLoader::body(const UpdateUserPasswordParams &params) const {
	return Support::toString<QSharedPointer<UpdateUserPassword>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateUserPasswordLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

UpdateUserPolicyLoader::UpdateUserPolicyLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateUserPolicyParams>(apiClient) {}

QString UpdateUserPolicyLoader::path(const UpdateUserPolicyParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Users/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Policy");
}

QUrlQuery UpdateUserPolicyLoader::query(const UpdateUserPolicyParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdateUserPolicyLoader::body(const UpdateUserPolicyParams &params) const {
	return Support::toString<QSharedPointer<UserPolicy>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateUserPolicyLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

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

QByteArray AuthenticateUserByNameLoader::body(const AuthenticateUserByNameParams &params) const {
	return Support::toString<QSharedPointer<AuthenticateUserByName>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation AuthenticateUserByNameLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

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

QByteArray AuthenticateWithQuickConnectLoader::body(const AuthenticateWithQuickConnectParams &params) const {
	return Support::toString<QSharedPointer<QuickConnectDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation AuthenticateWithQuickConnectLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

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

QByteArray ForgotPasswordLoader::body(const ForgotPasswordParams &params) const {
	return Support::toString<QSharedPointer<ForgotPasswordDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation ForgotPasswordLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

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

QByteArray ForgotPasswordPinLoader::body(const ForgotPasswordPinParams &params) const {
	return Support::toString<QString>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation ForgotPasswordPinLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

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

QByteArray GetCurrentUserLoader::body(const GetCurrentUserParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetCurrentUserLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

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

QByteArray CreateUserByNameLoader::body(const CreateUserByNameParams &params) const {
	return Support::toString<QSharedPointer<CreateUserByName>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation CreateUserByNameLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

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

QByteArray GetPublicUsersLoader::body(const GetPublicUsersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetPublicUsersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin

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

#include <JellyfinQt/loader/http/dlna.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetProfileInfosLoader::GetProfileInfosLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<DeviceProfileInfo>, GetProfileInfosParams>(apiClient) {}

QString GetProfileInfosLoader::path(const GetProfileInfosParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Dlna/ProfileInfos");
}

QUrlQuery GetProfileInfosLoader::query(const GetProfileInfosParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetProfileInfosLoader::body(const GetProfileInfosParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetProfileInfosLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

CreateProfileLoader::CreateProfileLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, CreateProfileParams>(apiClient) {}

QString CreateProfileLoader::path(const CreateProfileParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Dlna/Profiles");
}

QUrlQuery CreateProfileLoader::query(const CreateProfileParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray CreateProfileLoader::body(const CreateProfileParams &params) const {
	return Support::toString<QSharedPointer<DeviceProfile>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation CreateProfileLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetProfileLoader::GetProfileLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<DeviceProfile, GetProfileParams>(apiClient) {}

QString GetProfileLoader::path(const GetProfileParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Dlna/Profiles/") + Support::toString< QString>(params.profileId()) ;
}

QUrlQuery GetProfileLoader::query(const GetProfileParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetProfileLoader::body(const GetProfileParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetProfileLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

DeleteProfileLoader::DeleteProfileLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DeleteProfileParams>(apiClient) {}

QString DeleteProfileLoader::path(const DeleteProfileParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Dlna/Profiles/") + Support::toString< QString>(params.profileId()) ;
}

QUrlQuery DeleteProfileLoader::query(const DeleteProfileParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray DeleteProfileLoader::body(const DeleteProfileParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DeleteProfileLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

UpdateProfileLoader::UpdateProfileLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, UpdateProfileParams>(apiClient) {}

QString UpdateProfileLoader::path(const UpdateProfileParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Dlna/Profiles/") + Support::toString< QString>(params.profileId()) ;
}

QUrlQuery UpdateProfileLoader::query(const UpdateProfileParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray UpdateProfileLoader::body(const UpdateProfileParams &params) const {
	return Support::toString<QSharedPointer<DeviceProfile>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation UpdateProfileLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetDefaultProfileLoader::GetDefaultProfileLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<DeviceProfile, GetDefaultProfileParams>(apiClient) {}

QString GetDefaultProfileLoader::path(const GetDefaultProfileParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Dlna/Profiles/Default");
}

QUrlQuery GetDefaultProfileLoader::query(const GetDefaultProfileParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetDefaultProfileLoader::body(const GetDefaultProfileParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetDefaultProfileLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin

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

#include <JellyfinQt/loader/http/notifications.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetNotificationsLoader::GetNotificationsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<NotificationResultDto, GetNotificationsParams>(apiClient) {}

QString GetNotificationsLoader::path(const GetNotificationsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Notifications/") + Support::toString< QString>(params.userId()) ;
}

QUrlQuery GetNotificationsLoader::query(const GetNotificationsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetNotificationsLoader::body(const GetNotificationsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetNotificationsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

SetReadLoader::SetReadLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SetReadParams>(apiClient) {}

QString SetReadLoader::path(const SetReadParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Notifications/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Read");
}

QUrlQuery SetReadLoader::query(const SetReadParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SetReadLoader::body(const SetReadParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SetReadLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetNotificationsSummaryLoader::GetNotificationsSummaryLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<NotificationsSummaryDto, GetNotificationsSummaryParams>(apiClient) {}

QString GetNotificationsSummaryLoader::path(const GetNotificationsSummaryParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Notifications/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Summary");
}

QUrlQuery GetNotificationsSummaryLoader::query(const GetNotificationsSummaryParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetNotificationsSummaryLoader::body(const GetNotificationsSummaryParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetNotificationsSummaryLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

SetUnreadLoader::SetUnreadLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SetUnreadParams>(apiClient) {}

QString SetUnreadLoader::path(const SetUnreadParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Notifications/") + Support::toString< QString>(params.userId()) + QStringLiteral("/Unread");
}

QUrlQuery SetUnreadLoader::query(const SetUnreadParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SetUnreadLoader::body(const SetUnreadParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SetUnreadLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

CreateAdminNotificationLoader::CreateAdminNotificationLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, CreateAdminNotificationParams>(apiClient) {}

QString CreateAdminNotificationLoader::path(const CreateAdminNotificationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Notifications/Admin");
}

QUrlQuery CreateAdminNotificationLoader::query(const CreateAdminNotificationParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.urlNull()) {
		result.addQueryItem("url", Support::toString<QString>(params.url()));
	}
	if (!params.levelNull()) {
		result.addQueryItem("level", Support::toString<NotificationLevel>(params.level()));
	}
	if (!params.nameNull()) {
		result.addQueryItem("name", Support::toString<QString>(params.name()));
	}
	if (!params.descriptionNull()) {
		result.addQueryItem("description", Support::toString<QString>(params.description()));
	}
	
	return result;
}

QByteArray CreateAdminNotificationLoader::body(const CreateAdminNotificationParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation CreateAdminNotificationLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

GetNotificationServicesLoader::GetNotificationServicesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<NameIdPair>, GetNotificationServicesParams>(apiClient) {}

QString GetNotificationServicesLoader::path(const GetNotificationServicesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Notifications/Services");
}

QUrlQuery GetNotificationServicesLoader::query(const GetNotificationServicesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetNotificationServicesLoader::body(const GetNotificationServicesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetNotificationServicesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetNotificationTypesLoader::GetNotificationTypesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<NotificationTypeInfo>, GetNotificationTypesParams>(apiClient) {}

QString GetNotificationTypesLoader::path(const GetNotificationTypesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Notifications/Types");
}

QUrlQuery GetNotificationTypesLoader::query(const GetNotificationTypesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetNotificationTypesLoader::body(const GetNotificationTypesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetNotificationTypesLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin

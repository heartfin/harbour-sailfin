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

#include <JellyfinQt/loader/http/session.h>

namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

GetPasswordResetProvidersLoader::GetPasswordResetProvidersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<NameIdPair>, GetPasswordResetProvidersParams>(apiClient) {}

QString GetPasswordResetProvidersLoader::path(const GetPasswordResetProvidersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Auth/PasswordResetProviders");
}

QUrlQuery GetPasswordResetProvidersLoader::query(const GetPasswordResetProvidersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetPasswordResetProvidersLoader::body(const GetPasswordResetProvidersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetPasswordResetProvidersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetAuthProvidersLoader::GetAuthProvidersLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<NameIdPair>, GetAuthProvidersParams>(apiClient) {}

QString GetAuthProvidersLoader::path(const GetAuthProvidersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Auth/Providers");
}

QUrlQuery GetAuthProvidersLoader::query(const GetAuthProvidersParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray GetAuthProvidersLoader::body(const GetAuthProvidersParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetAuthProvidersLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

GetSessionsLoader::GetSessionsLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<QList<SessionInfo>, GetSessionsParams>(apiClient) {}

QString GetSessionsLoader::path(const GetSessionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions");
}

QUrlQuery GetSessionsLoader::query(const GetSessionsParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.controllableByUserIdNull()) {
		result.addQueryItem("controllableByUserId", Support::toString<QString>(params.controllableByUserId()));
	}
	if (!params.deviceIdNull()) {
		result.addQueryItem("deviceId", Support::toString<QString>(params.deviceId()));
	}
	if (!params.activeWithinSecondsNull()) {
		result.addQueryItem("activeWithinSeconds", Support::toString<std::optional<qint32>>(params.activeWithinSeconds()));
	}
	
	return result;
}

QByteArray GetSessionsLoader::body(const GetSessionsParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation GetSessionsLoader::operation() const {
	// HTTP method Get
	return QNetworkAccessManager::GetOperation;

}

SendFullGeneralCommandLoader::SendFullGeneralCommandLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SendFullGeneralCommandParams>(apiClient) {}

QString SendFullGeneralCommandLoader::path(const SendFullGeneralCommandParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/") + Support::toString< QString>(params.sessionId()) + QStringLiteral("/Command");
}

QUrlQuery SendFullGeneralCommandLoader::query(const SendFullGeneralCommandParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SendFullGeneralCommandLoader::body(const SendFullGeneralCommandParams &params) const {
	return Support::toString<QSharedPointer<GeneralCommand>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation SendFullGeneralCommandLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SendGeneralCommandLoader::SendGeneralCommandLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SendGeneralCommandParams>(apiClient) {}

QString SendGeneralCommandLoader::path(const SendGeneralCommandParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/") + Support::toString< QString>(params.sessionId()) + QStringLiteral("/Command/") + Support::toString< GeneralCommandType>(params.command()) ;
}

QUrlQuery SendGeneralCommandLoader::query(const SendGeneralCommandParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SendGeneralCommandLoader::body(const SendGeneralCommandParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SendGeneralCommandLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SendMessageCommandLoader::SendMessageCommandLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SendMessageCommandParams>(apiClient) {}

QString SendMessageCommandLoader::path(const SendMessageCommandParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/") + Support::toString< QString>(params.sessionId()) + QStringLiteral("/Message");
}

QUrlQuery SendMessageCommandLoader::query(const SendMessageCommandParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("text", Support::toString<QString>(params.text()));

	// Optional parameters
	if (!params.headerNull()) {
		result.addQueryItem("header", Support::toString<QString>(params.header()));
	}
	if (!params.timeoutMsNull()) {
		result.addQueryItem("timeoutMs", Support::toString<std::optional<qint64>>(params.timeoutMs()));
	}
	
	return result;
}

QByteArray SendMessageCommandLoader::body(const SendMessageCommandParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SendMessageCommandLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

PlayLoader::PlayLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, PlayParams>(apiClient) {}

QString PlayLoader::path(const PlayParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/") + Support::toString< QString>(params.sessionId()) + QStringLiteral("/Playing");
}

QUrlQuery PlayLoader::query(const PlayParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("playCommand", Support::toString<PlayCommand>(params.playCommand()));
	result.addQueryItem("itemIds", Support::toString<QStringList>(params.itemIds()));

	// Optional parameters
	if (!params.startPositionTicksNull()) {
		result.addQueryItem("startPositionTicks", Support::toString<std::optional<qint64>>(params.startPositionTicks()));
	}
	
	return result;
}

QByteArray PlayLoader::body(const PlayParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation PlayLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SendPlaystateCommandLoader::SendPlaystateCommandLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SendPlaystateCommandParams>(apiClient) {}

QString SendPlaystateCommandLoader::path(const SendPlaystateCommandParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/") + Support::toString< QString>(params.sessionId()) + QStringLiteral("/Playing/") + Support::toString< PlaystateCommand>(params.command()) ;
}

QUrlQuery SendPlaystateCommandLoader::query(const SendPlaystateCommandParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.seekPositionTicksNull()) {
		result.addQueryItem("seekPositionTicks", Support::toString<std::optional<qint64>>(params.seekPositionTicks()));
	}
	if (!params.controllingUserIdNull()) {
		result.addQueryItem("controllingUserId", Support::toString<QString>(params.controllingUserId()));
	}
	
	return result;
}

QByteArray SendPlaystateCommandLoader::body(const SendPlaystateCommandParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SendPlaystateCommandLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

SendSystemCommandLoader::SendSystemCommandLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, SendSystemCommandParams>(apiClient) {}

QString SendSystemCommandLoader::path(const SendSystemCommandParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/") + Support::toString< QString>(params.sessionId()) + QStringLiteral("/System/") + Support::toString< GeneralCommandType>(params.command()) ;
}

QUrlQuery SendSystemCommandLoader::query(const SendSystemCommandParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray SendSystemCommandLoader::body(const SendSystemCommandParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation SendSystemCommandLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

AddUserToSessionLoader::AddUserToSessionLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, AddUserToSessionParams>(apiClient) {}

QString AddUserToSessionLoader::path(const AddUserToSessionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/") + Support::toString< QString>(params.sessionId()) + QStringLiteral("/User/") + Support::toString< QString>(params.userId()) ;
}

QUrlQuery AddUserToSessionLoader::query(const AddUserToSessionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray AddUserToSessionLoader::body(const AddUserToSessionParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation AddUserToSessionLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

RemoveUserFromSessionLoader::RemoveUserFromSessionLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, RemoveUserFromSessionParams>(apiClient) {}

QString RemoveUserFromSessionLoader::path(const RemoveUserFromSessionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/") + Support::toString< QString>(params.sessionId()) + QStringLiteral("/User/") + Support::toString< QString>(params.userId()) ;
}

QUrlQuery RemoveUserFromSessionLoader::query(const RemoveUserFromSessionParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray RemoveUserFromSessionLoader::body(const RemoveUserFromSessionParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation RemoveUserFromSessionLoader::operation() const {
	// HTTP method Delete
	return QNetworkAccessManager::DeleteOperation;

}

DisplayContentLoader::DisplayContentLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, DisplayContentParams>(apiClient) {}

QString DisplayContentLoader::path(const DisplayContentParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/") + Support::toString< QString>(params.sessionId()) + QStringLiteral("/Viewing");
}

QUrlQuery DisplayContentLoader::query(const DisplayContentParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("itemType", Support::toString<QString>(params.itemType()));
	result.addQueryItem("itemId", Support::toString<QString>(params.itemId()));
	result.addQueryItem("itemName", Support::toString<QString>(params.itemName()));

	// Optional parameters
	
	return result;
}

QByteArray DisplayContentLoader::body(const DisplayContentParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation DisplayContentLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

PostCapabilitiesLoader::PostCapabilitiesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, PostCapabilitiesParams>(apiClient) {}

QString PostCapabilitiesLoader::path(const PostCapabilitiesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/Capabilities");
}

QUrlQuery PostCapabilitiesLoader::query(const PostCapabilitiesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.jellyfinIdNull()) {
		result.addQueryItem("id", Support::toString<QString>(params.jellyfinId()));
	}
	if (!params.playableMediaTypesNull()) {
		result.addQueryItem("playableMediaTypes", Support::toString<QStringList>(params.playableMediaTypes()));
	}
	if (!params.supportedCommandsNull()) {
		result.addQueryItem("supportedCommands", Support::toString<QList<GeneralCommandType>>(params.supportedCommands()));
	}
	if (!params.supportsMediaControlNull()) {
		result.addQueryItem("supportsMediaControl", Support::toString<std::optional<bool>>(params.supportsMediaControl()));
	}
	if (!params.supportsSyncNull()) {
		result.addQueryItem("supportsSync", Support::toString<std::optional<bool>>(params.supportsSync()));
	}
	if (!params.supportsPersistentIdentifierNull()) {
		result.addQueryItem("supportsPersistentIdentifier", Support::toString<std::optional<bool>>(params.supportsPersistentIdentifier()));
	}
	
	return result;
}

QByteArray PostCapabilitiesLoader::body(const PostCapabilitiesParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation PostCapabilitiesLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

PostFullCapabilitiesLoader::PostFullCapabilitiesLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, PostFullCapabilitiesParams>(apiClient) {}

QString PostFullCapabilitiesLoader::path(const PostFullCapabilitiesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/Capabilities/Full");
}

QUrlQuery PostFullCapabilitiesLoader::query(const PostFullCapabilitiesParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	if (!params.jellyfinIdNull()) {
		result.addQueryItem("id", Support::toString<QString>(params.jellyfinId()));
	}
	
	return result;
}

QByteArray PostFullCapabilitiesLoader::body(const PostFullCapabilitiesParams &params) const {
	return Support::toString<QSharedPointer<ClientCapabilitiesDto>>(params.body()).toUtf8();
}

QNetworkAccessManager::Operation PostFullCapabilitiesLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

ReportSessionEndedLoader::ReportSessionEndedLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, ReportSessionEndedParams>(apiClient) {}

QString ReportSessionEndedLoader::path(const ReportSessionEndedParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/Logout");
}

QUrlQuery ReportSessionEndedLoader::query(const ReportSessionEndedParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;

	// Optional parameters
	
	return result;
}

QByteArray ReportSessionEndedLoader::body(const ReportSessionEndedParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation ReportSessionEndedLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}

ReportViewingLoader::ReportViewingLoader(ApiClient *apiClient)
	: Jellyfin::Support::HttpLoader<void, ReportViewingParams>(apiClient) {}

QString ReportViewingLoader::path(const ReportViewingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings
	
	return QStringLiteral("/Sessions/Viewing");
}

QUrlQuery ReportViewingLoader::query(const ReportViewingParams &params) const {
	Q_UNUSED(params) // Might be overzealous, but I don't like theses kind of warnings

	QUrlQuery result;
	result.addQueryItem("itemId", Support::toString<QString>(params.itemId()));

	// Optional parameters
	if (!params.sessionIdNull()) {
		result.addQueryItem("sessionId", Support::toString<QString>(params.sessionId()));
	}
	
	return result;
}

QByteArray ReportViewingLoader::body(const ReportViewingParams &params) const {
	return QByteArray();
}

QNetworkAccessManager::Operation ReportViewingLoader::operation() const {
	// HTTP method Post
	return QNetworkAccessManager::PostOperation;

}


} // NS HTTP
} // NS Loader
} // NS Jellyfin

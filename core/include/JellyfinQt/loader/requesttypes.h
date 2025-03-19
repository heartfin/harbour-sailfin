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

#ifndef JELLYFIN_LOADER_REQUESTTYPES_H
#define JELLYFIN_LOADER_REQUESTTYPES_H

#include <QByteArray>
#include <QDateTime>
#include <QString>
#include <QVariant>
#include <QList>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/addvirtualfolderdto.h"
#include "JellyfinQt/dto/albuminforemotesearchquery.h"
#include "JellyfinQt/dto/artistinforemotesearchquery.h"
#include "JellyfinQt/dto/authenticateuserbyname.h"
#include "JellyfinQt/dto/baseitemdto.h"
#include "JellyfinQt/dto/baseitemkind.h"
#include "JellyfinQt/dto/bookinforemotesearchquery.h"
#include "JellyfinQt/dto/boxsetinforemotesearchquery.h"
#include "JellyfinQt/dto/bufferrequestdto.h"
#include "JellyfinQt/dto/channeltype.h"
#include "JellyfinQt/dto/clientcapabilitiesdto.h"
#include "JellyfinQt/dto/collectiontype.h"
#include "JellyfinQt/dto/collectiontypeoptions.h"
#include "JellyfinQt/dto/createplaylistdto.h"
#include "JellyfinQt/dto/createuserbyname.h"
#include "JellyfinQt/dto/deviceoptionsdto.h"
#include "JellyfinQt/dto/displaypreferencesdto.h"
#include "JellyfinQt/dto/encodingcontext.h"
#include "JellyfinQt/dto/forgotpassworddto.h"
#include "JellyfinQt/dto/forgotpasswordpindto.h"
#include "JellyfinQt/dto/generalcommand.h"
#include "JellyfinQt/dto/generalcommandtype.h"
#include "JellyfinQt/dto/getprogramsdto.h"
#include "JellyfinQt/dto/ignorewaitrequestdto.h"
#include "JellyfinQt/dto/imageformat.h"
#include "JellyfinQt/dto/imagetype.h"
#include "JellyfinQt/dto/itemfields.h"
#include "JellyfinQt/dto/itemfilter.h"
#include "JellyfinQt/dto/itemsortby.h"
#include "JellyfinQt/dto/joingrouprequestdto.h"
#include "JellyfinQt/dto/listingsproviderinfo.h"
#include "JellyfinQt/dto/locationtype.h"
#include "JellyfinQt/dto/mediapathdto.h"
#include "JellyfinQt/dto/mediasegmenttype.h"
#include "JellyfinQt/dto/mediastreamprotocol.h"
#include "JellyfinQt/dto/mediatype.h"
#include "JellyfinQt/dto/mediaupdateinfodto.h"
#include "JellyfinQt/dto/messagecommand.h"
#include "JellyfinQt/dto/metadatarefreshmode.h"
#include "JellyfinQt/dto/moveplaylistitemrequestdto.h"
#include "JellyfinQt/dto/movieinforemotesearchquery.h"
#include "JellyfinQt/dto/musicvideoinforemotesearchquery.h"
#include "JellyfinQt/dto/newgrouprequestdto.h"
#include "JellyfinQt/dto/nextitemrequestdto.h"
#include "JellyfinQt/dto/openlivestreamdto.h"
#include "JellyfinQt/dto/personlookupinforemotesearchquery.h"
#include "JellyfinQt/dto/pingrequestdto.h"
#include "JellyfinQt/dto/playcommand.h"
#include "JellyfinQt/dto/playmethod.h"
#include "JellyfinQt/dto/playrequestdto.h"
#include "JellyfinQt/dto/playbackinfodto.h"
#include "JellyfinQt/dto/playbackprogressinfo.h"
#include "JellyfinQt/dto/playbackstartinfo.h"
#include "JellyfinQt/dto/playbackstopinfo.h"
#include "JellyfinQt/dto/playstatecommand.h"
#include "JellyfinQt/dto/previousitemrequestdto.h"
#include "JellyfinQt/dto/queuerequestdto.h"
#include "JellyfinQt/dto/quickconnectdto.h"
#include "JellyfinQt/dto/readyrequestdto.h"
#include "JellyfinQt/dto/recordingstatus.h"
#include "JellyfinQt/dto/remotesearchresult.h"
#include "JellyfinQt/dto/removefromplaylistrequestdto.h"
#include "JellyfinQt/dto/repeatmode.h"
#include "JellyfinQt/dto/repositoryinfo.h"
#include "JellyfinQt/dto/seekrequestdto.h"
#include "JellyfinQt/dto/seriesinforemotesearchquery.h"
#include "JellyfinQt/dto/seriesstatus.h"
#include "JellyfinQt/dto/seriestimerinfodto.h"
#include "JellyfinQt/dto/serverconfiguration.h"
#include "JellyfinQt/dto/setchannelmappingdto.h"
#include "JellyfinQt/dto/setplaylistitemrequestdto.h"
#include "JellyfinQt/dto/setrepeatmoderequestdto.h"
#include "JellyfinQt/dto/setshufflemoderequestdto.h"
#include "JellyfinQt/dto/sortorder.h"
#include "JellyfinQt/dto/startupconfigurationdto.h"
#include "JellyfinQt/dto/startupremoteaccessdto.h"
#include "JellyfinQt/dto/startupuserdto.h"
#include "JellyfinQt/dto/subtitledeliverymethod.h"
#include "JellyfinQt/dto/tasktriggerinfo.h"
#include "JellyfinQt/dto/timerinfodto.h"
#include "JellyfinQt/dto/trailerinforemotesearchquery.h"
#include "JellyfinQt/dto/tunerhostinfo.h"
#include "JellyfinQt/dto/updatelibraryoptionsdto.h"
#include "JellyfinQt/dto/updatemediapathrequestdto.h"
#include "JellyfinQt/dto/updateplaylistdto.h"
#include "JellyfinQt/dto/updateplaylistuserdto.h"
#include "JellyfinQt/dto/updateuseritemdatadto.h"
#include "JellyfinQt/dto/updateuserpassword.h"
#include "JellyfinQt/dto/uploadsubtitledto.h"
#include "JellyfinQt/dto/userconfiguration.h"
#include "JellyfinQt/dto/userdto.h"
#include "JellyfinQt/dto/userpolicy.h"
#include "JellyfinQt/dto/validatepathdto.h"
#include "JellyfinQt/dto/videotype.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {

using namespace Jellyfin::DTO;
class AddItemToPlaylistParams {
public:

	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
	/**
	 * @brief Item id, comma delimited.	
	 */
	const QStringList &ids() const;
	void setIds(QStringList newIds);
	bool idsNull() const;
	void setIdsNull();
	
	
	/**
	 * @brief The userId.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_playlistId;
	
	// Required query parameters

	// Optional query parameters
	QStringList m_ids;
	QString m_userId;


};

class AddListingProviderParams {
public:

	/**
	 * @brief Password.	
	 */
	const QString &pw() const;
	void setPw(QString newPw);
	bool pwNull() const;
	void setPwNull();
	
	
	/**
	 * @brief Validate listings.	
	 */
	const bool &validateListings() const;
	void setValidateListings(bool newValidateListings);
	bool validateListingsNull() const;
	void setValidateListingsNull();
	
	
	/**
	 * @brief Validate login.	
	 */
	const bool &validateLogin() const;
	void setValidateLogin(bool newValidateLogin);
	bool validateLoginNull() const;
	void setValidateLoginNull();
	
	
	/**
	 * @brief New listings info.	
	 */
	const QSharedPointer<ListingsProviderInfo> &body() const;
	void setBody(QSharedPointer<ListingsProviderInfo> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_pw;
	std::optional<bool> m_validateListings = std::nullopt;
	std::optional<bool> m_validateLogin = std::nullopt;

	// Body parameters
	QSharedPointer<ListingsProviderInfo> m_body;

};

class AddMediaPathParams {
public:

	/**
	 * @brief Whether to refresh the library.	
	 */
	const bool &refreshLibrary() const;
	void setRefreshLibrary(bool newRefreshLibrary);
	bool refreshLibraryNull() const;
	void setRefreshLibraryNull();
	
	
	/**
	 * @brief The media path dto.	
	 */
	const QSharedPointer<MediaPathDto> &body() const;
	void setBody(QSharedPointer<MediaPathDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_refreshLibrary = std::nullopt;

	// Body parameters
	QSharedPointer<MediaPathDto> m_body;

};

class AddToCollectionParams {
public:

	/**
	 * @brief The collection id.	
	 */
	const QString &collectionId() const;
	void setCollectionId(QString newCollectionId);

	
	/**
	 * @brief Item ids, comma delimited.	
	 */
	const QStringList &ids() const;
	void setIds(QStringList newIds);

	
private:
	// Required path parameters
	QString m_collectionId;
	
	// Required query parameters
	QStringList m_ids;

	// Optional query parameters


};

class AddTunerHostParams {
public:

	/**
	 * @brief New tuner host.	
	 */
	const QSharedPointer<TunerHostInfo> &body() const;
	void setBody(QSharedPointer<TunerHostInfo> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<TunerHostInfo> m_body;

};

class AddUserToSessionParams {
public:

	/**
	 * @brief The session id.	
	 */
	const QString &sessionId() const;
	void setSessionId(QString newSessionId);

	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);

	
private:
	// Required path parameters
	QString m_sessionId;
	QString m_userId;
	
	// Required query parameters

	// Optional query parameters


};

class AddVirtualFolderParams {
public:

	/**
	 * @brief The type of the collection.	
	 */
	const CollectionTypeOptions &collectionType() const;
	void setCollectionType(CollectionTypeOptions newCollectionType);
	bool collectionTypeNull() const;
	void setCollectionTypeNull();
	
	
	/**
	 * @brief The name of the virtual folder.	
	 */
	const QString &name() const;
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();
	
	
	/**
	 * @brief The paths of the virtual folder.	
	 */
	const QStringList &paths() const;
	void setPaths(QStringList newPaths);
	bool pathsNull() const;
	void setPathsNull();
	
	
	/**
	 * @brief Whether to refresh the library.	
	 */
	const bool &refreshLibrary() const;
	void setRefreshLibrary(bool newRefreshLibrary);
	bool refreshLibraryNull() const;
	void setRefreshLibraryNull();
	
	
	/**
	 * @brief The library options.	
	 */
	const QSharedPointer<AddVirtualFolderDto> &body() const;
	void setBody(QSharedPointer<AddVirtualFolderDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	CollectionTypeOptions m_collectionType;
	QString m_name;
	QStringList m_paths;
	std::optional<bool> m_refreshLibrary = std::nullopt;

	// Body parameters
	QSharedPointer<AddVirtualFolderDto> m_body;

};

class ApplySearchCriteriaParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Whether or not to replace all images. Default: True.	
	 */
	const bool &replaceAllImages() const;
	void setReplaceAllImages(bool newReplaceAllImages);
	bool replaceAllImagesNull() const;
	void setReplaceAllImagesNull();
	
	
	/**
	 * @brief The remote search result.	
	 */
	const QSharedPointer<RemoteSearchResult> &body() const;
	void setBody(QSharedPointer<RemoteSearchResult> newBody);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_replaceAllImages = std::nullopt;

	// Body parameters
	QSharedPointer<RemoteSearchResult> m_body;

};

class AuthenticateUserByNameParams {
public:

	/**
	 * @brief The M:Jellyfin.Api.Controllers.UserController.AuthenticateUserByName(Jellyfin.Api.Models.UserDtos.AuthenticateUserByName) request.	
	 */
	const QSharedPointer<AuthenticateUserByName> &body() const;
	void setBody(QSharedPointer<AuthenticateUserByName> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<AuthenticateUserByName> m_body;

};

class AuthenticateWithQuickConnectParams {
public:

	/**
	 * @brief The Jellyfin.Api.Models.UserDtos.QuickConnectDto request.	
	 */
	const QSharedPointer<QuickConnectDto> &body() const;
	void setBody(QSharedPointer<QuickConnectDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<QuickConnectDto> m_body;

};

class AuthorizeQuickConnectParams {
public:

	/**
	 * @brief Quick connect code to authorize.	
	 */
	const QString &code() const;
	void setCode(QString newCode);

	
	/**
	 * @brief The user the authorize. Access to the requested user is required.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_code;

	// Optional query parameters
	QString m_userId;


};

class CancelPackageInstallationParams {
public:

	/**
	 * @brief Installation Id.	
	 */
	const QString &packageId() const;
	void setPackageId(QString newPackageId);

	
private:
	// Required path parameters
	QString m_packageId;
	
	// Required query parameters

	// Optional query parameters


};

class CancelSeriesTimerParams {
public:

	/**
	 * @brief Timer id.	
	 */
	const QString &timerId() const;
	void setTimerId(QString newTimerId);

	
private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters

	// Optional query parameters


};

class CancelTimerParams {
public:

	/**
	 * @brief Timer id.	
	 */
	const QString &timerId() const;
	void setTimerId(QString newTimerId);

	
private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters

	// Optional query parameters


};

class CloseLiveStreamParams {
public:

	/**
	 * @brief The livestream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);

	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_liveStreamId;

	// Optional query parameters


};

class CompleteWizardParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class CreateCollectionParams {
public:

	/**
	 * @brief Item Ids to add to the collection.	
	 */
	const QStringList &ids() const;
	void setIds(QStringList newIds);
	bool idsNull() const;
	void setIdsNull();
	
	
	/**
	 * @brief Whether or not to lock the new collection.	
	 */
	const bool &isLocked() const;
	void setIsLocked(bool newIsLocked);
	bool isLockedNull() const;
	void setIsLockedNull();
	
	
	/**
	 * @brief The name of the collection.	
	 */
	const QString &name() const;
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();
	
	
	/**
	 * @brief Optional. Create the collection within a specific folder.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QStringList m_ids;
	std::optional<bool> m_isLocked = std::nullopt;
	QString m_name;
	QString m_parentId;


};

class CreateKeyParams {
public:

	/**
	 * @brief Name of the app using the authentication key.	
	 */
	const QString &app() const;
	void setApp(QString newApp);

	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_app;

	// Optional query parameters


};

class CreatePlaylistParams {
public:

	/**
	 * @brief The item ids.	
	 */
	const QStringList &ids() const;
	void setIds(QStringList newIds);
	bool idsNull() const;
	void setIdsNull();
	
	
	/**
	 * @brief The media type.	
	 */
	const MediaType &mediaType() const;
	void setMediaType(MediaType newMediaType);
	bool mediaTypeNull() const;
	void setMediaTypeNull();
	
	
	/**
	 * @brief The playlist name.	
	 */
	const QString &name() const;
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();
	
	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief The create playlist payload.	
	 */
	const QSharedPointer<CreatePlaylistDto> &body() const;
	void setBody(QSharedPointer<CreatePlaylistDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QStringList m_ids;
	MediaType m_mediaType;
	QString m_name;
	QString m_userId;

	// Body parameters
	QSharedPointer<CreatePlaylistDto> m_body;

};

class CreateSeriesTimerParams {
public:

	/**
	 * @brief New series timer info.	
	 */
	const QSharedPointer<SeriesTimerInfoDto> &body() const;
	void setBody(QSharedPointer<SeriesTimerInfoDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<SeriesTimerInfoDto> m_body;

};

class CreateTimerParams {
public:

	/**
	 * @brief New timer info.	
	 */
	const QSharedPointer<TimerInfoDto> &body() const;
	void setBody(QSharedPointer<TimerInfoDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<TimerInfoDto> m_body;

};

class CreateUserByNameParams {
public:

	/**
	 * @brief The create user by name request body.	
	 */
	const QSharedPointer<CreateUserByName> &body() const;
	void setBody(QSharedPointer<CreateUserByName> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<CreateUserByName> m_body;

};

class DeleteAlternateSourcesParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class DeleteCustomSplashscreenParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class DeleteDeviceParams {
public:

	/**
	 * @brief Device Id.	
	 */
	const QString &jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);

	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_jellyfinId;

	// Optional query parameters


};

class DeleteItemParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class DeleteItemImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<qint32> m_imageIndex = std::nullopt;


};

class DeleteItemImageByIndexParams {
public:

	/**
	 * @brief The image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class DeleteItemsParams {
public:

	/**
	 * @brief The item ids.	
	 */
	const QStringList &ids() const;
	void setIds(QStringList newIds);
	bool idsNull() const;
	void setIdsNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QStringList m_ids;


};

class DeleteListingProviderParams {
public:

	/**
	 * @brief Listing provider id.	
	 */
	const QString &jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_jellyfinId;


};

class DeleteLyricsParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class DeleteRecordingParams {
public:

	/**
	 * @brief Recording id.	
	 */
	const QString &recordingId() const;
	void setRecordingId(QString newRecordingId);

	
private:
	// Required path parameters
	QString m_recordingId;
	
	// Required query parameters

	// Optional query parameters


};

class DeleteSubtitleParams {
public:

	/**
	 * @brief The index of the subtitle file.	
	 */
	const qint32 &index() const;
	void setIndex(qint32 newIndex);

	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	qint32 m_index;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class DeleteTunerHostParams {
public:

	/**
	 * @brief Tuner host id.	
	 */
	const QString &jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_jellyfinId;


};

class DeleteUserParams {
public:

	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);

	
private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters

	// Optional query parameters


};

class DeleteUserImageParams {
public:

	/**
	 * @brief User Id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class DeleteUserItemRatingParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class DisablePluginParams {
public:

	/**
	 * @brief Plugin id.	
	 */
	const QString &pluginId() const;
	void setPluginId(QString newPluginId);

	
	/**
	 * @brief Plugin version.	
	 */
	const QString &version() const;
	void setVersion(QString newVersion);

	
private:
	// Required path parameters
	QString m_pluginId;
	QString m_version;
	
	// Required query parameters

	// Optional query parameters


};

class DiscoverTunersParams {
public:

	/**
	 * @brief Only discover new tuners.	
	 */
	const bool &newDevicesOnly() const;
	void setNewDevicesOnly(bool newNewDevicesOnly);
	bool newDevicesOnlyNull() const;
	void setNewDevicesOnlyNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_newDevicesOnly = std::nullopt;


};

class DiscvoverTunersParams {
public:

	/**
	 * @brief Only discover new tuners.	
	 */
	const bool &newDevicesOnly() const;
	void setNewDevicesOnly(bool newNewDevicesOnly);
	bool newDevicesOnlyNull() const;
	void setNewDevicesOnlyNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_newDevicesOnly = std::nullopt;


};

class DisplayContentParams {
public:

	/**
	 * @brief The session Id.	
	 */
	const QString &sessionId() const;
	void setSessionId(QString newSessionId);

	
	/**
	 * @brief The Id of the item.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The name of the item.	
	 */
	const QString &itemName() const;
	void setItemName(QString newItemName);

	
	/**
	 * @brief The type of item to browse to.	
	 */
	const BaseItemKind &itemType() const;
	void setItemType(BaseItemKind newItemType);

	
private:
	// Required path parameters
	QString m_sessionId;
	
	// Required query parameters
	QString m_itemId;
	QString m_itemName;
	BaseItemKind m_itemType;

	// Optional query parameters


};

class DownloadRemoteImageParams {
public:

	/**
	 * @brief Item Id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The image type.	
	 */
	const ImageType &type() const;
	void setType(ImageType newType);

	
	/**
	 * @brief The image url.	
	 */
	const QString &imageUrl() const;
	void setImageUrl(QString newImageUrl);
	bool imageUrlNull() const;
	void setImageUrlNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	ImageType m_type;

	// Optional query parameters
	QString m_imageUrl;


};

class DownloadRemoteLyricsParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The lyric id.	
	 */
	const QString &lyricId() const;
	void setLyricId(QString newLyricId);

	
private:
	// Required path parameters
	QString m_itemId;
	QString m_lyricId;
	
	// Required query parameters

	// Optional query parameters


};

class DownloadRemoteSubtitlesParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The subtitle id.	
	 */
	const QString &subtitleId() const;
	void setSubtitleId(QString newSubtitleId);

	
private:
	// Required path parameters
	QString m_itemId;
	QString m_subtitleId;
	
	// Required query parameters

	// Optional query parameters


};

class EnablePluginParams {
public:

	/**
	 * @brief Plugin id.	
	 */
	const QString &pluginId() const;
	void setPluginId(QString newPluginId);

	
	/**
	 * @brief Plugin version.	
	 */
	const QString &version() const;
	void setVersion(QString newVersion);

	
private:
	// Required path parameters
	QString m_pluginId;
	QString m_version;
	
	// Required query parameters

	// Optional query parameters


};

class ForgotPasswordParams {
public:

	/**
	 * @brief The forgot password request containing the entered username.	
	 */
	const QSharedPointer<ForgotPasswordDto> &body() const;
	void setBody(QSharedPointer<ForgotPasswordDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<ForgotPasswordDto> m_body;

};

class ForgotPasswordPinParams {
public:

	/**
	 * @brief The forgot password pin request containing the entered pin.	
	 */
	const QSharedPointer<ForgotPasswordPinDto> &body() const;
	void setBody(QSharedPointer<ForgotPasswordPinDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<ForgotPasswordPinDto> m_body;

};

class GetAdditionalPartParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetAlbumArtistsParams {
public:

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional, include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional, include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered out based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &excludeItemTypes() const;
	void setExcludeItemTypes(QList<BaseItemKind> newExcludeItemTypes);
	bool excludeItemTypesNull() const;
	void setExcludeItemTypesNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. Specify additional filters to apply.	
	 */
	const QList<ItemFilter> &filters() const;
	void setFilters(QList<ItemFilter> newFilters);
	bool filtersNull() const;
	void setFiltersNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on genre id. This allows multiple, pipe delimited.	
	 */
	const QStringList &genreIds() const;
	void setGenreIds(QStringList newGenreIds);
	bool genreIdsNull() const;
	void setGenreIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on genre. This allows multiple, pipe delimited.	
	 */
	const QStringList &genres() const;
	void setGenres(QStringList newGenres);
	bool genresNull() const;
	void setGenresNull();
	
	
	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	const bool &isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	bool isFavoriteNull() const;
	void setIsFavoriteNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional filter by MediaType. Allows multiple, comma delimited.	
	 */
	const QList<MediaType> &mediaTypes() const;
	void setMediaTypes(QList<MediaType> newMediaTypes);
	bool mediaTypesNull() const;
	void setMediaTypesNull();
	
	
	/**
	 * @brief Optional filter by minimum community rating.	
	 */
	const double &minCommunityRating() const;
	void setMinCommunityRating(double newMinCommunityRating);
	bool minCommunityRatingNull() const;
	void setMinCommunityRatingNull();
	
	
	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	const QString &nameLessThan() const;
	void setNameLessThan(QString newNameLessThan);
	bool nameLessThanNull() const;
	void setNameLessThanNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	const QString &nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith);
	bool nameStartsWithNull() const;
	void setNameStartsWithNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	const QString &nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater);
	bool nameStartsWithOrGreaterNull() const;
	void setNameStartsWithOrGreaterNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on OfficialRating. This allows multiple, pipe delimited.	
	 */
	const QStringList &officialRatings() const;
	void setOfficialRatings(QStringList newOfficialRatings);
	bool officialRatingsNull() const;
	void setOfficialRatingsNull();
	
	
	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person.	
	 */
	const QString &person() const;
	void setPerson(QString newPerson);
	bool personNull() const;
	void setPersonNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person ids.	
	 */
	const QStringList &personIds() const;
	void setPersonIds(QStringList newPersonIds);
	bool personIdsNull() const;
	void setPersonIdsNull();
	
	
	/**
	 * @brief Optional. If specified, along with Person, results will be filtered to include only those containing the specified person and PersonType. Allows multiple, comma-delimited.	
	 */
	const QStringList &personTypes() const;
	void setPersonTypes(QStringList newPersonTypes);
	bool personTypesNull() const;
	void setPersonTypesNull();
	
	
	/**
	 * @brief Optional. Search term.	
	 */
	const QString &searchTerm() const;
	void setSearchTerm(QString newSearchTerm);
	bool searchTermNull() const;
	void setSearchTermNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Sort Order - Ascending,Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on studio id. This allows multiple, pipe delimited.	
	 */
	const QStringList &studioIds() const;
	void setStudioIds(QStringList newStudioIds);
	bool studioIdsNull() const;
	void setStudioIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on studio. This allows multiple, pipe delimited.	
	 */
	const QStringList &studios() const;
	void setStudios(QStringList newStudios);
	bool studiosNull() const;
	void setStudiosNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on tag. This allows multiple, pipe delimited.	
	 */
	const QStringList &tags() const;
	void setTags(QStringList newTags);
	bool tagsNull() const;
	void setTagsNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on production year. This allows multiple, comma delimited.	
	 */
	const QList<qint32> &years() const;
	void setYears(QList<qint32> newYears);
	bool yearsNull() const;
	void setYearsNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<BaseItemKind> m_excludeItemTypes;
	QList<ItemFields> m_fields;
	QList<ItemFilter> m_filters;
	QStringList m_genreIds;
	QStringList m_genres;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<BaseItemKind> m_includeItemTypes;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QList<MediaType> m_mediaTypes;
	std::optional<double> m_minCommunityRating = std::nullopt;
	QString m_nameLessThan;
	QString m_nameStartsWith;
	QString m_nameStartsWithOrGreater;
	QStringList m_officialRatings;
	QString m_parentId;
	QString m_person;
	QStringList m_personIds;
	QStringList m_personTypes;
	QString m_searchTerm;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	std::optional<qint32> m_startIndex = std::nullopt;
	QStringList m_studioIds;
	QStringList m_studios;
	QStringList m_tags;
	QString m_userId;
	QList<qint32> m_years;


};

class GetAllChannelFeaturesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetAncestorsParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetArtistByNameParams {
public:

	/**
	 * @brief Studio name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetArtistImageParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Artist name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetArtistsParams {
public:

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional, include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional, include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered out based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &excludeItemTypes() const;
	void setExcludeItemTypes(QList<BaseItemKind> newExcludeItemTypes);
	bool excludeItemTypesNull() const;
	void setExcludeItemTypesNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. Specify additional filters to apply.	
	 */
	const QList<ItemFilter> &filters() const;
	void setFilters(QList<ItemFilter> newFilters);
	bool filtersNull() const;
	void setFiltersNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on genre id. This allows multiple, pipe delimited.	
	 */
	const QStringList &genreIds() const;
	void setGenreIds(QStringList newGenreIds);
	bool genreIdsNull() const;
	void setGenreIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on genre. This allows multiple, pipe delimited.	
	 */
	const QStringList &genres() const;
	void setGenres(QStringList newGenres);
	bool genresNull() const;
	void setGenresNull();
	
	
	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	const bool &isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	bool isFavoriteNull() const;
	void setIsFavoriteNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional filter by MediaType. Allows multiple, comma delimited.	
	 */
	const QList<MediaType> &mediaTypes() const;
	void setMediaTypes(QList<MediaType> newMediaTypes);
	bool mediaTypesNull() const;
	void setMediaTypesNull();
	
	
	/**
	 * @brief Optional filter by minimum community rating.	
	 */
	const double &minCommunityRating() const;
	void setMinCommunityRating(double newMinCommunityRating);
	bool minCommunityRatingNull() const;
	void setMinCommunityRatingNull();
	
	
	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	const QString &nameLessThan() const;
	void setNameLessThan(QString newNameLessThan);
	bool nameLessThanNull() const;
	void setNameLessThanNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	const QString &nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith);
	bool nameStartsWithNull() const;
	void setNameStartsWithNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	const QString &nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater);
	bool nameStartsWithOrGreaterNull() const;
	void setNameStartsWithOrGreaterNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on OfficialRating. This allows multiple, pipe delimited.	
	 */
	const QStringList &officialRatings() const;
	void setOfficialRatings(QStringList newOfficialRatings);
	bool officialRatingsNull() const;
	void setOfficialRatingsNull();
	
	
	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person.	
	 */
	const QString &person() const;
	void setPerson(QString newPerson);
	bool personNull() const;
	void setPersonNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person ids.	
	 */
	const QStringList &personIds() const;
	void setPersonIds(QStringList newPersonIds);
	bool personIdsNull() const;
	void setPersonIdsNull();
	
	
	/**
	 * @brief Optional. If specified, along with Person, results will be filtered to include only those containing the specified person and PersonType. Allows multiple, comma-delimited.	
	 */
	const QStringList &personTypes() const;
	void setPersonTypes(QStringList newPersonTypes);
	bool personTypesNull() const;
	void setPersonTypesNull();
	
	
	/**
	 * @brief Optional. Search term.	
	 */
	const QString &searchTerm() const;
	void setSearchTerm(QString newSearchTerm);
	bool searchTermNull() const;
	void setSearchTermNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Sort Order - Ascending,Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on studio id. This allows multiple, pipe delimited.	
	 */
	const QStringList &studioIds() const;
	void setStudioIds(QStringList newStudioIds);
	bool studioIdsNull() const;
	void setStudioIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on studio. This allows multiple, pipe delimited.	
	 */
	const QStringList &studios() const;
	void setStudios(QStringList newStudios);
	bool studiosNull() const;
	void setStudiosNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on tag. This allows multiple, pipe delimited.	
	 */
	const QStringList &tags() const;
	void setTags(QStringList newTags);
	bool tagsNull() const;
	void setTagsNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on production year. This allows multiple, comma delimited.	
	 */
	const QList<qint32> &years() const;
	void setYears(QList<qint32> newYears);
	bool yearsNull() const;
	void setYearsNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<BaseItemKind> m_excludeItemTypes;
	QList<ItemFields> m_fields;
	QList<ItemFilter> m_filters;
	QStringList m_genreIds;
	QStringList m_genres;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<BaseItemKind> m_includeItemTypes;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QList<MediaType> m_mediaTypes;
	std::optional<double> m_minCommunityRating = std::nullopt;
	QString m_nameLessThan;
	QString m_nameStartsWith;
	QString m_nameStartsWithOrGreater;
	QStringList m_officialRatings;
	QString m_parentId;
	QString m_person;
	QStringList m_personIds;
	QStringList m_personTypes;
	QString m_searchTerm;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	std::optional<qint32> m_startIndex = std::nullopt;
	QStringList m_studioIds;
	QStringList m_studios;
	QStringList m_tags;
	QString m_userId;
	QList<qint32> m_years;


};

class GetAttachmentParams {
public:

	/**
	 * @brief Attachment Index.	
	 */
	const qint32 &index() const;
	void setIndex(qint32 newIndex);

	
	/**
	 * @brief Media Source ID.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);

	
	/**
	 * @brief Video ID.	
	 */
	const QString &videoId() const;
	void setVideoId(QString newVideoId);

	
private:
	// Required path parameters
	qint32 m_index;
	QString m_mediaSourceId;
	QString m_videoId;
	
	// Required query parameters

	// Optional query parameters


};

class GetAudioStreamParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief The audio container.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	QString m_container;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetAudioStreamByContainerParams {
public:

	/**
	 * @brief The audio container.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);

	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamporphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_container;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetAuthProvidersParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetBitrateTestBytesParams {
public:

	/**
	 * @brief The bitrate. Defaults to 102400.	
	 */
	const qint32 &size() const;
	void setSize(qint32 newSize);
	bool sizeNull() const;
	void setSizeNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<qint32> m_size = std::nullopt;


};

class GetBookRemoteSearchResultsParams {
public:

	/**
	 * @brief Remote search query.	
	 */
	const QSharedPointer<BookInfoRemoteSearchQuery> &body() const;
	void setBody(QSharedPointer<BookInfoRemoteSearchQuery> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<BookInfoRemoteSearchQuery> m_body;

};

class GetBoxSetRemoteSearchResultsParams {
public:

	/**
	 * @brief Remote search query.	
	 */
	const QSharedPointer<BoxSetInfoRemoteSearchQuery> &body() const;
	void setBody(QSharedPointer<BoxSetInfoRemoteSearchQuery> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<BoxSetInfoRemoteSearchQuery> m_body;

};

class GetBrandingCssParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetBrandingCss_2Params {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetBrandingOptionsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetChannelParams {
public:

	/**
	 * @brief Channel id.	
	 */
	const QString &channelId() const;
	void setChannelId(QString newChannelId);

	
	/**
	 * @brief Optional. Attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_channelId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetChannelFeaturesParams {
public:

	/**
	 * @brief Channel id.	
	 */
	const QString &channelId() const;
	void setChannelId(QString newChannelId);

	
private:
	// Required path parameters
	QString m_channelId;
	
	// Required query parameters

	// Optional query parameters


};

class GetChannelItemsParams {
public:

	/**
	 * @brief Channel Id.	
	 */
	const QString &channelId() const;
	void setChannelId(QString newChannelId);

	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. Specify additional filters to apply.	
	 */
	const QList<ItemFilter> &filters() const;
	void setFilters(QList<ItemFilter> newFilters);
	bool filtersNull() const;
	void setFiltersNull();
	
	
	/**
	 * @brief Optional. Folder Id.	
	 */
	const QString &folderId() const;
	void setFolderId(QString newFolderId);
	bool folderIdNull() const;
	void setFolderIdNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Optional. Sort Order - Ascending,Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. User Id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_channelId;
	
	// Required query parameters

	// Optional query parameters
	QList<ItemFields> m_fields;
	QList<ItemFilter> m_filters;
	QString m_folderId;
	std::optional<qint32> m_limit = std::nullopt;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class GetChannelMappingOptionsParams {
public:

	/**
	 * @brief Provider id.	
	 */
	const QString &providerId() const;
	void setProviderId(QString newProviderId);
	bool providerIdNull() const;
	void setProviderIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_providerId;


};

class GetChannelsParams {
public:

	/**
	 * @brief Optional. Filter by channels that are favorite.	
	 */
	const bool &isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	bool isFavoriteNull() const;
	void setIsFavoriteNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. Filter by channels that support getting latest items.	
	 */
	const bool &supportsLatestItems() const;
	void setSupportsLatestItems(bool newSupportsLatestItems);
	bool supportsLatestItemsNull() const;
	void setSupportsLatestItemsNull();
	
	
	/**
	 * @brief Optional. Filter by channels that support media deletion.	
	 */
	const bool &supportsMediaDeletion() const;
	void setSupportsMediaDeletion(bool newSupportsMediaDeletion);
	bool supportsMediaDeletionNull() const;
	void setSupportsMediaDeletionNull();
	
	
	/**
	 * @brief User Id to filter by. Use System.Guid.Empty to not filter by user.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_startIndex = std::nullopt;
	std::optional<bool> m_supportsLatestItems = std::nullopt;
	std::optional<bool> m_supportsMediaDeletion = std::nullopt;
	QString m_userId;


};

class GetConfigurationParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetConfigurationPagesParams {
public:

	/**
	 * @brief Whether to enable in the main menu.	
	 */
	const bool &enableInMainMenu() const;
	void setEnableInMainMenu(bool newEnableInMainMenu);
	bool enableInMainMenuNull() const;
	void setEnableInMainMenuNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_enableInMainMenu = std::nullopt;


};

class GetCountriesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetCriticReviewsParams {
public:

	/**
	 * @brief 	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class GetCulturesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetCurrentUserParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetDashboardConfigurationPageParams {
public:

	/**
	 * @brief The name of the page.	
	 */
	const QString &name() const;
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_name;


};

class GetDefaultDirectoryBrowserParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetDefaultListingProviderParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetDefaultMetadataOptionsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetDefaultTimerParams {
public:

	/**
	 * @brief Optional. To attach default values based on a program.	
	 */
	const QString &programId() const;
	void setProgramId(QString newProgramId);
	bool programIdNull() const;
	void setProgramIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_programId;


};

class GetDeviceInfoParams {
public:

	/**
	 * @brief Device Id.	
	 */
	const QString &jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);

	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_jellyfinId;

	// Optional query parameters


};

class GetDeviceOptionsParams {
public:

	/**
	 * @brief Device Id.	
	 */
	const QString &jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);

	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_jellyfinId;

	// Optional query parameters


};

class GetDevicesParams {
public:

	/**
	 * @brief Gets or sets the user identifier.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetDirectoryContentsParams {
public:

	/**
	 * @brief The path.	
	 */
	const QString &path() const;
	void setPath(QString newPath);

	
	/**
	 * @brief An optional filter to include or exclude folders from the results. true/false.	
	 */
	const bool &includeDirectories() const;
	void setIncludeDirectories(bool newIncludeDirectories);
	bool includeDirectoriesNull() const;
	void setIncludeDirectoriesNull();
	
	
	/**
	 * @brief An optional filter to include or exclude files from the results. true/false.	
	 */
	const bool &includeFiles() const;
	void setIncludeFiles(bool newIncludeFiles);
	bool includeFilesNull() const;
	void setIncludeFilesNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_path;

	// Optional query parameters
	std::optional<bool> m_includeDirectories = std::nullopt;
	std::optional<bool> m_includeFiles = std::nullopt;


};

class GetDisplayPreferencesParams {
public:

	/**
	 * @brief Display preferences id.	
	 */
	const QString &displayPreferencesId() const;
	void setDisplayPreferencesId(QString newDisplayPreferencesId);

	
	/**
	 * @brief Client.	
	 */
	const QString &client() const;
	void setClient(QString newClient);

	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_displayPreferencesId;
	
	// Required query parameters
	QString m_client;

	// Optional query parameters
	QString m_userId;


};

class GetDownloadParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class GetDrivesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetEndpointInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetEpisodesParams {
public:

	/**
	 * @brief The series id.	
	 */
	const QString &seriesId() const;
	void setSeriesId(QString newSeriesId);

	
	/**
	 * @brief Optional. Return items that are siblings of a supplied item.	
	 */
	const QString &adjacentTo() const;
	void setAdjacentTo(QString newAdjacentTo);
	bool adjacentToNull() const;
	void setAdjacentToNull();
	
	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional, include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. Filter by items that are missing episodes or not.	
	 */
	const bool &isMissing() const;
	void setIsMissing(bool newIsMissing);
	bool isMissingNull() const;
	void setIsMissingNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional filter by season number.	
	 */
	const qint32 &season() const;
	void setSeason(qint32 newSeason);
	bool seasonNull() const;
	void setSeasonNull();
	
	
	/**
	 * @brief Optional. Filter by season id.	
	 */
	const QString &seasonId() const;
	void setSeasonId(QString newSeasonId);
	bool seasonIdNull() const;
	void setSeasonIdNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	const ItemSortBy &sortBy() const;
	void setSortBy(ItemSortBy newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. Skip through the list until a given item is found.	
	 */
	const QString &startItemId() const;
	void setStartItemId(QString newStartItemId);
	bool startItemIdNull() const;
	void setStartItemIdNull();
	
	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_seriesId;
	
	// Required query parameters

	// Optional query parameters
	QString m_adjacentTo;
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<bool> m_isMissing = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_season = std::nullopt;
	QString m_seasonId;
	ItemSortBy m_sortBy;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_startItemId;
	QString m_userId;


};

class GetExternalIdInfosParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class GetFallbackFontParams {
public:

	/**
	 * @brief The name of the fallback font file to get.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters

	// Optional query parameters


};

class GetFallbackFontListParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetFileParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class GetFirstUserParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetFirstUser_2Params {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetGenreParams {
public:

	/**
	 * @brief The genre name.	
	 */
	const QString &genreName() const;
	void setGenreName(QString newGenreName);

	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_genreName;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetGenreImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Genre name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetGenreImageByIndexParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Genre name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetGenresParams {
public:

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional, include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered out based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &excludeItemTypes() const;
	void setExcludeItemTypes(QList<BaseItemKind> newExcludeItemTypes);
	bool excludeItemTypesNull() const;
	void setExcludeItemTypesNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered in based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	const bool &isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	bool isFavoriteNull() const;
	void setIsFavoriteNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	const QString &nameLessThan() const;
	void setNameLessThan(QString newNameLessThan);
	bool nameLessThanNull() const;
	void setNameLessThanNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	const QString &nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith);
	bool nameStartsWithNull() const;
	void setNameStartsWithNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	const QString &nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater);
	bool nameStartsWithOrGreaterNull() const;
	void setNameStartsWithOrGreaterNull();
	
	
	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief The search term.	
	 */
	const QString &searchTerm() const;
	void setSearchTerm(QString newSearchTerm);
	bool searchTermNull() const;
	void setSearchTermNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Sort Order - Ascending,Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	QList<BaseItemKind> m_excludeItemTypes;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<BaseItemKind> m_includeItemTypes;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_nameLessThan;
	QString m_nameStartsWith;
	QString m_nameStartsWithOrGreater;
	QString m_parentId;
	QString m_searchTerm;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class GetGroupingOptionsParams {
public:

	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetGuideInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetHlsAudioSegmentParams {
public:

	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);

	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
	/**
	 * @brief The segment id.	
	 */
	const qint32 &segmentId() const;
	void setSegmentId(qint32 newSegmentId);

	
	/**
	 * @brief The length of the requested segment in ticks.	
	 */
	const qint64 &actualSegmentLengthTicks() const;
	void setActualSegmentLengthTicks(qint64 newActualSegmentLengthTicks);

	
	/**
	 * @brief The position of the requested segment in ticks.	
	 */
	const qint64 &runtimeTicks() const;
	void setRuntimeTicks(qint64 newRuntimeTicks);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	const qint32 &maxStreamingBitrate() const;
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	bool maxStreamingBitrateNull() const;
	void setMaxStreamingBitrateNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_container;
	QString m_itemId;
	QString m_playlistId;
	qint32 m_segmentId;
	
	// Required query parameters
	qint64 m_actualSegmentLengthTicks;
	qint64 m_runtimeTicks;

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetHlsAudioSegmentLegacyAacParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The segment id.	
	 */
	const QString &segmentId() const;
	void setSegmentId(QString newSegmentId);

	
private:
	// Required path parameters
	QString m_itemId;
	QString m_segmentId;
	
	// Required query parameters

	// Optional query parameters


};

class GetHlsAudioSegmentLegacyMp3Params {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The segment id.	
	 */
	const QString &segmentId() const;
	void setSegmentId(QString newSegmentId);

	
private:
	// Required path parameters
	QString m_itemId;
	QString m_segmentId;
	
	// Required query parameters

	// Optional query parameters


};

class GetHlsPlaylistLegacyParams {
public:

	/**
	 * @brief The video id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
private:
	// Required path parameters
	QString m_itemId;
	QString m_playlistId;
	
	// Required query parameters

	// Optional query parameters


};

class GetHlsVideoSegmentParams {
public:

	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);

	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
	/**
	 * @brief The segment id.	
	 */
	const qint32 &segmentId() const;
	void setSegmentId(qint32 newSegmentId);

	
	/**
	 * @brief The length of the requested segment in ticks.	
	 */
	const qint64 &actualSegmentLengthTicks() const;
	void setActualSegmentLengthTicks(qint64 newActualSegmentLengthTicks);

	
	/**
	 * @brief The position of the requested segment in ticks.	
	 */
	const qint64 &runtimeTicks() const;
	void setRuntimeTicks(qint64 newRuntimeTicks);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Whether to always burn in subtitles when transcoding.	
	 */
	const bool &alwaysBurnInSubtitleWhenTranscoding() const;
	void setAlwaysBurnInSubtitleWhenTranscoding(bool newAlwaysBurnInSubtitleWhenTranscoding);
	bool alwaysBurnInSubtitleWhenTranscodingNull() const;
	void setAlwaysBurnInSubtitleWhenTranscodingNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional. The maximum vertical resolution of the encoded video.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief Optional. The maximum horizontal resolution of the encoded video.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The desired segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_container;
	QString m_itemId;
	QString m_playlistId;
	qint32 m_segmentId;
	
	// Required query parameters
	qint64 m_actualSegmentLengthTicks;
	qint64 m_runtimeTicks;

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_alwaysBurnInSubtitleWhenTranscoding = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetHlsVideoSegmentLegacyParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);

	
	/**
	 * @brief The segment id.	
	 */
	const QString &segmentId() const;
	void setSegmentId(QString newSegmentId);

	
private:
	// Required path parameters
	QString m_itemId;
	QString m_playlistId;
	QString m_segmentContainer;
	QString m_segmentId;
	
	// Required query parameters

	// Optional query parameters


};

class GetInstantMixFromAlbumParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetInstantMixFromArtistsParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetInstantMixFromArtists2Params {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);

	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_jellyfinId;

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetInstantMixFromItemParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetInstantMixFromMusicGenreByIdParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);

	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_jellyfinId;

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetInstantMixFromMusicGenreByNameParams {
public:

	/**
	 * @brief The genre name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetInstantMixFromPlaylistParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetInstantMixFromSongParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetIntrosParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetItemParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetItemCountsParams {
public:

	/**
	 * @brief Optional. Get counts of favorite items.	
	 */
	const bool &isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	bool isFavoriteNull() const;
	void setIsFavoriteNull();
	
	
	/**
	 * @brief Optional. Get counts from a specific user's library.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_isFavorite = std::nullopt;
	QString m_userId;


};

class GetItemImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Drawing.ImageFormat of the returned image.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetItemImage2Params {
public:

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);

	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);

	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);

	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);

	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);

	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageFormat m_format;
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_itemId;
	qint32 m_maxHeight;
	qint32 m_maxWidth;
	double m_percentPlayed;
	QString m_tag;
	qint32 m_unplayedCount;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetItemImageByIndexParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Drawing.ImageFormat of the returned image.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetItemImageInfosParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class GetItemSegmentsParams {
public:

	/**
	 * @brief The ItemId.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional filter of requested segment types.	
	 */
	const QList<MediaSegmentType> &includeSegmentTypes() const;
	void setIncludeSegmentTypes(QList<MediaSegmentType> newIncludeSegmentTypes);
	bool includeSegmentTypesNull() const;
	void setIncludeSegmentTypesNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QList<MediaSegmentType> m_includeSegmentTypes;


};

class GetItemUserDataParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetItemsParams {
public:

	/**
	 * @brief Optional. Return items that are siblings of a supplied item.	
	 */
	const QString &adjacentTo() const;
	void setAdjacentTo(QString newAdjacentTo);
	bool adjacentToNull() const;
	void setAdjacentToNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified album artist id.	
	 */
	const QStringList &albumArtistIds() const;
	void setAlbumArtistIds(QStringList newAlbumArtistIds);
	bool albumArtistIdsNull() const;
	void setAlbumArtistIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on album id. This allows multiple, pipe delimited.	
	 */
	const QStringList &albumIds() const;
	void setAlbumIds(QStringList newAlbumIds);
	bool albumIdsNull() const;
	void setAlbumIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on album. This allows multiple, pipe delimited.	
	 */
	const QStringList &albums() const;
	void setAlbums(QStringList newAlbums);
	bool albumsNull() const;
	void setAlbumsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified artist id.	
	 */
	const QStringList &artistIds() const;
	void setArtistIds(QStringList newArtistIds);
	bool artistIdsNull() const;
	void setArtistIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on artists. This allows multiple, pipe delimited.	
	 */
	const QStringList &artists() const;
	void setArtists(QStringList newArtists);
	bool artistsNull() const;
	void setArtistsNull();
	
	
	/**
	 * @brief Whether or not to hide items behind their boxsets.	
	 */
	const bool &collapseBoxSetItems() const;
	void setCollapseBoxSetItems(bool newCollapseBoxSetItems);
	bool collapseBoxSetItemsNull() const;
	void setCollapseBoxSetItemsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified contributing artist id.	
	 */
	const QStringList &contributingArtistIds() const;
	void setContributingArtistIds(QStringList newContributingArtistIds);
	bool contributingArtistIdsNull() const;
	void setContributingArtistIdsNull();
	
	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional, include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Enable the total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional, include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on artist id. This allows multiple, pipe delimited.	
	 */
	const QStringList &excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds);
	bool excludeArtistIdsNull() const;
	void setExcludeArtistIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered by excluding item ids. This allows multiple, comma delimited.	
	 */
	const QStringList &excludeItemIds() const;
	void setExcludeItemIds(QStringList newExcludeItemIds);
	bool excludeItemIdsNull() const;
	void setExcludeItemIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &excludeItemTypes() const;
	void setExcludeItemTypes(QList<BaseItemKind> newExcludeItemTypes);
	bool excludeItemTypesNull() const;
	void setExcludeItemTypesNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on the LocationType. This allows multiple, comma delimited.	
	 */
	const QList<LocationType> &excludeLocationTypes() const;
	void setExcludeLocationTypes(QList<LocationType> newExcludeLocationTypes);
	bool excludeLocationTypesNull() const;
	void setExcludeLocationTypesNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. Specify additional filters to apply. This allows multiple, comma delimited. Options: IsFolder, IsNotFolder, IsUnplayed, IsPlayed, IsFavorite, IsResumable, Likes, Dislikes.	
	 */
	const QList<ItemFilter> &filters() const;
	void setFilters(QList<ItemFilter> newFilters);
	bool filtersNull() const;
	void setFiltersNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on genre id. This allows multiple, pipe delimited.	
	 */
	const QStringList &genreIds() const;
	void setGenreIds(QStringList newGenreIds);
	bool genreIdsNull() const;
	void setGenreIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on genre. This allows multiple, pipe delimited.	
	 */
	const QStringList &genres() const;
	void setGenres(QStringList newGenres);
	bool genresNull() const;
	void setGenresNull();
	
	
	/**
	 * @brief Optional filter by items that have an IMDb id or not.	
	 */
	const bool &hasImdbId() const;
	void setHasImdbId(bool newHasImdbId);
	bool hasImdbIdNull() const;
	void setHasImdbIdNull();
	
	
	/**
	 * @brief Optional filter by items that have official ratings.	
	 */
	const bool &hasOfficialRating() const;
	void setHasOfficialRating(bool newHasOfficialRating);
	bool hasOfficialRatingNull() const;
	void setHasOfficialRatingNull();
	
	
	/**
	 * @brief Optional filter by items that have an overview or not.	
	 */
	const bool &hasOverview() const;
	void setHasOverview(bool newHasOverview);
	bool hasOverviewNull() const;
	void setHasOverviewNull();
	
	
	/**
	 * @brief Optional filter by items that have or do not have a parental rating.	
	 */
	const bool &hasParentalRating() const;
	void setHasParentalRating(bool newHasParentalRating);
	bool hasParentalRatingNull() const;
	void setHasParentalRatingNull();
	
	
	/**
	 * @brief Optional filter by items with special features.	
	 */
	const bool &hasSpecialFeature() const;
	void setHasSpecialFeature(bool newHasSpecialFeature);
	bool hasSpecialFeatureNull() const;
	void setHasSpecialFeatureNull();
	
	
	/**
	 * @brief Optional filter by items with subtitles.	
	 */
	const bool &hasSubtitles() const;
	void setHasSubtitles(bool newHasSubtitles);
	bool hasSubtitlesNull() const;
	void setHasSubtitlesNull();
	
	
	/**
	 * @brief Optional filter by items with theme songs.	
	 */
	const bool &hasThemeSong() const;
	void setHasThemeSong(bool newHasThemeSong);
	bool hasThemeSongNull() const;
	void setHasThemeSongNull();
	
	
	/**
	 * @brief Optional filter by items with theme videos.	
	 */
	const bool &hasThemeVideo() const;
	void setHasThemeVideo(bool newHasThemeVideo);
	bool hasThemeVideoNull() const;
	void setHasThemeVideoNull();
	
	
	/**
	 * @brief Optional filter by items that have a TMDb id or not.	
	 */
	const bool &hasTmdbId() const;
	void setHasTmdbId(bool newHasTmdbId);
	bool hasTmdbIdNull() const;
	void setHasTmdbIdNull();
	
	
	/**
	 * @brief Optional filter by items with trailers.	
	 */
	const bool &hasTrailer() const;
	void setHasTrailer(bool newHasTrailer);
	bool hasTrailerNull() const;
	void setHasTrailerNull();
	
	
	/**
	 * @brief Optional filter by items that have a TVDb id or not.	
	 */
	const bool &hasTvdbId() const;
	void setHasTvdbId(bool newHasTvdbId);
	bool hasTvdbIdNull() const;
	void setHasTvdbIdNull();
	
	
	/**
	 * @brief Optional. If specific items are needed, specify a list of item id's to retrieve. This allows multiple, comma delimited.	
	 */
	const QStringList &ids() const;
	void setIds(QStringList newIds);
	bool idsNull() const;
	void setIdsNull();
	
	
	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on those containing image types. This allows multiple, comma delimited.	
	 */
	const QList<ImageType> &imageTypes() const;
	void setImageTypes(QList<ImageType> newImageTypes);
	bool imageTypesNull() const;
	void setImageTypesNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on the item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief Optional filter by index number.	
	 */
	const qint32 &indexNumber() const;
	void setIndexNumber(qint32 newIndexNumber);
	bool indexNumberNull() const;
	void setIndexNumberNull();
	
	
	/**
	 * @brief Optional filter by items that are 3D, or not.	
	 */
	const bool &is3D() const;
	void setIs3D(bool newIs3D);
	bool is3DNull() const;
	void setIs3DNull();
	
	
	/**
	 * @brief Optional filter by items that are 4K or not.	
	 */
	const bool &is4K() const;
	void setIs4K(bool newIs4K);
	bool is4KNull() const;
	void setIs4KNull();
	
	
	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	const bool &isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	bool isFavoriteNull() const;
	void setIsFavoriteNull();
	
	
	/**
	 * @brief Optional filter by items that are HD or not.	
	 */
	const bool &isHd() const;
	void setIsHd(bool newIsHd);
	bool isHdNull() const;
	void setIsHdNull();
	
	
	/**
	 * @brief Optional filter for live tv kids.	
	 */
	const bool &isKids() const;
	void setIsKids(bool newIsKids);
	bool isKidsNull() const;
	void setIsKidsNull();
	
	
	/**
	 * @brief Optional filter by items that are locked.	
	 */
	const bool &isLocked() const;
	void setIsLocked(bool newIsLocked);
	bool isLockedNull() const;
	void setIsLockedNull();
	
	
	/**
	 * @brief Optional filter by items that are missing episodes or not.	
	 */
	const bool &isMissing() const;
	void setIsMissing(bool newIsMissing);
	bool isMissingNull() const;
	void setIsMissingNull();
	
	
	/**
	 * @brief Optional filter for live tv movies.	
	 */
	const bool &isMovie() const;
	void setIsMovie(bool newIsMovie);
	bool isMovieNull() const;
	void setIsMovieNull();
	
	
	/**
	 * @brief Optional filter for live tv news.	
	 */
	const bool &isNews() const;
	void setIsNews(bool newIsNews);
	bool isNewsNull() const;
	void setIsNewsNull();
	
	
	/**
	 * @brief Optional filter by items that are placeholders.	
	 */
	const bool &isPlaceHolder() const;
	void setIsPlaceHolder(bool newIsPlaceHolder);
	bool isPlaceHolderNull() const;
	void setIsPlaceHolderNull();
	
	
	/**
	 * @brief Optional filter by items that are played, or not.	
	 */
	const bool &isPlayed() const;
	void setIsPlayed(bool newIsPlayed);
	bool isPlayedNull() const;
	void setIsPlayedNull();
	
	
	/**
	 * @brief Optional filter for live tv series.	
	 */
	const bool &isSeries() const;
	void setIsSeries(bool newIsSeries);
	bool isSeriesNull() const;
	void setIsSeriesNull();
	
	
	/**
	 * @brief Optional filter for live tv sports.	
	 */
	const bool &isSports() const;
	void setIsSports(bool newIsSports);
	bool isSportsNull() const;
	void setIsSportsNull();
	
	
	/**
	 * @brief Optional filter by items that are unaired episodes or not.	
	 */
	const bool &isUnaired() const;
	void setIsUnaired(bool newIsUnaired);
	bool isUnairedNull() const;
	void setIsUnairedNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on LocationType. This allows multiple, comma delimited.	
	 */
	const QList<LocationType> &locationTypes() const;
	void setLocationTypes(QList<LocationType> newLocationTypes);
	bool locationTypesNull() const;
	void setLocationTypesNull();
	
	
	/**
	 * @brief Optional. Filter by the maximum height of the item.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief Optional filter by maximum official rating (PG, PG-13, TV-MA, etc).	
	 */
	const QString &maxOfficialRating() const;
	void setMaxOfficialRating(QString newMaxOfficialRating);
	bool maxOfficialRatingNull() const;
	void setMaxOfficialRatingNull();
	
	
	/**
	 * @brief Optional. The maximum premiere date. Format = ISO.	
	 */
	const QDateTime &maxPremiereDate() const;
	void setMaxPremiereDate(QDateTime newMaxPremiereDate);
	bool maxPremiereDateNull() const;
	void setMaxPremiereDateNull();
	
	
	/**
	 * @brief Optional. Filter by the maximum width of the item.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional filter by MediaType. Allows multiple, comma delimited.	
	 */
	const QList<MediaType> &mediaTypes() const;
	void setMediaTypes(QList<MediaType> newMediaTypes);
	bool mediaTypesNull() const;
	void setMediaTypesNull();
	
	
	/**
	 * @brief Optional filter by minimum community rating.	
	 */
	const double &minCommunityRating() const;
	void setMinCommunityRating(double newMinCommunityRating);
	bool minCommunityRatingNull() const;
	void setMinCommunityRatingNull();
	
	
	/**
	 * @brief Optional filter by minimum critic rating.	
	 */
	const double &minCriticRating() const;
	void setMinCriticRating(double newMinCriticRating);
	bool minCriticRatingNull() const;
	void setMinCriticRatingNull();
	
	
	/**
	 * @brief Optional. The minimum last saved date. Format = ISO.	
	 */
	const QDateTime &minDateLastSaved() const;
	void setMinDateLastSaved(QDateTime newMinDateLastSaved);
	bool minDateLastSavedNull() const;
	void setMinDateLastSavedNull();
	
	
	/**
	 * @brief Optional. The minimum last saved date for the current user. Format = ISO.	
	 */
	const QDateTime &minDateLastSavedForUser() const;
	void setMinDateLastSavedForUser(QDateTime newMinDateLastSavedForUser);
	bool minDateLastSavedForUserNull() const;
	void setMinDateLastSavedForUserNull();
	
	
	/**
	 * @brief Optional. Filter by the minimum height of the item.	
	 */
	const qint32 &minHeight() const;
	void setMinHeight(qint32 newMinHeight);
	bool minHeightNull() const;
	void setMinHeightNull();
	
	
	/**
	 * @brief Optional filter by minimum official rating (PG, PG-13, TV-MA, etc).	
	 */
	const QString &minOfficialRating() const;
	void setMinOfficialRating(QString newMinOfficialRating);
	bool minOfficialRatingNull() const;
	void setMinOfficialRatingNull();
	
	
	/**
	 * @brief Optional. The minimum premiere date. Format = ISO.	
	 */
	const QDateTime &minPremiereDate() const;
	void setMinPremiereDate(QDateTime newMinPremiereDate);
	bool minPremiereDateNull() const;
	void setMinPremiereDateNull();
	
	
	/**
	 * @brief Optional. Filter by the minimum width of the item.	
	 */
	const qint32 &minWidth() const;
	void setMinWidth(qint32 newMinWidth);
	bool minWidthNull() const;
	void setMinWidthNull();
	
	
	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	const QString &nameLessThan() const;
	void setNameLessThan(QString newNameLessThan);
	bool nameLessThanNull() const;
	void setNameLessThanNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	const QString &nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith);
	bool nameStartsWithNull() const;
	void setNameStartsWithNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	const QString &nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater);
	bool nameStartsWithOrGreaterNull() const;
	void setNameStartsWithOrGreaterNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on OfficialRating. This allows multiple, pipe delimited.	
	 */
	const QStringList &officialRatings() const;
	void setOfficialRatings(QStringList newOfficialRatings);
	bool officialRatingsNull() const;
	void setOfficialRatingsNull();
	
	
	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Optional filter by parent index number.	
	 */
	const qint32 &parentIndexNumber() const;
	void setParentIndexNumber(qint32 newParentIndexNumber);
	bool parentIndexNumberNull() const;
	void setParentIndexNumberNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person.	
	 */
	const QString &person() const;
	void setPerson(QString newPerson);
	bool personNull() const;
	void setPersonNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person id.	
	 */
	const QStringList &personIds() const;
	void setPersonIds(QStringList newPersonIds);
	bool personIdsNull() const;
	void setPersonIdsNull();
	
	
	/**
	 * @brief Optional. If specified, along with Person, results will be filtered to include only those containing the specified person and PersonType. Allows multiple, comma-delimited.	
	 */
	const QStringList &personTypes() const;
	void setPersonTypes(QStringList newPersonTypes);
	bool personTypesNull() const;
	void setPersonTypesNull();
	
	
	/**
	 * @brief When searching within folders, this determines whether or not the search will be recursive. true/false.	
	 */
	const bool &recursive() const;
	void setRecursive(bool newRecursive);
	bool recursiveNull() const;
	void setRecursiveNull();
	
	
	/**
	 * @brief Optional. Filter based on a search term.	
	 */
	const QString &searchTerm() const;
	void setSearchTerm(QString newSearchTerm);
	bool searchTermNull() const;
	void setSearchTermNull();
	
	
	/**
	 * @brief Optional filter by Series Status. Allows multiple, comma delimited.	
	 */
	const QList<SeriesStatus> &seriesStatus() const;
	void setSeriesStatus(QList<SeriesStatus> newSeriesStatus);
	bool seriesStatusNull() const;
	void setSeriesStatusNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Sort Order - Ascending, Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on studio id. This allows multiple, pipe delimited.	
	 */
	const QStringList &studioIds() const;
	void setStudioIds(QStringList newStudioIds);
	bool studioIdsNull() const;
	void setStudioIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on studio. This allows multiple, pipe delimited.	
	 */
	const QStringList &studios() const;
	void setStudios(QStringList newStudios);
	bool studiosNull() const;
	void setStudiosNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on tag. This allows multiple, pipe delimited.	
	 */
	const QStringList &tags() const;
	void setTags(QStringList newTags);
	bool tagsNull() const;
	void setTagsNull();
	
	
	/**
	 * @brief The user id supplied as query parameter; this is required when not using an API key.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief Optional filter by VideoType (videofile, dvd, bluray, iso). Allows multiple, comma delimited.	
	 */
	const QList<VideoType> &videoTypes() const;
	void setVideoTypes(QList<VideoType> newVideoTypes);
	bool videoTypesNull() const;
	void setVideoTypesNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on production year. This allows multiple, comma delimited.	
	 */
	const QList<qint32> &years() const;
	void setYears(QList<qint32> newYears);
	bool yearsNull() const;
	void setYearsNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_adjacentTo;
	QStringList m_albumArtistIds;
	QStringList m_albumIds;
	QStringList m_albums;
	QStringList m_artistIds;
	QStringList m_artists;
	std::optional<bool> m_collapseBoxSetItems = std::nullopt;
	QStringList m_contributingArtistIds;
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QStringList m_excludeArtistIds;
	QStringList m_excludeItemIds;
	QList<BaseItemKind> m_excludeItemTypes;
	QList<LocationType> m_excludeLocationTypes;
	QList<ItemFields> m_fields;
	QList<ItemFilter> m_filters;
	QStringList m_genreIds;
	QStringList m_genres;
	std::optional<bool> m_hasImdbId = std::nullopt;
	std::optional<bool> m_hasOfficialRating = std::nullopt;
	std::optional<bool> m_hasOverview = std::nullopt;
	std::optional<bool> m_hasParentalRating = std::nullopt;
	std::optional<bool> m_hasSpecialFeature = std::nullopt;
	std::optional<bool> m_hasSubtitles = std::nullopt;
	std::optional<bool> m_hasThemeSong = std::nullopt;
	std::optional<bool> m_hasThemeVideo = std::nullopt;
	std::optional<bool> m_hasTmdbId = std::nullopt;
	std::optional<bool> m_hasTrailer = std::nullopt;
	std::optional<bool> m_hasTvdbId = std::nullopt;
	QStringList m_ids;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ImageType> m_imageTypes;
	QList<BaseItemKind> m_includeItemTypes;
	std::optional<qint32> m_indexNumber = std::nullopt;
	std::optional<bool> m_is3D = std::nullopt;
	std::optional<bool> m_is4K = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<bool> m_isHd = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isLocked = std::nullopt;
	std::optional<bool> m_isMissing = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isPlaceHolder = std::nullopt;
	std::optional<bool> m_isPlayed = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<bool> m_isUnaired = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QList<LocationType> m_locationTypes;
	std::optional<qint32> m_maxHeight = std::nullopt;
	QString m_maxOfficialRating;
	QDateTime m_maxPremiereDate;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QList<MediaType> m_mediaTypes;
	std::optional<double> m_minCommunityRating = std::nullopt;
	std::optional<double> m_minCriticRating = std::nullopt;
	QDateTime m_minDateLastSaved;
	QDateTime m_minDateLastSavedForUser;
	std::optional<qint32> m_minHeight = std::nullopt;
	QString m_minOfficialRating;
	QDateTime m_minPremiereDate;
	std::optional<qint32> m_minWidth = std::nullopt;
	QString m_nameLessThan;
	QString m_nameStartsWith;
	QString m_nameStartsWithOrGreater;
	QStringList m_officialRatings;
	QString m_parentId;
	std::optional<qint32> m_parentIndexNumber = std::nullopt;
	QString m_person;
	QStringList m_personIds;
	QStringList m_personTypes;
	std::optional<bool> m_recursive = std::nullopt;
	QString m_searchTerm;
	QList<SeriesStatus> m_seriesStatus;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	std::optional<qint32> m_startIndex = std::nullopt;
	QStringList m_studioIds;
	QStringList m_studios;
	QStringList m_tags;
	QString m_userId;
	QList<VideoType> m_videoTypes;
	QList<qint32> m_years;


};

class GetKeysParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetLatestChannelItemsParams {
public:

	/**
	 * @brief Optional. Specify one or more channel id's, comma delimited.	
	 */
	const QStringList &channelIds() const;
	void setChannelIds(QStringList newChannelIds);
	bool channelIdsNull() const;
	void setChannelIdsNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. Specify additional filters to apply.	
	 */
	const QList<ItemFilter> &filters() const;
	void setFilters(QList<ItemFilter> newFilters);
	bool filtersNull() const;
	void setFiltersNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. User Id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QStringList m_channelIds;
	QList<ItemFields> m_fields;
	QList<ItemFilter> m_filters;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class GetLatestMediaParams {
public:

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Whether or not to group items into a parent container.	
	 */
	const bool &groupItems() const;
	void setGroupItems(bool newGroupItems);
	bool groupItemsNull() const;
	void setGroupItemsNull();
	
	
	/**
	 * @brief Optional. the max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief Filter by items that are played, or not.	
	 */
	const bool &isPlayed() const;
	void setIsPlayed(bool newIsPlayed);
	bool isPlayedNull() const;
	void setIsPlayedNull();
	
	
	/**
	 * @brief Return item limit.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<bool> m_groupItems = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<BaseItemKind> m_includeItemTypes;
	std::optional<bool> m_isPlayed = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_parentId;
	QString m_userId;


};

class GetLibraryOptionsInfoParams {
public:

	/**
	 * @brief Whether this is a new library.	
	 */
	const bool &isNewLibrary() const;
	void setIsNewLibrary(bool newIsNewLibrary);
	bool isNewLibraryNull() const;
	void setIsNewLibraryNull();
	
	
	/**
	 * @brief Library content type.	
	 */
	const CollectionType &libraryContentType() const;
	void setLibraryContentType(CollectionType newLibraryContentType);
	bool libraryContentTypeNull() const;
	void setLibraryContentTypeNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_isNewLibrary = std::nullopt;
	CollectionType m_libraryContentType;


};

class GetLineupsParams {
public:

	/**
	 * @brief Country.	
	 */
	const QString &country() const;
	void setCountry(QString newCountry);
	bool countryNull() const;
	void setCountryNull();
	
	
	/**
	 * @brief Provider id.	
	 */
	const QString &jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();
	
	
	/**
	 * @brief Location.	
	 */
	const QString &location() const;
	void setLocation(QString newLocation);
	bool locationNull() const;
	void setLocationNull();
	
	
	/**
	 * @brief Provider type.	
	 */
	const QString &type() const;
	void setType(QString newType);
	bool typeNull() const;
	void setTypeNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_country;
	QString m_jellyfinId;
	QString m_location;
	QString m_type;


};

class GetLiveHlsStreamParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Whether to always burn in subtitles when transcoding.	
	 */
	const bool &alwaysBurnInSubtitleWhenTranscoding() const;
	void setAlwaysBurnInSubtitleWhenTranscoding(bool newAlwaysBurnInSubtitleWhenTranscoding);
	bool alwaysBurnInSubtitleWhenTranscodingNull() const;
	void setAlwaysBurnInSubtitleWhenTranscodingNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief The audio container.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. Whether to enable subtitles in the manifest.	
	 */
	const bool &enableSubtitlesInManifest() const;
	void setEnableSubtitlesInManifest(bool newEnableSubtitlesInManifest);
	bool enableSubtitlesInManifestNull() const;
	void setEnableSubtitlesInManifestNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional. The max height.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief Optional. The max width.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_alwaysBurnInSubtitleWhenTranscoding = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	QString m_container;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableSubtitlesInManifest = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetLiveRecordingFileParams {
public:

	/**
	 * @brief Recording id.	
	 */
	const QString &recordingId() const;
	void setRecordingId(QString newRecordingId);

	
private:
	// Required path parameters
	QString m_recordingId;
	
	// Required query parameters

	// Optional query parameters


};

class GetLiveStreamFileParams {
public:

	/**
	 * @brief Container type.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);

	
	/**
	 * @brief Stream id.	
	 */
	const QString &streamId() const;
	void setStreamId(QString newStreamId);

	
private:
	// Required path parameters
	QString m_container;
	QString m_streamId;
	
	// Required query parameters

	// Optional query parameters


};

class GetLiveTvChannelsParams {
public:

	/**
	 * @brief Optional. Adds current program info to each channel.	
	 */
	const bool &addCurrentProgram() const;
	void setAddCurrentProgram(bool newAddCurrentProgram);
	bool addCurrentProgramNull() const;
	void setAddCurrentProgramNull();
	
	
	/**
	 * @brief Optional. Incorporate favorite and like status into channel sorting.	
	 */
	const bool &enableFavoriteSorting() const;
	void setEnableFavoriteSorting(bool newEnableFavoriteSorting);
	bool enableFavoriteSortingNull() const;
	void setEnableFavoriteSortingNull();
	
	
	/**
	 * @brief "Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. Filter by channels that are disliked, or not.	
	 */
	const bool &isDisliked() const;
	void setIsDisliked(bool newIsDisliked);
	bool isDislikedNull() const;
	void setIsDislikedNull();
	
	
	/**
	 * @brief Optional. Filter by channels that are favorites, or not.	
	 */
	const bool &isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	bool isFavoriteNull() const;
	void setIsFavoriteNull();
	
	
	/**
	 * @brief Optional. Filter for kids.	
	 */
	const bool &isKids() const;
	void setIsKids(bool newIsKids);
	bool isKidsNull() const;
	void setIsKidsNull();
	
	
	/**
	 * @brief Optional. Filter by channels that are liked, or not.	
	 */
	const bool &isLiked() const;
	void setIsLiked(bool newIsLiked);
	bool isLikedNull() const;
	void setIsLikedNull();
	
	
	/**
	 * @brief Optional. Filter for movies.	
	 */
	const bool &isMovie() const;
	void setIsMovie(bool newIsMovie);
	bool isMovieNull() const;
	void setIsMovieNull();
	
	
	/**
	 * @brief Optional. Filter for news.	
	 */
	const bool &isNews() const;
	void setIsNews(bool newIsNews);
	bool isNewsNull() const;
	void setIsNewsNull();
	
	
	/**
	 * @brief Optional. Filter for series.	
	 */
	const bool &isSeries() const;
	void setIsSeries(bool newIsSeries);
	bool isSeriesNull() const;
	void setIsSeriesNull();
	
	
	/**
	 * @brief Optional. Filter for sports.	
	 */
	const bool &isSports() const;
	void setIsSports(bool newIsSports);
	bool isSportsNull() const;
	void setIsSportsNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Key to sort by.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Optional. Sort order.	
	 */
	const SortOrder &sortOrder() const;
	void setSortOrder(SortOrder newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. Filter by channel type.	
	 */
	const ChannelType &type() const;
	void setType(ChannelType newType);
	bool typeNull() const;
	void setTypeNull();
	
	
	/**
	 * @brief Optional. Filter by user and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_addCurrentProgram = std::nullopt;
	std::optional<bool> m_enableFavoriteSorting = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<bool> m_isDisliked = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isLiked = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QList<ItemSortBy> m_sortBy;
	SortOrder m_sortOrder;
	std::optional<qint32> m_startIndex = std::nullopt;
	ChannelType m_type;
	QString m_userId;


};

class GetLiveTvInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetLiveTvProgramsParams {
public:

	/**
	 * @brief The channels to return guide information for.	
	 */
	const QStringList &channelIds() const;
	void setChannelIds(QStringList newChannelIds);
	bool channelIdsNull() const;
	void setChannelIdsNull();
	
	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Retrieve total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief The genre ids to return guide information for.	
	 */
	const QStringList &genreIds() const;
	void setGenreIds(QStringList newGenreIds);
	bool genreIdsNull() const;
	void setGenreIdsNull();
	
	
	/**
	 * @brief The genres to return guide information for.	
	 */
	const QStringList &genres() const;
	void setGenres(QStringList newGenres);
	bool genresNull() const;
	void setGenresNull();
	
	
	/**
	 * @brief Optional. Filter by programs that have completed airing, or not.	
	 */
	const bool &hasAired() const;
	void setHasAired(bool newHasAired);
	bool hasAiredNull() const;
	void setHasAiredNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. Filter by programs that are currently airing, or not.	
	 */
	const bool &isAiring() const;
	void setIsAiring(bool newIsAiring);
	bool isAiringNull() const;
	void setIsAiringNull();
	
	
	/**
	 * @brief Optional. Filter for kids.	
	 */
	const bool &isKids() const;
	void setIsKids(bool newIsKids);
	bool isKidsNull() const;
	void setIsKidsNull();
	
	
	/**
	 * @brief Optional. Filter for movies.	
	 */
	const bool &isMovie() const;
	void setIsMovie(bool newIsMovie);
	bool isMovieNull() const;
	void setIsMovieNull();
	
	
	/**
	 * @brief Optional. Filter for news.	
	 */
	const bool &isNews() const;
	void setIsNews(bool newIsNews);
	bool isNewsNull() const;
	void setIsNewsNull();
	
	
	/**
	 * @brief Optional. Filter for series.	
	 */
	const bool &isSeries() const;
	void setIsSeries(bool newIsSeries);
	bool isSeriesNull() const;
	void setIsSeriesNull();
	
	
	/**
	 * @brief Optional. Filter for sports.	
	 */
	const bool &isSports() const;
	void setIsSports(bool newIsSports);
	bool isSportsNull() const;
	void setIsSportsNull();
	
	
	/**
	 * @brief Optional. Filter by library series id.	
	 */
	const QString &librarySeriesId() const;
	void setLibrarySeriesId(QString newLibrarySeriesId);
	bool librarySeriesIdNull() const;
	void setLibrarySeriesIdNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. The maximum premiere end date.	
	 */
	const QDateTime &maxEndDate() const;
	void setMaxEndDate(QDateTime newMaxEndDate);
	bool maxEndDateNull() const;
	void setMaxEndDateNull();
	
	
	/**
	 * @brief Optional. The maximum premiere start date.	
	 */
	const QDateTime &maxStartDate() const;
	void setMaxStartDate(QDateTime newMaxStartDate);
	bool maxStartDateNull() const;
	void setMaxStartDateNull();
	
	
	/**
	 * @brief Optional. The minimum premiere end date.	
	 */
	const QDateTime &minEndDate() const;
	void setMinEndDate(QDateTime newMinEndDate);
	bool minEndDateNull() const;
	void setMinEndDateNull();
	
	
	/**
	 * @brief Optional. The minimum premiere start date.	
	 */
	const QDateTime &minStartDate() const;
	void setMinStartDate(QDateTime newMinStartDate);
	bool minStartDateNull() const;
	void setMinStartDateNull();
	
	
	/**
	 * @brief Optional. Filter by series timer id.	
	 */
	const QString &seriesTimerId() const;
	void setSeriesTimerId(QString newSeriesTimerId);
	bool seriesTimerIdNull() const;
	void setSeriesTimerIdNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Name, StartDate.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Sort Order - Ascending,Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. Filter by user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QStringList m_channelIds;
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_genreIds;
	QStringList m_genres;
	std::optional<bool> m_hasAired = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<bool> m_isAiring = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	QString m_librarySeriesId;
	std::optional<qint32> m_limit = std::nullopt;
	QDateTime m_maxEndDate;
	QDateTime m_maxStartDate;
	QDateTime m_minEndDate;
	QDateTime m_minStartDate;
	QString m_seriesTimerId;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class GetLocalTrailersParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetLocalizationOptionsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetLogEntriesParams {
public:

	/**
	 * @brief Optional. Filter log entries if it has user id, or not.	
	 */
	const bool &hasUserId() const;
	void setHasUserId(bool newHasUserId);
	bool hasUserIdNull() const;
	void setHasUserIdNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. The minimum date. Format = ISO.	
	 */
	const QDateTime &minDate() const;
	void setMinDate(QDateTime newMinDate);
	bool minDateNull() const;
	void setMinDateNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_hasUserId = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QDateTime m_minDate;
	std::optional<qint32> m_startIndex = std::nullopt;


};

class GetLogFileParams {
public:

	/**
	 * @brief The name of the log file to get.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_name;

	// Optional query parameters


};

class GetLyricsParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class GetMasterHlsAudioPlaylistParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Enable adaptive bitrate streaming.	
	 */
	const bool &enableAdaptiveBitrateStreaming() const;
	void setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming);
	bool enableAdaptiveBitrateStreamingNull() const;
	void setEnableAdaptiveBitrateStreamingNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	const qint32 &maxStreamingBitrate() const;
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	bool maxStreamingBitrateNull() const;
	void setMaxStreamingBitrateNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	QString m_mediaSourceId;

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAdaptiveBitrateStreaming = std::nullopt;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetMasterHlsVideoPlaylistParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Whether to always burn in subtitles when transcoding.	
	 */
	const bool &alwaysBurnInSubtitleWhenTranscoding() const;
	void setAlwaysBurnInSubtitleWhenTranscoding(bool newAlwaysBurnInSubtitleWhenTranscoding);
	bool alwaysBurnInSubtitleWhenTranscodingNull() const;
	void setAlwaysBurnInSubtitleWhenTranscodingNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Enable adaptive bitrate streaming.	
	 */
	const bool &enableAdaptiveBitrateStreaming() const;
	void setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming);
	bool enableAdaptiveBitrateStreamingNull() const;
	void setEnableAdaptiveBitrateStreamingNull();
	
	
	/**
	 * @brief Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Enable trickplay image playlists being added to master playlist.	
	 */
	const bool &enableTrickplay() const;
	void setEnableTrickplay(bool newEnableTrickplay);
	bool enableTrickplayNull() const;
	void setEnableTrickplayNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional. The maximum vertical resolution of the encoded video.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief Optional. The maximum horizontal resolution of the encoded video.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	QString m_mediaSourceId;

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_alwaysBurnInSubtitleWhenTranscoding = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAdaptiveBitrateStreaming = std::nullopt;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableTrickplay = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetMediaFoldersParams {
public:

	/**
	 * @brief Optional. Filter by folders that are marked hidden, or not.	
	 */
	const bool &isHidden() const;
	void setIsHidden(bool newIsHidden);
	bool isHiddenNull() const;
	void setIsHiddenNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_isHidden = std::nullopt;


};

class GetMetadataEditorInfoParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class GetMovieRecommendationsParams {
public:

	/**
	 * @brief The max number of categories to return.	
	 */
	const qint32 &categoryLimit() const;
	void setCategoryLimit(qint32 newCategoryLimit);
	bool categoryLimitNull() const;
	void setCategoryLimitNull();
	
	
	/**
	 * @brief Optional. The fields to return.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief The max number of items to return per category.	
	 */
	const qint32 &itemLimit() const;
	void setItemLimit(qint32 newItemLimit);
	bool itemLimitNull() const;
	void setItemLimitNull();
	
	
	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<qint32> m_categoryLimit = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_itemLimit = std::nullopt;
	QString m_parentId;
	QString m_userId;


};

class GetMovieRemoteSearchResultsParams {
public:

	/**
	 * @brief Remote search query.	
	 */
	const QSharedPointer<MovieInfoRemoteSearchQuery> &body() const;
	void setBody(QSharedPointer<MovieInfoRemoteSearchQuery> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<MovieInfoRemoteSearchQuery> m_body;

};

class GetMusicAlbumRemoteSearchResultsParams {
public:

	/**
	 * @brief Remote search query.	
	 */
	const QSharedPointer<AlbumInfoRemoteSearchQuery> &body() const;
	void setBody(QSharedPointer<AlbumInfoRemoteSearchQuery> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<AlbumInfoRemoteSearchQuery> m_body;

};

class GetMusicArtistRemoteSearchResultsParams {
public:

	/**
	 * @brief Remote search query.	
	 */
	const QSharedPointer<ArtistInfoRemoteSearchQuery> &body() const;
	void setBody(QSharedPointer<ArtistInfoRemoteSearchQuery> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<ArtistInfoRemoteSearchQuery> m_body;

};

class GetMusicGenreParams {
public:

	/**
	 * @brief The genre name.	
	 */
	const QString &genreName() const;
	void setGenreName(QString newGenreName);

	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_genreName;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetMusicGenreImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Music genre name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetMusicGenreImageByIndexParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Music genre name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetMusicGenresParams {
public:

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional, include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered out based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &excludeItemTypes() const;
	void setExcludeItemTypes(QList<BaseItemKind> newExcludeItemTypes);
	bool excludeItemTypesNull() const;
	void setExcludeItemTypesNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered in based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	const bool &isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	bool isFavoriteNull() const;
	void setIsFavoriteNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	const QString &nameLessThan() const;
	void setNameLessThan(QString newNameLessThan);
	bool nameLessThanNull() const;
	void setNameLessThanNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	const QString &nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith);
	bool nameStartsWithNull() const;
	void setNameStartsWithNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	const QString &nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater);
	bool nameStartsWithOrGreaterNull() const;
	void setNameStartsWithOrGreaterNull();
	
	
	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief The search term.	
	 */
	const QString &searchTerm() const;
	void setSearchTerm(QString newSearchTerm);
	bool searchTermNull() const;
	void setSearchTermNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Sort Order - Ascending,Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	QList<BaseItemKind> m_excludeItemTypes;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<BaseItemKind> m_includeItemTypes;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_nameLessThan;
	QString m_nameStartsWith;
	QString m_nameStartsWithOrGreater;
	QString m_parentId;
	QString m_searchTerm;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class GetMusicVideoRemoteSearchResultsParams {
public:

	/**
	 * @brief Remote search query.	
	 */
	const QSharedPointer<MusicVideoInfoRemoteSearchQuery> &body() const;
	void setBody(QSharedPointer<MusicVideoInfoRemoteSearchQuery> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<MusicVideoInfoRemoteSearchQuery> m_body;

};

class GetNamedConfigurationParams {
public:

	/**
	 * @brief Configuration key.	
	 */
	const QString &key() const;
	void setKey(QString newKey);

	
private:
	// Required path parameters
	QString m_key;
	
	// Required query parameters

	// Optional query parameters


};

class GetNetworkSharesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetNextUpParams {
public:

	/**
	 * @brief Whether to disable sending the first episode in a series as next up.	
	 */
	const bool &disableFirstEpisode() const;
	void setDisableFirstEpisode(bool newDisableFirstEpisode);
	bool disableFirstEpisodeNull() const;
	void setDisableFirstEpisodeNull();
	
	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Whether to include resumable episodes in next up results.	
	 */
	const bool &enableResumable() const;
	void setEnableResumable(bool newEnableResumable);
	bool enableResumableNull() const;
	void setEnableResumableNull();
	
	
	/**
	 * @brief Whether to include watched episodes in next up results.	
	 */
	const bool &enableRewatching() const;
	void setEnableRewatching(bool newEnableRewatching);
	bool enableRewatchingNull() const;
	void setEnableRewatchingNull();
	
	
	/**
	 * @brief Whether to enable the total records count. Defaults to true.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Starting date of shows to show in Next Up section.	
	 */
	const QDateTime &nextUpDateCutoff() const;
	void setNextUpDateCutoff(QDateTime newNextUpDateCutoff);
	bool nextUpDateCutoffNull() const;
	void setNextUpDateCutoffNull();
	
	
	/**
	 * @brief Optional. Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Optional. Filter by series id.	
	 */
	const QString &seriesId() const;
	void setSeriesId(QString newSeriesId);
	bool seriesIdNull() const;
	void setSeriesIdNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief The user id of the user to get the next up episodes for.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_disableFirstEpisode = std::nullopt;
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableResumable = std::nullopt;
	std::optional<bool> m_enableRewatching = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QDateTime m_nextUpDateCutoff;
	QString m_parentId;
	QString m_seriesId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class GetPackageInfoParams {
public:

	/**
	 * @brief The name of the package.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief The GUID of the associated assembly.	
	 */
	const QString &assemblyGuid() const;
	void setAssemblyGuid(QString newAssemblyGuid);
	bool assemblyGuidNull() const;
	void setAssemblyGuidNull();
	
	
private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_assemblyGuid;


};

class GetPackagesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetParentPathParams {
public:

	/**
	 * @brief The path.	
	 */
	const QString &path() const;
	void setPath(QString newPath);

	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_path;

	// Optional query parameters


};

class GetParentalRatingsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetPasswordResetProvidersParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetPersonParams {
public:

	/**
	 * @brief Person name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetPersonImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Person name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetPersonImageByIndexParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Person name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetPersonRemoteSearchResultsParams {
public:

	/**
	 * @brief Remote search query.	
	 */
	const QSharedPointer<PersonLookupInfoRemoteSearchQuery> &body() const;
	void setBody(QSharedPointer<PersonLookupInfoRemoteSearchQuery> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<PersonLookupInfoRemoteSearchQuery> m_body;

};

class GetPersonsParams {
public:

	/**
	 * @brief Optional. If specified, person results will be filtered on items related to said persons.	
	 */
	const QString &appearsInItemId() const;
	void setAppearsInItemId(QString newAppearsInItemId);
	bool appearsInItemIdNull() const;
	void setAppearsInItemIdNull();
	
	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional, include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional, include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. If specified results will be filtered to exclude those containing the specified PersonType. Allows multiple, comma-delimited.	
	 */
	const QStringList &excludePersonTypes() const;
	void setExcludePersonTypes(QStringList newExcludePersonTypes);
	bool excludePersonTypesNull() const;
	void setExcludePersonTypesNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. Specify additional filters to apply.	
	 */
	const QList<ItemFilter> &filters() const;
	void setFilters(QList<ItemFilter> newFilters);
	bool filtersNull() const;
	void setFiltersNull();
	
	
	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional filter by items that are marked as favorite, or not. userId is required.	
	 */
	const bool &isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	bool isFavoriteNull() const;
	void setIsFavoriteNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. If specified results will be filtered to include only those containing the specified PersonType. Allows multiple, comma-delimited.	
	 */
	const QStringList &personTypes() const;
	void setPersonTypes(QStringList newPersonTypes);
	bool personTypesNull() const;
	void setPersonTypesNull();
	
	
	/**
	 * @brief The search term.	
	 */
	const QString &searchTerm() const;
	void setSearchTerm(QString newSearchTerm);
	bool searchTermNull() const;
	void setSearchTermNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_appearsInItemId;
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QStringList m_excludePersonTypes;
	QList<ItemFields> m_fields;
	QList<ItemFilter> m_filters;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QStringList m_personTypes;
	QString m_searchTerm;
	QString m_userId;


};

class GetPhysicalPathsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetPingSystemParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetPlaybackInfoParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetPlaylistParams {
public:

	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
private:
	// Required path parameters
	QString m_playlistId;
	
	// Required query parameters

	// Optional query parameters


};

class GetPlaylistItemsParams {
public:

	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_playlistId;
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class GetPlaylistUserParams {
public:

	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);

	
private:
	// Required path parameters
	QString m_playlistId;
	QString m_userId;
	
	// Required query parameters

	// Optional query parameters


};

class GetPlaylistUsersParams {
public:

	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
private:
	// Required path parameters
	QString m_playlistId;
	
	// Required query parameters

	// Optional query parameters


};

class GetPluginConfigurationParams {
public:

	/**
	 * @brief Plugin id.	
	 */
	const QString &pluginId() const;
	void setPluginId(QString newPluginId);

	
private:
	// Required path parameters
	QString m_pluginId;
	
	// Required query parameters

	// Optional query parameters


};

class GetPluginImageParams {
public:

	/**
	 * @brief Plugin id.	
	 */
	const QString &pluginId() const;
	void setPluginId(QString newPluginId);

	
	/**
	 * @brief Plugin version.	
	 */
	const QString &version() const;
	void setVersion(QString newVersion);

	
private:
	// Required path parameters
	QString m_pluginId;
	QString m_version;
	
	// Required query parameters

	// Optional query parameters


};

class GetPluginManifestParams {
public:

	/**
	 * @brief Plugin id.	
	 */
	const QString &pluginId() const;
	void setPluginId(QString newPluginId);

	
private:
	// Required path parameters
	QString m_pluginId;
	
	// Required query parameters

	// Optional query parameters


};

class GetPluginsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetPostedPlaybackInfoParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether to allow to copy the audio stream. Default: true.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether to allow to copy the video stream. Default: true.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief The audio stream index.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Whether to auto open the livestream.	
	 */
	const bool &autoOpenLiveStream() const;
	void setAutoOpenLiveStream(bool newAutoOpenLiveStream);
	bool autoOpenLiveStreamNull() const;
	void setAutoOpenLiveStreamNull();
	
	
	/**
	 * @brief Whether to enable direct play. Default: true.	
	 */
	const bool &enableDirectPlay() const;
	void setEnableDirectPlay(bool newEnableDirectPlay);
	bool enableDirectPlayNull() const;
	void setEnableDirectPlayNull();
	
	
	/**
	 * @brief Whether to enable direct stream. Default: true.	
	 */
	const bool &enableDirectStream() const;
	void setEnableDirectStream(bool newEnableDirectStream);
	bool enableDirectStreamNull() const;
	void setEnableDirectStreamNull();
	
	
	/**
	 * @brief Whether to enable transcoding. Default: true.	
	 */
	const bool &enableTranscoding() const;
	void setEnableTranscoding(bool newEnableTranscoding);
	bool enableTranscodingNull() const;
	void setEnableTranscodingNull();
	
	
	/**
	 * @brief The livestream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief The maximum number of audio channels.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief The maximum streaming bitrate.	
	 */
	const qint32 &maxStreamingBitrate() const;
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	bool maxStreamingBitrateNull() const;
	void setMaxStreamingBitrateNull();
	
	
	/**
	 * @brief The media source id.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The start time in ticks.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief The subtitle stream index.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief The playback info.	
	 */
	const QSharedPointer<PlaybackInfoDto> &body() const;
	void setBody(QSharedPointer<PlaybackInfoDto> newBody);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_autoOpenLiveStream = std::nullopt;
	std::optional<bool> m_enableDirectPlay = std::nullopt;
	std::optional<bool> m_enableDirectStream = std::nullopt;
	std::optional<bool> m_enableTranscoding = std::nullopt;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_userId;

	// Body parameters
	QSharedPointer<PlaybackInfoDto> m_body;

};

class GetProgramParams {
public:

	/**
	 * @brief Program id.	
	 */
	const QString &programId() const;
	void setProgramId(QString newProgramId);

	
	/**
	 * @brief Optional. Attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_programId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetProgramsParams {
public:

	/**
	 * @brief Request body.	
	 */
	const QSharedPointer<GetProgramsDto> &body() const;
	void setBody(QSharedPointer<GetProgramsDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<GetProgramsDto> m_body;

};

class GetPublicSystemInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetPublicUsersParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetQueryFiltersParams {
public:

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief Optional. Is item airing.	
	 */
	const bool &isAiring() const;
	void setIsAiring(bool newIsAiring);
	bool isAiringNull() const;
	void setIsAiringNull();
	
	
	/**
	 * @brief Optional. Is item kids.	
	 */
	const bool &isKids() const;
	void setIsKids(bool newIsKids);
	bool isKidsNull() const;
	void setIsKidsNull();
	
	
	/**
	 * @brief Optional. Is item movie.	
	 */
	const bool &isMovie() const;
	void setIsMovie(bool newIsMovie);
	bool isMovieNull() const;
	void setIsMovieNull();
	
	
	/**
	 * @brief Optional. Is item news.	
	 */
	const bool &isNews() const;
	void setIsNews(bool newIsNews);
	bool isNewsNull() const;
	void setIsNewsNull();
	
	
	/**
	 * @brief Optional. Is item series.	
	 */
	const bool &isSeries() const;
	void setIsSeries(bool newIsSeries);
	bool isSeriesNull() const;
	void setIsSeriesNull();
	
	
	/**
	 * @brief Optional. Is item sports.	
	 */
	const bool &isSports() const;
	void setIsSports(bool newIsSports);
	bool isSportsNull() const;
	void setIsSportsNull();
	
	
	/**
	 * @brief Optional. Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Optional. Search recursive.	
	 */
	const bool &recursive() const;
	void setRecursive(bool newRecursive);
	bool recursiveNull() const;
	void setRecursiveNull();
	
	
	/**
	 * @brief Optional. User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<BaseItemKind> m_includeItemTypes;
	std::optional<bool> m_isAiring = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	QString m_parentId;
	std::optional<bool> m_recursive = std::nullopt;
	QString m_userId;


};

class GetQueryFiltersLegacyParams {
public:

	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief Optional. Filter by MediaType. Allows multiple, comma delimited.	
	 */
	const QList<MediaType> &mediaTypes() const;
	void setMediaTypes(QList<MediaType> newMediaTypes);
	bool mediaTypesNull() const;
	void setMediaTypesNull();
	
	
	/**
	 * @brief Optional. Parent id.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Optional. User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<BaseItemKind> m_includeItemTypes;
	QList<MediaType> m_mediaTypes;
	QString m_parentId;
	QString m_userId;


};

class GetQuickConnectEnabledParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetQuickConnectStateParams {
public:

	/**
	 * @brief Secret previously returned from the Initiate endpoint.	
	 */
	const QString &secret() const;
	void setSecret(QString newSecret);

	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_secret;

	// Optional query parameters


};

class GetRecommendedProgramsParams {
public:

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Retrieve total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional. include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief The genres to return guide information for.	
	 */
	const QStringList &genreIds() const;
	void setGenreIds(QStringList newGenreIds);
	bool genreIdsNull() const;
	void setGenreIdsNull();
	
	
	/**
	 * @brief Optional. Filter by programs that have completed airing, or not.	
	 */
	const bool &hasAired() const;
	void setHasAired(bool newHasAired);
	bool hasAiredNull() const;
	void setHasAiredNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. Filter by programs that are currently airing, or not.	
	 */
	const bool &isAiring() const;
	void setIsAiring(bool newIsAiring);
	bool isAiringNull() const;
	void setIsAiringNull();
	
	
	/**
	 * @brief Optional. Filter for kids.	
	 */
	const bool &isKids() const;
	void setIsKids(bool newIsKids);
	bool isKidsNull() const;
	void setIsKidsNull();
	
	
	/**
	 * @brief Optional. Filter for movies.	
	 */
	const bool &isMovie() const;
	void setIsMovie(bool newIsMovie);
	bool isMovieNull() const;
	void setIsMovieNull();
	
	
	/**
	 * @brief Optional. Filter for news.	
	 */
	const bool &isNews() const;
	void setIsNews(bool newIsNews);
	bool isNewsNull() const;
	void setIsNewsNull();
	
	
	/**
	 * @brief Optional. Filter for series.	
	 */
	const bool &isSeries() const;
	void setIsSeries(bool newIsSeries);
	bool isSeriesNull() const;
	void setIsSeriesNull();
	
	
	/**
	 * @brief Optional. Filter for sports.	
	 */
	const bool &isSports() const;
	void setIsSports(bool newIsSports);
	bool isSportsNull() const;
	void setIsSportsNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. filter by user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	QStringList m_genreIds;
	std::optional<bool> m_hasAired = std::nullopt;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<bool> m_isAiring = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetRecordingParams {
public:

	/**
	 * @brief Recording id.	
	 */
	const QString &recordingId() const;
	void setRecordingId(QString newRecordingId);

	
	/**
	 * @brief Optional. Attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_recordingId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetRecordingFoldersParams {
public:

	/**
	 * @brief Optional. Filter by user and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetRecordingGroupParams {
public:

	/**
	 * @brief Group id.	
	 */
	const QString &groupId() const;
	void setGroupId(QString newGroupId);

	
private:
	// Required path parameters
	QString m_groupId;
	
	// Required query parameters

	// Optional query parameters


};

class GetRecordingGroupsParams {
public:

	/**
	 * @brief Optional. Filter by user and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetRecordingsParams {
public:

	/**
	 * @brief Optional. Filter by channel id.	
	 */
	const QString &channelId() const;
	void setChannelId(QString newChannelId);
	bool channelIdNull() const;
	void setChannelIdNull();
	
	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Return total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. Filter by recordings that are in progress, or not.	
	 */
	const bool &isInProgress() const;
	void setIsInProgress(bool newIsInProgress);
	bool isInProgressNull() const;
	void setIsInProgressNull();
	
	
	/**
	 * @brief Optional. Filter for kids.	
	 */
	const bool &isKids() const;
	void setIsKids(bool newIsKids);
	bool isKidsNull() const;
	void setIsKidsNull();
	
	
	/**
	 * @brief Optional. Filter for is library item.	
	 */
	const bool &isLibraryItem() const;
	void setIsLibraryItem(bool newIsLibraryItem);
	bool isLibraryItemNull() const;
	void setIsLibraryItemNull();
	
	
	/**
	 * @brief Optional. Filter for movies.	
	 */
	const bool &isMovie() const;
	void setIsMovie(bool newIsMovie);
	bool isMovieNull() const;
	void setIsMovieNull();
	
	
	/**
	 * @brief Optional. Filter for news.	
	 */
	const bool &isNews() const;
	void setIsNews(bool newIsNews);
	bool isNewsNull() const;
	void setIsNewsNull();
	
	
	/**
	 * @brief Optional. Filter for series.	
	 */
	const bool &isSeries() const;
	void setIsSeries(bool newIsSeries);
	bool isSeriesNull() const;
	void setIsSeriesNull();
	
	
	/**
	 * @brief Optional. Filter for sports.	
	 */
	const bool &isSports() const;
	void setIsSports(bool newIsSports);
	bool isSportsNull() const;
	void setIsSportsNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by recordings belonging to a series timer.	
	 */
	const QString &seriesTimerId() const;
	void setSeriesTimerId(QString newSeriesTimerId);
	bool seriesTimerIdNull() const;
	void setSeriesTimerIdNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. Filter by recording status.	
	 */
	const RecordingStatus &status() const;
	void setStatus(RecordingStatus newStatus);
	bool statusNull() const;
	void setStatusNull();
	
	
	/**
	 * @brief Optional. Filter by user and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_channelId;
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<bool> m_isInProgress = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isLibraryItem = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_seriesTimerId;
	std::optional<qint32> m_startIndex = std::nullopt;
	RecordingStatus m_status;
	QString m_userId;


};

class GetRecordingsSeriesParams {
public:

	/**
	 * @brief Optional. Filter by channel id.	
	 */
	const QString &channelId() const;
	void setChannelId(QString newChannelId);
	bool channelIdNull() const;
	void setChannelIdNull();
	
	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Return total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. Filter by recording group.	
	 */
	const QString &groupId() const;
	void setGroupId(QString newGroupId);
	bool groupIdNull() const;
	void setGroupIdNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. Filter by recordings that are in progress, or not.	
	 */
	const bool &isInProgress() const;
	void setIsInProgress(bool newIsInProgress);
	bool isInProgressNull() const;
	void setIsInProgressNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by recordings belonging to a series timer.	
	 */
	const QString &seriesTimerId() const;
	void setSeriesTimerId(QString newSeriesTimerId);
	bool seriesTimerIdNull() const;
	void setSeriesTimerIdNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. Filter by recording status.	
	 */
	const RecordingStatus &status() const;
	void setStatus(RecordingStatus newStatus);
	bool statusNull() const;
	void setStatusNull();
	
	
	/**
	 * @brief Optional. Filter by user and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_channelId;
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	QString m_groupId;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<bool> m_isInProgress = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_seriesTimerId;
	std::optional<qint32> m_startIndex = std::nullopt;
	RecordingStatus m_status;
	QString m_userId;


};

class GetRemoteImageProvidersParams {
public:

	/**
	 * @brief Item Id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class GetRemoteImagesParams {
public:

	/**
	 * @brief Item Id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Include all languages.	
	 */
	const bool &includeAllLanguages() const;
	void setIncludeAllLanguages(bool newIncludeAllLanguages);
	bool includeAllLanguagesNull() const;
	void setIncludeAllLanguagesNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. The image provider to use.	
	 */
	const QString &providerName() const;
	void setProviderName(QString newProviderName);
	bool providerNameNull() const;
	void setProviderNameNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief The image type.	
	 */
	const ImageType &type() const;
	void setType(ImageType newType);
	bool typeNull() const;
	void setTypeNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_includeAllLanguages = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_providerName;
	std::optional<qint32> m_startIndex = std::nullopt;
	ImageType m_type;


};

class GetRemoteLyricsParams {
public:

	/**
	 * @brief The remote provider item id.	
	 */
	const QString &lyricId() const;
	void setLyricId(QString newLyricId);

	
private:
	// Required path parameters
	QString m_lyricId;
	
	// Required query parameters

	// Optional query parameters


};

class GetRemoteSubtitlesParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &subtitleId() const;
	void setSubtitleId(QString newSubtitleId);

	
private:
	// Required path parameters
	QString m_subtitleId;
	
	// Required query parameters

	// Optional query parameters


};

class GetRepositoriesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetResumeItemsParams {
public:

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Enable the total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Whether to exclude the currently active sessions.	
	 */
	const bool &excludeActiveSessions() const;
	void setExcludeActiveSessions(bool newExcludeActiveSessions);
	bool excludeActiveSessionsNull() const;
	void setExcludeActiveSessionsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &excludeItemTypes() const;
	void setExcludeItemTypes(QList<BaseItemKind> newExcludeItemTypes);
	bool excludeItemTypesNull() const;
	void setExcludeItemTypesNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on the item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief The item limit.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by MediaType. Allows multiple, comma delimited.	
	 */
	const QList<MediaType> &mediaTypes() const;
	void setMediaTypes(QList<MediaType> newMediaTypes);
	bool mediaTypesNull() const;
	void setMediaTypesNull();
	
	
	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief The search term.	
	 */
	const QString &searchTerm() const;
	void setSearchTerm(QString newSearchTerm);
	bool searchTermNull() const;
	void setSearchTermNull();
	
	
	/**
	 * @brief The start index.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	std::optional<bool> m_excludeActiveSessions = std::nullopt;
	QList<BaseItemKind> m_excludeItemTypes;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<BaseItemKind> m_includeItemTypes;
	std::optional<qint32> m_limit = std::nullopt;
	QList<MediaType> m_mediaTypes;
	QString m_parentId;
	QString m_searchTerm;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class GetRootFolderParams {
public:

	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetSchedulesDirectCountriesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetSearchHintsParams {
public:

	/**
	 * @brief The search term to filter on.	
	 */
	const QString &searchTerm() const;
	void setSearchTerm(QString newSearchTerm);

	
	/**
	 * @brief If specified, results with these item types are filtered out. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &excludeItemTypes() const;
	void setExcludeItemTypes(QList<BaseItemKind> newExcludeItemTypes);
	bool excludeItemTypesNull() const;
	void setExcludeItemTypesNull();
	
	
	/**
	 * @brief Optional filter whether to include artists.	
	 */
	const bool &includeArtists() const;
	void setIncludeArtists(bool newIncludeArtists);
	bool includeArtistsNull() const;
	void setIncludeArtistsNull();
	
	
	/**
	 * @brief Optional filter whether to include genres.	
	 */
	const bool &includeGenres() const;
	void setIncludeGenres(bool newIncludeGenres);
	bool includeGenresNull() const;
	void setIncludeGenresNull();
	
	
	/**
	 * @brief If specified, only results with the specified item types are returned. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief Optional filter whether to include media.	
	 */
	const bool &includeMedia() const;
	void setIncludeMedia(bool newIncludeMedia);
	bool includeMediaNull() const;
	void setIncludeMediaNull();
	
	
	/**
	 * @brief Optional filter whether to include people.	
	 */
	const bool &includePeople() const;
	void setIncludePeople(bool newIncludePeople);
	bool includePeopleNull() const;
	void setIncludePeopleNull();
	
	
	/**
	 * @brief Optional filter whether to include studios.	
	 */
	const bool &includeStudios() const;
	void setIncludeStudios(bool newIncludeStudios);
	bool includeStudiosNull() const;
	void setIncludeStudiosNull();
	
	
	/**
	 * @brief Optional filter for kids.	
	 */
	const bool &isKids() const;
	void setIsKids(bool newIsKids);
	bool isKidsNull() const;
	void setIsKidsNull();
	
	
	/**
	 * @brief Optional filter for movies.	
	 */
	const bool &isMovie() const;
	void setIsMovie(bool newIsMovie);
	bool isMovieNull() const;
	void setIsMovieNull();
	
	
	/**
	 * @brief Optional filter for news.	
	 */
	const bool &isNews() const;
	void setIsNews(bool newIsNews);
	bool isNewsNull() const;
	void setIsNewsNull();
	
	
	/**
	 * @brief Optional filter for series.	
	 */
	const bool &isSeries() const;
	void setIsSeries(bool newIsSeries);
	bool isSeriesNull() const;
	void setIsSeriesNull();
	
	
	/**
	 * @brief Optional filter for sports.	
	 */
	const bool &isSports() const;
	void setIsSports(bool newIsSports);
	bool isSportsNull() const;
	void setIsSportsNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief If specified, only results with the specified media types are returned. This allows multiple, comma delimited.	
	 */
	const QList<MediaType> &mediaTypes() const;
	void setMediaTypes(QList<MediaType> newMediaTypes);
	bool mediaTypesNull() const;
	void setMediaTypesNull();
	
	
	/**
	 * @brief If specified, only children of the parent are returned.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. Supply a user id to search within a user's library or omit to search all.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_searchTerm;

	// Optional query parameters
	QList<BaseItemKind> m_excludeItemTypes;
	std::optional<bool> m_includeArtists = std::nullopt;
	std::optional<bool> m_includeGenres = std::nullopt;
	QList<BaseItemKind> m_includeItemTypes;
	std::optional<bool> m_includeMedia = std::nullopt;
	std::optional<bool> m_includePeople = std::nullopt;
	std::optional<bool> m_includeStudios = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QList<MediaType> m_mediaTypes;
	QString m_parentId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class GetSeasonsParams {
public:

	/**
	 * @brief The series id.	
	 */
	const QString &seriesId() const;
	void setSeriesId(QString newSeriesId);

	
	/**
	 * @brief Optional. Return items that are siblings of a supplied item.	
	 */
	const QString &adjacentTo() const;
	void setAdjacentTo(QString newAdjacentTo);
	bool adjacentToNull() const;
	void setAdjacentToNull();
	
	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. Filter by items that are missing episodes or not.	
	 */
	const bool &isMissing() const;
	void setIsMissing(bool newIsMissing);
	bool isMissingNull() const;
	void setIsMissingNull();
	
	
	/**
	 * @brief Optional. Filter by special season.	
	 */
	const bool &isSpecialSeason() const;
	void setIsSpecialSeason(bool newIsSpecialSeason);
	bool isSpecialSeasonNull() const;
	void setIsSpecialSeasonNull();
	
	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_seriesId;
	
	// Required query parameters

	// Optional query parameters
	QString m_adjacentTo;
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<bool> m_isMissing = std::nullopt;
	std::optional<bool> m_isSpecialSeason = std::nullopt;
	QString m_userId;


};

class GetSeriesRemoteSearchResultsParams {
public:

	/**
	 * @brief Remote search query.	
	 */
	const QSharedPointer<SeriesInfoRemoteSearchQuery> &body() const;
	void setBody(QSharedPointer<SeriesInfoRemoteSearchQuery> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<SeriesInfoRemoteSearchQuery> m_body;

};

class GetSeriesTimerParams {
public:

	/**
	 * @brief Timer id.	
	 */
	const QString &timerId() const;
	void setTimerId(QString newTimerId);

	
private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters

	// Optional query parameters


};

class GetSeriesTimersParams {
public:

	/**
	 * @brief Optional. Sort by SortName or Priority.	
	 */
	const QString &sortBy() const;
	void setSortBy(QString newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Optional. Sort in Ascending or Descending order.	
	 */
	const SortOrder &sortOrder() const;
	void setSortOrder(SortOrder newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_sortBy;
	SortOrder m_sortOrder;


};

class GetServerLogsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetSessionsParams {
public:

	/**
	 * @brief Optional. Filter by sessions that were active in the last n seconds.	
	 */
	const qint32 &activeWithinSeconds() const;
	void setActiveWithinSeconds(qint32 newActiveWithinSeconds);
	bool activeWithinSecondsNull() const;
	void setActiveWithinSecondsNull();
	
	
	/**
	 * @brief Filter by sessions that a given user is allowed to remote control.	
	 */
	const QString &controllableByUserId() const;
	void setControllableByUserId(QString newControllableByUserId);
	bool controllableByUserIdNull() const;
	void setControllableByUserIdNull();
	
	
	/**
	 * @brief Filter by device Id.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<qint32> m_activeWithinSeconds = std::nullopt;
	QString m_controllableByUserId;
	QString m_deviceId;


};

class GetSimilarAlbumsParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Exclude artist ids.	
	 */
	const QStringList &excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds);
	bool excludeArtistIdsNull() const;
	void setExcludeArtistIdsNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QStringList m_excludeArtistIds;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetSimilarArtistsParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Exclude artist ids.	
	 */
	const QStringList &excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds);
	bool excludeArtistIdsNull() const;
	void setExcludeArtistIdsNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QStringList m_excludeArtistIds;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetSimilarItemsParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Exclude artist ids.	
	 */
	const QStringList &excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds);
	bool excludeArtistIdsNull() const;
	void setExcludeArtistIdsNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QStringList m_excludeArtistIds;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetSimilarMoviesParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Exclude artist ids.	
	 */
	const QStringList &excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds);
	bool excludeArtistIdsNull() const;
	void setExcludeArtistIdsNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QStringList m_excludeArtistIds;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetSimilarShowsParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Exclude artist ids.	
	 */
	const QStringList &excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds);
	bool excludeArtistIdsNull() const;
	void setExcludeArtistIdsNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QStringList m_excludeArtistIds;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetSimilarTrailersParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Exclude artist ids.	
	 */
	const QStringList &excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds);
	bool excludeArtistIdsNull() const;
	void setExcludeArtistIdsNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines, TrailerUrls.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QStringList m_excludeArtistIds;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_userId;


};

class GetSpecialFeaturesParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetSplashscreenParams {
public:

	/**
	 * @brief Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Quality setting, from 0-100.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_width = std::nullopt;


};

class GetStartupConfigurationParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetStudioParams {
public:

	/**
	 * @brief Studio name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetStudioImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Studio name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetStudioImageByIndexParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Studio name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetStudiosParams {
public:

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional, include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional, include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered out based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &excludeItemTypes() const;
	void setExcludeItemTypes(QList<BaseItemKind> newExcludeItemTypes);
	bool excludeItemTypesNull() const;
	void setExcludeItemTypesNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	const bool &isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	bool isFavoriteNull() const;
	void setIsFavoriteNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	const QString &nameLessThan() const;
	void setNameLessThan(QString newNameLessThan);
	bool nameLessThanNull() const;
	void setNameLessThanNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	const QString &nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith);
	bool nameStartsWithNull() const;
	void setNameStartsWithNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	const QString &nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater);
	bool nameStartsWithOrGreaterNull() const;
	void setNameStartsWithOrGreaterNull();
	
	
	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Optional. Search term.	
	 */
	const QString &searchTerm() const;
	void setSearchTerm(QString newSearchTerm);
	bool searchTermNull() const;
	void setSearchTermNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<BaseItemKind> m_excludeItemTypes;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<BaseItemKind> m_includeItemTypes;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_nameLessThan;
	QString m_nameStartsWith;
	QString m_nameStartsWithOrGreater;
	QString m_parentId;
	QString m_searchTerm;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class GetSubtitleParams {
public:

	/**
	 * @brief The (route) format of the returned subtitle.	
	 */
	const QString &routeFormat() const;
	void setRouteFormat(QString newRouteFormat);

	
	/**
	 * @brief The (route) subtitle stream index.	
	 */
	const qint32 &routeIndex() const;
	void setRouteIndex(qint32 newRouteIndex);

	
	/**
	 * @brief The (route) item id.	
	 */
	const QString &routeItemId() const;
	void setRouteItemId(QString newRouteItemId);

	
	/**
	 * @brief The (route) media source id.	
	 */
	const QString &routeMediaSourceId() const;
	void setRouteMediaSourceId(QString newRouteMediaSourceId);

	
	/**
	 * @brief Optional. Whether to add a VTT time map.	
	 */
	const bool &addVttTimeMap() const;
	void setAddVttTimeMap(bool newAddVttTimeMap);
	bool addVttTimeMapNull() const;
	void setAddVttTimeMapNull();
	
	
	/**
	 * @brief Optional. Whether to copy the timestamps.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The end position of the subtitle in ticks.	
	 */
	const qint64 &endPositionTicks() const;
	void setEndPositionTicks(qint64 newEndPositionTicks);
	bool endPositionTicksNull() const;
	void setEndPositionTicksNull();
	
	
	/**
	 * @brief The format of the returned subtitle.	
	 */
	const QString &format() const;
	void setFormat(QString newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The subtitle stream index.	
	 */
	const qint32 &index() const;
	void setIndex(qint32 newIndex);
	bool indexNull() const;
	void setIndexNull();
	
	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);
	bool itemIdNull() const;
	void setItemIdNull();
	
	
	/**
	 * @brief The media source id.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The start position of the subtitle in ticks.	
	 */
	const qint64 &startPositionTicks() const;
	void setStartPositionTicks(qint64 newStartPositionTicks);
	bool startPositionTicksNull() const;
	void setStartPositionTicksNull();
	
	
private:
	// Required path parameters
	QString m_routeFormat;
	qint32 m_routeIndex;
	QString m_routeItemId;
	QString m_routeMediaSourceId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_addVttTimeMap = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint64> m_endPositionTicks = std::nullopt;
	QString m_format;
	std::optional<qint32> m_index = std::nullopt;
	QString m_itemId;
	QString m_mediaSourceId;
	std::optional<qint64> m_startPositionTicks = std::nullopt;


};

class GetSubtitlePlaylistParams {
public:

	/**
	 * @brief The subtitle stream index.	
	 */
	const qint32 &index() const;
	void setIndex(qint32 newIndex);

	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The media source id.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);

	
	/**
	 * @brief The subtitle segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);

	
private:
	// Required path parameters
	qint32 m_index;
	QString m_itemId;
	QString m_mediaSourceId;
	
	// Required query parameters
	qint32 m_segmentLength;

	// Optional query parameters


};

class GetSubtitleWithTicksParams {
public:

	/**
	 * @brief The (route) format of the returned subtitle.	
	 */
	const QString &routeFormat() const;
	void setRouteFormat(QString newRouteFormat);

	
	/**
	 * @brief The (route) subtitle stream index.	
	 */
	const qint32 &routeIndex() const;
	void setRouteIndex(qint32 newRouteIndex);

	
	/**
	 * @brief The (route) item id.	
	 */
	const QString &routeItemId() const;
	void setRouteItemId(QString newRouteItemId);

	
	/**
	 * @brief The (route) media source id.	
	 */
	const QString &routeMediaSourceId() const;
	void setRouteMediaSourceId(QString newRouteMediaSourceId);

	
	/**
	 * @brief The (route) start position of the subtitle in ticks.	
	 */
	const qint64 &routeStartPositionTicks() const;
	void setRouteStartPositionTicks(qint64 newRouteStartPositionTicks);

	
	/**
	 * @brief Optional. Whether to add a VTT time map.	
	 */
	const bool &addVttTimeMap() const;
	void setAddVttTimeMap(bool newAddVttTimeMap);
	bool addVttTimeMapNull() const;
	void setAddVttTimeMapNull();
	
	
	/**
	 * @brief Optional. Whether to copy the timestamps.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The end position of the subtitle in ticks.	
	 */
	const qint64 &endPositionTicks() const;
	void setEndPositionTicks(qint64 newEndPositionTicks);
	bool endPositionTicksNull() const;
	void setEndPositionTicksNull();
	
	
	/**
	 * @brief The format of the returned subtitle.	
	 */
	const QString &format() const;
	void setFormat(QString newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The subtitle stream index.	
	 */
	const qint32 &index() const;
	void setIndex(qint32 newIndex);
	bool indexNull() const;
	void setIndexNull();
	
	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);
	bool itemIdNull() const;
	void setItemIdNull();
	
	
	/**
	 * @brief The media source id.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The start position of the subtitle in ticks.	
	 */
	const qint64 &startPositionTicks() const;
	void setStartPositionTicks(qint64 newStartPositionTicks);
	bool startPositionTicksNull() const;
	void setStartPositionTicksNull();
	
	
private:
	// Required path parameters
	QString m_routeFormat;
	qint32 m_routeIndex;
	QString m_routeItemId;
	QString m_routeMediaSourceId;
	qint64 m_routeStartPositionTicks;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_addVttTimeMap = std::nullopt;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint64> m_endPositionTicks = std::nullopt;
	QString m_format;
	std::optional<qint32> m_index = std::nullopt;
	QString m_itemId;
	QString m_mediaSourceId;
	std::optional<qint64> m_startPositionTicks = std::nullopt;


};

class GetSuggestionsParams {
public:

	/**
	 * @brief Whether to enable the total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional. The limit.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief The media types.	
	 */
	const QList<MediaType> &mediaType() const;
	void setMediaType(QList<MediaType> newMediaType);
	bool mediaTypeNull() const;
	void setMediaTypeNull();
	
	
	/**
	 * @brief Optional. The start index.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief The type.	
	 */
	const QList<BaseItemKind> &type() const;
	void setType(QList<BaseItemKind> newType);
	bool typeNull() const;
	void setTypeNull();
	
	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QList<MediaType> m_mediaType;
	std::optional<qint32> m_startIndex = std::nullopt;
	QList<BaseItemKind> m_type;
	QString m_userId;


};

class GetSystemInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetTaskParams {
public:

	/**
	 * @brief Task Id.	
	 */
	const QString &taskId() const;
	void setTaskId(QString newTaskId);

	
private:
	// Required path parameters
	QString m_taskId;
	
	// Required query parameters

	// Optional query parameters


};

class GetTasksParams {
public:

	/**
	 * @brief Optional filter tasks that are enabled, or not.	
	 */
	const bool &isEnabled() const;
	void setIsEnabled(bool newIsEnabled);
	bool isEnabledNull() const;
	void setIsEnabledNull();
	
	
	/**
	 * @brief Optional filter tasks that are hidden, or not.	
	 */
	const bool &isHidden() const;
	void setIsHidden(bool newIsHidden);
	bool isHiddenNull() const;
	void setIsHiddenNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_isEnabled = std::nullopt;
	std::optional<bool> m_isHidden = std::nullopt;


};

class GetThemeMediaParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Determines whether or not parent items should be searched for theme media.	
	 */
	const bool &inheritFromParent() const;
	void setInheritFromParent(bool newInheritFromParent);
	bool inheritFromParentNull() const;
	void setInheritFromParentNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Optional. Sort Order - Ascending, Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_inheritFromParent = std::nullopt;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	QString m_userId;


};

class GetThemeSongsParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Determines whether or not parent items should be searched for theme media.	
	 */
	const bool &inheritFromParent() const;
	void setInheritFromParent(bool newInheritFromParent);
	bool inheritFromParentNull() const;
	void setInheritFromParentNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Optional. Sort Order - Ascending, Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_inheritFromParent = std::nullopt;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	QString m_userId;


};

class GetThemeVideosParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Determines whether or not parent items should be searched for theme media.	
	 */
	const bool &inheritFromParent() const;
	void setInheritFromParent(bool newInheritFromParent);
	bool inheritFromParentNull() const;
	void setInheritFromParentNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Optional. Sort Order - Ascending, Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_inheritFromParent = std::nullopt;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	QString m_userId;


};

class GetTimerParams {
public:

	/**
	 * @brief Timer id.	
	 */
	const QString &timerId() const;
	void setTimerId(QString newTimerId);

	
private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters

	// Optional query parameters


};

class GetTimersParams {
public:

	/**
	 * @brief Optional. Filter by channel id.	
	 */
	const QString &channelId() const;
	void setChannelId(QString newChannelId);
	bool channelIdNull() const;
	void setChannelIdNull();
	
	
	/**
	 * @brief Optional. Filter by timers that are active.	
	 */
	const bool &isActive() const;
	void setIsActive(bool newIsActive);
	bool isActiveNull() const;
	void setIsActiveNull();
	
	
	/**
	 * @brief Optional. Filter by timers that are scheduled.	
	 */
	const bool &isScheduled() const;
	void setIsScheduled(bool newIsScheduled);
	bool isScheduledNull() const;
	void setIsScheduledNull();
	
	
	/**
	 * @brief Optional. Filter by timers belonging to a series timer.	
	 */
	const QString &seriesTimerId() const;
	void setSeriesTimerId(QString newSeriesTimerId);
	bool seriesTimerIdNull() const;
	void setSeriesTimerIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_channelId;
	std::optional<bool> m_isActive = std::nullopt;
	std::optional<bool> m_isScheduled = std::nullopt;
	QString m_seriesTimerId;


};

class GetTrailerRemoteSearchResultsParams {
public:

	/**
	 * @brief Remote search query.	
	 */
	const QSharedPointer<TrailerInfoRemoteSearchQuery> &body() const;
	void setBody(QSharedPointer<TrailerInfoRemoteSearchQuery> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<TrailerInfoRemoteSearchQuery> m_body;

};

class GetTrailersParams {
public:

	/**
	 * @brief Optional. Return items that are siblings of a supplied item.	
	 */
	const QString &adjacentTo() const;
	void setAdjacentTo(QString newAdjacentTo);
	bool adjacentToNull() const;
	void setAdjacentToNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified album artist id.	
	 */
	const QStringList &albumArtistIds() const;
	void setAlbumArtistIds(QStringList newAlbumArtistIds);
	bool albumArtistIdsNull() const;
	void setAlbumArtistIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on album id. This allows multiple, pipe delimited.	
	 */
	const QStringList &albumIds() const;
	void setAlbumIds(QStringList newAlbumIds);
	bool albumIdsNull() const;
	void setAlbumIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on album. This allows multiple, pipe delimited.	
	 */
	const QStringList &albums() const;
	void setAlbums(QStringList newAlbums);
	bool albumsNull() const;
	void setAlbumsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified artist id.	
	 */
	const QStringList &artistIds() const;
	void setArtistIds(QStringList newArtistIds);
	bool artistIdsNull() const;
	void setArtistIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on artists. This allows multiple, pipe delimited.	
	 */
	const QStringList &artists() const;
	void setArtists(QStringList newArtists);
	bool artistsNull() const;
	void setArtistsNull();
	
	
	/**
	 * @brief Whether or not to hide items behind their boxsets.	
	 */
	const bool &collapseBoxSetItems() const;
	void setCollapseBoxSetItems(bool newCollapseBoxSetItems);
	bool collapseBoxSetItemsNull() const;
	void setCollapseBoxSetItemsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified contributing artist id.	
	 */
	const QStringList &contributingArtistIds() const;
	void setContributingArtistIds(QStringList newContributingArtistIds);
	bool contributingArtistIdsNull() const;
	void setContributingArtistIdsNull();
	
	
	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional, include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Enable the total record count.	
	 */
	const bool &enableTotalRecordCount() const;
	void setEnableTotalRecordCount(bool newEnableTotalRecordCount);
	bool enableTotalRecordCountNull() const;
	void setEnableTotalRecordCountNull();
	
	
	/**
	 * @brief Optional, include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on artist id. This allows multiple, pipe delimited.	
	 */
	const QStringList &excludeArtistIds() const;
	void setExcludeArtistIds(QStringList newExcludeArtistIds);
	bool excludeArtistIdsNull() const;
	void setExcludeArtistIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered by excluding item ids. This allows multiple, comma delimited.	
	 */
	const QStringList &excludeItemIds() const;
	void setExcludeItemIds(QStringList newExcludeItemIds);
	bool excludeItemIdsNull() const;
	void setExcludeItemIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &excludeItemTypes() const;
	void setExcludeItemTypes(QList<BaseItemKind> newExcludeItemTypes);
	bool excludeItemTypesNull() const;
	void setExcludeItemTypesNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on the LocationType. This allows multiple, comma delimited.	
	 */
	const QList<LocationType> &excludeLocationTypes() const;
	void setExcludeLocationTypes(QList<LocationType> newExcludeLocationTypes);
	bool excludeLocationTypesNull() const;
	void setExcludeLocationTypesNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output. This allows multiple, comma delimited. Options: Budget, Chapters, DateCreated, Genres, HomePageUrl, IndexOptions, MediaStreams, Overview, ParentId, Path, People, ProviderIds, PrimaryImageAspectRatio, Revenue, SortName, Studios, Taglines.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. Specify additional filters to apply. This allows multiple, comma delimited. Options: IsFolder, IsNotFolder, IsUnplayed, IsPlayed, IsFavorite, IsResumable, Likes, Dislikes.	
	 */
	const QList<ItemFilter> &filters() const;
	void setFilters(QList<ItemFilter> newFilters);
	bool filtersNull() const;
	void setFiltersNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on genre id. This allows multiple, pipe delimited.	
	 */
	const QStringList &genreIds() const;
	void setGenreIds(QStringList newGenreIds);
	bool genreIdsNull() const;
	void setGenreIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on genre. This allows multiple, pipe delimited.	
	 */
	const QStringList &genres() const;
	void setGenres(QStringList newGenres);
	bool genresNull() const;
	void setGenresNull();
	
	
	/**
	 * @brief Optional filter by items that have an IMDb id or not.	
	 */
	const bool &hasImdbId() const;
	void setHasImdbId(bool newHasImdbId);
	bool hasImdbIdNull() const;
	void setHasImdbIdNull();
	
	
	/**
	 * @brief Optional filter by items that have official ratings.	
	 */
	const bool &hasOfficialRating() const;
	void setHasOfficialRating(bool newHasOfficialRating);
	bool hasOfficialRatingNull() const;
	void setHasOfficialRatingNull();
	
	
	/**
	 * @brief Optional filter by items that have an overview or not.	
	 */
	const bool &hasOverview() const;
	void setHasOverview(bool newHasOverview);
	bool hasOverviewNull() const;
	void setHasOverviewNull();
	
	
	/**
	 * @brief Optional filter by items that have or do not have a parental rating.	
	 */
	const bool &hasParentalRating() const;
	void setHasParentalRating(bool newHasParentalRating);
	bool hasParentalRatingNull() const;
	void setHasParentalRatingNull();
	
	
	/**
	 * @brief Optional filter by items with special features.	
	 */
	const bool &hasSpecialFeature() const;
	void setHasSpecialFeature(bool newHasSpecialFeature);
	bool hasSpecialFeatureNull() const;
	void setHasSpecialFeatureNull();
	
	
	/**
	 * @brief Optional filter by items with subtitles.	
	 */
	const bool &hasSubtitles() const;
	void setHasSubtitles(bool newHasSubtitles);
	bool hasSubtitlesNull() const;
	void setHasSubtitlesNull();
	
	
	/**
	 * @brief Optional filter by items with theme songs.	
	 */
	const bool &hasThemeSong() const;
	void setHasThemeSong(bool newHasThemeSong);
	bool hasThemeSongNull() const;
	void setHasThemeSongNull();
	
	
	/**
	 * @brief Optional filter by items with theme videos.	
	 */
	const bool &hasThemeVideo() const;
	void setHasThemeVideo(bool newHasThemeVideo);
	bool hasThemeVideoNull() const;
	void setHasThemeVideoNull();
	
	
	/**
	 * @brief Optional filter by items that have a TMDb id or not.	
	 */
	const bool &hasTmdbId() const;
	void setHasTmdbId(bool newHasTmdbId);
	bool hasTmdbIdNull() const;
	void setHasTmdbIdNull();
	
	
	/**
	 * @brief Optional filter by items with trailers.	
	 */
	const bool &hasTrailer() const;
	void setHasTrailer(bool newHasTrailer);
	bool hasTrailerNull() const;
	void setHasTrailerNull();
	
	
	/**
	 * @brief Optional filter by items that have a TVDb id or not.	
	 */
	const bool &hasTvdbId() const;
	void setHasTvdbId(bool newHasTvdbId);
	bool hasTvdbIdNull() const;
	void setHasTvdbIdNull();
	
	
	/**
	 * @brief Optional. If specific items are needed, specify a list of item id's to retrieve. This allows multiple, comma delimited.	
	 */
	const QStringList &ids() const;
	void setIds(QStringList newIds);
	bool idsNull() const;
	void setIdsNull();
	
	
	/**
	 * @brief Optional, the max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on those containing image types. This allows multiple, comma delimited.	
	 */
	const QList<ImageType> &imageTypes() const;
	void setImageTypes(QList<ImageType> newImageTypes);
	bool imageTypesNull() const;
	void setImageTypesNull();
	
	
	/**
	 * @brief Optional filter by items that are 3D, or not.	
	 */
	const bool &is3D() const;
	void setIs3D(bool newIs3D);
	bool is3DNull() const;
	void setIs3DNull();
	
	
	/**
	 * @brief Optional filter by items that are 4K or not.	
	 */
	const bool &is4K() const;
	void setIs4K(bool newIs4K);
	bool is4KNull() const;
	void setIs4KNull();
	
	
	/**
	 * @brief Optional filter by items that are marked as favorite, or not.	
	 */
	const bool &isFavorite() const;
	void setIsFavorite(bool newIsFavorite);
	bool isFavoriteNull() const;
	void setIsFavoriteNull();
	
	
	/**
	 * @brief Optional filter by items that are HD or not.	
	 */
	const bool &isHd() const;
	void setIsHd(bool newIsHd);
	bool isHdNull() const;
	void setIsHdNull();
	
	
	/**
	 * @brief Optional filter for live tv kids.	
	 */
	const bool &isKids() const;
	void setIsKids(bool newIsKids);
	bool isKidsNull() const;
	void setIsKidsNull();
	
	
	/**
	 * @brief Optional filter by items that are locked.	
	 */
	const bool &isLocked() const;
	void setIsLocked(bool newIsLocked);
	bool isLockedNull() const;
	void setIsLockedNull();
	
	
	/**
	 * @brief Optional filter by items that are missing episodes or not.	
	 */
	const bool &isMissing() const;
	void setIsMissing(bool newIsMissing);
	bool isMissingNull() const;
	void setIsMissingNull();
	
	
	/**
	 * @brief Optional filter for live tv movies.	
	 */
	const bool &isMovie() const;
	void setIsMovie(bool newIsMovie);
	bool isMovieNull() const;
	void setIsMovieNull();
	
	
	/**
	 * @brief Optional filter for live tv news.	
	 */
	const bool &isNews() const;
	void setIsNews(bool newIsNews);
	bool isNewsNull() const;
	void setIsNewsNull();
	
	
	/**
	 * @brief Optional filter by items that are placeholders.	
	 */
	const bool &isPlaceHolder() const;
	void setIsPlaceHolder(bool newIsPlaceHolder);
	bool isPlaceHolderNull() const;
	void setIsPlaceHolderNull();
	
	
	/**
	 * @brief Optional filter by items that are played, or not.	
	 */
	const bool &isPlayed() const;
	void setIsPlayed(bool newIsPlayed);
	bool isPlayedNull() const;
	void setIsPlayedNull();
	
	
	/**
	 * @brief Optional filter for live tv series.	
	 */
	const bool &isSeries() const;
	void setIsSeries(bool newIsSeries);
	bool isSeriesNull() const;
	void setIsSeriesNull();
	
	
	/**
	 * @brief Optional filter for live tv sports.	
	 */
	const bool &isSports() const;
	void setIsSports(bool newIsSports);
	bool isSportsNull() const;
	void setIsSportsNull();
	
	
	/**
	 * @brief Optional filter by items that are unaired episodes or not.	
	 */
	const bool &isUnaired() const;
	void setIsUnaired(bool newIsUnaired);
	bool isUnairedNull() const;
	void setIsUnairedNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on LocationType. This allows multiple, comma delimited.	
	 */
	const QList<LocationType> &locationTypes() const;
	void setLocationTypes(QList<LocationType> newLocationTypes);
	bool locationTypesNull() const;
	void setLocationTypesNull();
	
	
	/**
	 * @brief Optional. Filter by the maximum height of the item.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief Optional filter by maximum official rating (PG, PG-13, TV-MA, etc).	
	 */
	const QString &maxOfficialRating() const;
	void setMaxOfficialRating(QString newMaxOfficialRating);
	bool maxOfficialRatingNull() const;
	void setMaxOfficialRatingNull();
	
	
	/**
	 * @brief Optional. The maximum premiere date. Format = ISO.	
	 */
	const QDateTime &maxPremiereDate() const;
	void setMaxPremiereDate(QDateTime newMaxPremiereDate);
	bool maxPremiereDateNull() const;
	void setMaxPremiereDateNull();
	
	
	/**
	 * @brief Optional. Filter by the maximum width of the item.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional filter by MediaType. Allows multiple, comma delimited.	
	 */
	const QList<MediaType> &mediaTypes() const;
	void setMediaTypes(QList<MediaType> newMediaTypes);
	bool mediaTypesNull() const;
	void setMediaTypesNull();
	
	
	/**
	 * @brief Optional filter by minimum community rating.	
	 */
	const double &minCommunityRating() const;
	void setMinCommunityRating(double newMinCommunityRating);
	bool minCommunityRatingNull() const;
	void setMinCommunityRatingNull();
	
	
	/**
	 * @brief Optional filter by minimum critic rating.	
	 */
	const double &minCriticRating() const;
	void setMinCriticRating(double newMinCriticRating);
	bool minCriticRatingNull() const;
	void setMinCriticRatingNull();
	
	
	/**
	 * @brief Optional. The minimum last saved date. Format = ISO.	
	 */
	const QDateTime &minDateLastSaved() const;
	void setMinDateLastSaved(QDateTime newMinDateLastSaved);
	bool minDateLastSavedNull() const;
	void setMinDateLastSavedNull();
	
	
	/**
	 * @brief Optional. The minimum last saved date for the current user. Format = ISO.	
	 */
	const QDateTime &minDateLastSavedForUser() const;
	void setMinDateLastSavedForUser(QDateTime newMinDateLastSavedForUser);
	bool minDateLastSavedForUserNull() const;
	void setMinDateLastSavedForUserNull();
	
	
	/**
	 * @brief Optional. Filter by the minimum height of the item.	
	 */
	const qint32 &minHeight() const;
	void setMinHeight(qint32 newMinHeight);
	bool minHeightNull() const;
	void setMinHeightNull();
	
	
	/**
	 * @brief Optional filter by minimum official rating (PG, PG-13, TV-MA, etc).	
	 */
	const QString &minOfficialRating() const;
	void setMinOfficialRating(QString newMinOfficialRating);
	bool minOfficialRatingNull() const;
	void setMinOfficialRatingNull();
	
	
	/**
	 * @brief Optional. The minimum premiere date. Format = ISO.	
	 */
	const QDateTime &minPremiereDate() const;
	void setMinPremiereDate(QDateTime newMinPremiereDate);
	bool minPremiereDateNull() const;
	void setMinPremiereDateNull();
	
	
	/**
	 * @brief Optional. Filter by the minimum width of the item.	
	 */
	const qint32 &minWidth() const;
	void setMinWidth(qint32 newMinWidth);
	bool minWidthNull() const;
	void setMinWidthNull();
	
	
	/**
	 * @brief Optional filter by items whose name is equally or lesser than a given input string.	
	 */
	const QString &nameLessThan() const;
	void setNameLessThan(QString newNameLessThan);
	bool nameLessThanNull() const;
	void setNameLessThanNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally than a given input string.	
	 */
	const QString &nameStartsWith() const;
	void setNameStartsWith(QString newNameStartsWith);
	bool nameStartsWithNull() const;
	void setNameStartsWithNull();
	
	
	/**
	 * @brief Optional filter by items whose name is sorted equally or greater than a given input string.	
	 */
	const QString &nameStartsWithOrGreater() const;
	void setNameStartsWithOrGreater(QString newNameStartsWithOrGreater);
	bool nameStartsWithOrGreaterNull() const;
	void setNameStartsWithOrGreaterNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on OfficialRating. This allows multiple, pipe delimited.	
	 */
	const QStringList &officialRatings() const;
	void setOfficialRatings(QStringList newOfficialRatings);
	bool officialRatingsNull() const;
	void setOfficialRatingsNull();
	
	
	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Optional filter by parent index number.	
	 */
	const qint32 &parentIndexNumber() const;
	void setParentIndexNumber(qint32 newParentIndexNumber);
	bool parentIndexNumberNull() const;
	void setParentIndexNumberNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person.	
	 */
	const QString &person() const;
	void setPerson(QString newPerson);
	bool personNull() const;
	void setPersonNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered to include only those containing the specified person id.	
	 */
	const QStringList &personIds() const;
	void setPersonIds(QStringList newPersonIds);
	bool personIdsNull() const;
	void setPersonIdsNull();
	
	
	/**
	 * @brief Optional. If specified, along with Person, results will be filtered to include only those containing the specified person and PersonType. Allows multiple, comma-delimited.	
	 */
	const QStringList &personTypes() const;
	void setPersonTypes(QStringList newPersonTypes);
	bool personTypesNull() const;
	void setPersonTypesNull();
	
	
	/**
	 * @brief When searching within folders, this determines whether or not the search will be recursive. true/false.	
	 */
	const bool &recursive() const;
	void setRecursive(bool newRecursive);
	bool recursiveNull() const;
	void setRecursiveNull();
	
	
	/**
	 * @brief Optional. Filter based on a search term.	
	 */
	const QString &searchTerm() const;
	void setSearchTerm(QString newSearchTerm);
	bool searchTermNull() const;
	void setSearchTermNull();
	
	
	/**
	 * @brief Optional filter by Series Status. Allows multiple, comma delimited.	
	 */
	const QList<SeriesStatus> &seriesStatus() const;
	void setSeriesStatus(QList<SeriesStatus> newSeriesStatus);
	bool seriesStatusNull() const;
	void setSeriesStatusNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Sort Order - Ascending, Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on studio id. This allows multiple, pipe delimited.	
	 */
	const QStringList &studioIds() const;
	void setStudioIds(QStringList newStudioIds);
	bool studioIdsNull() const;
	void setStudioIdsNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on studio. This allows multiple, pipe delimited.	
	 */
	const QStringList &studios() const;
	void setStudios(QStringList newStudios);
	bool studiosNull() const;
	void setStudiosNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on tag. This allows multiple, pipe delimited.	
	 */
	const QStringList &tags() const;
	void setTags(QStringList newTags);
	bool tagsNull() const;
	void setTagsNull();
	
	
	/**
	 * @brief The user id supplied as query parameter; this is required when not using an API key.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief Optional filter by VideoType (videofile, dvd, bluray, iso). Allows multiple, comma delimited.	
	 */
	const QList<VideoType> &videoTypes() const;
	void setVideoTypes(QList<VideoType> newVideoTypes);
	bool videoTypesNull() const;
	void setVideoTypesNull();
	
	
	/**
	 * @brief Optional. If specified, results will be filtered based on production year. This allows multiple, comma delimited.	
	 */
	const QList<qint32> &years() const;
	void setYears(QList<qint32> newYears);
	bool yearsNull() const;
	void setYearsNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_adjacentTo;
	QStringList m_albumArtistIds;
	QStringList m_albumIds;
	QStringList m_albums;
	QStringList m_artistIds;
	QStringList m_artists;
	std::optional<bool> m_collapseBoxSetItems = std::nullopt;
	QStringList m_contributingArtistIds;
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableTotalRecordCount = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QStringList m_excludeArtistIds;
	QStringList m_excludeItemIds;
	QList<BaseItemKind> m_excludeItemTypes;
	QList<LocationType> m_excludeLocationTypes;
	QList<ItemFields> m_fields;
	QList<ItemFilter> m_filters;
	QStringList m_genreIds;
	QStringList m_genres;
	std::optional<bool> m_hasImdbId = std::nullopt;
	std::optional<bool> m_hasOfficialRating = std::nullopt;
	std::optional<bool> m_hasOverview = std::nullopt;
	std::optional<bool> m_hasParentalRating = std::nullopt;
	std::optional<bool> m_hasSpecialFeature = std::nullopt;
	std::optional<bool> m_hasSubtitles = std::nullopt;
	std::optional<bool> m_hasThemeSong = std::nullopt;
	std::optional<bool> m_hasThemeVideo = std::nullopt;
	std::optional<bool> m_hasTmdbId = std::nullopt;
	std::optional<bool> m_hasTrailer = std::nullopt;
	std::optional<bool> m_hasTvdbId = std::nullopt;
	QStringList m_ids;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<ImageType> m_imageTypes;
	std::optional<bool> m_is3D = std::nullopt;
	std::optional<bool> m_is4K = std::nullopt;
	std::optional<bool> m_isFavorite = std::nullopt;
	std::optional<bool> m_isHd = std::nullopt;
	std::optional<bool> m_isKids = std::nullopt;
	std::optional<bool> m_isLocked = std::nullopt;
	std::optional<bool> m_isMissing = std::nullopt;
	std::optional<bool> m_isMovie = std::nullopt;
	std::optional<bool> m_isNews = std::nullopt;
	std::optional<bool> m_isPlaceHolder = std::nullopt;
	std::optional<bool> m_isPlayed = std::nullopt;
	std::optional<bool> m_isSeries = std::nullopt;
	std::optional<bool> m_isSports = std::nullopt;
	std::optional<bool> m_isUnaired = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QList<LocationType> m_locationTypes;
	std::optional<qint32> m_maxHeight = std::nullopt;
	QString m_maxOfficialRating;
	QDateTime m_maxPremiereDate;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QList<MediaType> m_mediaTypes;
	std::optional<double> m_minCommunityRating = std::nullopt;
	std::optional<double> m_minCriticRating = std::nullopt;
	QDateTime m_minDateLastSaved;
	QDateTime m_minDateLastSavedForUser;
	std::optional<qint32> m_minHeight = std::nullopt;
	QString m_minOfficialRating;
	QDateTime m_minPremiereDate;
	std::optional<qint32> m_minWidth = std::nullopt;
	QString m_nameLessThan;
	QString m_nameStartsWith;
	QString m_nameStartsWithOrGreater;
	QStringList m_officialRatings;
	QString m_parentId;
	std::optional<qint32> m_parentIndexNumber = std::nullopt;
	QString m_person;
	QStringList m_personIds;
	QStringList m_personTypes;
	std::optional<bool> m_recursive = std::nullopt;
	QString m_searchTerm;
	QList<SeriesStatus> m_seriesStatus;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	std::optional<qint32> m_startIndex = std::nullopt;
	QStringList m_studioIds;
	QStringList m_studios;
	QStringList m_tags;
	QString m_userId;
	QList<VideoType> m_videoTypes;
	QList<qint32> m_years;


};

class GetTrickplayHlsPlaylistParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The width of a single tile.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);

	
	/**
	 * @brief The media version id, if using an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	qint32 m_width;
	
	// Required query parameters

	// Optional query parameters
	QString m_mediaSourceId;


};

class GetTrickplayTileImageParams {
public:

	/**
	 * @brief The index of the desired tile.	
	 */
	const qint32 &index() const;
	void setIndex(qint32 newIndex);

	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The width of a single tile.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);

	
	/**
	 * @brief The media version id, if using an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
private:
	// Required path parameters
	qint32 m_index;
	QString m_itemId;
	qint32 m_width;
	
	// Required query parameters

	// Optional query parameters
	QString m_mediaSourceId;


};

class GetTunerHostTypesParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetUniversalAudioStreamParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. The audio codec to transcode to.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The audio container.	
	 */
	const QStringList &container() const;
	void setContainer(QStringList newContainer);
	bool containerNull() const;
	void setContainerNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether to enable redirection. Defaults to true.	
	 */
	const bool &enableRedirection() const;
	void setEnableRedirection(bool newEnableRedirection);
	bool enableRedirectionNull() const;
	void setEnableRedirectionNull();
	
	
	/**
	 * @brief Optional. Whether to enable remote media.	
	 */
	const bool &enableRemoteMedia() const;
	void setEnableRemoteMedia(bool newEnableRemoteMedia);
	bool enableRemoteMediaNull() const;
	void setEnableRemoteMediaNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. The maximum audio sample rate.	
	 */
	const qint32 &maxAudioSampleRate() const;
	void setMaxAudioSampleRate(qint32 newMaxAudioSampleRate);
	bool maxAudioSampleRateNull() const;
	void setMaxAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	const qint32 &maxStreamingBitrate() const;
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	bool maxStreamingBitrateNull() const;
	void setMaxStreamingBitrateNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. The number of how many audio channels to transcode to.	
	 */
	const qint32 &transcodingAudioChannels() const;
	void setTranscodingAudioChannels(qint32 newTranscodingAudioChannels);
	bool transcodingAudioChannelsNull() const;
	void setTranscodingAudioChannelsNull();
	
	
	/**
	 * @brief Optional. The container to transcode to.	
	 */
	const QString &transcodingContainer() const;
	void setTranscodingContainer(QString newTranscodingContainer);
	bool transcodingContainerNull() const;
	void setTranscodingContainerNull();
	
	
	/**
	 * @brief Optional. The transcoding protocol.	
	 */
	const MediaStreamProtocol &transcodingProtocol() const;
	void setTranscodingProtocol(MediaStreamProtocol newTranscodingProtocol);
	bool transcodingProtocolNull() const;
	void setTranscodingProtocolNull();
	
	
	/**
	 * @brief Optional. The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<qint32> m_audioBitRate = std::nullopt;
	QString m_audioCodec;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	QStringList m_container;
	QString m_deviceId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableRedirection = std::nullopt;
	std::optional<bool> m_enableRemoteMedia = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioSampleRate = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_transcodingAudioChannels = std::nullopt;
	QString m_transcodingContainer;
	MediaStreamProtocol m_transcodingProtocol;
	QString m_userId;


};

class GetUpcomingEpisodesParams {
public:

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Optional. The record index to start at. All items with a lower index will be dropped from the results.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief The user id of the user to get the upcoming episodes for.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	std::optional<qint32> m_limit = std::nullopt;
	QString m_parentId;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class GetUserByIdParams {
public:

	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);

	
private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters

	// Optional query parameters


};

class GetUserImageParams {
public:

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_userId;
	std::optional<qint32> m_width = std::nullopt;


};

class GetUserViewsParams {
public:

	/**
	 * @brief Whether or not to include external views such as channels or live tv.	
	 */
	const bool &includeExternalContent() const;
	void setIncludeExternalContent(bool newIncludeExternalContent);
	bool includeExternalContentNull() const;
	void setIncludeExternalContentNull();
	
	
	/**
	 * @brief Whether or not to include hidden content.	
	 */
	const bool &includeHidden() const;
	void setIncludeHidden(bool newIncludeHidden);
	bool includeHiddenNull() const;
	void setIncludeHiddenNull();
	
	
	/**
	 * @brief Preset views.	
	 */
	const QList<CollectionType> &presetViews() const;
	void setPresetViews(QList<CollectionType> newPresetViews);
	bool presetViewsNull() const;
	void setPresetViewsNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_includeExternalContent = std::nullopt;
	std::optional<bool> m_includeHidden = std::nullopt;
	QList<CollectionType> m_presetViews;
	QString m_userId;


};

class GetUsersParams {
public:

	/**
	 * @brief Optional filter by IsDisabled=true or false.	
	 */
	const bool &isDisabled() const;
	void setIsDisabled(bool newIsDisabled);
	bool isDisabledNull() const;
	void setIsDisabledNull();
	
	
	/**
	 * @brief Optional filter by IsHidden=true or false.	
	 */
	const bool &isHidden() const;
	void setIsHidden(bool newIsHidden);
	bool isHiddenNull() const;
	void setIsHiddenNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_isDisabled = std::nullopt;
	std::optional<bool> m_isHidden = std::nullopt;


};

class GetUtcTimeParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetVariantHlsAudioPlaylistParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	const qint32 &maxStreamingBitrate() const;
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	bool maxStreamingBitrateNull() const;
	void setMaxStreamingBitrateNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetVariantHlsVideoPlaylistParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Whether to always burn in subtitles when transcoding.	
	 */
	const bool &alwaysBurnInSubtitleWhenTranscoding() const;
	void setAlwaysBurnInSubtitleWhenTranscoding(bool newAlwaysBurnInSubtitleWhenTranscoding);
	bool alwaysBurnInSubtitleWhenTranscodingNull() const;
	void setAlwaysBurnInSubtitleWhenTranscodingNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional. The maximum vertical resolution of the encoded video.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief Optional. The maximum horizontal resolution of the encoded video.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_alwaysBurnInSubtitleWhenTranscoding = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetVideoStreamParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional. The maximum vertical resolution of the encoded video.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief Optional. The maximum horizontal resolution of the encoded video.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	QString m_container;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetVideoStreamByContainerParams {
public:

	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);

	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional. The maximum vertical resolution of the encoded video.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief Optional. The maximum horizontal resolution of the encoded video.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_container;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class GetVirtualFoldersParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetWakeOnLanInfoParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class GetYearParams {
public:

	/**
	 * @brief The year.	
	 */
	const qint32 &year() const;
	void setYear(qint32 newYear);

	
	/**
	 * @brief Optional. Filter by user id, and attach user data.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	qint32 m_year;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class GetYearsParams {
public:

	/**
	 * @brief Optional. The image types to include in the output.	
	 */
	const QList<ImageType> &enableImageTypes() const;
	void setEnableImageTypes(QList<ImageType> newEnableImageTypes);
	bool enableImageTypesNull() const;
	void setEnableImageTypesNull();
	
	
	/**
	 * @brief Optional. Include image information in output.	
	 */
	const bool &enableImages() const;
	void setEnableImages(bool newEnableImages);
	bool enableImagesNull() const;
	void setEnableImagesNull();
	
	
	/**
	 * @brief Optional. Include user data.	
	 */
	const bool &enableUserData() const;
	void setEnableUserData(bool newEnableUserData);
	bool enableUserDataNull() const;
	void setEnableUserDataNull();
	
	
	/**
	 * @brief Optional. If specified, results will be excluded based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &excludeItemTypes() const;
	void setExcludeItemTypes(QList<BaseItemKind> newExcludeItemTypes);
	bool excludeItemTypesNull() const;
	void setExcludeItemTypesNull();
	
	
	/**
	 * @brief Optional. Specify additional fields of information to return in the output.	
	 */
	const QList<ItemFields> &fields() const;
	void setFields(QList<ItemFields> newFields);
	bool fieldsNull() const;
	void setFieldsNull();
	
	
	/**
	 * @brief Optional. The max number of images to return, per image type.	
	 */
	const qint32 &imageTypeLimit() const;
	void setImageTypeLimit(qint32 newImageTypeLimit);
	bool imageTypeLimitNull() const;
	void setImageTypeLimitNull();
	
	
	/**
	 * @brief Optional. If specified, results will be included based on item type. This allows multiple, comma delimited.	
	 */
	const QList<BaseItemKind> &includeItemTypes() const;
	void setIncludeItemTypes(QList<BaseItemKind> newIncludeItemTypes);
	bool includeItemTypesNull() const;
	void setIncludeItemTypesNull();
	
	
	/**
	 * @brief Optional. The maximum number of records to return.	
	 */
	const qint32 &limit() const;
	void setLimit(qint32 newLimit);
	bool limitNull() const;
	void setLimitNull();
	
	
	/**
	 * @brief Optional. Filter by MediaType. Allows multiple, comma delimited.	
	 */
	const QList<MediaType> &mediaTypes() const;
	void setMediaTypes(QList<MediaType> newMediaTypes);
	bool mediaTypesNull() const;
	void setMediaTypesNull();
	
	
	/**
	 * @brief Specify this to localize the search to a specific item or folder. Omit to use the root.	
	 */
	const QString &parentId() const;
	void setParentId(QString newParentId);
	bool parentIdNull() const;
	void setParentIdNull();
	
	
	/**
	 * @brief Search recursively.	
	 */
	const bool &recursive() const;
	void setRecursive(bool newRecursive);
	bool recursiveNull() const;
	void setRecursiveNull();
	
	
	/**
	 * @brief Optional. Specify one or more sort orders, comma delimited. Options: Album, AlbumArtist, Artist, Budget, CommunityRating, CriticRating, DateCreated, DatePlayed, PlayCount, PremiereDate, ProductionYear, SortName, Random, Revenue, Runtime.	
	 */
	const QList<ItemSortBy> &sortBy() const;
	void setSortBy(QList<ItemSortBy> newSortBy);
	bool sortByNull() const;
	void setSortByNull();
	
	
	/**
	 * @brief Sort Order - Ascending,Descending.	
	 */
	const QList<SortOrder> &sortOrder() const;
	void setSortOrder(QList<SortOrder> newSortOrder);
	bool sortOrderNull() const;
	void setSortOrderNull();
	
	
	/**
	 * @brief Skips over a given number of items within the results. Use for paging.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief User Id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QList<ImageType> m_enableImageTypes;
	std::optional<bool> m_enableImages = std::nullopt;
	std::optional<bool> m_enableUserData = std::nullopt;
	QList<BaseItemKind> m_excludeItemTypes;
	QList<ItemFields> m_fields;
	std::optional<qint32> m_imageTypeLimit = std::nullopt;
	QList<BaseItemKind> m_includeItemTypes;
	std::optional<qint32> m_limit = std::nullopt;
	QList<MediaType> m_mediaTypes;
	QString m_parentId;
	std::optional<bool> m_recursive = std::nullopt;
	QList<ItemSortBy> m_sortBy;
	QList<SortOrder> m_sortOrder;
	std::optional<qint32> m_startIndex = std::nullopt;
	QString m_userId;


};

class HeadArtistImageParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Artist name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadAudioStreamParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief The audio container.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	QString m_container;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadAudioStreamByContainerParams {
public:

	/**
	 * @brief The audio container.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);

	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamporphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_container;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadGenreImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Genre name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadGenreImageByIndexParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Genre name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadItemImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Drawing.ImageFormat of the returned image.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadItemImage2Params {
public:

	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);

	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);

	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);

	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);

	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);

	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageFormat m_format;
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_itemId;
	qint32 m_maxHeight;
	qint32 m_maxWidth;
	double m_percentPlayed;
	QString m_tag;
	qint32 m_unplayedCount;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadItemImageByIndexParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Drawing.ImageFormat of the returned image.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadMasterHlsAudioPlaylistParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Enable adaptive bitrate streaming.	
	 */
	const bool &enableAdaptiveBitrateStreaming() const;
	void setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming);
	bool enableAdaptiveBitrateStreamingNull() const;
	void setEnableAdaptiveBitrateStreamingNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	const qint32 &maxStreamingBitrate() const;
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	bool maxStreamingBitrateNull() const;
	void setMaxStreamingBitrateNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	QString m_mediaSourceId;

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAdaptiveBitrateStreaming = std::nullopt;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadMasterHlsVideoPlaylistParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Whether to always burn in subtitles when transcoding.	
	 */
	const bool &alwaysBurnInSubtitleWhenTranscoding() const;
	void setAlwaysBurnInSubtitleWhenTranscoding(bool newAlwaysBurnInSubtitleWhenTranscoding);
	bool alwaysBurnInSubtitleWhenTranscodingNull() const;
	void setAlwaysBurnInSubtitleWhenTranscodingNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Enable adaptive bitrate streaming.	
	 */
	const bool &enableAdaptiveBitrateStreaming() const;
	void setEnableAdaptiveBitrateStreaming(bool newEnableAdaptiveBitrateStreaming);
	bool enableAdaptiveBitrateStreamingNull() const;
	void setEnableAdaptiveBitrateStreamingNull();
	
	
	/**
	 * @brief Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Enable trickplay image playlists being added to master playlist.	
	 */
	const bool &enableTrickplay() const;
	void setEnableTrickplay(bool newEnableTrickplay);
	bool enableTrickplayNull() const;
	void setEnableTrickplayNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional. The maximum vertical resolution of the encoded video.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief Optional. The maximum horizontal resolution of the encoded video.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	QString m_mediaSourceId;

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<bool> m_alwaysBurnInSubtitleWhenTranscoding = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAdaptiveBitrateStreaming = std::nullopt;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<bool> m_enableTrickplay = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadMusicGenreImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Music genre name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadMusicGenreImageByIndexParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Music genre name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadPersonImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Person name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadPersonImageByIndexParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Person name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadStudioImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Studio name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadStudioImageByIndexParams {
public:

	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Studio name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadUniversalAudioStreamParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. The audio codec to transcode to.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The audio container.	
	 */
	const QStringList &container() const;
	void setContainer(QStringList newContainer);
	bool containerNull() const;
	void setContainerNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether to enable redirection. Defaults to true.	
	 */
	const bool &enableRedirection() const;
	void setEnableRedirection(bool newEnableRedirection);
	bool enableRedirectionNull() const;
	void setEnableRedirectionNull();
	
	
	/**
	 * @brief Optional. Whether to enable remote media.	
	 */
	const bool &enableRemoteMedia() const;
	void setEnableRemoteMedia(bool newEnableRemoteMedia);
	bool enableRemoteMediaNull() const;
	void setEnableRemoteMediaNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. The maximum audio sample rate.	
	 */
	const qint32 &maxAudioSampleRate() const;
	void setMaxAudioSampleRate(qint32 newMaxAudioSampleRate);
	bool maxAudioSampleRateNull() const;
	void setMaxAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The maximum streaming bitrate.	
	 */
	const qint32 &maxStreamingBitrate() const;
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	bool maxStreamingBitrateNull() const;
	void setMaxStreamingBitrateNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. The number of how many audio channels to transcode to.	
	 */
	const qint32 &transcodingAudioChannels() const;
	void setTranscodingAudioChannels(qint32 newTranscodingAudioChannels);
	bool transcodingAudioChannelsNull() const;
	void setTranscodingAudioChannelsNull();
	
	
	/**
	 * @brief Optional. The container to transcode to.	
	 */
	const QString &transcodingContainer() const;
	void setTranscodingContainer(QString newTranscodingContainer);
	bool transcodingContainerNull() const;
	void setTranscodingContainerNull();
	
	
	/**
	 * @brief Optional. The transcoding protocol.	
	 */
	const MediaStreamProtocol &transcodingProtocol() const;
	void setTranscodingProtocol(MediaStreamProtocol newTranscodingProtocol);
	bool transcodingProtocolNull() const;
	void setTranscodingProtocolNull();
	
	
	/**
	 * @brief Optional. The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<qint32> m_audioBitRate = std::nullopt;
	QString m_audioCodec;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	QStringList m_container;
	QString m_deviceId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableRedirection = std::nullopt;
	std::optional<bool> m_enableRemoteMedia = std::nullopt;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxAudioSampleRate = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_transcodingAudioChannels = std::nullopt;
	QString m_transcodingContainer;
	MediaStreamProtocol m_transcodingProtocol;
	QString m_userId;


};

class HeadUserImageParams {
public:

	/**
	 * @brief Optional. Apply a background color for transparent images.	
	 */
	const QString &backgroundColor() const;
	void setBackgroundColor(QString newBackgroundColor);
	bool backgroundColorNull() const;
	void setBackgroundColorNull();
	
	
	/**
	 * @brief Optional. Blur image.	
	 */
	const qint32 &blur() const;
	void setBlur(qint32 newBlur);
	bool blurNull() const;
	void setBlurNull();
	
	
	/**
	 * @brief Height of box to fill.	
	 */
	const qint32 &fillHeight() const;
	void setFillHeight(qint32 newFillHeight);
	bool fillHeightNull() const;
	void setFillHeightNull();
	
	
	/**
	 * @brief Width of box to fill.	
	 */
	const qint32 &fillWidth() const;
	void setFillWidth(qint32 newFillWidth);
	bool fillWidthNull() const;
	void setFillWidthNull();
	
	
	/**
	 * @brief Optional. Apply a foreground layer on top of the image.	
	 */
	const QString &foregroundLayer() const;
	void setForegroundLayer(QString newForegroundLayer);
	bool foregroundLayerNull() const;
	void setForegroundLayerNull();
	
	
	/**
	 * @brief Determines the output format of the image - original,gif,jpg,png.	
	 */
	const ImageFormat &format() const;
	void setFormat(ImageFormat newFormat);
	bool formatNull() const;
	void setFormatNull();
	
	
	/**
	 * @brief The fixed image height to return.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);
	bool imageIndexNull() const;
	void setImageIndexNull();
	
	
	/**
	 * @brief The maximum image height to return.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief The maximum image width to return.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief Optional. Percent to render for the percent played overlay.	
	 */
	const double &percentPlayed() const;
	void setPercentPlayed(double newPercentPlayed);
	bool percentPlayedNull() const;
	void setPercentPlayedNull();
	
	
	/**
	 * @brief Optional. Quality setting, from 0-100. Defaults to 90 and should suffice in most cases.	
	 */
	const qint32 &quality() const;
	void setQuality(qint32 newQuality);
	bool qualityNull() const;
	void setQualityNull();
	
	
	/**
	 * @brief Optional. Supply the cache tag from the item object to receive strong caching headers.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. Unplayed count overlay to render.	
	 */
	const qint32 &unplayedCount() const;
	void setUnplayedCount(qint32 newUnplayedCount);
	bool unplayedCountNull() const;
	void setUnplayedCountNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief The fixed image width to return.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_backgroundColor;
	std::optional<qint32> m_blur = std::nullopt;
	std::optional<qint32> m_fillHeight = std::nullopt;
	std::optional<qint32> m_fillWidth = std::nullopt;
	QString m_foregroundLayer;
	ImageFormat m_format;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_imageIndex = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	std::optional<double> m_percentPlayed = std::nullopt;
	std::optional<qint32> m_quality = std::nullopt;
	QString m_tag;
	std::optional<qint32> m_unplayedCount = std::nullopt;
	QString m_userId;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadVideoStreamParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional. The maximum vertical resolution of the encoded video.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief Optional. The maximum horizontal resolution of the encoded video.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	QString m_container;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class HeadVideoStreamByContainerParams {
public:

	/**
	 * @brief The video container. Possible values are: ts, webm, asf, wmv, ogv, mp4, m4v, mkv, mpeg, mpg, avi, 3gp, wmv, wtv, m2ts, mov, iso, flv.	
	 */
	const QString &container() const;
	void setContainer(QString newContainer);

	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether or not to allow copying of the audio stream url.	
	 */
	const bool &allowAudioStreamCopy() const;
	void setAllowAudioStreamCopy(bool newAllowAudioStreamCopy);
	bool allowAudioStreamCopyNull() const;
	void setAllowAudioStreamCopyNull();
	
	
	/**
	 * @brief Whether or not to allow copying of the video stream url.	
	 */
	const bool &allowVideoStreamCopy() const;
	void setAllowVideoStreamCopy(bool newAllowVideoStreamCopy);
	bool allowVideoStreamCopyNull() const;
	void setAllowVideoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Specify an audio bitrate to encode to, e.g. 128000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &audioBitRate() const;
	void setAudioBitRate(qint32 newAudioBitRate);
	bool audioBitRateNull() const;
	void setAudioBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a specific number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &audioChannels() const;
	void setAudioChannels(qint32 newAudioChannels);
	bool audioChannelsNull() const;
	void setAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify an audio codec to encode to, e.g. mp3. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &audioCodec() const;
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();
	
	
	/**
	 * @brief Optional. Specify a specific audio sample rate, e.g. 44100.	
	 */
	const qint32 &audioSampleRate() const;
	void setAudioSampleRate(qint32 newAudioSampleRate);
	bool audioSampleRateNull() const;
	void setAudioSampleRateNull();
	
	
	/**
	 * @brief Optional. The index of the audio stream to use. If omitted the first audio stream will be used.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. Whether to break on non key frames.	
	 */
	const bool &breakOnNonKeyFrames() const;
	void setBreakOnNonKeyFrames(bool newBreakOnNonKeyFrames);
	bool breakOnNonKeyFramesNull() const;
	void setBreakOnNonKeyFramesNull();
	
	
	/**
	 * @brief Optional. The MediaBrowser.Model.Dlna.EncodingContext.	
	 */
	const EncodingContext &context() const;
	void setContext(EncodingContext newContext);
	bool contextNull() const;
	void setContextNull();
	
	
	/**
	 * @brief Whether or not to copy timestamps when transcoding with an offset. Defaults to false.	
	 */
	const bool &copyTimestamps() const;
	void setCopyTimestamps(bool newCopyTimestamps);
	bool copyTimestampsNull() const;
	void setCopyTimestampsNull();
	
	
	/**
	 * @brief Optional. The limit of how many cpu cores to use.	
	 */
	const qint32 &cpuCoreLimit() const;
	void setCpuCoreLimit(qint32 newCpuCoreLimit);
	bool cpuCoreLimitNull() const;
	void setCpuCoreLimitNull();
	
	
	/**
	 * @brief Optional. Whether to deinterlace the video.	
	 */
	const bool &deInterlace() const;
	void setDeInterlace(bool newDeInterlace);
	bool deInterlaceNull() const;
	void setDeInterlaceNull();
	
	
	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);
	bool deviceIdNull() const;
	void setDeviceIdNull();
	
	
	/**
	 * @brief Optional. The dlna device profile id to utilize.	
	 */
	const QString &deviceProfileId() const;
	void setDeviceProfileId(QString newDeviceProfileId);
	bool deviceProfileIdNull() const;
	void setDeviceProfileIdNull();
	
	
	/**
	 * @brief Optional. Whether to enable Audio Encoding.	
	 */
	const bool &enableAudioVbrEncoding() const;
	void setEnableAudioVbrEncoding(bool newEnableAudioVbrEncoding);
	bool enableAudioVbrEncodingNull() const;
	void setEnableAudioVbrEncodingNull();
	
	
	/**
	 * @brief Whether or not to allow automatic stream copy if requested values match the original source. Defaults to true.	
	 */
	const bool &enableAutoStreamCopy() const;
	void setEnableAutoStreamCopy(bool newEnableAutoStreamCopy);
	bool enableAutoStreamCopyNull() const;
	void setEnableAutoStreamCopyNull();
	
	
	/**
	 * @brief Optional. Whether to enable the MpegtsM2Ts mode.	
	 */
	const bool &enableMpegtsM2TsMode() const;
	void setEnableMpegtsM2TsMode(bool newEnableMpegtsM2TsMode);
	bool enableMpegtsM2TsModeNull() const;
	void setEnableMpegtsM2TsModeNull();
	
	
	/**
	 * @brief Optional. A specific video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &framerate() const;
	void setFramerate(float newFramerate);
	bool framerateNull() const;
	void setFramerateNull();
	
	
	/**
	 * @brief Optional. The fixed vertical resolution of the encoded video.	
	 */
	const qint32 &height() const;
	void setHeight(qint32 newHeight);
	bool heightNull() const;
	void setHeightNull();
	
	
	/**
	 * @brief Optional. Specify a level for the encoder profile (varies by encoder), e.g. 3, 3.1.	
	 */
	const QString &level() const;
	void setLevel(QString newLevel);
	bool levelNull() const;
	void setLevelNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief Optional. The maximum audio bit depth.	
	 */
	const qint32 &maxAudioBitDepth() const;
	void setMaxAudioBitDepth(qint32 newMaxAudioBitDepth);
	bool maxAudioBitDepthNull() const;
	void setMaxAudioBitDepthNull();
	
	
	/**
	 * @brief Optional. Specify a maximum number of audio channels to encode to, e.g. 2.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. A specific maximum video framerate to encode to, e.g. 23.976. Generally this should be omitted unless the device has specific requirements.	
	 */
	const float &maxFramerate() const;
	void setMaxFramerate(float newMaxFramerate);
	bool maxFramerateNull() const;
	void setMaxFramerateNull();
	
	
	/**
	 * @brief Optional. The maximum vertical resolution of the encoded video.	
	 */
	const qint32 &maxHeight() const;
	void setMaxHeight(qint32 newMaxHeight);
	bool maxHeightNull() const;
	void setMaxHeightNull();
	
	
	/**
	 * @brief Optional.	
	 */
	const qint32 &maxRefFrames() const;
	void setMaxRefFrames(qint32 newMaxRefFrames);
	bool maxRefFramesNull() const;
	void setMaxRefFramesNull();
	
	
	/**
	 * @brief Optional. The maximum video bit depth.	
	 */
	const qint32 &maxVideoBitDepth() const;
	void setMaxVideoBitDepth(qint32 newMaxVideoBitDepth);
	bool maxVideoBitDepthNull() const;
	void setMaxVideoBitDepthNull();
	
	
	/**
	 * @brief Optional. The maximum horizontal resolution of the encoded video.	
	 */
	const qint32 &maxWidth() const;
	void setMaxWidth(qint32 newMaxWidth);
	bool maxWidthNull() const;
	void setMaxWidthNull();
	
	
	/**
	 * @brief The media version id, if playing an alternate version.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The minimum number of segments.	
	 */
	const qint32 &minSegments() const;
	void setMinSegments(qint32 newMinSegments);
	bool minSegmentsNull() const;
	void setMinSegmentsNull();
	
	
	/**
	 * @brief The streaming parameters.	
	 */
	const QString &params() const;
	void setParams(QString newParams);
	bool paramsNull() const;
	void setParamsNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. Specify a specific an encoder profile (varies by encoder), e.g. main, baseline, high.	
	 */
	const QString &profile() const;
	void setProfile(QString newProfile);
	bool profileNull() const;
	void setProfileNull();
	
	
	/**
	 * @brief Optional. Whether to require avc.	
	 */
	const bool &requireAvc() const;
	void setRequireAvc(bool newRequireAvc);
	bool requireAvcNull() const;
	void setRequireAvcNull();
	
	
	/**
	 * @brief Optional. Whether to require a non anamorphic stream.	
	 */
	const bool &requireNonAnamorphic() const;
	void setRequireNonAnamorphic(bool newRequireNonAnamorphic);
	bool requireNonAnamorphicNull() const;
	void setRequireNonAnamorphicNull();
	
	
	/**
	 * @brief The segment container.	
	 */
	const QString &segmentContainer() const;
	void setSegmentContainer(QString newSegmentContainer);
	bool segmentContainerNull() const;
	void setSegmentContainerNull();
	
	
	/**
	 * @brief The segment length.	
	 */
	const qint32 &segmentLength() const;
	void setSegmentLength(qint32 newSegmentLength);
	bool segmentLengthNull() const;
	void setSegmentLengthNull();
	
	
	/**
	 * @brief Optional. Specify a starting offset, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief Optional. If true, the original file will be streamed statically without any encoding. Use either no url extension or the original file extension. true/false.	
	 */
	const bool &staticStreaming() const;
	void setStaticStreaming(bool newStaticStreaming);
	bool staticStreamingNull() const;
	void setStaticStreamingNull();
	
	
	/**
	 * @brief Optional. The streaming options.	
	 */
	const QJsonObject &streamOptions() const;
	void setStreamOptions(QJsonObject newStreamOptions);
	bool streamOptionsNull() const;
	void setStreamOptionsNull();
	
	
	/**
	 * @brief Optional. Specify a subtitle codec to encode to.	
	 */
	const QString &subtitleCodec() const;
	void setSubtitleCodec(QString newSubtitleCodec);
	bool subtitleCodecNull() const;
	void setSubtitleCodecNull();
	
	
	/**
	 * @brief Optional. Specify the subtitle delivery method.	
	 */
	const SubtitleDeliveryMethod &subtitleMethod() const;
	void setSubtitleMethod(SubtitleDeliveryMethod newSubtitleMethod);
	bool subtitleMethodNull() const;
	void setSubtitleMethodNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to use. If omitted no subtitles will be used.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The tag.	
	 */
	const QString &tag() const;
	void setTag(QString newTag);
	bool tagNull() const;
	void setTagNull();
	
	
	/**
	 * @brief Optional. The transcoding reason.	
	 */
	const QString &transcodeReasons() const;
	void setTranscodeReasons(QString newTranscodeReasons);
	bool transcodeReasonsNull() const;
	void setTranscodeReasonsNull();
	
	
	/**
	 * @brief Optional. The maximum number of audio channels to transcode.	
	 */
	const qint32 &transcodingMaxAudioChannels() const;
	void setTranscodingMaxAudioChannels(qint32 newTranscodingMaxAudioChannels);
	bool transcodingMaxAudioChannelsNull() const;
	void setTranscodingMaxAudioChannelsNull();
	
	
	/**
	 * @brief Optional. Specify a video bitrate to encode to, e.g. 500000. If omitted this will be left to encoder defaults.	
	 */
	const qint32 &videoBitRate() const;
	void setVideoBitRate(qint32 newVideoBitRate);
	bool videoBitRateNull() const;
	void setVideoBitRateNull();
	
	
	/**
	 * @brief Optional. Specify a video codec to encode to, e.g. h264. If omitted the server will auto-select using the url's extension.	
	 */
	const QString &videoCodec() const;
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();
	
	
	/**
	 * @brief Optional. The index of the video stream to use. If omitted the first video stream will be used.	
	 */
	const qint32 &videoStreamIndex() const;
	void setVideoStreamIndex(qint32 newVideoStreamIndex);
	bool videoStreamIndexNull() const;
	void setVideoStreamIndexNull();
	
	
	/**
	 * @brief Optional. The fixed horizontal resolution of the encoded video.	
	 */
	const qint32 &width() const;
	void setWidth(qint32 newWidth);
	bool widthNull() const;
	void setWidthNull();
	
	
private:
	// Required path parameters
	QString m_container;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_allowAudioStreamCopy = std::nullopt;
	std::optional<bool> m_allowVideoStreamCopy = std::nullopt;
	std::optional<qint32> m_audioBitRate = std::nullopt;
	std::optional<qint32> m_audioChannels = std::nullopt;
	QString m_audioCodec;
	std::optional<qint32> m_audioSampleRate = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_breakOnNonKeyFrames = std::nullopt;
	EncodingContext m_context;
	std::optional<bool> m_copyTimestamps = std::nullopt;
	std::optional<qint32> m_cpuCoreLimit = std::nullopt;
	std::optional<bool> m_deInterlace = std::nullopt;
	QString m_deviceId;
	QString m_deviceProfileId;
	std::optional<bool> m_enableAudioVbrEncoding = std::nullopt;
	std::optional<bool> m_enableAutoStreamCopy = std::nullopt;
	std::optional<bool> m_enableMpegtsM2TsMode = std::nullopt;
	std::optional<float> m_framerate = std::nullopt;
	std::optional<qint32> m_height = std::nullopt;
	QString m_level;
	QString m_liveStreamId;
	std::optional<qint32> m_maxAudioBitDepth = std::nullopt;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<float> m_maxFramerate = std::nullopt;
	std::optional<qint32> m_maxHeight = std::nullopt;
	std::optional<qint32> m_maxRefFrames = std::nullopt;
	std::optional<qint32> m_maxVideoBitDepth = std::nullopt;
	std::optional<qint32> m_maxWidth = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_minSegments = std::nullopt;
	QString m_params;
	QString m_playSessionId;
	QString m_profile;
	std::optional<bool> m_requireAvc = std::nullopt;
	std::optional<bool> m_requireNonAnamorphic = std::nullopt;
	QString m_segmentContainer;
	std::optional<qint32> m_segmentLength = std::nullopt;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<bool> m_staticStreaming = std::nullopt;
	QJsonObject m_streamOptions;
	QString m_subtitleCodec;
	SubtitleDeliveryMethod m_subtitleMethod;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_tag;
	QString m_transcodeReasons;
	std::optional<qint32> m_transcodingMaxAudioChannels = std::nullopt;
	std::optional<qint32> m_videoBitRate = std::nullopt;
	QString m_videoCodec;
	std::optional<qint32> m_videoStreamIndex = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;


};

class InitiateQuickConnectParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class InstallPackageParams {
public:

	/**
	 * @brief Package name.	
	 */
	const QString &name() const;
	void setName(QString newName);

	
	/**
	 * @brief GUID of the associated assembly.	
	 */
	const QString &assemblyGuid() const;
	void setAssemblyGuid(QString newAssemblyGuid);
	bool assemblyGuidNull() const;
	void setAssemblyGuidNull();
	
	
	/**
	 * @brief Optional. Specify the repository to install from.	
	 */
	const QString &repositoryUrl() const;
	void setRepositoryUrl(QString newRepositoryUrl);
	bool repositoryUrlNull() const;
	void setRepositoryUrlNull();
	
	
	/**
	 * @brief Optional version. Defaults to latest version.	
	 */
	const QString &version() const;
	void setVersion(QString newVersion);
	bool versionNull() const;
	void setVersionNull();
	
	
private:
	// Required path parameters
	QString m_name;
	
	// Required query parameters

	// Optional query parameters
	QString m_assemblyGuid;
	QString m_repositoryUrl;
	QString m_version;


};

class LogFileParams {
public:

	/**
	 * @brief 	
	 */
	const QByteArray &body() const;
	void setBody(QByteArray newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QByteArray m_body;

};

class MarkFavoriteItemParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class MarkPlayedItemParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Optional. The date the item was played.	
	 */
	const QDateTime &datePlayed() const;
	void setDatePlayed(QDateTime newDatePlayed);
	bool datePlayedNull() const;
	void setDatePlayedNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QDateTime m_datePlayed;
	QString m_userId;


};

class MarkUnplayedItemParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class MergeVersionsParams {
public:

	/**
	 * @brief Item id list. This allows multiple, comma delimited.	
	 */
	const QStringList &ids() const;
	void setIds(QStringList newIds);

	
private:
	// Required path parameters
	
	// Required query parameters
	QStringList m_ids;

	// Optional query parameters


};

class MoveItemParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The new index.	
	 */
	const qint32 &newIndex() const;
	void setNewIndex(qint32 newNewIndex);

	
	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
private:
	// Required path parameters
	QString m_itemId;
	qint32 m_newIndex;
	QString m_playlistId;
	
	// Required query parameters

	// Optional query parameters


};

class OnPlaybackProgressParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The audio stream index.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Indicates if the player is muted.	
	 */
	const bool &isMuted() const;
	void setIsMuted(bool newIsMuted);
	bool isMutedNull() const;
	void setIsMutedNull();
	
	
	/**
	 * @brief Indicates if the player is paused.	
	 */
	const bool &isPaused() const;
	void setIsPaused(bool newIsPaused);
	bool isPausedNull() const;
	void setIsPausedNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief The id of the MediaSource.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The play method.	
	 */
	const PlayMethod &playMethod() const;
	void setPlayMethod(PlayMethod newPlayMethod);
	bool playMethodNull() const;
	void setPlayMethodNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. The current position, in ticks. 1 tick = 10000 ms.	
	 */
	const qint64 &positionTicks() const;
	void setPositionTicks(qint64 newPositionTicks);
	bool positionTicksNull() const;
	void setPositionTicksNull();
	
	
	/**
	 * @brief The repeat mode.	
	 */
	const RepeatMode &repeatMode() const;
	void setRepeatMode(RepeatMode newRepeatMode);
	bool repeatModeNull() const;
	void setRepeatModeNull();
	
	
	/**
	 * @brief The subtitle stream index.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief Scale of 0-100.	
	 */
	const qint32 &volumeLevel() const;
	void setVolumeLevel(qint32 newVolumeLevel);
	bool volumeLevelNull() const;
	void setVolumeLevelNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_isMuted = std::nullopt;
	std::optional<bool> m_isPaused = std::nullopt;
	QString m_liveStreamId;
	QString m_mediaSourceId;
	PlayMethod m_playMethod;
	QString m_playSessionId;
	std::optional<qint64> m_positionTicks = std::nullopt;
	RepeatMode m_repeatMode;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	std::optional<qint32> m_volumeLevel = std::nullopt;


};

class OnPlaybackStartParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The audio stream index.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Indicates if the client can seek.	
	 */
	const bool &canSeek() const;
	void setCanSeek(bool newCanSeek);
	bool canSeekNull() const;
	void setCanSeekNull();
	
	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief The id of the MediaSource.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The play method.	
	 */
	const PlayMethod &playMethod() const;
	void setPlayMethod(PlayMethod newPlayMethod);
	bool playMethodNull() const;
	void setPlayMethodNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief The subtitle stream index.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_canSeek = std::nullopt;
	QString m_liveStreamId;
	QString m_mediaSourceId;
	PlayMethod m_playMethod;
	QString m_playSessionId;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;


};

class OnPlaybackStoppedParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The live stream id.	
	 */
	const QString &liveStreamId() const;
	void setLiveStreamId(QString newLiveStreamId);
	bool liveStreamIdNull() const;
	void setLiveStreamIdNull();
	
	
	/**
	 * @brief The id of the MediaSource.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief The next media type that will play.	
	 */
	const QString &nextMediaType() const;
	void setNextMediaType(QString newNextMediaType);
	bool nextMediaTypeNull() const;
	void setNextMediaTypeNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief Optional. The position, in ticks, where playback stopped. 1 tick = 10000 ms.	
	 */
	const qint64 &positionTicks() const;
	void setPositionTicks(qint64 newPositionTicks);
	bool positionTicksNull() const;
	void setPositionTicksNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_liveStreamId;
	QString m_mediaSourceId;
	QString m_nextMediaType;
	QString m_playSessionId;
	std::optional<qint64> m_positionTicks = std::nullopt;


};

class OpenLiveStreamParams {
public:

	/**
	 * @brief Always burn-in subtitle when transcoding.	
	 */
	const bool &alwaysBurnInSubtitleWhenTranscoding() const;
	void setAlwaysBurnInSubtitleWhenTranscoding(bool newAlwaysBurnInSubtitleWhenTranscoding);
	bool alwaysBurnInSubtitleWhenTranscodingNull() const;
	void setAlwaysBurnInSubtitleWhenTranscodingNull();
	
	
	/**
	 * @brief The audio stream index.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Whether to enable direct play. Default: true.	
	 */
	const bool &enableDirectPlay() const;
	void setEnableDirectPlay(bool newEnableDirectPlay);
	bool enableDirectPlayNull() const;
	void setEnableDirectPlayNull();
	
	
	/**
	 * @brief Whether to enable direct stream. Default: true.	
	 */
	const bool &enableDirectStream() const;
	void setEnableDirectStream(bool newEnableDirectStream);
	bool enableDirectStreamNull() const;
	void setEnableDirectStreamNull();
	
	
	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);
	bool itemIdNull() const;
	void setItemIdNull();
	
	
	/**
	 * @brief The maximum number of audio channels.	
	 */
	const qint32 &maxAudioChannels() const;
	void setMaxAudioChannels(qint32 newMaxAudioChannels);
	bool maxAudioChannelsNull() const;
	void setMaxAudioChannelsNull();
	
	
	/**
	 * @brief The maximum streaming bitrate.	
	 */
	const qint32 &maxStreamingBitrate() const;
	void setMaxStreamingBitrate(qint32 newMaxStreamingBitrate);
	bool maxStreamingBitrateNull() const;
	void setMaxStreamingBitrateNull();
	
	
	/**
	 * @brief The open token.	
	 */
	const QString &openToken() const;
	void setOpenToken(QString newOpenToken);
	bool openTokenNull() const;
	void setOpenTokenNull();
	
	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);
	bool playSessionIdNull() const;
	void setPlaySessionIdNull();
	
	
	/**
	 * @brief The start time in ticks.	
	 */
	const qint64 &startTimeTicks() const;
	void setStartTimeTicks(qint64 newStartTimeTicks);
	bool startTimeTicksNull() const;
	void setStartTimeTicksNull();
	
	
	/**
	 * @brief The subtitle stream index.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief The open live stream dto.	
	 */
	const QSharedPointer<OpenLiveStreamDto> &body() const;
	void setBody(QSharedPointer<OpenLiveStreamDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_alwaysBurnInSubtitleWhenTranscoding = std::nullopt;
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	std::optional<bool> m_enableDirectPlay = std::nullopt;
	std::optional<bool> m_enableDirectStream = std::nullopt;
	QString m_itemId;
	std::optional<qint32> m_maxAudioChannels = std::nullopt;
	std::optional<qint32> m_maxStreamingBitrate = std::nullopt;
	QString m_openToken;
	QString m_playSessionId;
	std::optional<qint64> m_startTimeTicks = std::nullopt;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;
	QString m_userId;

	// Body parameters
	QSharedPointer<OpenLiveStreamDto> m_body;

};

class PingPlaybackSessionParams {
public:

	/**
	 * @brief Playback session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);

	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_playSessionId;

	// Optional query parameters


};

class PlayParams {
public:

	/**
	 * @brief The session id.	
	 */
	const QString &sessionId() const;
	void setSessionId(QString newSessionId);

	
	/**
	 * @brief The ids of the items to play, comma delimited.	
	 */
	const QStringList &itemIds() const;
	void setItemIds(QStringList newItemIds);

	
	/**
	 * @brief The type of play command to issue (PlayNow, PlayNext, PlayLast). Clients who have not yet implemented play next and play last may play now.	
	 */
	const PlayCommand &playCommand() const;
	void setPlayCommand(PlayCommand newPlayCommand);

	
	/**
	 * @brief Optional. The index of the audio stream to play.	
	 */
	const qint32 &audioStreamIndex() const;
	void setAudioStreamIndex(qint32 newAudioStreamIndex);
	bool audioStreamIndexNull() const;
	void setAudioStreamIndexNull();
	
	
	/**
	 * @brief Optional. The media source id.	
	 */
	const QString &mediaSourceId() const;
	void setMediaSourceId(QString newMediaSourceId);
	bool mediaSourceIdNull() const;
	void setMediaSourceIdNull();
	
	
	/**
	 * @brief Optional. The start index.	
	 */
	const qint32 &startIndex() const;
	void setStartIndex(qint32 newStartIndex);
	bool startIndexNull() const;
	void setStartIndexNull();
	
	
	/**
	 * @brief The starting position of the first item.	
	 */
	const qint64 &startPositionTicks() const;
	void setStartPositionTicks(qint64 newStartPositionTicks);
	bool startPositionTicksNull() const;
	void setStartPositionTicksNull();
	
	
	/**
	 * @brief Optional. The index of the subtitle stream to play.	
	 */
	const qint32 &subtitleStreamIndex() const;
	void setSubtitleStreamIndex(qint32 newSubtitleStreamIndex);
	bool subtitleStreamIndexNull() const;
	void setSubtitleStreamIndexNull();
	
	
private:
	// Required path parameters
	QString m_sessionId;
	
	// Required query parameters
	QStringList m_itemIds;
	PlayCommand m_playCommand;

	// Optional query parameters
	std::optional<qint32> m_audioStreamIndex = std::nullopt;
	QString m_mediaSourceId;
	std::optional<qint32> m_startIndex = std::nullopt;
	std::optional<qint64> m_startPositionTicks = std::nullopt;
	std::optional<qint32> m_subtitleStreamIndex = std::nullopt;


};

class PostAddedMoviesParams {
public:

	/**
	 * @brief The imdbId.	
	 */
	const QString &imdbId() const;
	void setImdbId(QString newImdbId);
	bool imdbIdNull() const;
	void setImdbIdNull();
	
	
	/**
	 * @brief The tmdbId.	
	 */
	const QString &tmdbId() const;
	void setTmdbId(QString newTmdbId);
	bool tmdbIdNull() const;
	void setTmdbIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_imdbId;
	QString m_tmdbId;


};

class PostAddedSeriesParams {
public:

	/**
	 * @brief The tvdbId.	
	 */
	const QString &tvdbId() const;
	void setTvdbId(QString newTvdbId);
	bool tvdbIdNull() const;
	void setTvdbIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_tvdbId;


};

class PostCapabilitiesParams {
public:

	/**
	 * @brief The session id.	
	 */
	const QString &jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();
	
	
	/**
	 * @brief A list of playable media types, comma delimited. Audio, Video, Book, Photo.	
	 */
	const QList<MediaType> &playableMediaTypes() const;
	void setPlayableMediaTypes(QList<MediaType> newPlayableMediaTypes);
	bool playableMediaTypesNull() const;
	void setPlayableMediaTypesNull();
	
	
	/**
	 * @brief A list of supported remote control commands, comma delimited.	
	 */
	const QList<GeneralCommandType> &supportedCommands() const;
	void setSupportedCommands(QList<GeneralCommandType> newSupportedCommands);
	bool supportedCommandsNull() const;
	void setSupportedCommandsNull();
	
	
	/**
	 * @brief Determines whether media can be played remotely..	
	 */
	const bool &supportsMediaControl() const;
	void setSupportsMediaControl(bool newSupportsMediaControl);
	bool supportsMediaControlNull() const;
	void setSupportsMediaControlNull();
	
	
	/**
	 * @brief Determines whether the device supports a unique identifier.	
	 */
	const bool &supportsPersistentIdentifier() const;
	void setSupportsPersistentIdentifier(bool newSupportsPersistentIdentifier);
	bool supportsPersistentIdentifierNull() const;
	void setSupportsPersistentIdentifierNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_jellyfinId;
	QList<MediaType> m_playableMediaTypes;
	QList<GeneralCommandType> m_supportedCommands;
	std::optional<bool> m_supportsMediaControl = std::nullopt;
	std::optional<bool> m_supportsPersistentIdentifier = std::nullopt;


};

class PostFullCapabilitiesParams {
public:

	/**
	 * @brief The session id.	
	 */
	const QString &jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();
	
	
	/**
	 * @brief The MediaBrowser.Model.Session.ClientCapabilities.	
	 */
	const QSharedPointer<ClientCapabilitiesDto> &body() const;
	void setBody(QSharedPointer<ClientCapabilitiesDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_jellyfinId;

	// Body parameters
	QSharedPointer<ClientCapabilitiesDto> m_body;

};

class PostPingSystemParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class PostUpdatedMediaParams {
public:

	/**
	 * @brief The update paths.	
	 */
	const QSharedPointer<MediaUpdateInfoDto> &body() const;
	void setBody(QSharedPointer<MediaUpdateInfoDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<MediaUpdateInfoDto> m_body;

};

class PostUpdatedMoviesParams {
public:

	/**
	 * @brief The imdbId.	
	 */
	const QString &imdbId() const;
	void setImdbId(QString newImdbId);
	bool imdbIdNull() const;
	void setImdbIdNull();
	
	
	/**
	 * @brief The tmdbId.	
	 */
	const QString &tmdbId() const;
	void setTmdbId(QString newTmdbId);
	bool tmdbIdNull() const;
	void setTmdbIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_imdbId;
	QString m_tmdbId;


};

class PostUpdatedSeriesParams {
public:

	/**
	 * @brief The tvdbId.	
	 */
	const QString &tvdbId() const;
	void setTvdbId(QString newTvdbId);
	bool tvdbIdNull() const;
	void setTvdbIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_tvdbId;


};

class PostUserImageParams {
public:

	/**
	 * @brief User Id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief 	
	 */
	const QByteArray &body() const;
	void setBody(QByteArray newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;

	// Body parameters
	QByteArray m_body;

};

class RefreshItemParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief (Optional) Specifies the image refresh mode.	
	 */
	const MetadataRefreshMode &imageRefreshMode() const;
	void setImageRefreshMode(MetadataRefreshMode newImageRefreshMode);
	bool imageRefreshModeNull() const;
	void setImageRefreshModeNull();
	
	
	/**
	 * @brief (Optional) Specifies the metadata refresh mode.	
	 */
	const MetadataRefreshMode &metadataRefreshMode() const;
	void setMetadataRefreshMode(MetadataRefreshMode newMetadataRefreshMode);
	bool metadataRefreshModeNull() const;
	void setMetadataRefreshModeNull();
	
	
	/**
	 * @brief (Optional) Determines if trickplay images should be replaced. Only applicable if mode is FullRefresh.	
	 */
	const bool &regenerateTrickplay() const;
	void setRegenerateTrickplay(bool newRegenerateTrickplay);
	bool regenerateTrickplayNull() const;
	void setRegenerateTrickplayNull();
	
	
	/**
	 * @brief (Optional) Determines if images should be replaced. Only applicable if mode is FullRefresh.	
	 */
	const bool &replaceAllImages() const;
	void setReplaceAllImages(bool newReplaceAllImages);
	bool replaceAllImagesNull() const;
	void setReplaceAllImagesNull();
	
	
	/**
	 * @brief (Optional) Determines if metadata should be replaced. Only applicable if mode is FullRefresh.	
	 */
	const bool &replaceAllMetadata() const;
	void setReplaceAllMetadata(bool newReplaceAllMetadata);
	bool replaceAllMetadataNull() const;
	void setReplaceAllMetadataNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	MetadataRefreshMode m_imageRefreshMode;
	MetadataRefreshMode m_metadataRefreshMode;
	std::optional<bool> m_regenerateTrickplay = std::nullopt;
	std::optional<bool> m_replaceAllImages = std::nullopt;
	std::optional<bool> m_replaceAllMetadata = std::nullopt;


};

class RefreshLibraryParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class RemoveFromCollectionParams {
public:

	/**
	 * @brief The collection id.	
	 */
	const QString &collectionId() const;
	void setCollectionId(QString newCollectionId);

	
	/**
	 * @brief Item ids, comma delimited.	
	 */
	const QStringList &ids() const;
	void setIds(QStringList newIds);

	
private:
	// Required path parameters
	QString m_collectionId;
	
	// Required query parameters
	QStringList m_ids;

	// Optional query parameters


};

class RemoveItemFromPlaylistParams {
public:

	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
	/**
	 * @brief The item ids, comma delimited.	
	 */
	const QStringList &entryIds() const;
	void setEntryIds(QStringList newEntryIds);
	bool entryIdsNull() const;
	void setEntryIdsNull();
	
	
private:
	// Required path parameters
	QString m_playlistId;
	
	// Required query parameters

	// Optional query parameters
	QStringList m_entryIds;


};

class RemoveMediaPathParams {
public:

	/**
	 * @brief The name of the library.	
	 */
	const QString &name() const;
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();
	
	
	/**
	 * @brief The path to remove.	
	 */
	const QString &path() const;
	void setPath(QString newPath);
	bool pathNull() const;
	void setPathNull();
	
	
	/**
	 * @brief Whether to refresh the library.	
	 */
	const bool &refreshLibrary() const;
	void setRefreshLibrary(bool newRefreshLibrary);
	bool refreshLibraryNull() const;
	void setRefreshLibraryNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_name;
	QString m_path;
	std::optional<bool> m_refreshLibrary = std::nullopt;


};

class RemoveUserFromPlaylistParams {
public:

	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);

	
private:
	// Required path parameters
	QString m_playlistId;
	QString m_userId;
	
	// Required query parameters

	// Optional query parameters


};

class RemoveUserFromSessionParams {
public:

	/**
	 * @brief The session id.	
	 */
	const QString &sessionId() const;
	void setSessionId(QString newSessionId);

	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);

	
private:
	// Required path parameters
	QString m_sessionId;
	QString m_userId;
	
	// Required query parameters

	// Optional query parameters


};

class RemoveVirtualFolderParams {
public:

	/**
	 * @brief The name of the folder.	
	 */
	const QString &name() const;
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();
	
	
	/**
	 * @brief Whether to refresh the library.	
	 */
	const bool &refreshLibrary() const;
	void setRefreshLibrary(bool newRefreshLibrary);
	bool refreshLibraryNull() const;
	void setRefreshLibraryNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_name;
	std::optional<bool> m_refreshLibrary = std::nullopt;


};

class RenameVirtualFolderParams {
public:

	/**
	 * @brief The name of the virtual folder.	
	 */
	const QString &name() const;
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();
	
	
	/**
	 * @brief The new name.	
	 */
	const QString &newName() const;
	void setNewName(QString newNewName);
	bool newNameNull() const;
	void setNewNameNull();
	
	
	/**
	 * @brief Whether to refresh the library.	
	 */
	const bool &refreshLibrary() const;
	void setRefreshLibrary(bool newRefreshLibrary);
	bool refreshLibraryNull() const;
	void setRefreshLibraryNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_name;
	QString m_newName;
	std::optional<bool> m_refreshLibrary = std::nullopt;


};

class ReportPlaybackProgressParams {
public:

	/**
	 * @brief The playback progress info.	
	 */
	const QSharedPointer<PlaybackProgressInfo> &body() const;
	void setBody(QSharedPointer<PlaybackProgressInfo> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<PlaybackProgressInfo> m_body;

};

class ReportPlaybackStartParams {
public:

	/**
	 * @brief The playback start info.	
	 */
	const QSharedPointer<PlaybackStartInfo> &body() const;
	void setBody(QSharedPointer<PlaybackStartInfo> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<PlaybackStartInfo> m_body;

};

class ReportPlaybackStoppedParams {
public:

	/**
	 * @brief The playback stop info.	
	 */
	const QSharedPointer<PlaybackStopInfo> &body() const;
	void setBody(QSharedPointer<PlaybackStopInfo> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<PlaybackStopInfo> m_body;

};

class ReportSessionEndedParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class ReportViewingParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The session id.	
	 */
	const QString &sessionId() const;
	void setSessionId(QString newSessionId);
	bool sessionIdNull() const;
	void setSessionIdNull();
	
	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_itemId;

	// Optional query parameters
	QString m_sessionId;


};

class ResetTunerParams {
public:

	/**
	 * @brief Tuner id.	
	 */
	const QString &tunerId() const;
	void setTunerId(QString newTunerId);

	
private:
	// Required path parameters
	QString m_tunerId;
	
	// Required query parameters

	// Optional query parameters


};

class RestartApplicationParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class RevokeKeyParams {
public:

	/**
	 * @brief The access token to delete.	
	 */
	const QString &key() const;
	void setKey(QString newKey);

	
private:
	// Required path parameters
	QString m_key;
	
	// Required query parameters

	// Optional query parameters


};

class SearchRemoteLyricsParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters


};

class SearchRemoteSubtitlesParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The language of the subtitles.	
	 */
	const QString &language() const;
	void setLanguage(QString newLanguage);

	
	/**
	 * @brief Optional. Only show subtitles which are a perfect match.	
	 */
	const bool &isPerfectMatch() const;
	void setIsPerfectMatch(bool newIsPerfectMatch);
	bool isPerfectMatchNull() const;
	void setIsPerfectMatchNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	QString m_language;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_isPerfectMatch = std::nullopt;


};

class SendFullGeneralCommandParams {
public:

	/**
	 * @brief The session id.	
	 */
	const QString &sessionId() const;
	void setSessionId(QString newSessionId);

	
	/**
	 * @brief The MediaBrowser.Model.Session.GeneralCommand.	
	 */
	const QSharedPointer<GeneralCommand> &body() const;
	void setBody(QSharedPointer<GeneralCommand> newBody);

	
private:
	// Required path parameters
	QString m_sessionId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<GeneralCommand> m_body;

};

class SendGeneralCommandParams {
public:

	/**
	 * @brief The command to send.	
	 */
	const GeneralCommandType &command() const;
	void setCommand(GeneralCommandType newCommand);

	
	/**
	 * @brief The session id.	
	 */
	const QString &sessionId() const;
	void setSessionId(QString newSessionId);

	
private:
	// Required path parameters
	GeneralCommandType m_command;
	QString m_sessionId;
	
	// Required query parameters

	// Optional query parameters


};

class SendMessageCommandParams {
public:

	/**
	 * @brief The session id.	
	 */
	const QString &sessionId() const;
	void setSessionId(QString newSessionId);

	
	/**
	 * @brief The MediaBrowser.Model.Session.MessageCommand object containing Header, Message Text, and TimeoutMs.	
	 */
	const QSharedPointer<MessageCommand> &body() const;
	void setBody(QSharedPointer<MessageCommand> newBody);

	
private:
	// Required path parameters
	QString m_sessionId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<MessageCommand> m_body;

};

class SendPlaystateCommandParams {
public:

	/**
	 * @brief The MediaBrowser.Model.Session.PlaystateCommand.	
	 */
	const PlaystateCommand &command() const;
	void setCommand(PlaystateCommand newCommand);

	
	/**
	 * @brief The session id.	
	 */
	const QString &sessionId() const;
	void setSessionId(QString newSessionId);

	
	/**
	 * @brief The optional controlling user id.	
	 */
	const QString &controllingUserId() const;
	void setControllingUserId(QString newControllingUserId);
	bool controllingUserIdNull() const;
	void setControllingUserIdNull();
	
	
	/**
	 * @brief The optional position ticks.	
	 */
	const qint64 &seekPositionTicks() const;
	void setSeekPositionTicks(qint64 newSeekPositionTicks);
	bool seekPositionTicksNull() const;
	void setSeekPositionTicksNull();
	
	
private:
	// Required path parameters
	PlaystateCommand m_command;
	QString m_sessionId;
	
	// Required query parameters

	// Optional query parameters
	QString m_controllingUserId;
	std::optional<qint64> m_seekPositionTicks = std::nullopt;


};

class SendSystemCommandParams {
public:

	/**
	 * @brief The command to send.	
	 */
	const GeneralCommandType &command() const;
	void setCommand(GeneralCommandType newCommand);

	
	/**
	 * @brief The session id.	
	 */
	const QString &sessionId() const;
	void setSessionId(QString newSessionId);

	
private:
	// Required path parameters
	GeneralCommandType m_command;
	QString m_sessionId;
	
	// Required query parameters

	// Optional query parameters


};

class SetChannelMappingParams {
public:

	/**
	 * @brief The set channel mapping dto.	
	 */
	const QSharedPointer<SetChannelMappingDto> &body() const;
	void setBody(QSharedPointer<SetChannelMappingDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<SetChannelMappingDto> m_body;

};

class SetItemImageParams {
public:

	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief 	
	 */
	const QByteArray &body() const;
	void setBody(QByteArray newBody);

	
private:
	// Required path parameters
	ImageType m_imageType;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QByteArray m_body;

};

class SetItemImageByIndexParams {
public:

	/**
	 * @brief (Unused) Image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief 	
	 */
	const QByteArray &body() const;
	void setBody(QByteArray newBody);

	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QByteArray m_body;

};

class SetRemoteAccessParams {
public:

	/**
	 * @brief The startup remote access dto.	
	 */
	const QSharedPointer<StartupRemoteAccessDto> &body() const;
	void setBody(QSharedPointer<StartupRemoteAccessDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<StartupRemoteAccessDto> m_body;

};

class SetRepositoriesParams {
public:

	/**
	 * @brief The list of package repositories.	
	 */
	const QList<RepositoryInfo> &body() const;
	void setBody(QList<RepositoryInfo> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QList<RepositoryInfo> m_body;

};

class ShutdownApplicationParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class StartTaskParams {
public:

	/**
	 * @brief Task Id.	
	 */
	const QString &taskId() const;
	void setTaskId(QString newTaskId);

	
private:
	// Required path parameters
	QString m_taskId;
	
	// Required query parameters

	// Optional query parameters


};

class StopEncodingProcessParams {
public:

	/**
	 * @brief The device id of the client requesting. Used to stop encoding processes when needed.	
	 */
	const QString &deviceId() const;
	void setDeviceId(QString newDeviceId);

	
	/**
	 * @brief The play session id.	
	 */
	const QString &playSessionId() const;
	void setPlaySessionId(QString newPlaySessionId);

	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_deviceId;
	QString m_playSessionId;

	// Optional query parameters


};

class StopTaskParams {
public:

	/**
	 * @brief Task Id.	
	 */
	const QString &taskId() const;
	void setTaskId(QString newTaskId);

	
private:
	// Required path parameters
	QString m_taskId;
	
	// Required query parameters

	// Optional query parameters


};

class SyncPlayBufferingParams {
public:

	/**
	 * @brief The player status.	
	 */
	const QSharedPointer<BufferRequestDto> &body() const;
	void setBody(QSharedPointer<BufferRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<BufferRequestDto> m_body;

};

class SyncPlayCreateGroupParams {
public:

	/**
	 * @brief The settings of the new group.	
	 */
	const QSharedPointer<NewGroupRequestDto> &body() const;
	void setBody(QSharedPointer<NewGroupRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<NewGroupRequestDto> m_body;

};

class SyncPlayGetGroupsParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class SyncPlayJoinGroupParams {
public:

	/**
	 * @brief The group to join.	
	 */
	const QSharedPointer<JoinGroupRequestDto> &body() const;
	void setBody(QSharedPointer<JoinGroupRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<JoinGroupRequestDto> m_body;

};

class SyncPlayLeaveGroupParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class SyncPlayMovePlaylistItemParams {
public:

	/**
	 * @brief The new position for the item.	
	 */
	const QSharedPointer<MovePlaylistItemRequestDto> &body() const;
	void setBody(QSharedPointer<MovePlaylistItemRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<MovePlaylistItemRequestDto> m_body;

};

class SyncPlayNextItemParams {
public:

	/**
	 * @brief The current item information.	
	 */
	const QSharedPointer<NextItemRequestDto> &body() const;
	void setBody(QSharedPointer<NextItemRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<NextItemRequestDto> m_body;

};

class SyncPlayPauseParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class SyncPlayPingParams {
public:

	/**
	 * @brief The new ping.	
	 */
	const QSharedPointer<PingRequestDto> &body() const;
	void setBody(QSharedPointer<PingRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<PingRequestDto> m_body;

};

class SyncPlayPreviousItemParams {
public:

	/**
	 * @brief The current item information.	
	 */
	const QSharedPointer<PreviousItemRequestDto> &body() const;
	void setBody(QSharedPointer<PreviousItemRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<PreviousItemRequestDto> m_body;

};

class SyncPlayQueueParams {
public:

	/**
	 * @brief The items to add.	
	 */
	const QSharedPointer<QueueRequestDto> &body() const;
	void setBody(QSharedPointer<QueueRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<QueueRequestDto> m_body;

};

class SyncPlayReadyParams {
public:

	/**
	 * @brief The player status.	
	 */
	const QSharedPointer<ReadyRequestDto> &body() const;
	void setBody(QSharedPointer<ReadyRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<ReadyRequestDto> m_body;

};

class SyncPlayRemoveFromPlaylistParams {
public:

	/**
	 * @brief The items to remove.	
	 */
	const QSharedPointer<RemoveFromPlaylistRequestDto> &body() const;
	void setBody(QSharedPointer<RemoveFromPlaylistRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<RemoveFromPlaylistRequestDto> m_body;

};

class SyncPlaySeekParams {
public:

	/**
	 * @brief The new playback position.	
	 */
	const QSharedPointer<SeekRequestDto> &body() const;
	void setBody(QSharedPointer<SeekRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<SeekRequestDto> m_body;

};

class SyncPlaySetIgnoreWaitParams {
public:

	/**
	 * @brief The settings to set.	
	 */
	const QSharedPointer<IgnoreWaitRequestDto> &body() const;
	void setBody(QSharedPointer<IgnoreWaitRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<IgnoreWaitRequestDto> m_body;

};

class SyncPlaySetNewQueueParams {
public:

	/**
	 * @brief The new playlist to play in the group.	
	 */
	const QSharedPointer<PlayRequestDto> &body() const;
	void setBody(QSharedPointer<PlayRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<PlayRequestDto> m_body;

};

class SyncPlaySetPlaylistItemParams {
public:

	/**
	 * @brief The new item to play.	
	 */
	const QSharedPointer<SetPlaylistItemRequestDto> &body() const;
	void setBody(QSharedPointer<SetPlaylistItemRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<SetPlaylistItemRequestDto> m_body;

};

class SyncPlaySetRepeatModeParams {
public:

	/**
	 * @brief The new repeat mode.	
	 */
	const QSharedPointer<SetRepeatModeRequestDto> &body() const;
	void setBody(QSharedPointer<SetRepeatModeRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<SetRepeatModeRequestDto> m_body;

};

class SyncPlaySetShuffleModeParams {
public:

	/**
	 * @brief The new shuffle mode.	
	 */
	const QSharedPointer<SetShuffleModeRequestDto> &body() const;
	void setBody(QSharedPointer<SetShuffleModeRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<SetShuffleModeRequestDto> m_body;

};

class SyncPlayStopParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class SyncPlayUnpauseParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class TmdbClientConfigurationParams {
public:

private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters


};

class UninstallPluginParams {
public:

	/**
	 * @brief Plugin id.	
	 */
	const QString &pluginId() const;
	void setPluginId(QString newPluginId);

	
private:
	// Required path parameters
	QString m_pluginId;
	
	// Required query parameters

	// Optional query parameters


};

class UninstallPluginByVersionParams {
public:

	/**
	 * @brief Plugin id.	
	 */
	const QString &pluginId() const;
	void setPluginId(QString newPluginId);

	
	/**
	 * @brief Plugin version.	
	 */
	const QString &version() const;
	void setVersion(QString newVersion);

	
private:
	// Required path parameters
	QString m_pluginId;
	QString m_version;
	
	// Required query parameters

	// Optional query parameters


};

class UnmarkFavoriteItemParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;


};

class UpdateConfigurationParams {
public:

	/**
	 * @brief Configuration.	
	 */
	const QSharedPointer<ServerConfiguration> &body() const;
	void setBody(QSharedPointer<ServerConfiguration> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<ServerConfiguration> m_body;

};

class UpdateDeviceOptionsParams {
public:

	/**
	 * @brief Device Id.	
	 */
	const QString &jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);

	
	/**
	 * @brief Device Options.	
	 */
	const QSharedPointer<DeviceOptionsDto> &body() const;
	void setBody(QSharedPointer<DeviceOptionsDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters
	QString m_jellyfinId;

	// Optional query parameters

	// Body parameters
	QSharedPointer<DeviceOptionsDto> m_body;

};

class UpdateDisplayPreferencesParams {
public:

	/**
	 * @brief Display preferences id.	
	 */
	const QString &displayPreferencesId() const;
	void setDisplayPreferencesId(QString newDisplayPreferencesId);

	
	/**
	 * @brief Client.	
	 */
	const QString &client() const;
	void setClient(QString newClient);

	
	/**
	 * @brief User Id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief New Display Preferences object.	
	 */
	const QSharedPointer<DisplayPreferencesDto> &body() const;
	void setBody(QSharedPointer<DisplayPreferencesDto> newBody);

	
private:
	// Required path parameters
	QString m_displayPreferencesId;
	
	// Required query parameters
	QString m_client;

	// Optional query parameters
	QString m_userId;

	// Body parameters
	QSharedPointer<DisplayPreferencesDto> m_body;

};

class UpdateInitialConfigurationParams {
public:

	/**
	 * @brief The updated startup configuration.	
	 */
	const QSharedPointer<StartupConfigurationDto> &body() const;
	void setBody(QSharedPointer<StartupConfigurationDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<StartupConfigurationDto> m_body;

};

class UpdateItemParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The new item properties.	
	 */
	const QSharedPointer<BaseItemDto> &body() const;
	void setBody(QSharedPointer<BaseItemDto> newBody);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<BaseItemDto> m_body;

};

class UpdateItemContentTypeParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The content type of the item.	
	 */
	const QString &contentType() const;
	void setContentType(QString newContentType);
	bool contentTypeNull() const;
	void setContentTypeNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_contentType;


};

class UpdateItemImageIndexParams {
public:

	/**
	 * @brief Old image index.	
	 */
	const qint32 &imageIndex() const;
	void setImageIndex(qint32 newImageIndex);

	
	/**
	 * @brief Image type.	
	 */
	const ImageType &imageType() const;
	void setImageType(ImageType newImageType);

	
	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief New image index.	
	 */
	const qint32 &newIndex() const;
	void setNewIndex(qint32 newNewIndex);

	
private:
	// Required path parameters
	qint32 m_imageIndex;
	ImageType m_imageType;
	QString m_itemId;
	
	// Required query parameters
	qint32 m_newIndex;

	// Optional query parameters


};

class UpdateItemUserDataParams {
public:

	/**
	 * @brief The item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief New user data object.	
	 */
	const QSharedPointer<UpdateUserItemDataDto> &body() const;
	void setBody(QSharedPointer<UpdateUserItemDataDto> newBody);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;

	// Body parameters
	QSharedPointer<UpdateUserItemDataDto> m_body;

};

class UpdateLibraryOptionsParams {
public:

	/**
	 * @brief The library name and options.	
	 */
	const QSharedPointer<UpdateLibraryOptionsDto> &body() const;
	void setBody(QSharedPointer<UpdateLibraryOptionsDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<UpdateLibraryOptionsDto> m_body;

};

class UpdateMediaPathParams {
public:

	/**
	 * @brief The name of the library and path infos.	
	 */
	const QSharedPointer<UpdateMediaPathRequestDto> &body() const;
	void setBody(QSharedPointer<UpdateMediaPathRequestDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<UpdateMediaPathRequestDto> m_body;

};

class UpdateNamedConfigurationParams {
public:

	/**
	 * @brief Configuration key.	
	 */
	const QString &key() const;
	void setKey(QString newKey);

	
	/**
	 * @brief Configuration.	
	 */
	const QVariant &body() const;
	void setBody(QVariant newBody);

	
private:
	// Required path parameters
	QString m_key;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QVariant m_body;

};

class UpdatePlaylistParams {
public:

	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
	/**
	 * @brief The Jellyfin.Api.Models.PlaylistDtos.UpdatePlaylistDto id.	
	 */
	const QSharedPointer<UpdatePlaylistDto> &body() const;
	void setBody(QSharedPointer<UpdatePlaylistDto> newBody);

	
private:
	// Required path parameters
	QString m_playlistId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<UpdatePlaylistDto> m_body;

};

class UpdatePlaylistUserParams {
public:

	/**
	 * @brief The playlist id.	
	 */
	const QString &playlistId() const;
	void setPlaylistId(QString newPlaylistId);

	
	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);

	
	/**
	 * @brief The Jellyfin.Api.Models.PlaylistDtos.UpdatePlaylistUserDto.	
	 */
	const QSharedPointer<UpdatePlaylistUserDto> &body() const;
	void setBody(QSharedPointer<UpdatePlaylistUserDto> newBody);

	
private:
	// Required path parameters
	QString m_playlistId;
	QString m_userId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<UpdatePlaylistUserDto> m_body;

};

class UpdatePluginConfigurationParams {
public:

	/**
	 * @brief Plugin id.	
	 */
	const QString &pluginId() const;
	void setPluginId(QString newPluginId);

	
private:
	// Required path parameters
	QString m_pluginId;
	
	// Required query parameters

	// Optional query parameters


};

class UpdateSeriesTimerParams {
public:

	/**
	 * @brief Timer id.	
	 */
	const QString &timerId() const;
	void setTimerId(QString newTimerId);

	
	/**
	 * @brief New series timer info.	
	 */
	const QSharedPointer<SeriesTimerInfoDto> &body() const;
	void setBody(QSharedPointer<SeriesTimerInfoDto> newBody);

	
private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<SeriesTimerInfoDto> m_body;

};

class UpdateStartupUserParams {
public:

	/**
	 * @brief The DTO containing username and password.	
	 */
	const QSharedPointer<StartupUserDto> &body() const;
	void setBody(QSharedPointer<StartupUserDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<StartupUserDto> m_body;

};

class UpdateTaskParams {
public:

	/**
	 * @brief Task Id.	
	 */
	const QString &taskId() const;
	void setTaskId(QString newTaskId);

	
	/**
	 * @brief Triggers.	
	 */
	const QList<TaskTriggerInfo> &body() const;
	void setBody(QList<TaskTriggerInfo> newBody);

	
private:
	// Required path parameters
	QString m_taskId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QList<TaskTriggerInfo> m_body;

};

class UpdateTimerParams {
public:

	/**
	 * @brief Timer id.	
	 */
	const QString &timerId() const;
	void setTimerId(QString newTimerId);

	
	/**
	 * @brief New timer info.	
	 */
	const QSharedPointer<TimerInfoDto> &body() const;
	void setBody(QSharedPointer<TimerInfoDto> newBody);

	
private:
	// Required path parameters
	QString m_timerId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<TimerInfoDto> m_body;

};

class UpdateUserParams {
public:

	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief The updated user model.	
	 */
	const QSharedPointer<UserDto> &body() const;
	void setBody(QSharedPointer<UserDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;

	// Body parameters
	QSharedPointer<UserDto> m_body;

};

class UpdateUserConfigurationParams {
public:

	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief The new user configuration.	
	 */
	const QSharedPointer<UserConfiguration> &body() const;
	void setBody(QSharedPointer<UserConfiguration> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;

	// Body parameters
	QSharedPointer<UserConfiguration> m_body;

};

class UpdateUserItemRatingParams {
public:

	/**
	 * @brief Item id.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Whether this M:Jellyfin.Api.Controllers.UserLibraryController.UpdateUserItemRating(System.Nullable{System.Guid},System.Guid,System.Nullable{System.Boolean}) is likes.	
	 */
	const bool &likes() const;
	void setLikes(bool newLikes);
	bool likesNull() const;
	void setLikesNull();
	
	
	/**
	 * @brief User id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters
	std::optional<bool> m_likes = std::nullopt;
	QString m_userId;


};

class UpdateUserPasswordParams {
public:

	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();
	
	
	/**
	 * @brief The M:Jellyfin.Api.Controllers.UserController.UpdateUserPassword(System.Nullable{System.Guid},Jellyfin.Api.Models.UserDtos.UpdateUserPassword) request.	
	 */
	const QSharedPointer<UpdateUserPassword> &body() const;
	void setBody(QSharedPointer<UpdateUserPassword> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters
	QString m_userId;

	// Body parameters
	QSharedPointer<UpdateUserPassword> m_body;

};

class UpdateUserPolicyParams {
public:

	/**
	 * @brief The user id.	
	 */
	const QString &userId() const;
	void setUserId(QString newUserId);

	
	/**
	 * @brief The new user policy.	
	 */
	const QSharedPointer<UserPolicy> &body() const;
	void setBody(QSharedPointer<UserPolicy> newBody);

	
private:
	// Required path parameters
	QString m_userId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<UserPolicy> m_body;

};

class UploadCustomSplashscreenParams {
public:

	/**
	 * @brief 	
	 */
	const QByteArray &body() const;
	void setBody(QByteArray newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QByteArray m_body;

};

class UploadLyricsParams {
public:

	/**
	 * @brief The item the lyric belongs to.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief Name of the file being uploaded.	
	 */
	const QString &fileName() const;
	void setFileName(QString newFileName);

	
	/**
	 * @brief 	
	 */
	const QByteArray &body() const;
	void setBody(QByteArray newBody);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters
	QString m_fileName;

	// Optional query parameters

	// Body parameters
	QByteArray m_body;

};

class UploadSubtitleParams {
public:

	/**
	 * @brief The item the subtitle belongs to.	
	 */
	const QString &itemId() const;
	void setItemId(QString newItemId);

	
	/**
	 * @brief The request body.	
	 */
	const QSharedPointer<UploadSubtitleDto> &body() const;
	void setBody(QSharedPointer<UploadSubtitleDto> newBody);

	
private:
	// Required path parameters
	QString m_itemId;
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<UploadSubtitleDto> m_body;

};

class ValidatePathParams {
public:

	/**
	 * @brief Validate request object.	
	 */
	const QSharedPointer<ValidatePathDto> &body() const;
	void setBody(QSharedPointer<ValidatePathDto> newBody);

	
private:
	// Required path parameters
	
	// Required query parameters

	// Optional query parameters

	// Body parameters
	QSharedPointer<ValidatePathDto> m_body;

};



} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_REQUESTTYPES_H

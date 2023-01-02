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

#ifndef JELLYFIN_LOADER_HTTP_IMAGE_H
#define JELLYFIN_LOADER_HTTP_IMAGE_H

#include <optional>

#include "JellyfinQt/support/jsonconv.h"
#include "JellyfinQt/support/loader.h"
#include "JellyfinQt/loader/requesttypes.h"
#include "JellyfinQt/dto/imageinfo.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace Loader {
namespace HTTP {

using namespace Jellyfin::DTO;

/**
 * @brief Get item image infos.
 */

class GetItemImageInfosLoader : public Jellyfin::Support::HttpLoader<QList<ImageInfo>, GetItemImageInfosParams> {
public:
	explicit GetItemImageInfosLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const GetItemImageInfosParams& parameters) const override;
	QUrlQuery query(const GetItemImageInfosParams& parameters) const override;
	QByteArray body(const GetItemImageInfosParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Delete an item's image.
 */

class DeleteItemImageLoader : public Jellyfin::Support::HttpLoader<void, DeleteItemImageParams> {
public:
	explicit DeleteItemImageLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DeleteItemImageParams& parameters) const override;
	QUrlQuery query(const DeleteItemImageParams& parameters) const override;
	QByteArray body(const DeleteItemImageParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Set item image.
 */

class SetItemImageLoader : public Jellyfin::Support::HttpLoader<void, SetItemImageParams> {
public:
	explicit SetItemImageLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SetItemImageParams& parameters) const override;
	QUrlQuery query(const SetItemImageParams& parameters) const override;
	QByteArray body(const SetItemImageParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Delete an item's image.
 */

class DeleteItemImageByIndexLoader : public Jellyfin::Support::HttpLoader<void, DeleteItemImageByIndexParams> {
public:
	explicit DeleteItemImageByIndexLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DeleteItemImageByIndexParams& parameters) const override;
	QUrlQuery query(const DeleteItemImageByIndexParams& parameters) const override;
	QByteArray body(const DeleteItemImageByIndexParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Set item image.
 */

class SetItemImageByIndexLoader : public Jellyfin::Support::HttpLoader<void, SetItemImageByIndexParams> {
public:
	explicit SetItemImageByIndexLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const SetItemImageByIndexParams& parameters) const override;
	QUrlQuery query(const SetItemImageByIndexParams& parameters) const override;
	QByteArray body(const SetItemImageByIndexParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Updates the index for an item image.
 */

class UpdateItemImageIndexLoader : public Jellyfin::Support::HttpLoader<void, UpdateItemImageIndexParams> {
public:
	explicit UpdateItemImageIndexLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const UpdateItemImageIndexParams& parameters) const override;
	QUrlQuery query(const UpdateItemImageIndexParams& parameters) const override;
	QByteArray body(const UpdateItemImageIndexParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Sets the user image.
 */

class PostUserImageLoader : public Jellyfin::Support::HttpLoader<void, PostUserImageParams> {
public:
	explicit PostUserImageLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const PostUserImageParams& parameters) const override;
	QUrlQuery query(const PostUserImageParams& parameters) const override;
	QByteArray body(const PostUserImageParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Delete the user's image.
 */

class DeleteUserImageLoader : public Jellyfin::Support::HttpLoader<void, DeleteUserImageParams> {
public:
	explicit DeleteUserImageLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DeleteUserImageParams& parameters) const override;
	QUrlQuery query(const DeleteUserImageParams& parameters) const override;
	QByteArray body(const DeleteUserImageParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Sets the user image.
 */

class PostUserImageByIndexLoader : public Jellyfin::Support::HttpLoader<void, PostUserImageByIndexParams> {
public:
	explicit PostUserImageByIndexLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const PostUserImageByIndexParams& parameters) const override;
	QUrlQuery query(const PostUserImageByIndexParams& parameters) const override;
	QByteArray body(const PostUserImageByIndexParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};
/**
 * @brief Delete the user's image.
 */

class DeleteUserImageByIndexLoader : public Jellyfin::Support::HttpLoader<void, DeleteUserImageByIndexParams> {
public:
	explicit DeleteUserImageByIndexLoader(ApiClient *apiClient = nullptr);

protected:
	QString path(const DeleteUserImageByIndexParams& parameters) const override;
	QUrlQuery query(const DeleteUserImageByIndexParams& parameters) const override;
	QByteArray body(const DeleteUserImageByIndexParams& parameters) const override;
	QNetworkAccessManager::Operation operation() const override;
};

} // NS HTTP
} // NS Loader
} // NS Jellyfin

#endif // JELLYFIN_LOADER_HTTP_IMAGE_H

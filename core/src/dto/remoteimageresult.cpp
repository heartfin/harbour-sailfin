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

#include <JellyfinQt/dto/remoteimageresult.h>

namespace Jellyfin {
namespace DTO {

RemoteImageResult::RemoteImageResult() {}

RemoteImageResult::RemoteImageResult(const RemoteImageResult &other) :

	m_images(other.m_images),
	m_totalRecordCount(other.m_totalRecordCount),
	m_providers(other.m_providers){}


void RemoteImageResult::replaceData(RemoteImageResult &other) {
	m_images = other.m_images;
	m_totalRecordCount = other.m_totalRecordCount;
	m_providers = other.m_providers;
}

RemoteImageResult RemoteImageResult::fromJson(QJsonObject source) {
	RemoteImageResult instance;
	instance.setFromJson(source);
	return instance;
}


void RemoteImageResult::setFromJson(QJsonObject source) {
	m_images = Jellyfin::Support::fromJsonValue<QList<RemoteImageInfo>>(source["Images"]);
	m_totalRecordCount = Jellyfin::Support::fromJsonValue<qint32>(source["TotalRecordCount"]);
	m_providers = Jellyfin::Support::fromJsonValue<QStringList>(source["Providers"]);

}
	
QJsonObject RemoteImageResult::toJson() {
	QJsonObject result;
	result["Images"] = Jellyfin::Support::toJsonValue<QList<RemoteImageInfo>>(m_images);
	result["TotalRecordCount"] = Jellyfin::Support::toJsonValue<qint32>(m_totalRecordCount);
	result["Providers"] = Jellyfin::Support::toJsonValue<QStringList>(m_providers);

	return result;
}

QList<RemoteImageInfo> RemoteImageResult::images() const { return m_images; }

void RemoteImageResult::setImages(QList<RemoteImageInfo> newImages) {
	m_images = newImages;
}
bool RemoteImageResult::imagesNull() const {
	return m_images.size() == 0;
}

void RemoteImageResult::setImagesNull() {
	m_images.clear();

}
qint32 RemoteImageResult::totalRecordCount() const { return m_totalRecordCount; }

void RemoteImageResult::setTotalRecordCount(qint32 newTotalRecordCount) {
	m_totalRecordCount = newTotalRecordCount;
}

QStringList RemoteImageResult::providers() const { return m_providers; }

void RemoteImageResult::setProviders(QStringList newProviders) {
	m_providers = newProviders;
}
bool RemoteImageResult::providersNull() const {
	return m_providers.size() == 0;
}

void RemoteImageResult::setProvidersNull() {
	m_providers.clear();

}

} // NS DTO

namespace Support {

using RemoteImageResult = Jellyfin::DTO::RemoteImageResult;

template <>
RemoteImageResult fromJsonValue<RemoteImageResult>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return RemoteImageResult::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

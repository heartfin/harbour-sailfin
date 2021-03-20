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

#include <JellyfinQt/DTO/typeoptions.h>

namespace Jellyfin {
namespace DTO {

TypeOptions::TypeOptions(QObject *parent) {}

TypeOptions TypeOptions::fromJson(QJsonObject source) {TypeOptions instance;
	instance->setFromJson(source, false);
	return instance;
}


void TypeOptions::setFromJson(QJsonObject source) {
	m_type = fromJsonValue<QString>(source["Type"]);
	m_metadataFetchers = fromJsonValue<QStringList>(source["MetadataFetchers"]);
	m_metadataFetcherOrder = fromJsonValue<QStringList>(source["MetadataFetcherOrder"]);
	m_imageFetchers = fromJsonValue<QStringList>(source["ImageFetchers"]);
	m_imageFetcherOrder = fromJsonValue<QStringList>(source["ImageFetcherOrder"]);
	m_imageOptions = fromJsonValue<QList<QSharedPointer<ImageOption>>>(source["ImageOptions"]);

}
	
QJsonObject TypeOptions::toJson() {
	QJsonObject result;
	result["Type"] = toJsonValue<QString>(m_type);
	result["MetadataFetchers"] = toJsonValue<QStringList>(m_metadataFetchers);
	result["MetadataFetcherOrder"] = toJsonValue<QStringList>(m_metadataFetcherOrder);
	result["ImageFetchers"] = toJsonValue<QStringList>(m_imageFetchers);
	result["ImageFetcherOrder"] = toJsonValue<QStringList>(m_imageFetcherOrder);
	result["ImageOptions"] = toJsonValue<QList<QSharedPointer<ImageOption>>>(m_imageOptions);

	return result;
}

QString TypeOptions::type() const { return m_type; }

void TypeOptions::setType(QString newType) {
	m_type = newType;
}
QStringList TypeOptions::metadataFetchers() const { return m_metadataFetchers; }

void TypeOptions::setMetadataFetchers(QStringList newMetadataFetchers) {
	m_metadataFetchers = newMetadataFetchers;
}
QStringList TypeOptions::metadataFetcherOrder() const { return m_metadataFetcherOrder; }

void TypeOptions::setMetadataFetcherOrder(QStringList newMetadataFetcherOrder) {
	m_metadataFetcherOrder = newMetadataFetcherOrder;
}
QStringList TypeOptions::imageFetchers() const { return m_imageFetchers; }

void TypeOptions::setImageFetchers(QStringList newImageFetchers) {
	m_imageFetchers = newImageFetchers;
}
QStringList TypeOptions::imageFetcherOrder() const { return m_imageFetcherOrder; }

void TypeOptions::setImageFetcherOrder(QStringList newImageFetcherOrder) {
	m_imageFetcherOrder = newImageFetcherOrder;
}
QList<QSharedPointer<ImageOption>> TypeOptions::imageOptions() const { return m_imageOptions; }

void TypeOptions::setImageOptions(QList<QSharedPointer<ImageOption>> newImageOptions) {
	m_imageOptions = newImageOptions;
}


} // NS Jellyfin
} // NS DTO

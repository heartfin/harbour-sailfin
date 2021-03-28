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

#include <JellyfinQt/dto/typeoptions.h>

namespace Jellyfin {
namespace DTO {

TypeOptions::TypeOptions() {}

TypeOptions::TypeOptions(const TypeOptions &other) :

	m_type(other.m_type),
	m_metadataFetchers(other.m_metadataFetchers),
	m_metadataFetcherOrder(other.m_metadataFetcherOrder),
	m_imageFetchers(other.m_imageFetchers),
	m_imageFetcherOrder(other.m_imageFetcherOrder),
	m_imageOptions(other.m_imageOptions){}


void TypeOptions::replaceData(TypeOptions &other) {
	m_type = other.m_type;
	m_metadataFetchers = other.m_metadataFetchers;
	m_metadataFetcherOrder = other.m_metadataFetcherOrder;
	m_imageFetchers = other.m_imageFetchers;
	m_imageFetcherOrder = other.m_imageFetcherOrder;
	m_imageOptions = other.m_imageOptions;
}

TypeOptions TypeOptions::fromJson(QJsonObject source) {
	TypeOptions instance;
	instance.setFromJson(source);
	return instance;
}


void TypeOptions::setFromJson(QJsonObject source) {
	m_type = Jellyfin::Support::fromJsonValue<QString>(source["Type"]);
	m_metadataFetchers = Jellyfin::Support::fromJsonValue<QStringList>(source["MetadataFetchers"]);
	m_metadataFetcherOrder = Jellyfin::Support::fromJsonValue<QStringList>(source["MetadataFetcherOrder"]);
	m_imageFetchers = Jellyfin::Support::fromJsonValue<QStringList>(source["ImageFetchers"]);
	m_imageFetcherOrder = Jellyfin::Support::fromJsonValue<QStringList>(source["ImageFetcherOrder"]);
	m_imageOptions = Jellyfin::Support::fromJsonValue<QList<ImageOption>>(source["ImageOptions"]);

}
	
QJsonObject TypeOptions::toJson() const {
	QJsonObject result;
	result["Type"] = Jellyfin::Support::toJsonValue<QString>(m_type);
	result["MetadataFetchers"] = Jellyfin::Support::toJsonValue<QStringList>(m_metadataFetchers);
	result["MetadataFetcherOrder"] = Jellyfin::Support::toJsonValue<QStringList>(m_metadataFetcherOrder);
	result["ImageFetchers"] = Jellyfin::Support::toJsonValue<QStringList>(m_imageFetchers);
	result["ImageFetcherOrder"] = Jellyfin::Support::toJsonValue<QStringList>(m_imageFetcherOrder);
	result["ImageOptions"] = Jellyfin::Support::toJsonValue<QList<ImageOption>>(m_imageOptions);

	return result;
}

QString TypeOptions::type() const { return m_type; }

void TypeOptions::setType(QString newType) {
	m_type = newType;
}
bool TypeOptions::typeNull() const {
	return m_type.isNull();
}

void TypeOptions::setTypeNull() {
	m_type.clear();

}
QStringList TypeOptions::metadataFetchers() const { return m_metadataFetchers; }

void TypeOptions::setMetadataFetchers(QStringList newMetadataFetchers) {
	m_metadataFetchers = newMetadataFetchers;
}
bool TypeOptions::metadataFetchersNull() const {
	return m_metadataFetchers.size() == 0;
}

void TypeOptions::setMetadataFetchersNull() {
	m_metadataFetchers.clear();

}
QStringList TypeOptions::metadataFetcherOrder() const { return m_metadataFetcherOrder; }

void TypeOptions::setMetadataFetcherOrder(QStringList newMetadataFetcherOrder) {
	m_metadataFetcherOrder = newMetadataFetcherOrder;
}
bool TypeOptions::metadataFetcherOrderNull() const {
	return m_metadataFetcherOrder.size() == 0;
}

void TypeOptions::setMetadataFetcherOrderNull() {
	m_metadataFetcherOrder.clear();

}
QStringList TypeOptions::imageFetchers() const { return m_imageFetchers; }

void TypeOptions::setImageFetchers(QStringList newImageFetchers) {
	m_imageFetchers = newImageFetchers;
}
bool TypeOptions::imageFetchersNull() const {
	return m_imageFetchers.size() == 0;
}

void TypeOptions::setImageFetchersNull() {
	m_imageFetchers.clear();

}
QStringList TypeOptions::imageFetcherOrder() const { return m_imageFetcherOrder; }

void TypeOptions::setImageFetcherOrder(QStringList newImageFetcherOrder) {
	m_imageFetcherOrder = newImageFetcherOrder;
}
bool TypeOptions::imageFetcherOrderNull() const {
	return m_imageFetcherOrder.size() == 0;
}

void TypeOptions::setImageFetcherOrderNull() {
	m_imageFetcherOrder.clear();

}
QList<ImageOption> TypeOptions::imageOptions() const { return m_imageOptions; }

void TypeOptions::setImageOptions(QList<ImageOption> newImageOptions) {
	m_imageOptions = newImageOptions;
}
bool TypeOptions::imageOptionsNull() const {
	return m_imageOptions.size() == 0;
}

void TypeOptions::setImageOptionsNull() {
	m_imageOptions.clear();

}

} // NS DTO

namespace Support {

using TypeOptions = Jellyfin::DTO::TypeOptions;

template <>
TypeOptions fromJsonValue(const QJsonValue &source, convertType<TypeOptions>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return TypeOptions::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const TypeOptions &source, convertType<TypeOptions>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

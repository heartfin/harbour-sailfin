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

TypeOptions::TypeOptions(QObject *parent) : QObject(parent) {}

TypeOptions *TypeOptions::fromJSON(QJsonObject source, QObject *parent) {
	TypeOptions *instance = new TypeOptions(parent);
	instance->updateFromJSON(source);
	return instance;
}

void TypeOptions::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject TypeOptions::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString TypeOptions::type() const { return m_type; }
void TypeOptions::setType(QString newType) {
	m_type = newType;
	emit typeChanged(newType);
}

QStringList TypeOptions::metadataFetchers() const { return m_metadataFetchers; }
void TypeOptions::setMetadataFetchers(QStringList newMetadataFetchers) {
	m_metadataFetchers = newMetadataFetchers;
	emit metadataFetchersChanged(newMetadataFetchers);
}

QStringList TypeOptions::metadataFetcherOrder() const { return m_metadataFetcherOrder; }
void TypeOptions::setMetadataFetcherOrder(QStringList newMetadataFetcherOrder) {
	m_metadataFetcherOrder = newMetadataFetcherOrder;
	emit metadataFetcherOrderChanged(newMetadataFetcherOrder);
}

QStringList TypeOptions::imageFetchers() const { return m_imageFetchers; }
void TypeOptions::setImageFetchers(QStringList newImageFetchers) {
	m_imageFetchers = newImageFetchers;
	emit imageFetchersChanged(newImageFetchers);
}

QStringList TypeOptions::imageFetcherOrder() const { return m_imageFetcherOrder; }
void TypeOptions::setImageFetcherOrder(QStringList newImageFetcherOrder) {
	m_imageFetcherOrder = newImageFetcherOrder;
	emit imageFetcherOrderChanged(newImageFetcherOrder);
}

QList<ImageOption *> TypeOptions::imageOptions() const { return m_imageOptions; }
void TypeOptions::setImageOptions(QList<ImageOption *> newImageOptions) {
	m_imageOptions = newImageOptions;
	emit imageOptionsChanged(newImageOptions);
}


} // NS Jellyfin
} // NS DTO

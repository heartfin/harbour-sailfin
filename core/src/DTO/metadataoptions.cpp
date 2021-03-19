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

#include <JellyfinQt/DTO/metadataoptions.h>

namespace Jellyfin {
namespace DTO {

MetadataOptions::MetadataOptions(QObject *parent) : QObject(parent) {}

MetadataOptions *MetadataOptions::fromJSON(QJsonObject source, QObject *parent) {
	MetadataOptions *instance = new MetadataOptions(parent);
	instance->updateFromJSON(source);
	return instance;
}

void MetadataOptions::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject MetadataOptions::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString MetadataOptions::itemType() const { return m_itemType; }
void MetadataOptions::setItemType(QString newItemType) {
	m_itemType = newItemType;
	emit itemTypeChanged(newItemType);
}

QStringList MetadataOptions::disabledMetadataSavers() const { return m_disabledMetadataSavers; }
void MetadataOptions::setDisabledMetadataSavers(QStringList newDisabledMetadataSavers) {
	m_disabledMetadataSavers = newDisabledMetadataSavers;
	emit disabledMetadataSaversChanged(newDisabledMetadataSavers);
}

QStringList MetadataOptions::localMetadataReaderOrder() const { return m_localMetadataReaderOrder; }
void MetadataOptions::setLocalMetadataReaderOrder(QStringList newLocalMetadataReaderOrder) {
	m_localMetadataReaderOrder = newLocalMetadataReaderOrder;
	emit localMetadataReaderOrderChanged(newLocalMetadataReaderOrder);
}

QStringList MetadataOptions::disabledMetadataFetchers() const { return m_disabledMetadataFetchers; }
void MetadataOptions::setDisabledMetadataFetchers(QStringList newDisabledMetadataFetchers) {
	m_disabledMetadataFetchers = newDisabledMetadataFetchers;
	emit disabledMetadataFetchersChanged(newDisabledMetadataFetchers);
}

QStringList MetadataOptions::metadataFetcherOrder() const { return m_metadataFetcherOrder; }
void MetadataOptions::setMetadataFetcherOrder(QStringList newMetadataFetcherOrder) {
	m_metadataFetcherOrder = newMetadataFetcherOrder;
	emit metadataFetcherOrderChanged(newMetadataFetcherOrder);
}

QStringList MetadataOptions::disabledImageFetchers() const { return m_disabledImageFetchers; }
void MetadataOptions::setDisabledImageFetchers(QStringList newDisabledImageFetchers) {
	m_disabledImageFetchers = newDisabledImageFetchers;
	emit disabledImageFetchersChanged(newDisabledImageFetchers);
}

QStringList MetadataOptions::imageFetcherOrder() const { return m_imageFetcherOrder; }
void MetadataOptions::setImageFetcherOrder(QStringList newImageFetcherOrder) {
	m_imageFetcherOrder = newImageFetcherOrder;
	emit imageFetcherOrderChanged(newImageFetcherOrder);
}


} // NS Jellyfin
} // NS DTO

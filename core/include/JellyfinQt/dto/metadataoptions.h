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

#ifndef JELLYFIN_DTO_METADATAOPTIONS_H
#define JELLYFIN_DTO_METADATAOPTIONS_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class MetadataOptions {
public:
	MetadataOptions();
	MetadataOptions(const MetadataOptions &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(MetadataOptions &other);
	
	static MetadataOptions fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QString itemType() const;

	void setItemType(QString newItemType);
	bool itemTypeNull() const;
	void setItemTypeNull();


	QStringList disabledMetadataSavers() const;

	void setDisabledMetadataSavers(QStringList newDisabledMetadataSavers);
	bool disabledMetadataSaversNull() const;
	void setDisabledMetadataSaversNull();


	QStringList localMetadataReaderOrder() const;

	void setLocalMetadataReaderOrder(QStringList newLocalMetadataReaderOrder);
	bool localMetadataReaderOrderNull() const;
	void setLocalMetadataReaderOrderNull();


	QStringList disabledMetadataFetchers() const;

	void setDisabledMetadataFetchers(QStringList newDisabledMetadataFetchers);
	bool disabledMetadataFetchersNull() const;
	void setDisabledMetadataFetchersNull();


	QStringList metadataFetcherOrder() const;

	void setMetadataFetcherOrder(QStringList newMetadataFetcherOrder);
	bool metadataFetcherOrderNull() const;
	void setMetadataFetcherOrderNull();


	QStringList disabledImageFetchers() const;

	void setDisabledImageFetchers(QStringList newDisabledImageFetchers);
	bool disabledImageFetchersNull() const;
	void setDisabledImageFetchersNull();


	QStringList imageFetcherOrder() const;

	void setImageFetcherOrder(QStringList newImageFetcherOrder);
	bool imageFetcherOrderNull() const;
	void setImageFetcherOrderNull();


protected:
	QString m_itemType;
	QStringList m_disabledMetadataSavers;
	QStringList m_localMetadataReaderOrder;
	QStringList m_disabledMetadataFetchers;
	QStringList m_metadataFetcherOrder;
	QStringList m_disabledImageFetchers;
	QStringList m_imageFetcherOrder;
};

} // NS DTO

namespace Support {

using MetadataOptions = Jellyfin::DTO::MetadataOptions;

template <>
MetadataOptions fromJsonValue(const QJsonValue &source, convertType<MetadataOptions>);

template<>
QJsonValue toJsonValue(const MetadataOptions &source, convertType<MetadataOptions>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_METADATAOPTIONS_H

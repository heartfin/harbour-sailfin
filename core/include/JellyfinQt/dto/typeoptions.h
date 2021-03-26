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

#ifndef JELLYFIN_DTO_TYPEOPTIONS_H
#define JELLYFIN_DTO_TYPEOPTIONS_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/imageoption.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class TypeOptions {
public:
	TypeOptions();
	TypeOptions(const TypeOptions &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(TypeOptions &other);
	
	static TypeOptions fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	QString type() const;

	void setType(QString newType);
	bool typeNull() const;
	void setTypeNull();


	QStringList metadataFetchers() const;

	void setMetadataFetchers(QStringList newMetadataFetchers);
	bool metadataFetchersNull() const;
	void setMetadataFetchersNull();


	QStringList metadataFetcherOrder() const;

	void setMetadataFetcherOrder(QStringList newMetadataFetcherOrder);
	bool metadataFetcherOrderNull() const;
	void setMetadataFetcherOrderNull();


	QStringList imageFetchers() const;

	void setImageFetchers(QStringList newImageFetchers);
	bool imageFetchersNull() const;
	void setImageFetchersNull();


	QStringList imageFetcherOrder() const;

	void setImageFetcherOrder(QStringList newImageFetcherOrder);
	bool imageFetcherOrderNull() const;
	void setImageFetcherOrderNull();


	QList<ImageOption> imageOptions() const;

	void setImageOptions(QList<ImageOption> newImageOptions);
	bool imageOptionsNull() const;
	void setImageOptionsNull();


protected:
	QString m_type;
	QStringList m_metadataFetchers;
	QStringList m_metadataFetcherOrder;
	QStringList m_imageFetchers;
	QStringList m_imageFetcherOrder;
	QList<ImageOption> m_imageOptions;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_TYPEOPTIONS_H

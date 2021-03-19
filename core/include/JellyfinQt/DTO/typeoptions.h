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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class ImageOption;

class TypeOptions : public QObject {
	Q_OBJECT
public:
	explicit TypeOptions(QObject *parent = nullptr);
	static TypeOptions *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
	Q_PROPERTY(QStringList metadataFetchers READ metadataFetchers WRITE setMetadataFetchers NOTIFY metadataFetchersChanged)
	Q_PROPERTY(QStringList metadataFetcherOrder READ metadataFetcherOrder WRITE setMetadataFetcherOrder NOTIFY metadataFetcherOrderChanged)
	Q_PROPERTY(QStringList imageFetchers READ imageFetchers WRITE setImageFetchers NOTIFY imageFetchersChanged)
	Q_PROPERTY(QStringList imageFetcherOrder READ imageFetcherOrder WRITE setImageFetcherOrder NOTIFY imageFetcherOrderChanged)
	Q_PROPERTY(QList<ImageOption *> imageOptions READ imageOptions WRITE setImageOptions NOTIFY imageOptionsChanged)

	QString type() const;
	void setType(QString newType);
	
	QStringList metadataFetchers() const;
	void setMetadataFetchers(QStringList newMetadataFetchers);
	
	QStringList metadataFetcherOrder() const;
	void setMetadataFetcherOrder(QStringList newMetadataFetcherOrder);
	
	QStringList imageFetchers() const;
	void setImageFetchers(QStringList newImageFetchers);
	
	QStringList imageFetcherOrder() const;
	void setImageFetcherOrder(QStringList newImageFetcherOrder);
	
	QList<ImageOption *> imageOptions() const;
	void setImageOptions(QList<ImageOption *> newImageOptions);
	
signals:
	void typeChanged(QString newType);
	void metadataFetchersChanged(QStringList newMetadataFetchers);
	void metadataFetcherOrderChanged(QStringList newMetadataFetcherOrder);
	void imageFetchersChanged(QStringList newImageFetchers);
	void imageFetcherOrderChanged(QStringList newImageFetcherOrder);
	void imageOptionsChanged(QList<ImageOption *> newImageOptions);
protected:
	QString m_type;
	QStringList m_metadataFetchers;
	QStringList m_metadataFetcherOrder;
	QStringList m_imageFetchers;
	QStringList m_imageFetcherOrder;
	QList<ImageOption *> m_imageOptions;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_TYPEOPTIONS_H

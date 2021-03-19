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

#ifndef JELLYFIN_DTO_REMOTEIMAGERESULT_H
#define JELLYFIN_DTO_REMOTEIMAGERESULT_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class RemoteImageInfo;

class RemoteImageResult : public QObject {
	Q_OBJECT
public:
	explicit RemoteImageResult(QObject *parent = nullptr);
	static RemoteImageResult *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the images.
	 */
	Q_PROPERTY(QList<RemoteImageInfo *> images READ images WRITE setImages NOTIFY imagesChanged)
	/**
	 * @brief Gets or sets the total record count.
	 */
	Q_PROPERTY(qint32 totalRecordCount READ totalRecordCount WRITE setTotalRecordCount NOTIFY totalRecordCountChanged)
	/**
	 * @brief Gets or sets the providers.
	 */
	Q_PROPERTY(QStringList providers READ providers WRITE setProviders NOTIFY providersChanged)

	QList<RemoteImageInfo *> images() const;
	void setImages(QList<RemoteImageInfo *> newImages);
	
	qint32 totalRecordCount() const;
	void setTotalRecordCount(qint32 newTotalRecordCount);
	
	QStringList providers() const;
	void setProviders(QStringList newProviders);
	
signals:
	void imagesChanged(QList<RemoteImageInfo *> newImages);
	void totalRecordCountChanged(qint32 newTotalRecordCount);
	void providersChanged(QStringList newProviders);
protected:
	QList<RemoteImageInfo *> m_images;
	qint32 m_totalRecordCount;
	QStringList m_providers;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_REMOTEIMAGERESULT_H

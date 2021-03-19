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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class MetadataOptions : public QObject {
	Q_OBJECT
public:
	explicit MetadataOptions(QObject *parent = nullptr);
	static MetadataOptions *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QString itemType READ itemType WRITE setItemType NOTIFY itemTypeChanged)
	Q_PROPERTY(QStringList disabledMetadataSavers READ disabledMetadataSavers WRITE setDisabledMetadataSavers NOTIFY disabledMetadataSaversChanged)
	Q_PROPERTY(QStringList localMetadataReaderOrder READ localMetadataReaderOrder WRITE setLocalMetadataReaderOrder NOTIFY localMetadataReaderOrderChanged)
	Q_PROPERTY(QStringList disabledMetadataFetchers READ disabledMetadataFetchers WRITE setDisabledMetadataFetchers NOTIFY disabledMetadataFetchersChanged)
	Q_PROPERTY(QStringList metadataFetcherOrder READ metadataFetcherOrder WRITE setMetadataFetcherOrder NOTIFY metadataFetcherOrderChanged)
	Q_PROPERTY(QStringList disabledImageFetchers READ disabledImageFetchers WRITE setDisabledImageFetchers NOTIFY disabledImageFetchersChanged)
	Q_PROPERTY(QStringList imageFetcherOrder READ imageFetcherOrder WRITE setImageFetcherOrder NOTIFY imageFetcherOrderChanged)

	QString itemType() const;
	void setItemType(QString newItemType);
	
	QStringList disabledMetadataSavers() const;
	void setDisabledMetadataSavers(QStringList newDisabledMetadataSavers);
	
	QStringList localMetadataReaderOrder() const;
	void setLocalMetadataReaderOrder(QStringList newLocalMetadataReaderOrder);
	
	QStringList disabledMetadataFetchers() const;
	void setDisabledMetadataFetchers(QStringList newDisabledMetadataFetchers);
	
	QStringList metadataFetcherOrder() const;
	void setMetadataFetcherOrder(QStringList newMetadataFetcherOrder);
	
	QStringList disabledImageFetchers() const;
	void setDisabledImageFetchers(QStringList newDisabledImageFetchers);
	
	QStringList imageFetcherOrder() const;
	void setImageFetcherOrder(QStringList newImageFetcherOrder);
	
signals:
	void itemTypeChanged(QString newItemType);
	void disabledMetadataSaversChanged(QStringList newDisabledMetadataSavers);
	void localMetadataReaderOrderChanged(QStringList newLocalMetadataReaderOrder);
	void disabledMetadataFetchersChanged(QStringList newDisabledMetadataFetchers);
	void metadataFetcherOrderChanged(QStringList newMetadataFetcherOrder);
	void disabledImageFetchersChanged(QStringList newDisabledImageFetchers);
	void imageFetcherOrderChanged(QStringList newImageFetcherOrder);
protected:
	QString m_itemType;
	QStringList m_disabledMetadataSavers;
	QStringList m_localMetadataReaderOrder;
	QStringList m_disabledMetadataFetchers;
	QStringList m_metadataFetcherOrder;
	QStringList m_disabledImageFetchers;
	QStringList m_imageFetcherOrder;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_METADATAOPTIONS_H

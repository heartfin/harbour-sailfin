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

#ifndef JELLYFIN_DTO_DEVICEIDENTIFICATION_H
#define JELLYFIN_DTO_DEVICEIDENTIFICATION_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class HttpHeaderInfo;

class DeviceIdentification : public QObject {
	Q_OBJECT
public:
	explicit DeviceIdentification(QObject *parent = nullptr);
	static DeviceIdentification *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name of the friendly.
	 */
	Q_PROPERTY(QString friendlyName READ friendlyName WRITE setFriendlyName NOTIFY friendlyNameChanged)
	/**
	 * @brief Gets or sets the model number.
	 */
	Q_PROPERTY(QString modelNumber READ modelNumber WRITE setModelNumber NOTIFY modelNumberChanged)
	/**
	 * @brief Gets or sets the serial number.
	 */
	Q_PROPERTY(QString serialNumber READ serialNumber WRITE setSerialNumber NOTIFY serialNumberChanged)
	/**
	 * @brief Gets or sets the name of the model.
	 */
	Q_PROPERTY(QString modelName READ modelName WRITE setModelName NOTIFY modelNameChanged)
	/**
	 * @brief Gets or sets the model description.
	 */
	Q_PROPERTY(QString modelDescription READ modelDescription WRITE setModelDescription NOTIFY modelDescriptionChanged)
	/**
	 * @brief Gets or sets the model URL.
	 */
	Q_PROPERTY(QString modelUrl READ modelUrl WRITE setModelUrl NOTIFY modelUrlChanged)
	/**
	 * @brief Gets or sets the manufacturer.
	 */
	Q_PROPERTY(QString manufacturer READ manufacturer WRITE setManufacturer NOTIFY manufacturerChanged)
	/**
	 * @brief Gets or sets the manufacturer URL.
	 */
	Q_PROPERTY(QString manufacturerUrl READ manufacturerUrl WRITE setManufacturerUrl NOTIFY manufacturerUrlChanged)
	/**
	 * @brief Gets or sets the headers.
	 */
	Q_PROPERTY(QList<HttpHeaderInfo *> headers READ headers WRITE setHeaders NOTIFY headersChanged)

	QString friendlyName() const;
	void setFriendlyName(QString newFriendlyName);
	
	QString modelNumber() const;
	void setModelNumber(QString newModelNumber);
	
	QString serialNumber() const;
	void setSerialNumber(QString newSerialNumber);
	
	QString modelName() const;
	void setModelName(QString newModelName);
	
	QString modelDescription() const;
	void setModelDescription(QString newModelDescription);
	
	QString modelUrl() const;
	void setModelUrl(QString newModelUrl);
	
	QString manufacturer() const;
	void setManufacturer(QString newManufacturer);
	
	QString manufacturerUrl() const;
	void setManufacturerUrl(QString newManufacturerUrl);
	
	QList<HttpHeaderInfo *> headers() const;
	void setHeaders(QList<HttpHeaderInfo *> newHeaders);
	
signals:
	void friendlyNameChanged(QString newFriendlyName);
	void modelNumberChanged(QString newModelNumber);
	void serialNumberChanged(QString newSerialNumber);
	void modelNameChanged(QString newModelName);
	void modelDescriptionChanged(QString newModelDescription);
	void modelUrlChanged(QString newModelUrl);
	void manufacturerChanged(QString newManufacturer);
	void manufacturerUrlChanged(QString newManufacturerUrl);
	void headersChanged(QList<HttpHeaderInfo *> newHeaders);
protected:
	QString m_friendlyName;
	QString m_modelNumber;
	QString m_serialNumber;
	QString m_modelName;
	QString m_modelDescription;
	QString m_modelUrl;
	QString m_manufacturer;
	QString m_manufacturerUrl;
	QList<HttpHeaderInfo *> m_headers;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_DEVICEIDENTIFICATION_H

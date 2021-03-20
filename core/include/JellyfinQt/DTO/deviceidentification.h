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
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/httpheaderinfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class DeviceIdentification {
public:
	explicit DeviceIdentification();
	static DeviceIdentification fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the name of the friendly.
	 */
	QString friendlyName() const;
	/**
	* @brief Gets or sets the name of the friendly.
	*/
	void setFriendlyName(QString newFriendlyName);
	/**
	 * @brief Gets or sets the model number.
	 */
	QString modelNumber() const;
	/**
	* @brief Gets or sets the model number.
	*/
	void setModelNumber(QString newModelNumber);
	/**
	 * @brief Gets or sets the serial number.
	 */
	QString serialNumber() const;
	/**
	* @brief Gets or sets the serial number.
	*/
	void setSerialNumber(QString newSerialNumber);
	/**
	 * @brief Gets or sets the name of the model.
	 */
	QString modelName() const;
	/**
	* @brief Gets or sets the name of the model.
	*/
	void setModelName(QString newModelName);
	/**
	 * @brief Gets or sets the model description.
	 */
	QString modelDescription() const;
	/**
	* @brief Gets or sets the model description.
	*/
	void setModelDescription(QString newModelDescription);
	/**
	 * @brief Gets or sets the model URL.
	 */
	QString modelUrl() const;
	/**
	* @brief Gets or sets the model URL.
	*/
	void setModelUrl(QString newModelUrl);
	/**
	 * @brief Gets or sets the manufacturer.
	 */
	QString manufacturer() const;
	/**
	* @brief Gets or sets the manufacturer.
	*/
	void setManufacturer(QString newManufacturer);
	/**
	 * @brief Gets or sets the manufacturer URL.
	 */
	QString manufacturerUrl() const;
	/**
	* @brief Gets or sets the manufacturer URL.
	*/
	void setManufacturerUrl(QString newManufacturerUrl);
	/**
	 * @brief Gets or sets the headers.
	 */
	QList<QSharedPointer<HttpHeaderInfo>> headers() const;
	/**
	* @brief Gets or sets the headers.
	*/
	void setHeaders(QList<QSharedPointer<HttpHeaderInfo>> newHeaders);

protected:
	QString m_friendlyName;
	QString m_modelNumber;
	QString m_serialNumber;
	QString m_modelName;
	QString m_modelDescription;
	QString m_modelUrl;
	QString m_manufacturer;
	QString m_manufacturerUrl;
	QList<QSharedPointer<HttpHeaderInfo>> m_headers;
};

} // NS DTO

namespace Support {

using DeviceIdentification = Jellyfin::DTO::DeviceIdentification;

template <>
DeviceIdentification fromJsonValue<DeviceIdentification>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return DeviceIdentification::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_DEVICEIDENTIFICATION_H

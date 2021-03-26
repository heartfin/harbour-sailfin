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

#include <JellyfinQt/dto/deviceidentification.h>

namespace Jellyfin {
namespace DTO {

DeviceIdentification::DeviceIdentification() {}

DeviceIdentification::DeviceIdentification(const DeviceIdentification &other) :

	m_friendlyName(other.m_friendlyName),
	m_modelNumber(other.m_modelNumber),
	m_serialNumber(other.m_serialNumber),
	m_modelName(other.m_modelName),
	m_modelDescription(other.m_modelDescription),
	m_modelUrl(other.m_modelUrl),
	m_manufacturer(other.m_manufacturer),
	m_manufacturerUrl(other.m_manufacturerUrl),
	m_headers(other.m_headers){}


void DeviceIdentification::replaceData(DeviceIdentification &other) {
	m_friendlyName = other.m_friendlyName;
	m_modelNumber = other.m_modelNumber;
	m_serialNumber = other.m_serialNumber;
	m_modelName = other.m_modelName;
	m_modelDescription = other.m_modelDescription;
	m_modelUrl = other.m_modelUrl;
	m_manufacturer = other.m_manufacturer;
	m_manufacturerUrl = other.m_manufacturerUrl;
	m_headers = other.m_headers;
}

DeviceIdentification DeviceIdentification::fromJson(QJsonObject source) {
	DeviceIdentification instance;
	instance.setFromJson(source);
	return instance;
}


void DeviceIdentification::setFromJson(QJsonObject source) {
	m_friendlyName = Jellyfin::Support::fromJsonValue<QString>(source["FriendlyName"]);
	m_modelNumber = Jellyfin::Support::fromJsonValue<QString>(source["ModelNumber"]);
	m_serialNumber = Jellyfin::Support::fromJsonValue<QString>(source["SerialNumber"]);
	m_modelName = Jellyfin::Support::fromJsonValue<QString>(source["ModelName"]);
	m_modelDescription = Jellyfin::Support::fromJsonValue<QString>(source["ModelDescription"]);
	m_modelUrl = Jellyfin::Support::fromJsonValue<QString>(source["ModelUrl"]);
	m_manufacturer = Jellyfin::Support::fromJsonValue<QString>(source["Manufacturer"]);
	m_manufacturerUrl = Jellyfin::Support::fromJsonValue<QString>(source["ManufacturerUrl"]);
	m_headers = Jellyfin::Support::fromJsonValue<QList<HttpHeaderInfo>>(source["Headers"]);

}
	
QJsonObject DeviceIdentification::toJson() {
	QJsonObject result;
	result["FriendlyName"] = Jellyfin::Support::toJsonValue<QString>(m_friendlyName);
	result["ModelNumber"] = Jellyfin::Support::toJsonValue<QString>(m_modelNumber);
	result["SerialNumber"] = Jellyfin::Support::toJsonValue<QString>(m_serialNumber);
	result["ModelName"] = Jellyfin::Support::toJsonValue<QString>(m_modelName);
	result["ModelDescription"] = Jellyfin::Support::toJsonValue<QString>(m_modelDescription);
	result["ModelUrl"] = Jellyfin::Support::toJsonValue<QString>(m_modelUrl);
	result["Manufacturer"] = Jellyfin::Support::toJsonValue<QString>(m_manufacturer);
	result["ManufacturerUrl"] = Jellyfin::Support::toJsonValue<QString>(m_manufacturerUrl);
	result["Headers"] = Jellyfin::Support::toJsonValue<QList<HttpHeaderInfo>>(m_headers);

	return result;
}

QString DeviceIdentification::friendlyName() const { return m_friendlyName; }

void DeviceIdentification::setFriendlyName(QString newFriendlyName) {
	m_friendlyName = newFriendlyName;
}
bool DeviceIdentification::friendlyNameNull() const {
	return m_friendlyName.isNull();
}

void DeviceIdentification::setFriendlyNameNull() {
	m_friendlyName.clear();

}
QString DeviceIdentification::modelNumber() const { return m_modelNumber; }

void DeviceIdentification::setModelNumber(QString newModelNumber) {
	m_modelNumber = newModelNumber;
}
bool DeviceIdentification::modelNumberNull() const {
	return m_modelNumber.isNull();
}

void DeviceIdentification::setModelNumberNull() {
	m_modelNumber.clear();

}
QString DeviceIdentification::serialNumber() const { return m_serialNumber; }

void DeviceIdentification::setSerialNumber(QString newSerialNumber) {
	m_serialNumber = newSerialNumber;
}
bool DeviceIdentification::serialNumberNull() const {
	return m_serialNumber.isNull();
}

void DeviceIdentification::setSerialNumberNull() {
	m_serialNumber.clear();

}
QString DeviceIdentification::modelName() const { return m_modelName; }

void DeviceIdentification::setModelName(QString newModelName) {
	m_modelName = newModelName;
}
bool DeviceIdentification::modelNameNull() const {
	return m_modelName.isNull();
}

void DeviceIdentification::setModelNameNull() {
	m_modelName.clear();

}
QString DeviceIdentification::modelDescription() const { return m_modelDescription; }

void DeviceIdentification::setModelDescription(QString newModelDescription) {
	m_modelDescription = newModelDescription;
}
bool DeviceIdentification::modelDescriptionNull() const {
	return m_modelDescription.isNull();
}

void DeviceIdentification::setModelDescriptionNull() {
	m_modelDescription.clear();

}
QString DeviceIdentification::modelUrl() const { return m_modelUrl; }

void DeviceIdentification::setModelUrl(QString newModelUrl) {
	m_modelUrl = newModelUrl;
}
bool DeviceIdentification::modelUrlNull() const {
	return m_modelUrl.isNull();
}

void DeviceIdentification::setModelUrlNull() {
	m_modelUrl.clear();

}
QString DeviceIdentification::manufacturer() const { return m_manufacturer; }

void DeviceIdentification::setManufacturer(QString newManufacturer) {
	m_manufacturer = newManufacturer;
}
bool DeviceIdentification::manufacturerNull() const {
	return m_manufacturer.isNull();
}

void DeviceIdentification::setManufacturerNull() {
	m_manufacturer.clear();

}
QString DeviceIdentification::manufacturerUrl() const { return m_manufacturerUrl; }

void DeviceIdentification::setManufacturerUrl(QString newManufacturerUrl) {
	m_manufacturerUrl = newManufacturerUrl;
}
bool DeviceIdentification::manufacturerUrlNull() const {
	return m_manufacturerUrl.isNull();
}

void DeviceIdentification::setManufacturerUrlNull() {
	m_manufacturerUrl.clear();

}
QList<HttpHeaderInfo> DeviceIdentification::headers() const { return m_headers; }

void DeviceIdentification::setHeaders(QList<HttpHeaderInfo> newHeaders) {
	m_headers = newHeaders;
}
bool DeviceIdentification::headersNull() const {
	return m_headers.size() == 0;
}

void DeviceIdentification::setHeadersNull() {
	m_headers.clear();

}

} // NS DTO

namespace Support {

using DeviceIdentification = Jellyfin::DTO::DeviceIdentification;

template <>
DeviceIdentification fromJsonValue<DeviceIdentification>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return DeviceIdentification::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

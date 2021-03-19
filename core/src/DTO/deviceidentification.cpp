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

#include <JellyfinQt/DTO/deviceidentification.h>

namespace Jellyfin {
namespace DTO {

DeviceIdentification::DeviceIdentification(QObject *parent) : QObject(parent) {}

DeviceIdentification *DeviceIdentification::fromJSON(QJsonObject source, QObject *parent) {
	DeviceIdentification *instance = new DeviceIdentification(parent);
	instance->updateFromJSON(source);
	return instance;
}

void DeviceIdentification::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject DeviceIdentification::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString DeviceIdentification::friendlyName() const { return m_friendlyName; }
void DeviceIdentification::setFriendlyName(QString newFriendlyName) {
	m_friendlyName = newFriendlyName;
	emit friendlyNameChanged(newFriendlyName);
}

QString DeviceIdentification::modelNumber() const { return m_modelNumber; }
void DeviceIdentification::setModelNumber(QString newModelNumber) {
	m_modelNumber = newModelNumber;
	emit modelNumberChanged(newModelNumber);
}

QString DeviceIdentification::serialNumber() const { return m_serialNumber; }
void DeviceIdentification::setSerialNumber(QString newSerialNumber) {
	m_serialNumber = newSerialNumber;
	emit serialNumberChanged(newSerialNumber);
}

QString DeviceIdentification::modelName() const { return m_modelName; }
void DeviceIdentification::setModelName(QString newModelName) {
	m_modelName = newModelName;
	emit modelNameChanged(newModelName);
}

QString DeviceIdentification::modelDescription() const { return m_modelDescription; }
void DeviceIdentification::setModelDescription(QString newModelDescription) {
	m_modelDescription = newModelDescription;
	emit modelDescriptionChanged(newModelDescription);
}

QString DeviceIdentification::modelUrl() const { return m_modelUrl; }
void DeviceIdentification::setModelUrl(QString newModelUrl) {
	m_modelUrl = newModelUrl;
	emit modelUrlChanged(newModelUrl);
}

QString DeviceIdentification::manufacturer() const { return m_manufacturer; }
void DeviceIdentification::setManufacturer(QString newManufacturer) {
	m_manufacturer = newManufacturer;
	emit manufacturerChanged(newManufacturer);
}

QString DeviceIdentification::manufacturerUrl() const { return m_manufacturerUrl; }
void DeviceIdentification::setManufacturerUrl(QString newManufacturerUrl) {
	m_manufacturerUrl = newManufacturerUrl;
	emit manufacturerUrlChanged(newManufacturerUrl);
}

QList<HttpHeaderInfo *> DeviceIdentification::headers() const { return m_headers; }
void DeviceIdentification::setHeaders(QList<HttpHeaderInfo *> newHeaders) {
	m_headers = newHeaders;
	emit headersChanged(newHeaders);
}


} // NS Jellyfin
} // NS DTO

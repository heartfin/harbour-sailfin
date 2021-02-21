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

#include <JellyfinQt/DTO/seriesinfo.h>

namespace Jellyfin {
namespace DTO {

SeriesInfo::SeriesInfo(QObject *parent) : QObject(parent) {}

SeriesInfo *SeriesInfo::fromJSON(QJsonObject source, QObject *parent) {
	SeriesInfo *instance = new SeriesInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void SeriesInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject SeriesInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString SeriesInfo::name() const { return m_name; }
void SeriesInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString SeriesInfo::path() const { return m_path; }
void SeriesInfo::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

QString SeriesInfo::metadataLanguage() const { return m_metadataLanguage; }
void SeriesInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
	emit metadataLanguageChanged(newMetadataLanguage);
}

QString SeriesInfo::metadataCountryCode() const { return m_metadataCountryCode; }
void SeriesInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
	emit metadataCountryCodeChanged(newMetadataCountryCode);
}

QJsonObject SeriesInfo::providerIds() const { return m_providerIds; }
void SeriesInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
	emit providerIdsChanged(newProviderIds);
}

qint32 SeriesInfo::year() const { return m_year; }
void SeriesInfo::setYear(qint32 newYear) {
	m_year = newYear;
	emit yearChanged(newYear);
}

qint32 SeriesInfo::indexNumber() const { return m_indexNumber; }
void SeriesInfo::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
	emit indexNumberChanged(newIndexNumber);
}

qint32 SeriesInfo::parentIndexNumber() const { return m_parentIndexNumber; }
void SeriesInfo::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
	emit parentIndexNumberChanged(newParentIndexNumber);
}

QDateTime SeriesInfo::premiereDate() const { return m_premiereDate; }
void SeriesInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
	emit premiereDateChanged(newPremiereDate);
}

bool SeriesInfo::isAutomated() const { return m_isAutomated; }
void SeriesInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
	emit isAutomatedChanged(newIsAutomated);
}


} // NS Jellyfin
} // NS DTO

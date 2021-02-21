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

#include <JellyfinQt/DTO/trailerinfo.h>

namespace Jellyfin {
namespace DTO {

TrailerInfo::TrailerInfo(QObject *parent) : QObject(parent) {}

TrailerInfo *TrailerInfo::fromJSON(QJsonObject source, QObject *parent) {
	TrailerInfo *instance = new TrailerInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void TrailerInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject TrailerInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString TrailerInfo::name() const { return m_name; }
void TrailerInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString TrailerInfo::path() const { return m_path; }
void TrailerInfo::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

QString TrailerInfo::metadataLanguage() const { return m_metadataLanguage; }
void TrailerInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
	emit metadataLanguageChanged(newMetadataLanguage);
}

QString TrailerInfo::metadataCountryCode() const { return m_metadataCountryCode; }
void TrailerInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
	emit metadataCountryCodeChanged(newMetadataCountryCode);
}

QJsonObject TrailerInfo::providerIds() const { return m_providerIds; }
void TrailerInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
	emit providerIdsChanged(newProviderIds);
}

qint32 TrailerInfo::year() const { return m_year; }
void TrailerInfo::setYear(qint32 newYear) {
	m_year = newYear;
	emit yearChanged(newYear);
}

qint32 TrailerInfo::indexNumber() const { return m_indexNumber; }
void TrailerInfo::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
	emit indexNumberChanged(newIndexNumber);
}

qint32 TrailerInfo::parentIndexNumber() const { return m_parentIndexNumber; }
void TrailerInfo::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
	emit parentIndexNumberChanged(newParentIndexNumber);
}

QDateTime TrailerInfo::premiereDate() const { return m_premiereDate; }
void TrailerInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
	emit premiereDateChanged(newPremiereDate);
}

bool TrailerInfo::isAutomated() const { return m_isAutomated; }
void TrailerInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
	emit isAutomatedChanged(newIsAutomated);
}


} // NS Jellyfin
} // NS DTO

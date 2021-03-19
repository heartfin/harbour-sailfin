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

#include <JellyfinQt/DTO/personlookupinfo.h>

namespace Jellyfin {
namespace DTO {

PersonLookupInfo::PersonLookupInfo(QObject *parent) : QObject(parent) {}

PersonLookupInfo *PersonLookupInfo::fromJSON(QJsonObject source, QObject *parent) {
	PersonLookupInfo *instance = new PersonLookupInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void PersonLookupInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject PersonLookupInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString PersonLookupInfo::name() const { return m_name; }
void PersonLookupInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString PersonLookupInfo::path() const { return m_path; }
void PersonLookupInfo::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

QString PersonLookupInfo::metadataLanguage() const { return m_metadataLanguage; }
void PersonLookupInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
	emit metadataLanguageChanged(newMetadataLanguage);
}

QString PersonLookupInfo::metadataCountryCode() const { return m_metadataCountryCode; }
void PersonLookupInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
	emit metadataCountryCodeChanged(newMetadataCountryCode);
}

QJsonObject PersonLookupInfo::providerIds() const { return m_providerIds; }
void PersonLookupInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
	emit providerIdsChanged(newProviderIds);
}

qint32 PersonLookupInfo::year() const { return m_year; }
void PersonLookupInfo::setYear(qint32 newYear) {
	m_year = newYear;
	emit yearChanged(newYear);
}

qint32 PersonLookupInfo::indexNumber() const { return m_indexNumber; }
void PersonLookupInfo::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
	emit indexNumberChanged(newIndexNumber);
}

qint32 PersonLookupInfo::parentIndexNumber() const { return m_parentIndexNumber; }
void PersonLookupInfo::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
	emit parentIndexNumberChanged(newParentIndexNumber);
}

QDateTime PersonLookupInfo::premiereDate() const { return m_premiereDate; }
void PersonLookupInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
	emit premiereDateChanged(newPremiereDate);
}

bool PersonLookupInfo::isAutomated() const { return m_isAutomated; }
void PersonLookupInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
	emit isAutomatedChanged(newIsAutomated);
}


} // NS Jellyfin
} // NS DTO

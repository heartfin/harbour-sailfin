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

#include <JellyfinQt/DTO/boxsetinfo.h>

namespace Jellyfin {
namespace DTO {

BoxSetInfo::BoxSetInfo(QObject *parent) : QObject(parent) {}

BoxSetInfo *BoxSetInfo::fromJSON(QJsonObject source, QObject *parent) {
	BoxSetInfo *instance = new BoxSetInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void BoxSetInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject BoxSetInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString BoxSetInfo::name() const { return m_name; }
void BoxSetInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString BoxSetInfo::path() const { return m_path; }
void BoxSetInfo::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

QString BoxSetInfo::metadataLanguage() const { return m_metadataLanguage; }
void BoxSetInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
	emit metadataLanguageChanged(newMetadataLanguage);
}

QString BoxSetInfo::metadataCountryCode() const { return m_metadataCountryCode; }
void BoxSetInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
	emit metadataCountryCodeChanged(newMetadataCountryCode);
}

QJsonObject BoxSetInfo::providerIds() const { return m_providerIds; }
void BoxSetInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
	emit providerIdsChanged(newProviderIds);
}

qint32 BoxSetInfo::year() const { return m_year; }
void BoxSetInfo::setYear(qint32 newYear) {
	m_year = newYear;
	emit yearChanged(newYear);
}

qint32 BoxSetInfo::indexNumber() const { return m_indexNumber; }
void BoxSetInfo::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
	emit indexNumberChanged(newIndexNumber);
}

qint32 BoxSetInfo::parentIndexNumber() const { return m_parentIndexNumber; }
void BoxSetInfo::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
	emit parentIndexNumberChanged(newParentIndexNumber);
}

QDateTime BoxSetInfo::premiereDate() const { return m_premiereDate; }
void BoxSetInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
	emit premiereDateChanged(newPremiereDate);
}

bool BoxSetInfo::isAutomated() const { return m_isAutomated; }
void BoxSetInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
	emit isAutomatedChanged(newIsAutomated);
}


} // NS Jellyfin
} // NS DTO

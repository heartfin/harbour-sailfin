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

#include <JellyfinQt/DTO/movieinfo.h>

namespace Jellyfin {
namespace DTO {

MovieInfo::MovieInfo(QObject *parent) : QObject(parent) {}

MovieInfo *MovieInfo::fromJSON(QJsonObject source, QObject *parent) {
	MovieInfo *instance = new MovieInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void MovieInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject MovieInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString MovieInfo::name() const { return m_name; }
void MovieInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString MovieInfo::path() const { return m_path; }
void MovieInfo::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

QString MovieInfo::metadataLanguage() const { return m_metadataLanguage; }
void MovieInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
	emit metadataLanguageChanged(newMetadataLanguage);
}

QString MovieInfo::metadataCountryCode() const { return m_metadataCountryCode; }
void MovieInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
	emit metadataCountryCodeChanged(newMetadataCountryCode);
}

QJsonObject MovieInfo::providerIds() const { return m_providerIds; }
void MovieInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
	emit providerIdsChanged(newProviderIds);
}

qint32 MovieInfo::year() const { return m_year; }
void MovieInfo::setYear(qint32 newYear) {
	m_year = newYear;
	emit yearChanged(newYear);
}

qint32 MovieInfo::indexNumber() const { return m_indexNumber; }
void MovieInfo::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
	emit indexNumberChanged(newIndexNumber);
}

qint32 MovieInfo::parentIndexNumber() const { return m_parentIndexNumber; }
void MovieInfo::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
	emit parentIndexNumberChanged(newParentIndexNumber);
}

QDateTime MovieInfo::premiereDate() const { return m_premiereDate; }
void MovieInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
	emit premiereDateChanged(newPremiereDate);
}

bool MovieInfo::isAutomated() const { return m_isAutomated; }
void MovieInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
	emit isAutomatedChanged(newIsAutomated);
}


} // NS Jellyfin
} // NS DTO

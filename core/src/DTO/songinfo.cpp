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

#include <JellyfinQt/DTO/songinfo.h>

namespace Jellyfin {
namespace DTO {

SongInfo::SongInfo(QObject *parent) : QObject(parent) {}

SongInfo *SongInfo::fromJSON(QJsonObject source, QObject *parent) {
	SongInfo *instance = new SongInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void SongInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject SongInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString SongInfo::name() const { return m_name; }
void SongInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString SongInfo::path() const { return m_path; }
void SongInfo::setPath(QString newPath) {
	m_path = newPath;
	emit pathChanged(newPath);
}

QString SongInfo::metadataLanguage() const { return m_metadataLanguage; }
void SongInfo::setMetadataLanguage(QString newMetadataLanguage) {
	m_metadataLanguage = newMetadataLanguage;
	emit metadataLanguageChanged(newMetadataLanguage);
}

QString SongInfo::metadataCountryCode() const { return m_metadataCountryCode; }
void SongInfo::setMetadataCountryCode(QString newMetadataCountryCode) {
	m_metadataCountryCode = newMetadataCountryCode;
	emit metadataCountryCodeChanged(newMetadataCountryCode);
}

QJsonObject SongInfo::providerIds() const { return m_providerIds; }
void SongInfo::setProviderIds(QJsonObject newProviderIds) {
	m_providerIds = newProviderIds;
	emit providerIdsChanged(newProviderIds);
}

qint32 SongInfo::year() const { return m_year; }
void SongInfo::setYear(qint32 newYear) {
	m_year = newYear;
	emit yearChanged(newYear);
}

qint32 SongInfo::indexNumber() const { return m_indexNumber; }
void SongInfo::setIndexNumber(qint32 newIndexNumber) {
	m_indexNumber = newIndexNumber;
	emit indexNumberChanged(newIndexNumber);
}

qint32 SongInfo::parentIndexNumber() const { return m_parentIndexNumber; }
void SongInfo::setParentIndexNumber(qint32 newParentIndexNumber) {
	m_parentIndexNumber = newParentIndexNumber;
	emit parentIndexNumberChanged(newParentIndexNumber);
}

QDateTime SongInfo::premiereDate() const { return m_premiereDate; }
void SongInfo::setPremiereDate(QDateTime newPremiereDate) {
	m_premiereDate = newPremiereDate;
	emit premiereDateChanged(newPremiereDate);
}

bool SongInfo::isAutomated() const { return m_isAutomated; }
void SongInfo::setIsAutomated(bool newIsAutomated) {
	m_isAutomated = newIsAutomated;
	emit isAutomatedChanged(newIsAutomated);
}

QStringList SongInfo::albumArtists() const { return m_albumArtists; }
void SongInfo::setAlbumArtists(QStringList newAlbumArtists) {
	m_albumArtists = newAlbumArtists;
	emit albumArtistsChanged(newAlbumArtists);
}

QString SongInfo::album() const { return m_album; }
void SongInfo::setAlbum(QString newAlbum) {
	m_album = newAlbum;
	emit albumChanged(newAlbum);
}

QStringList SongInfo::artists() const { return m_artists; }
void SongInfo::setArtists(QStringList newArtists) {
	m_artists = newArtists;
	emit artistsChanged(newArtists);
}


} // NS Jellyfin
} // NS DTO

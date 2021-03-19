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

#include <JellyfinQt/DTO/remotesubtitleinfo.h>

namespace Jellyfin {
namespace DTO {

RemoteSubtitleInfo::RemoteSubtitleInfo(QObject *parent) : QObject(parent) {}

RemoteSubtitleInfo *RemoteSubtitleInfo::fromJSON(QJsonObject source, QObject *parent) {
	RemoteSubtitleInfo *instance = new RemoteSubtitleInfo(parent);
	instance->updateFromJSON(source);
	return instance;
}

void RemoteSubtitleInfo::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject RemoteSubtitleInfo::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString RemoteSubtitleInfo::threeLetterISOLanguageName() const { return m_threeLetterISOLanguageName; }
void RemoteSubtitleInfo::setThreeLetterISOLanguageName(QString newThreeLetterISOLanguageName) {
	m_threeLetterISOLanguageName = newThreeLetterISOLanguageName;
	emit threeLetterISOLanguageNameChanged(newThreeLetterISOLanguageName);
}

QString RemoteSubtitleInfo::jellyfinId() const { return m_jellyfinId; }
void RemoteSubtitleInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
	emit jellyfinIdChanged(newJellyfinId);
}

QString RemoteSubtitleInfo::providerName() const { return m_providerName; }
void RemoteSubtitleInfo::setProviderName(QString newProviderName) {
	m_providerName = newProviderName;
	emit providerNameChanged(newProviderName);
}

QString RemoteSubtitleInfo::name() const { return m_name; }
void RemoteSubtitleInfo::setName(QString newName) {
	m_name = newName;
	emit nameChanged(newName);
}

QString RemoteSubtitleInfo::format() const { return m_format; }
void RemoteSubtitleInfo::setFormat(QString newFormat) {
	m_format = newFormat;
	emit formatChanged(newFormat);
}

QString RemoteSubtitleInfo::author() const { return m_author; }
void RemoteSubtitleInfo::setAuthor(QString newAuthor) {
	m_author = newAuthor;
	emit authorChanged(newAuthor);
}

QString RemoteSubtitleInfo::comment() const { return m_comment; }
void RemoteSubtitleInfo::setComment(QString newComment) {
	m_comment = newComment;
	emit commentChanged(newComment);
}

QDateTime RemoteSubtitleInfo::dateCreated() const { return m_dateCreated; }
void RemoteSubtitleInfo::setDateCreated(QDateTime newDateCreated) {
	m_dateCreated = newDateCreated;
	emit dateCreatedChanged(newDateCreated);
}

float RemoteSubtitleInfo::communityRating() const { return m_communityRating; }
void RemoteSubtitleInfo::setCommunityRating(float newCommunityRating) {
	m_communityRating = newCommunityRating;
	emit communityRatingChanged(newCommunityRating);
}

qint32 RemoteSubtitleInfo::downloadCount() const { return m_downloadCount; }
void RemoteSubtitleInfo::setDownloadCount(qint32 newDownloadCount) {
	m_downloadCount = newDownloadCount;
	emit downloadCountChanged(newDownloadCount);
}

bool RemoteSubtitleInfo::isHashMatch() const { return m_isHashMatch; }
void RemoteSubtitleInfo::setIsHashMatch(bool newIsHashMatch) {
	m_isHashMatch = newIsHashMatch;
	emit isHashMatchChanged(newIsHashMatch);
}


} // NS Jellyfin
} // NS DTO

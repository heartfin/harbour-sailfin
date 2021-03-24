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

#include <JellyfinQt/dto/remotesubtitleinfo.h>

namespace Jellyfin {
namespace DTO {

RemoteSubtitleInfo::RemoteSubtitleInfo() {}

RemoteSubtitleInfo::RemoteSubtitleInfo(const RemoteSubtitleInfo &other) :

	m_threeLetterISOLanguageName(other.m_threeLetterISOLanguageName),
	m_jellyfinId(other.m_jellyfinId),
	m_providerName(other.m_providerName),
	m_name(other.m_name),
	m_format(other.m_format),
	m_author(other.m_author),
	m_comment(other.m_comment),
	m_dateCreated(other.m_dateCreated),
	m_communityRating(other.m_communityRating),
	m_downloadCount(other.m_downloadCount),
	m_isHashMatch(other.m_isHashMatch){}


void RemoteSubtitleInfo::replaceData(RemoteSubtitleInfo &other) {
	m_threeLetterISOLanguageName = other.m_threeLetterISOLanguageName;
	m_jellyfinId = other.m_jellyfinId;
	m_providerName = other.m_providerName;
	m_name = other.m_name;
	m_format = other.m_format;
	m_author = other.m_author;
	m_comment = other.m_comment;
	m_dateCreated = other.m_dateCreated;
	m_communityRating = other.m_communityRating;
	m_downloadCount = other.m_downloadCount;
	m_isHashMatch = other.m_isHashMatch;
}

RemoteSubtitleInfo RemoteSubtitleInfo::fromJson(QJsonObject source) {
	RemoteSubtitleInfo instance;
	instance.setFromJson(source);
	return instance;
}


void RemoteSubtitleInfo::setFromJson(QJsonObject source) {
	m_threeLetterISOLanguageName = Jellyfin::Support::fromJsonValue<QString>(source["ThreeLetterISOLanguageName"]);
	m_jellyfinId = Jellyfin::Support::fromJsonValue<QString>(source["Id"]);
	m_providerName = Jellyfin::Support::fromJsonValue<QString>(source["ProviderName"]);
	m_name = Jellyfin::Support::fromJsonValue<QString>(source["Name"]);
	m_format = Jellyfin::Support::fromJsonValue<QString>(source["Format"]);
	m_author = Jellyfin::Support::fromJsonValue<QString>(source["Author"]);
	m_comment = Jellyfin::Support::fromJsonValue<QString>(source["Comment"]);
	m_dateCreated = Jellyfin::Support::fromJsonValue<QDateTime>(source["DateCreated"]);
	m_communityRating = Jellyfin::Support::fromJsonValue<std::optional<float>>(source["CommunityRating"]);
	m_downloadCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["DownloadCount"]);
	m_isHashMatch = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsHashMatch"]);

}
	
QJsonObject RemoteSubtitleInfo::toJson() {
	QJsonObject result;
	result["ThreeLetterISOLanguageName"] = Jellyfin::Support::toJsonValue<QString>(m_threeLetterISOLanguageName);
	result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	result["ProviderName"] = Jellyfin::Support::toJsonValue<QString>(m_providerName);
	result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	result["Format"] = Jellyfin::Support::toJsonValue<QString>(m_format);
	result["Author"] = Jellyfin::Support::toJsonValue<QString>(m_author);
	result["Comment"] = Jellyfin::Support::toJsonValue<QString>(m_comment);
	result["DateCreated"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateCreated);
	result["CommunityRating"] = Jellyfin::Support::toJsonValue<std::optional<float>>(m_communityRating);
	result["DownloadCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_downloadCount);
	result["IsHashMatch"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isHashMatch);

	return result;
}

QString RemoteSubtitleInfo::threeLetterISOLanguageName() const { return m_threeLetterISOLanguageName; }

void RemoteSubtitleInfo::setThreeLetterISOLanguageName(QString newThreeLetterISOLanguageName) {
	m_threeLetterISOLanguageName = newThreeLetterISOLanguageName;
}
bool RemoteSubtitleInfo::threeLetterISOLanguageNameNull() const {
	return m_threeLetterISOLanguageName.isNull();
}

void RemoteSubtitleInfo::setThreeLetterISOLanguageNameNull() {
	m_threeLetterISOLanguageName.clear();

}
QString RemoteSubtitleInfo::jellyfinId() const { return m_jellyfinId; }

void RemoteSubtitleInfo::setJellyfinId(QString newJellyfinId) {
	m_jellyfinId = newJellyfinId;
}
bool RemoteSubtitleInfo::jellyfinIdNull() const {
	return m_jellyfinId.isNull();
}

void RemoteSubtitleInfo::setJellyfinIdNull() {
	m_jellyfinId.clear();

}
QString RemoteSubtitleInfo::providerName() const { return m_providerName; }

void RemoteSubtitleInfo::setProviderName(QString newProviderName) {
	m_providerName = newProviderName;
}
bool RemoteSubtitleInfo::providerNameNull() const {
	return m_providerName.isNull();
}

void RemoteSubtitleInfo::setProviderNameNull() {
	m_providerName.clear();

}
QString RemoteSubtitleInfo::name() const { return m_name; }

void RemoteSubtitleInfo::setName(QString newName) {
	m_name = newName;
}
bool RemoteSubtitleInfo::nameNull() const {
	return m_name.isNull();
}

void RemoteSubtitleInfo::setNameNull() {
	m_name.clear();

}
QString RemoteSubtitleInfo::format() const { return m_format; }

void RemoteSubtitleInfo::setFormat(QString newFormat) {
	m_format = newFormat;
}
bool RemoteSubtitleInfo::formatNull() const {
	return m_format.isNull();
}

void RemoteSubtitleInfo::setFormatNull() {
	m_format.clear();

}
QString RemoteSubtitleInfo::author() const { return m_author; }

void RemoteSubtitleInfo::setAuthor(QString newAuthor) {
	m_author = newAuthor;
}
bool RemoteSubtitleInfo::authorNull() const {
	return m_author.isNull();
}

void RemoteSubtitleInfo::setAuthorNull() {
	m_author.clear();

}
QString RemoteSubtitleInfo::comment() const { return m_comment; }

void RemoteSubtitleInfo::setComment(QString newComment) {
	m_comment = newComment;
}
bool RemoteSubtitleInfo::commentNull() const {
	return m_comment.isNull();
}

void RemoteSubtitleInfo::setCommentNull() {
	m_comment.clear();

}
QDateTime RemoteSubtitleInfo::dateCreated() const { return m_dateCreated; }

void RemoteSubtitleInfo::setDateCreated(QDateTime newDateCreated) {
	m_dateCreated = newDateCreated;
}
bool RemoteSubtitleInfo::dateCreatedNull() const {
	return m_dateCreated.isNull();
}

void RemoteSubtitleInfo::setDateCreatedNull() {
	m_dateCreated= QDateTime();

}
std::optional<float> RemoteSubtitleInfo::communityRating() const { return m_communityRating; }

void RemoteSubtitleInfo::setCommunityRating(std::optional<float> newCommunityRating) {
	m_communityRating = newCommunityRating;
}
bool RemoteSubtitleInfo::communityRatingNull() const {
	return !m_communityRating.has_value();
}

void RemoteSubtitleInfo::setCommunityRatingNull() {
	m_communityRating = std::nullopt;

}
std::optional<qint32> RemoteSubtitleInfo::downloadCount() const { return m_downloadCount; }

void RemoteSubtitleInfo::setDownloadCount(std::optional<qint32> newDownloadCount) {
	m_downloadCount = newDownloadCount;
}
bool RemoteSubtitleInfo::downloadCountNull() const {
	return !m_downloadCount.has_value();
}

void RemoteSubtitleInfo::setDownloadCountNull() {
	m_downloadCount = std::nullopt;

}
std::optional<bool> RemoteSubtitleInfo::isHashMatch() const { return m_isHashMatch; }

void RemoteSubtitleInfo::setIsHashMatch(std::optional<bool> newIsHashMatch) {
	m_isHashMatch = newIsHashMatch;
}
bool RemoteSubtitleInfo::isHashMatchNull() const {
	return !m_isHashMatch.has_value();
}

void RemoteSubtitleInfo::setIsHashMatchNull() {
	m_isHashMatch = std::nullopt;

}

} // NS DTO

namespace Support {

using RemoteSubtitleInfo = Jellyfin::DTO::RemoteSubtitleInfo;

template <>
RemoteSubtitleInfo fromJsonValue<RemoteSubtitleInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return RemoteSubtitleInfo::fromJson(source.toObject());
}

} // NS DTO
} // NS Jellyfin

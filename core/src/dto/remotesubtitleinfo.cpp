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
	m_frameRate(other.m_frameRate),
	m_downloadCount(other.m_downloadCount),
	m_isHashMatch(other.m_isHashMatch),
	m_aiTranslated(other.m_aiTranslated),
	m_machineTranslated(other.m_machineTranslated),
	m_forced(other.m_forced),
	m_hearingImpaired(other.m_hearingImpaired){}


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
	m_frameRate = other.m_frameRate;
	m_downloadCount = other.m_downloadCount;
	m_isHashMatch = other.m_isHashMatch;
	m_aiTranslated = other.m_aiTranslated;
	m_machineTranslated = other.m_machineTranslated;
	m_forced = other.m_forced;
	m_hearingImpaired = other.m_hearingImpaired;
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
	m_frameRate = Jellyfin::Support::fromJsonValue<std::optional<float>>(source["FrameRate"]);
	m_downloadCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["DownloadCount"]);
	m_isHashMatch = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["IsHashMatch"]);
	m_aiTranslated = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["AiTranslated"]);
	m_machineTranslated = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["MachineTranslated"]);
	m_forced = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["Forced"]);
	m_hearingImpaired = Jellyfin::Support::fromJsonValue<std::optional<bool>>(source["HearingImpaired"]);

}
	
QJsonObject RemoteSubtitleInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_threeLetterISOLanguageName.isNull())) {
		result["ThreeLetterISOLanguageName"] = Jellyfin::Support::toJsonValue<QString>(m_threeLetterISOLanguageName);
	}
			
	
	if (!(m_jellyfinId.isNull())) {
		result["Id"] = Jellyfin::Support::toJsonValue<QString>(m_jellyfinId);
	}
			
	
	if (!(m_providerName.isNull())) {
		result["ProviderName"] = Jellyfin::Support::toJsonValue<QString>(m_providerName);
	}
			
	
	if (!(m_name.isNull())) {
		result["Name"] = Jellyfin::Support::toJsonValue<QString>(m_name);
	}
			
	
	if (!(m_format.isNull())) {
		result["Format"] = Jellyfin::Support::toJsonValue<QString>(m_format);
	}
			
	
	if (!(m_author.isNull())) {
		result["Author"] = Jellyfin::Support::toJsonValue<QString>(m_author);
	}
			
	
	if (!(m_comment.isNull())) {
		result["Comment"] = Jellyfin::Support::toJsonValue<QString>(m_comment);
	}
			
	
	if (!(m_dateCreated.isNull())) {
		result["DateCreated"] = Jellyfin::Support::toJsonValue<QDateTime>(m_dateCreated);
	}
			
	
	if (!(!m_communityRating.has_value())) {
		result["CommunityRating"] = Jellyfin::Support::toJsonValue<std::optional<float>>(m_communityRating);
	}
			
	
	if (!(!m_frameRate.has_value())) {
		result["FrameRate"] = Jellyfin::Support::toJsonValue<std::optional<float>>(m_frameRate);
	}
			
	
	if (!(!m_downloadCount.has_value())) {
		result["DownloadCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_downloadCount);
	}
			
	
	if (!(!m_isHashMatch.has_value())) {
		result["IsHashMatch"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_isHashMatch);
	}
			
	
	if (!(!m_aiTranslated.has_value())) {
		result["AiTranslated"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_aiTranslated);
	}
			
	
	if (!(!m_machineTranslated.has_value())) {
		result["MachineTranslated"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_machineTranslated);
	}
			
	
	if (!(!m_forced.has_value())) {
		result["Forced"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_forced);
	}
			
	
	if (!(!m_hearingImpaired.has_value())) {
		result["HearingImpaired"] = Jellyfin::Support::toJsonValue<std::optional<bool>>(m_hearingImpaired);
	}
		
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
std::optional<float> RemoteSubtitleInfo::frameRate() const { return m_frameRate; }

void RemoteSubtitleInfo::setFrameRate(std::optional<float> newFrameRate) {
	m_frameRate = newFrameRate;
}
bool RemoteSubtitleInfo::frameRateNull() const {
	return !m_frameRate.has_value();
}

void RemoteSubtitleInfo::setFrameRateNull() {
	m_frameRate = std::nullopt;

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
std::optional<bool> RemoteSubtitleInfo::aiTranslated() const { return m_aiTranslated; }

void RemoteSubtitleInfo::setAiTranslated(std::optional<bool> newAiTranslated) {
	m_aiTranslated = newAiTranslated;
}
bool RemoteSubtitleInfo::aiTranslatedNull() const {
	return !m_aiTranslated.has_value();
}

void RemoteSubtitleInfo::setAiTranslatedNull() {
	m_aiTranslated = std::nullopt;

}
std::optional<bool> RemoteSubtitleInfo::machineTranslated() const { return m_machineTranslated; }

void RemoteSubtitleInfo::setMachineTranslated(std::optional<bool> newMachineTranslated) {
	m_machineTranslated = newMachineTranslated;
}
bool RemoteSubtitleInfo::machineTranslatedNull() const {
	return !m_machineTranslated.has_value();
}

void RemoteSubtitleInfo::setMachineTranslatedNull() {
	m_machineTranslated = std::nullopt;

}
std::optional<bool> RemoteSubtitleInfo::forced() const { return m_forced; }

void RemoteSubtitleInfo::setForced(std::optional<bool> newForced) {
	m_forced = newForced;
}
bool RemoteSubtitleInfo::forcedNull() const {
	return !m_forced.has_value();
}

void RemoteSubtitleInfo::setForcedNull() {
	m_forced = std::nullopt;

}
std::optional<bool> RemoteSubtitleInfo::hearingImpaired() const { return m_hearingImpaired; }

void RemoteSubtitleInfo::setHearingImpaired(std::optional<bool> newHearingImpaired) {
	m_hearingImpaired = newHearingImpaired;
}
bool RemoteSubtitleInfo::hearingImpairedNull() const {
	return !m_hearingImpaired.has_value();
}

void RemoteSubtitleInfo::setHearingImpairedNull() {
	m_hearingImpaired = std::nullopt;

}

} // NS DTO

namespace Support {

using RemoteSubtitleInfo = Jellyfin::DTO::RemoteSubtitleInfo;

template <>
RemoteSubtitleInfo fromJsonValue(const QJsonValue &source, convertType<RemoteSubtitleInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return RemoteSubtitleInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const RemoteSubtitleInfo &source, convertType<RemoteSubtitleInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

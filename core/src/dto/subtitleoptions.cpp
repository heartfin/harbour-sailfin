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

#include <JellyfinQt/dto/subtitleoptions.h>

namespace Jellyfin {
namespace DTO {

SubtitleOptions::SubtitleOptions() {}
SubtitleOptions::SubtitleOptions (
		bool skipIfEmbeddedSubtitlesPresent, 
		bool skipIfAudioTrackMatches, 
		bool downloadMovieSubtitles, 
		bool downloadEpisodeSubtitles, 
		bool isOpenSubtitleVipAccount, 
		bool requirePerfectMatch 
		) :
	m_skipIfEmbeddedSubtitlesPresent(skipIfEmbeddedSubtitlesPresent),
	m_skipIfAudioTrackMatches(skipIfAudioTrackMatches),
	m_downloadMovieSubtitles(downloadMovieSubtitles),
	m_downloadEpisodeSubtitles(downloadEpisodeSubtitles),
	m_isOpenSubtitleVipAccount(isOpenSubtitleVipAccount),
	m_requirePerfectMatch(requirePerfectMatch) { }



SubtitleOptions::SubtitleOptions(const SubtitleOptions &other) :

	m_skipIfEmbeddedSubtitlesPresent(other.m_skipIfEmbeddedSubtitlesPresent),
	m_skipIfAudioTrackMatches(other.m_skipIfAudioTrackMatches),
	m_downloadLanguages(other.m_downloadLanguages),
	m_downloadMovieSubtitles(other.m_downloadMovieSubtitles),
	m_downloadEpisodeSubtitles(other.m_downloadEpisodeSubtitles),
	m_openSubtitlesUsername(other.m_openSubtitlesUsername),
	m_openSubtitlesPasswordHash(other.m_openSubtitlesPasswordHash),
	m_isOpenSubtitleVipAccount(other.m_isOpenSubtitleVipAccount),
	m_requirePerfectMatch(other.m_requirePerfectMatch){}


void SubtitleOptions::replaceData(SubtitleOptions &other) {
	m_skipIfEmbeddedSubtitlesPresent = other.m_skipIfEmbeddedSubtitlesPresent;
	m_skipIfAudioTrackMatches = other.m_skipIfAudioTrackMatches;
	m_downloadLanguages = other.m_downloadLanguages;
	m_downloadMovieSubtitles = other.m_downloadMovieSubtitles;
	m_downloadEpisodeSubtitles = other.m_downloadEpisodeSubtitles;
	m_openSubtitlesUsername = other.m_openSubtitlesUsername;
	m_openSubtitlesPasswordHash = other.m_openSubtitlesPasswordHash;
	m_isOpenSubtitleVipAccount = other.m_isOpenSubtitleVipAccount;
	m_requirePerfectMatch = other.m_requirePerfectMatch;
}

SubtitleOptions SubtitleOptions::fromJson(QJsonObject source) {
	SubtitleOptions instance;
	instance.setFromJson(source);
	return instance;
}


void SubtitleOptions::setFromJson(QJsonObject source) {
	m_skipIfEmbeddedSubtitlesPresent = Jellyfin::Support::fromJsonValue<bool>(source["SkipIfEmbeddedSubtitlesPresent"]);
	m_skipIfAudioTrackMatches = Jellyfin::Support::fromJsonValue<bool>(source["SkipIfAudioTrackMatches"]);
	m_downloadLanguages = Jellyfin::Support::fromJsonValue<QStringList>(source["DownloadLanguages"]);
	m_downloadMovieSubtitles = Jellyfin::Support::fromJsonValue<bool>(source["DownloadMovieSubtitles"]);
	m_downloadEpisodeSubtitles = Jellyfin::Support::fromJsonValue<bool>(source["DownloadEpisodeSubtitles"]);
	m_openSubtitlesUsername = Jellyfin::Support::fromJsonValue<QString>(source["OpenSubtitlesUsername"]);
	m_openSubtitlesPasswordHash = Jellyfin::Support::fromJsonValue<QString>(source["OpenSubtitlesPasswordHash"]);
	m_isOpenSubtitleVipAccount = Jellyfin::Support::fromJsonValue<bool>(source["IsOpenSubtitleVipAccount"]);
	m_requirePerfectMatch = Jellyfin::Support::fromJsonValue<bool>(source["RequirePerfectMatch"]);

}
	
QJsonObject SubtitleOptions::toJson() const {
	QJsonObject result;
	
	result["SkipIfEmbeddedSubtitlesPresent"] = Jellyfin::Support::toJsonValue<bool>(m_skipIfEmbeddedSubtitlesPresent);		
	result["SkipIfAudioTrackMatches"] = Jellyfin::Support::toJsonValue<bool>(m_skipIfAudioTrackMatches);		
	
	if (!(m_downloadLanguages.size() == 0)) {
		result["DownloadLanguages"] = Jellyfin::Support::toJsonValue<QStringList>(m_downloadLanguages);
	}
			
	result["DownloadMovieSubtitles"] = Jellyfin::Support::toJsonValue<bool>(m_downloadMovieSubtitles);		
	result["DownloadEpisodeSubtitles"] = Jellyfin::Support::toJsonValue<bool>(m_downloadEpisodeSubtitles);		
	
	if (!(m_openSubtitlesUsername.isNull())) {
		result["OpenSubtitlesUsername"] = Jellyfin::Support::toJsonValue<QString>(m_openSubtitlesUsername);
	}
			
	
	if (!(m_openSubtitlesPasswordHash.isNull())) {
		result["OpenSubtitlesPasswordHash"] = Jellyfin::Support::toJsonValue<QString>(m_openSubtitlesPasswordHash);
	}
			
	result["IsOpenSubtitleVipAccount"] = Jellyfin::Support::toJsonValue<bool>(m_isOpenSubtitleVipAccount);		
	result["RequirePerfectMatch"] = Jellyfin::Support::toJsonValue<bool>(m_requirePerfectMatch);	
	return result;
}

bool SubtitleOptions::skipIfEmbeddedSubtitlesPresent() const { return m_skipIfEmbeddedSubtitlesPresent; }

void SubtitleOptions::setSkipIfEmbeddedSubtitlesPresent(bool newSkipIfEmbeddedSubtitlesPresent) {
	m_skipIfEmbeddedSubtitlesPresent = newSkipIfEmbeddedSubtitlesPresent;
}

bool SubtitleOptions::skipIfAudioTrackMatches() const { return m_skipIfAudioTrackMatches; }

void SubtitleOptions::setSkipIfAudioTrackMatches(bool newSkipIfAudioTrackMatches) {
	m_skipIfAudioTrackMatches = newSkipIfAudioTrackMatches;
}

QStringList SubtitleOptions::downloadLanguages() const { return m_downloadLanguages; }

void SubtitleOptions::setDownloadLanguages(QStringList newDownloadLanguages) {
	m_downloadLanguages = newDownloadLanguages;
}
bool SubtitleOptions::downloadLanguagesNull() const {
	return m_downloadLanguages.size() == 0;
}

void SubtitleOptions::setDownloadLanguagesNull() {
	m_downloadLanguages.clear();

}
bool SubtitleOptions::downloadMovieSubtitles() const { return m_downloadMovieSubtitles; }

void SubtitleOptions::setDownloadMovieSubtitles(bool newDownloadMovieSubtitles) {
	m_downloadMovieSubtitles = newDownloadMovieSubtitles;
}

bool SubtitleOptions::downloadEpisodeSubtitles() const { return m_downloadEpisodeSubtitles; }

void SubtitleOptions::setDownloadEpisodeSubtitles(bool newDownloadEpisodeSubtitles) {
	m_downloadEpisodeSubtitles = newDownloadEpisodeSubtitles;
}

QString SubtitleOptions::openSubtitlesUsername() const { return m_openSubtitlesUsername; }

void SubtitleOptions::setOpenSubtitlesUsername(QString newOpenSubtitlesUsername) {
	m_openSubtitlesUsername = newOpenSubtitlesUsername;
}
bool SubtitleOptions::openSubtitlesUsernameNull() const {
	return m_openSubtitlesUsername.isNull();
}

void SubtitleOptions::setOpenSubtitlesUsernameNull() {
	m_openSubtitlesUsername.clear();

}
QString SubtitleOptions::openSubtitlesPasswordHash() const { return m_openSubtitlesPasswordHash; }

void SubtitleOptions::setOpenSubtitlesPasswordHash(QString newOpenSubtitlesPasswordHash) {
	m_openSubtitlesPasswordHash = newOpenSubtitlesPasswordHash;
}
bool SubtitleOptions::openSubtitlesPasswordHashNull() const {
	return m_openSubtitlesPasswordHash.isNull();
}

void SubtitleOptions::setOpenSubtitlesPasswordHashNull() {
	m_openSubtitlesPasswordHash.clear();

}
bool SubtitleOptions::isOpenSubtitleVipAccount() const { return m_isOpenSubtitleVipAccount; }

void SubtitleOptions::setIsOpenSubtitleVipAccount(bool newIsOpenSubtitleVipAccount) {
	m_isOpenSubtitleVipAccount = newIsOpenSubtitleVipAccount;
}

bool SubtitleOptions::requirePerfectMatch() const { return m_requirePerfectMatch; }

void SubtitleOptions::setRequirePerfectMatch(bool newRequirePerfectMatch) {
	m_requirePerfectMatch = newRequirePerfectMatch;
}


} // NS DTO

namespace Support {

using SubtitleOptions = Jellyfin::DTO::SubtitleOptions;

template <>
SubtitleOptions fromJsonValue(const QJsonValue &source, convertType<SubtitleOptions>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return SubtitleOptions::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const SubtitleOptions &source, convertType<SubtitleOptions>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

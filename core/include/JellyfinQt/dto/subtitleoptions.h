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

#ifndef JELLYFIN_DTO_SUBTITLEOPTIONS_H
#define JELLYFIN_DTO_SUBTITLEOPTIONS_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class SubtitleOptions {
public:
	SubtitleOptions(	
		bool skipIfEmbeddedSubtitlesPresent,			
		bool skipIfAudioTrackMatches,					
		bool downloadMovieSubtitles,			
		bool downloadEpisodeSubtitles,							
		bool isOpenSubtitleVipAccount,			
		bool requirePerfectMatch		
	);

	SubtitleOptions(const SubtitleOptions &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(SubtitleOptions &other);
	
	static SubtitleOptions fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	bool skipIfEmbeddedSubtitlesPresent() const;

	void setSkipIfEmbeddedSubtitlesPresent(bool newSkipIfEmbeddedSubtitlesPresent);


	bool skipIfAudioTrackMatches() const;

	void setSkipIfAudioTrackMatches(bool newSkipIfAudioTrackMatches);


	QStringList downloadLanguages() const;

	void setDownloadLanguages(QStringList newDownloadLanguages);
	bool downloadLanguagesNull() const;
	void setDownloadLanguagesNull();


	bool downloadMovieSubtitles() const;

	void setDownloadMovieSubtitles(bool newDownloadMovieSubtitles);


	bool downloadEpisodeSubtitles() const;

	void setDownloadEpisodeSubtitles(bool newDownloadEpisodeSubtitles);


	QString openSubtitlesUsername() const;

	void setOpenSubtitlesUsername(QString newOpenSubtitlesUsername);
	bool openSubtitlesUsernameNull() const;
	void setOpenSubtitlesUsernameNull();


	QString openSubtitlesPasswordHash() const;

	void setOpenSubtitlesPasswordHash(QString newOpenSubtitlesPasswordHash);
	bool openSubtitlesPasswordHashNull() const;
	void setOpenSubtitlesPasswordHashNull();


	bool isOpenSubtitleVipAccount() const;

	void setIsOpenSubtitleVipAccount(bool newIsOpenSubtitleVipAccount);


	bool requirePerfectMatch() const;

	void setRequirePerfectMatch(bool newRequirePerfectMatch);


protected:
	bool m_skipIfEmbeddedSubtitlesPresent;
	bool m_skipIfAudioTrackMatches;
	QStringList m_downloadLanguages;
	bool m_downloadMovieSubtitles;
	bool m_downloadEpisodeSubtitles;
	QString m_openSubtitlesUsername;
	QString m_openSubtitlesPasswordHash;
	bool m_isOpenSubtitleVipAccount;
	bool m_requirePerfectMatch;

private:
	// Private constructor which generates an invalid object, for use withing SubtitleOptions::fromJson();
	SubtitleOptions();
};


} // NS DTO

namespace Support {

using SubtitleOptions = Jellyfin::DTO::SubtitleOptions;

template <>
SubtitleOptions fromJsonValue(const QJsonValue &source, convertType<SubtitleOptions>);

template<>
QJsonValue toJsonValue(const SubtitleOptions &source, convertType<SubtitleOptions>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SUBTITLEOPTIONS_H

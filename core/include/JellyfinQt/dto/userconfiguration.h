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

#ifndef JELLYFIN_DTO_USERCONFIGURATION_H
#define JELLYFIN_DTO_USERCONFIGURATION_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/subtitleplaybackmode.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class UserConfiguration {
public:
	UserConfiguration();
	UserConfiguration(const UserConfiguration &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(UserConfiguration &other);
	
	static UserConfiguration fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the audio language preference.
	 */
	QString audioLanguagePreference() const;
	/**
	* @brief Gets or sets the audio language preference.
	*/
	void setAudioLanguagePreference(QString newAudioLanguagePreference);
	bool audioLanguagePreferenceNull() const;
	void setAudioLanguagePreferenceNull();

	/**
	 * @brief Gets or sets a value indicating whether [play default audio track].
	 */
	bool playDefaultAudioTrack() const;
	/**
	* @brief Gets or sets a value indicating whether [play default audio track].
	*/
	void setPlayDefaultAudioTrack(bool newPlayDefaultAudioTrack);

	/**
	 * @brief Gets or sets the subtitle language preference.
	 */
	QString subtitleLanguagePreference() const;
	/**
	* @brief Gets or sets the subtitle language preference.
	*/
	void setSubtitleLanguagePreference(QString newSubtitleLanguagePreference);
	bool subtitleLanguagePreferenceNull() const;
	void setSubtitleLanguagePreferenceNull();


	bool displayMissingEpisodes() const;

	void setDisplayMissingEpisodes(bool newDisplayMissingEpisodes);


	QStringList groupedFolders() const;

	void setGroupedFolders(QStringList newGroupedFolders);
	bool groupedFoldersNull() const;
	void setGroupedFoldersNull();


	SubtitlePlaybackMode subtitleMode() const;

	void setSubtitleMode(SubtitlePlaybackMode newSubtitleMode);


	bool displayCollectionsView() const;

	void setDisplayCollectionsView(bool newDisplayCollectionsView);


	bool enableLocalPassword() const;

	void setEnableLocalPassword(bool newEnableLocalPassword);


	QStringList orderedViews() const;

	void setOrderedViews(QStringList newOrderedViews);
	bool orderedViewsNull() const;
	void setOrderedViewsNull();


	QStringList latestItemsExcludes() const;

	void setLatestItemsExcludes(QStringList newLatestItemsExcludes);
	bool latestItemsExcludesNull() const;
	void setLatestItemsExcludesNull();


	QStringList myMediaExcludes() const;

	void setMyMediaExcludes(QStringList newMyMediaExcludes);
	bool myMediaExcludesNull() const;
	void setMyMediaExcludesNull();


	bool hidePlayedInLatest() const;

	void setHidePlayedInLatest(bool newHidePlayedInLatest);


	bool rememberAudioSelections() const;

	void setRememberAudioSelections(bool newRememberAudioSelections);


	bool rememberSubtitleSelections() const;

	void setRememberSubtitleSelections(bool newRememberSubtitleSelections);


	bool enableNextEpisodeAutoPlay() const;

	void setEnableNextEpisodeAutoPlay(bool newEnableNextEpisodeAutoPlay);


protected:
	QString m_audioLanguagePreference;
	bool m_playDefaultAudioTrack;
	QString m_subtitleLanguagePreference;
	bool m_displayMissingEpisodes;
	QStringList m_groupedFolders;
	SubtitlePlaybackMode m_subtitleMode;
	bool m_displayCollectionsView;
	bool m_enableLocalPassword;
	QStringList m_orderedViews;
	QStringList m_latestItemsExcludes;
	QStringList m_myMediaExcludes;
	bool m_hidePlayedInLatest;
	bool m_rememberAudioSelections;
	bool m_rememberSubtitleSelections;
	bool m_enableNextEpisodeAutoPlay;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_USERCONFIGURATION_H

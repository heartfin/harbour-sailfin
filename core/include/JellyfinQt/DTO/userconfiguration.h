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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/subtitleplaybackmode.h"

namespace Jellyfin {
namespace DTO {

class UserConfiguration : public QObject {
	Q_OBJECT
public:
	explicit UserConfiguration(QObject *parent = nullptr);
	static UserConfiguration *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the audio language preference.
	 */
	Q_PROPERTY(QString audioLanguagePreference READ audioLanguagePreference WRITE setAudioLanguagePreference NOTIFY audioLanguagePreferenceChanged)
	/**
	 * @brief Gets or sets a value indicating whether [play default audio track].
	 */
	Q_PROPERTY(bool playDefaultAudioTrack READ playDefaultAudioTrack WRITE setPlayDefaultAudioTrack NOTIFY playDefaultAudioTrackChanged)
	/**
	 * @brief Gets or sets the subtitle language preference.
	 */
	Q_PROPERTY(QString subtitleLanguagePreference READ subtitleLanguagePreference WRITE setSubtitleLanguagePreference NOTIFY subtitleLanguagePreferenceChanged)
	Q_PROPERTY(bool displayMissingEpisodes READ displayMissingEpisodes WRITE setDisplayMissingEpisodes NOTIFY displayMissingEpisodesChanged)
	Q_PROPERTY(QStringList groupedFolders READ groupedFolders WRITE setGroupedFolders NOTIFY groupedFoldersChanged)
	Q_PROPERTY(SubtitlePlaybackMode subtitleMode READ subtitleMode WRITE setSubtitleMode NOTIFY subtitleModeChanged)
	Q_PROPERTY(bool displayCollectionsView READ displayCollectionsView WRITE setDisplayCollectionsView NOTIFY displayCollectionsViewChanged)
	Q_PROPERTY(bool enableLocalPassword READ enableLocalPassword WRITE setEnableLocalPassword NOTIFY enableLocalPasswordChanged)
	Q_PROPERTY(QStringList orderedViews READ orderedViews WRITE setOrderedViews NOTIFY orderedViewsChanged)
	Q_PROPERTY(QStringList latestItemsExcludes READ latestItemsExcludes WRITE setLatestItemsExcludes NOTIFY latestItemsExcludesChanged)
	Q_PROPERTY(QStringList myMediaExcludes READ myMediaExcludes WRITE setMyMediaExcludes NOTIFY myMediaExcludesChanged)
	Q_PROPERTY(bool hidePlayedInLatest READ hidePlayedInLatest WRITE setHidePlayedInLatest NOTIFY hidePlayedInLatestChanged)
	Q_PROPERTY(bool rememberAudioSelections READ rememberAudioSelections WRITE setRememberAudioSelections NOTIFY rememberAudioSelectionsChanged)
	Q_PROPERTY(bool rememberSubtitleSelections READ rememberSubtitleSelections WRITE setRememberSubtitleSelections NOTIFY rememberSubtitleSelectionsChanged)
	Q_PROPERTY(bool enableNextEpisodeAutoPlay READ enableNextEpisodeAutoPlay WRITE setEnableNextEpisodeAutoPlay NOTIFY enableNextEpisodeAutoPlayChanged)

	QString audioLanguagePreference() const;
	void setAudioLanguagePreference(QString newAudioLanguagePreference);
	
	bool playDefaultAudioTrack() const;
	void setPlayDefaultAudioTrack(bool newPlayDefaultAudioTrack);
	
	QString subtitleLanguagePreference() const;
	void setSubtitleLanguagePreference(QString newSubtitleLanguagePreference);
	
	bool displayMissingEpisodes() const;
	void setDisplayMissingEpisodes(bool newDisplayMissingEpisodes);
	
	QStringList groupedFolders() const;
	void setGroupedFolders(QStringList newGroupedFolders);
	
	SubtitlePlaybackMode subtitleMode() const;
	void setSubtitleMode(SubtitlePlaybackMode newSubtitleMode);
	
	bool displayCollectionsView() const;
	void setDisplayCollectionsView(bool newDisplayCollectionsView);
	
	bool enableLocalPassword() const;
	void setEnableLocalPassword(bool newEnableLocalPassword);
	
	QStringList orderedViews() const;
	void setOrderedViews(QStringList newOrderedViews);
	
	QStringList latestItemsExcludes() const;
	void setLatestItemsExcludes(QStringList newLatestItemsExcludes);
	
	QStringList myMediaExcludes() const;
	void setMyMediaExcludes(QStringList newMyMediaExcludes);
	
	bool hidePlayedInLatest() const;
	void setHidePlayedInLatest(bool newHidePlayedInLatest);
	
	bool rememberAudioSelections() const;
	void setRememberAudioSelections(bool newRememberAudioSelections);
	
	bool rememberSubtitleSelections() const;
	void setRememberSubtitleSelections(bool newRememberSubtitleSelections);
	
	bool enableNextEpisodeAutoPlay() const;
	void setEnableNextEpisodeAutoPlay(bool newEnableNextEpisodeAutoPlay);
	
signals:
	void audioLanguagePreferenceChanged(QString newAudioLanguagePreference);
	void playDefaultAudioTrackChanged(bool newPlayDefaultAudioTrack);
	void subtitleLanguagePreferenceChanged(QString newSubtitleLanguagePreference);
	void displayMissingEpisodesChanged(bool newDisplayMissingEpisodes);
	void groupedFoldersChanged(QStringList newGroupedFolders);
	void subtitleModeChanged(SubtitlePlaybackMode newSubtitleMode);
	void displayCollectionsViewChanged(bool newDisplayCollectionsView);
	void enableLocalPasswordChanged(bool newEnableLocalPassword);
	void orderedViewsChanged(QStringList newOrderedViews);
	void latestItemsExcludesChanged(QStringList newLatestItemsExcludes);
	void myMediaExcludesChanged(QStringList newMyMediaExcludes);
	void hidePlayedInLatestChanged(bool newHidePlayedInLatest);
	void rememberAudioSelectionsChanged(bool newRememberAudioSelections);
	void rememberSubtitleSelectionsChanged(bool newRememberSubtitleSelections);
	void enableNextEpisodeAutoPlayChanged(bool newEnableNextEpisodeAutoPlay);
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

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_USERCONFIGURATION_H

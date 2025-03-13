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

#include <JellyfinQt/dto/userconfiguration.h>

namespace Jellyfin {
namespace DTO {

UserConfiguration::UserConfiguration() {}
UserConfiguration::UserConfiguration (
		bool playDefaultAudioTrack, 
		bool displayMissingEpisodes, 
		QStringList groupedFolders, 
		SubtitlePlaybackMode subtitleMode, 
		bool displayCollectionsView, 
		bool enableLocalPassword, 
		QStringList orderedViews, 
		QStringList latestItemsExcludes, 
		QStringList myMediaExcludes, 
		bool hidePlayedInLatest, 
		bool rememberAudioSelections, 
		bool rememberSubtitleSelections, 
		bool enableNextEpisodeAutoPlay 
		) :
	m_playDefaultAudioTrack(playDefaultAudioTrack),
	m_displayMissingEpisodes(displayMissingEpisodes),
	m_groupedFolders(groupedFolders),
	m_subtitleMode(subtitleMode),
	m_displayCollectionsView(displayCollectionsView),
	m_enableLocalPassword(enableLocalPassword),
	m_orderedViews(orderedViews),
	m_latestItemsExcludes(latestItemsExcludes),
	m_myMediaExcludes(myMediaExcludes),
	m_hidePlayedInLatest(hidePlayedInLatest),
	m_rememberAudioSelections(rememberAudioSelections),
	m_rememberSubtitleSelections(rememberSubtitleSelections),
	m_enableNextEpisodeAutoPlay(enableNextEpisodeAutoPlay) { }



UserConfiguration::UserConfiguration(const UserConfiguration &other) :

	m_audioLanguagePreference(other.m_audioLanguagePreference),
	m_playDefaultAudioTrack(other.m_playDefaultAudioTrack),
	m_subtitleLanguagePreference(other.m_subtitleLanguagePreference),
	m_displayMissingEpisodes(other.m_displayMissingEpisodes),
	m_groupedFolders(other.m_groupedFolders),
	m_subtitleMode(other.m_subtitleMode),
	m_displayCollectionsView(other.m_displayCollectionsView),
	m_enableLocalPassword(other.m_enableLocalPassword),
	m_orderedViews(other.m_orderedViews),
	m_latestItemsExcludes(other.m_latestItemsExcludes),
	m_myMediaExcludes(other.m_myMediaExcludes),
	m_hidePlayedInLatest(other.m_hidePlayedInLatest),
	m_rememberAudioSelections(other.m_rememberAudioSelections),
	m_rememberSubtitleSelections(other.m_rememberSubtitleSelections),
	m_enableNextEpisodeAutoPlay(other.m_enableNextEpisodeAutoPlay),
	m_castReceiverId(other.m_castReceiverId){}


void UserConfiguration::replaceData(UserConfiguration &other) {
	m_audioLanguagePreference = other.m_audioLanguagePreference;
	m_playDefaultAudioTrack = other.m_playDefaultAudioTrack;
	m_subtitleLanguagePreference = other.m_subtitleLanguagePreference;
	m_displayMissingEpisodes = other.m_displayMissingEpisodes;
	m_groupedFolders = other.m_groupedFolders;
	m_subtitleMode = other.m_subtitleMode;
	m_displayCollectionsView = other.m_displayCollectionsView;
	m_enableLocalPassword = other.m_enableLocalPassword;
	m_orderedViews = other.m_orderedViews;
	m_latestItemsExcludes = other.m_latestItemsExcludes;
	m_myMediaExcludes = other.m_myMediaExcludes;
	m_hidePlayedInLatest = other.m_hidePlayedInLatest;
	m_rememberAudioSelections = other.m_rememberAudioSelections;
	m_rememberSubtitleSelections = other.m_rememberSubtitleSelections;
	m_enableNextEpisodeAutoPlay = other.m_enableNextEpisodeAutoPlay;
	m_castReceiverId = other.m_castReceiverId;
}

UserConfiguration UserConfiguration::fromJson(QJsonObject source) {
	UserConfiguration instance;
	instance.setFromJson(source);
	return instance;
}


void UserConfiguration::setFromJson(QJsonObject source) {
	m_audioLanguagePreference = Jellyfin::Support::fromJsonValue<QString>(source["AudioLanguagePreference"]);
	m_playDefaultAudioTrack = Jellyfin::Support::fromJsonValue<bool>(source["PlayDefaultAudioTrack"]);
	m_subtitleLanguagePreference = Jellyfin::Support::fromJsonValue<QString>(source["SubtitleLanguagePreference"]);
	m_displayMissingEpisodes = Jellyfin::Support::fromJsonValue<bool>(source["DisplayMissingEpisodes"]);
	m_groupedFolders = Jellyfin::Support::fromJsonValue<QStringList>(source["GroupedFolders"]);
	m_subtitleMode = Jellyfin::Support::fromJsonValue<SubtitlePlaybackMode>(source["SubtitleMode"]);
	m_displayCollectionsView = Jellyfin::Support::fromJsonValue<bool>(source["DisplayCollectionsView"]);
	m_enableLocalPassword = Jellyfin::Support::fromJsonValue<bool>(source["EnableLocalPassword"]);
	m_orderedViews = Jellyfin::Support::fromJsonValue<QStringList>(source["OrderedViews"]);
	m_latestItemsExcludes = Jellyfin::Support::fromJsonValue<QStringList>(source["LatestItemsExcludes"]);
	m_myMediaExcludes = Jellyfin::Support::fromJsonValue<QStringList>(source["MyMediaExcludes"]);
	m_hidePlayedInLatest = Jellyfin::Support::fromJsonValue<bool>(source["HidePlayedInLatest"]);
	m_rememberAudioSelections = Jellyfin::Support::fromJsonValue<bool>(source["RememberAudioSelections"]);
	m_rememberSubtitleSelections = Jellyfin::Support::fromJsonValue<bool>(source["RememberSubtitleSelections"]);
	m_enableNextEpisodeAutoPlay = Jellyfin::Support::fromJsonValue<bool>(source["EnableNextEpisodeAutoPlay"]);
	m_castReceiverId = Jellyfin::Support::fromJsonValue<QString>(source["CastReceiverId"]);

}
	
QJsonObject UserConfiguration::toJson() const {
	QJsonObject result;
	
	
	if (!(m_audioLanguagePreference.isNull())) {
		result["AudioLanguagePreference"] = Jellyfin::Support::toJsonValue<QString>(m_audioLanguagePreference);
	}
			
	result["PlayDefaultAudioTrack"] = Jellyfin::Support::toJsonValue<bool>(m_playDefaultAudioTrack);		
	
	if (!(m_subtitleLanguagePreference.isNull())) {
		result["SubtitleLanguagePreference"] = Jellyfin::Support::toJsonValue<QString>(m_subtitleLanguagePreference);
	}
			
	result["DisplayMissingEpisodes"] = Jellyfin::Support::toJsonValue<bool>(m_displayMissingEpisodes);		
	result["GroupedFolders"] = Jellyfin::Support::toJsonValue<QStringList>(m_groupedFolders);		
	result["SubtitleMode"] = Jellyfin::Support::toJsonValue<SubtitlePlaybackMode>(m_subtitleMode);		
	result["DisplayCollectionsView"] = Jellyfin::Support::toJsonValue<bool>(m_displayCollectionsView);		
	result["EnableLocalPassword"] = Jellyfin::Support::toJsonValue<bool>(m_enableLocalPassword);		
	result["OrderedViews"] = Jellyfin::Support::toJsonValue<QStringList>(m_orderedViews);		
	result["LatestItemsExcludes"] = Jellyfin::Support::toJsonValue<QStringList>(m_latestItemsExcludes);		
	result["MyMediaExcludes"] = Jellyfin::Support::toJsonValue<QStringList>(m_myMediaExcludes);		
	result["HidePlayedInLatest"] = Jellyfin::Support::toJsonValue<bool>(m_hidePlayedInLatest);		
	result["RememberAudioSelections"] = Jellyfin::Support::toJsonValue<bool>(m_rememberAudioSelections);		
	result["RememberSubtitleSelections"] = Jellyfin::Support::toJsonValue<bool>(m_rememberSubtitleSelections);		
	result["EnableNextEpisodeAutoPlay"] = Jellyfin::Support::toJsonValue<bool>(m_enableNextEpisodeAutoPlay);		
	
	if (!(m_castReceiverId.isNull())) {
		result["CastReceiverId"] = Jellyfin::Support::toJsonValue<QString>(m_castReceiverId);
	}
		
	return result;
}

QString UserConfiguration::audioLanguagePreference() const { return m_audioLanguagePreference; }

void UserConfiguration::setAudioLanguagePreference(QString newAudioLanguagePreference) {
	m_audioLanguagePreference = newAudioLanguagePreference;
}
bool UserConfiguration::audioLanguagePreferenceNull() const {
	return m_audioLanguagePreference.isNull();
}

void UserConfiguration::setAudioLanguagePreferenceNull() {
	m_audioLanguagePreference.clear();

}
bool UserConfiguration::playDefaultAudioTrack() const { return m_playDefaultAudioTrack; }

void UserConfiguration::setPlayDefaultAudioTrack(bool newPlayDefaultAudioTrack) {
	m_playDefaultAudioTrack = newPlayDefaultAudioTrack;
}

QString UserConfiguration::subtitleLanguagePreference() const { return m_subtitleLanguagePreference; }

void UserConfiguration::setSubtitleLanguagePreference(QString newSubtitleLanguagePreference) {
	m_subtitleLanguagePreference = newSubtitleLanguagePreference;
}
bool UserConfiguration::subtitleLanguagePreferenceNull() const {
	return m_subtitleLanguagePreference.isNull();
}

void UserConfiguration::setSubtitleLanguagePreferenceNull() {
	m_subtitleLanguagePreference.clear();

}
bool UserConfiguration::displayMissingEpisodes() const { return m_displayMissingEpisodes; }

void UserConfiguration::setDisplayMissingEpisodes(bool newDisplayMissingEpisodes) {
	m_displayMissingEpisodes = newDisplayMissingEpisodes;
}

QStringList UserConfiguration::groupedFolders() const { return m_groupedFolders; }

void UserConfiguration::setGroupedFolders(QStringList newGroupedFolders) {
	m_groupedFolders = newGroupedFolders;
}

SubtitlePlaybackMode UserConfiguration::subtitleMode() const { return m_subtitleMode; }

void UserConfiguration::setSubtitleMode(SubtitlePlaybackMode newSubtitleMode) {
	m_subtitleMode = newSubtitleMode;
}

bool UserConfiguration::displayCollectionsView() const { return m_displayCollectionsView; }

void UserConfiguration::setDisplayCollectionsView(bool newDisplayCollectionsView) {
	m_displayCollectionsView = newDisplayCollectionsView;
}

bool UserConfiguration::enableLocalPassword() const { return m_enableLocalPassword; }

void UserConfiguration::setEnableLocalPassword(bool newEnableLocalPassword) {
	m_enableLocalPassword = newEnableLocalPassword;
}

QStringList UserConfiguration::orderedViews() const { return m_orderedViews; }

void UserConfiguration::setOrderedViews(QStringList newOrderedViews) {
	m_orderedViews = newOrderedViews;
}

QStringList UserConfiguration::latestItemsExcludes() const { return m_latestItemsExcludes; }

void UserConfiguration::setLatestItemsExcludes(QStringList newLatestItemsExcludes) {
	m_latestItemsExcludes = newLatestItemsExcludes;
}

QStringList UserConfiguration::myMediaExcludes() const { return m_myMediaExcludes; }

void UserConfiguration::setMyMediaExcludes(QStringList newMyMediaExcludes) {
	m_myMediaExcludes = newMyMediaExcludes;
}

bool UserConfiguration::hidePlayedInLatest() const { return m_hidePlayedInLatest; }

void UserConfiguration::setHidePlayedInLatest(bool newHidePlayedInLatest) {
	m_hidePlayedInLatest = newHidePlayedInLatest;
}

bool UserConfiguration::rememberAudioSelections() const { return m_rememberAudioSelections; }

void UserConfiguration::setRememberAudioSelections(bool newRememberAudioSelections) {
	m_rememberAudioSelections = newRememberAudioSelections;
}

bool UserConfiguration::rememberSubtitleSelections() const { return m_rememberSubtitleSelections; }

void UserConfiguration::setRememberSubtitleSelections(bool newRememberSubtitleSelections) {
	m_rememberSubtitleSelections = newRememberSubtitleSelections;
}

bool UserConfiguration::enableNextEpisodeAutoPlay() const { return m_enableNextEpisodeAutoPlay; }

void UserConfiguration::setEnableNextEpisodeAutoPlay(bool newEnableNextEpisodeAutoPlay) {
	m_enableNextEpisodeAutoPlay = newEnableNextEpisodeAutoPlay;
}

QString UserConfiguration::castReceiverId() const { return m_castReceiverId; }

void UserConfiguration::setCastReceiverId(QString newCastReceiverId) {
	m_castReceiverId = newCastReceiverId;
}
bool UserConfiguration::castReceiverIdNull() const {
	return m_castReceiverId.isNull();
}

void UserConfiguration::setCastReceiverIdNull() {
	m_castReceiverId.clear();

}

} // NS DTO

namespace Support {

using UserConfiguration = Jellyfin::DTO::UserConfiguration;

template <>
UserConfiguration fromJsonValue(const QJsonValue &source, convertType<UserConfiguration>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return UserConfiguration::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const UserConfiguration &source, convertType<UserConfiguration>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

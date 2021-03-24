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

#include <JellyfinQt/DTO/allthememediaresult.h>

namespace Jellyfin {
namespace DTO {

AllThemeMediaResult::AllThemeMediaResult() {}
AllThemeMediaResult::AllThemeMediaResult(const AllThemeMediaResult &other) :
	m_themeVideosResult(other.m_themeVideosResult),
	m_themeSongsResult(other.m_themeSongsResult),
	m_soundtrackSongsResult(other.m_soundtrackSongsResult){}

AllThemeMediaResult AllThemeMediaResult::fromJson(QJsonObject source) {
	AllThemeMediaResult instance;
	instance.setFromJson(source);
	return instance;
}


void AllThemeMediaResult::setFromJson(QJsonObject source) {
	m_themeVideosResult = Jellyfin::Support::fromJsonValue<QSharedPointer<ThemeMediaResult>>(source["ThemeVideosResult"]);
	m_themeSongsResult = Jellyfin::Support::fromJsonValue<QSharedPointer<ThemeMediaResult>>(source["ThemeSongsResult"]);
	m_soundtrackSongsResult = Jellyfin::Support::fromJsonValue<QSharedPointer<ThemeMediaResult>>(source["SoundtrackSongsResult"]);

}
	
QJsonObject AllThemeMediaResult::toJson() {
	QJsonObject result;
	result["ThemeVideosResult"] = Jellyfin::Support::toJsonValue<QSharedPointer<ThemeMediaResult>>(m_themeVideosResult);
	result["ThemeSongsResult"] = Jellyfin::Support::toJsonValue<QSharedPointer<ThemeMediaResult>>(m_themeSongsResult);
	result["SoundtrackSongsResult"] = Jellyfin::Support::toJsonValue<QSharedPointer<ThemeMediaResult>>(m_soundtrackSongsResult);

	return result;
}

QSharedPointer<ThemeMediaResult> AllThemeMediaResult::themeVideosResult() const { return m_themeVideosResult; }

void AllThemeMediaResult::setThemeVideosResult(QSharedPointer<ThemeMediaResult> newThemeVideosResult) {
	m_themeVideosResult = newThemeVideosResult;
}
QSharedPointer<ThemeMediaResult> AllThemeMediaResult::themeSongsResult() const { return m_themeSongsResult; }

void AllThemeMediaResult::setThemeSongsResult(QSharedPointer<ThemeMediaResult> newThemeSongsResult) {
	m_themeSongsResult = newThemeSongsResult;
}
QSharedPointer<ThemeMediaResult> AllThemeMediaResult::soundtrackSongsResult() const { return m_soundtrackSongsResult; }

void AllThemeMediaResult::setSoundtrackSongsResult(QSharedPointer<ThemeMediaResult> newSoundtrackSongsResult) {
	m_soundtrackSongsResult = newSoundtrackSongsResult;
}

} // NS DTO

namespace Support {

using AllThemeMediaResult = Jellyfin::DTO::AllThemeMediaResult;

template <>
AllThemeMediaResult fromJsonValue<AllThemeMediaResult>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return AllThemeMediaResult::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

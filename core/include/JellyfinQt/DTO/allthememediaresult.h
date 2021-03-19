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

#ifndef JELLYFIN_DTO_ALLTHEMEMEDIARESULT_H
#define JELLYFIN_DTO_ALLTHEMEMEDIARESULT_H

#include <QJsonObject>
#include <QObject>

namespace Jellyfin {
namespace DTO {

class ThemeMediaResult;
class ThemeMediaResult;
class ThemeMediaResult;

class AllThemeMediaResult : public QObject {
	Q_OBJECT
public:
	explicit AllThemeMediaResult(QObject *parent = nullptr);
	static AllThemeMediaResult *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(ThemeMediaResult * themeVideosResult READ themeVideosResult WRITE setThemeVideosResult NOTIFY themeVideosResultChanged)
	Q_PROPERTY(ThemeMediaResult * themeSongsResult READ themeSongsResult WRITE setThemeSongsResult NOTIFY themeSongsResultChanged)
	Q_PROPERTY(ThemeMediaResult * soundtrackSongsResult READ soundtrackSongsResult WRITE setSoundtrackSongsResult NOTIFY soundtrackSongsResultChanged)

	ThemeMediaResult * themeVideosResult() const;
	void setThemeVideosResult(ThemeMediaResult * newThemeVideosResult);
	
	ThemeMediaResult * themeSongsResult() const;
	void setThemeSongsResult(ThemeMediaResult * newThemeSongsResult);
	
	ThemeMediaResult * soundtrackSongsResult() const;
	void setSoundtrackSongsResult(ThemeMediaResult * newSoundtrackSongsResult);
	
signals:
	void themeVideosResultChanged(ThemeMediaResult * newThemeVideosResult);
	void themeSongsResultChanged(ThemeMediaResult * newThemeSongsResult);
	void soundtrackSongsResultChanged(ThemeMediaResult * newSoundtrackSongsResult);
protected:
	ThemeMediaResult * m_themeVideosResult = nullptr;
	ThemeMediaResult * m_themeSongsResult = nullptr;
	ThemeMediaResult * m_soundtrackSongsResult = nullptr;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_ALLTHEMEMEDIARESULT_H

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

#ifndef JELLYFIN_DTO_LYRICLINE_H
#define JELLYFIN_DTO_LYRICLINE_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class LyricLine {
public:
	LyricLine(	
		QString text				
	);

	LyricLine(const LyricLine &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(LyricLine &other);
	
	static LyricLine fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets the text of this lyric line.
	 */
	QString text() const;
	/**
	* @brief Gets the text of this lyric line.
	*/
	void setText(QString newText);

	/**
	 * @brief Gets the start time in ticks.
	 */
	std::optional<qint64> start() const;
	/**
	* @brief Gets the start time in ticks.
	*/
	void setStart(std::optional<qint64> newStart);
	bool startNull() const;
	void setStartNull();


protected:
	QString m_text;
	std::optional<qint64> m_start = std::nullopt;

private:
	// Private constructor which generates an invalid object, for use withing LyricLine::fromJson();
	LyricLine();
};


} // NS DTO

namespace Support {

using LyricLine = Jellyfin::DTO::LyricLine;

template <>
LyricLine fromJsonValue(const QJsonValue &source, convertType<LyricLine>);

template<>
QJsonValue toJsonValue(const LyricLine &source, convertType<LyricLine>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_LYRICLINE_H

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

#ifndef JELLYFIN_DTO_CHAPTERINFO_H
#define JELLYFIN_DTO_CHAPTERINFO_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class ChapterInfo {
public:
	explicit ChapterInfo();
	static ChapterInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the start position ticks.
	 */
	qint64 startPositionTicks() const;
	/**
	* @brief Gets or sets the start position ticks.
	*/
	void setStartPositionTicks(qint64 newStartPositionTicks);
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	/**
	 * @brief Gets or sets the image path.
	 */
	QString imagePath() const;
	/**
	* @brief Gets or sets the image path.
	*/
	void setImagePath(QString newImagePath);

	QDateTime imageDateModified() const;

	void setImageDateModified(QDateTime newImageDateModified);

	QString imageTag() const;

	void setImageTag(QString newImageTag);

protected:
	qint64 m_startPositionTicks;
	QString m_name;
	QString m_imagePath;
	QDateTime m_imageDateModified;
	QString m_imageTag;
};

} // NS DTO

namespace Support {

using ChapterInfo = Jellyfin::DTO::ChapterInfo;

template <>
ChapterInfo fromJsonValue<ChapterInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return ChapterInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_CHAPTERINFO_H

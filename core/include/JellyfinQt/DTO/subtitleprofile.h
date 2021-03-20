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

#ifndef JELLYFIN_DTO_SUBTITLEPROFILE_H
#define JELLYFIN_DTO_SUBTITLEPROFILE_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/DTO/subtitledeliverymethod.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class SubtitleProfile {
public:
	explicit SubtitleProfile();
	static SubtitleProfile fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	QString format() const;

	void setFormat(QString newFormat);

	SubtitleDeliveryMethod method() const;

	void setMethod(SubtitleDeliveryMethod newMethod);

	QString didlMode() const;

	void setDidlMode(QString newDidlMode);

	QString language() const;

	void setLanguage(QString newLanguage);

	QString container() const;

	void setContainer(QString newContainer);

protected:
	QString m_format;
	SubtitleDeliveryMethod m_method;
	QString m_didlMode;
	QString m_language;
	QString m_container;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_SUBTITLEPROFILE_H

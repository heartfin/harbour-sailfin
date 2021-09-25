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

#include "JellyfinQt/dto/subtitledeliverymethod.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class SubtitleProfile {
public:
	SubtitleProfile(			
		SubtitleDeliveryMethod method								
	);

	SubtitleProfile(const SubtitleProfile &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(SubtitleProfile &other);
	
	static SubtitleProfile fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QString format() const;

	void setFormat(QString newFormat);
	bool formatNull() const;
	void setFormatNull();


	SubtitleDeliveryMethod method() const;

	void setMethod(SubtitleDeliveryMethod newMethod);


	QString didlMode() const;

	void setDidlMode(QString newDidlMode);
	bool didlModeNull() const;
	void setDidlModeNull();


	QString language() const;

	void setLanguage(QString newLanguage);
	bool languageNull() const;
	void setLanguageNull();


	QString container() const;

	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();


protected:
	QString m_format;
	SubtitleDeliveryMethod m_method;
	QString m_didlMode;
	QString m_language;
	QString m_container;

private:
	// Private constructor which generates an invalid object, for use withing SubtitleProfile::fromJson();
	SubtitleProfile();
};


} // NS DTO

namespace Support {

using SubtitleProfile = Jellyfin::DTO::SubtitleProfile;

template <>
SubtitleProfile fromJsonValue(const QJsonValue &source, convertType<SubtitleProfile>);

template<>
QJsonValue toJsonValue(const SubtitleProfile &source, convertType<SubtitleProfile>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SUBTITLEPROFILE_H

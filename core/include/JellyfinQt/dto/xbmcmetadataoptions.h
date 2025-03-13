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

#ifndef JELLYFIN_DTO_XBMCMETADATAOPTIONS_H
#define JELLYFIN_DTO_XBMCMETADATAOPTIONS_H

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


class XbmcMetadataOptions {
public:
	XbmcMetadataOptions(			
		QString releaseDateFormat,			
		bool saveImagePathsInNfo,			
		bool enablePathSubstitution,			
		bool enableExtraThumbsDuplication		
	);

	XbmcMetadataOptions(const XbmcMetadataOptions &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(XbmcMetadataOptions &other);
	
	static XbmcMetadataOptions fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QString userId() const;

	void setUserId(QString newUserId);
	bool userIdNull() const;
	void setUserIdNull();


	QString releaseDateFormat() const;

	void setReleaseDateFormat(QString newReleaseDateFormat);


	bool saveImagePathsInNfo() const;

	void setSaveImagePathsInNfo(bool newSaveImagePathsInNfo);


	bool enablePathSubstitution() const;

	void setEnablePathSubstitution(bool newEnablePathSubstitution);


	bool enableExtraThumbsDuplication() const;

	void setEnableExtraThumbsDuplication(bool newEnableExtraThumbsDuplication);


protected:
	QString m_userId;
	QString m_releaseDateFormat;
	bool m_saveImagePathsInNfo;
	bool m_enablePathSubstitution;
	bool m_enableExtraThumbsDuplication;

private:
	// Private constructor which generates an invalid object, for use withing XbmcMetadataOptions::fromJson();
	XbmcMetadataOptions();
};


} // NS DTO

namespace Support {

using XbmcMetadataOptions = Jellyfin::DTO::XbmcMetadataOptions;

template <>
XbmcMetadataOptions fromJsonValue(const QJsonValue &source, convertType<XbmcMetadataOptions>);

template<>
QJsonValue toJsonValue(const XbmcMetadataOptions &source, convertType<XbmcMetadataOptions>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_XBMCMETADATAOPTIONS_H

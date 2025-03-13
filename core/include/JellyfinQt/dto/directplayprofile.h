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

#ifndef JELLYFIN_DTO_DIRECTPLAYPROFILE_H
#define JELLYFIN_DTO_DIRECTPLAYPROFILE_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/dlnaprofiletype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class DirectPlayProfile {
public:
	DirectPlayProfile(	
		QString container,							
		DlnaProfileType type		
	);

	DirectPlayProfile(const DirectPlayProfile &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(DirectPlayProfile &other);
	
	static DirectPlayProfile fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the container.
	 */
	QString container() const;
	/**
	* @brief Gets or sets the container.
	*/
	void setContainer(QString newContainer);

	/**
	 * @brief Gets or sets the audio codec.
	 */
	QString audioCodec() const;
	/**
	* @brief Gets or sets the audio codec.
	*/
	void setAudioCodec(QString newAudioCodec);
	bool audioCodecNull() const;
	void setAudioCodecNull();

	/**
	 * @brief Gets or sets the video codec.
	 */
	QString videoCodec() const;
	/**
	* @brief Gets or sets the video codec.
	*/
	void setVideoCodec(QString newVideoCodec);
	bool videoCodecNull() const;
	void setVideoCodecNull();


	DlnaProfileType type() const;

	void setType(DlnaProfileType newType);


protected:
	QString m_container;
	QString m_audioCodec;
	QString m_videoCodec;
	DlnaProfileType m_type;

private:
	// Private constructor which generates an invalid object, for use withing DirectPlayProfile::fromJson();
	DirectPlayProfile();
};


} // NS DTO

namespace Support {

using DirectPlayProfile = Jellyfin::DTO::DirectPlayProfile;

template <>
DirectPlayProfile fromJsonValue(const QJsonValue &source, convertType<DirectPlayProfile>);

template<>
QJsonValue toJsonValue(const DirectPlayProfile &source, convertType<DirectPlayProfile>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_DIRECTPLAYPROFILE_H

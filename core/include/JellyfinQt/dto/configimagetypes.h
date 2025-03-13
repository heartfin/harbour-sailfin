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

#ifndef JELLYFIN_DTO_CONFIGIMAGETYPES_H
#define JELLYFIN_DTO_CONFIGIMAGETYPES_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class ConfigImageTypes {
public:	ConfigImageTypes();
	ConfigImageTypes(const ConfigImageTypes &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ConfigImageTypes &other);
	
	static ConfigImageTypes fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QStringList backdropSizes() const;

	void setBackdropSizes(QStringList newBackdropSizes);
	bool backdropSizesNull() const;
	void setBackdropSizesNull();


	QString baseUrl() const;

	void setBaseUrl(QString newBaseUrl);
	bool baseUrlNull() const;
	void setBaseUrlNull();


	QStringList logoSizes() const;

	void setLogoSizes(QStringList newLogoSizes);
	bool logoSizesNull() const;
	void setLogoSizesNull();


	QStringList posterSizes() const;

	void setPosterSizes(QStringList newPosterSizes);
	bool posterSizesNull() const;
	void setPosterSizesNull();


	QStringList profileSizes() const;

	void setProfileSizes(QStringList newProfileSizes);
	bool profileSizesNull() const;
	void setProfileSizesNull();


	QString secureBaseUrl() const;

	void setSecureBaseUrl(QString newSecureBaseUrl);
	bool secureBaseUrlNull() const;
	void setSecureBaseUrlNull();


	QStringList stillSizes() const;

	void setStillSizes(QStringList newStillSizes);
	bool stillSizesNull() const;
	void setStillSizesNull();


protected:
	QStringList m_backdropSizes;
	QString m_baseUrl;
	QStringList m_logoSizes;
	QStringList m_posterSizes;
	QStringList m_profileSizes;
	QString m_secureBaseUrl;
	QStringList m_stillSizes;


};


} // NS DTO

namespace Support {

using ConfigImageTypes = Jellyfin::DTO::ConfigImageTypes;

template <>
ConfigImageTypes fromJsonValue(const QJsonValue &source, convertType<ConfigImageTypes>);

template<>
QJsonValue toJsonValue(const ConfigImageTypes &source, convertType<ConfigImageTypes>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_CONFIGIMAGETYPES_H

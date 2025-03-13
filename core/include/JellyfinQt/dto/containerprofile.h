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

#ifndef JELLYFIN_DTO_CONTAINERPROFILE_H
#define JELLYFIN_DTO_CONTAINERPROFILE_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/dlnaprofiletype.h"
#include "JellyfinQt/dto/profilecondition.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class ContainerProfile {
public:
	ContainerProfile(	
		DlnaProfileType type,			
		QList<ProfileCondition> conditions						
	);

	ContainerProfile(const ContainerProfile &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(ContainerProfile &other);
	
	static ContainerProfile fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	DlnaProfileType type() const;

	void setType(DlnaProfileType newType);

	/**
	 * @brief Gets or sets the list of MediaBrowser.Model.Dlna.ProfileCondition which this container will be applied to.
	 */
	QList<ProfileCondition> conditions() const;
	/**
	* @brief Gets or sets the list of MediaBrowser.Model.Dlna.ProfileCondition which this container will be applied to.
	*/
	void setConditions(QList<ProfileCondition> newConditions);

	/**
	 * @brief Gets or sets the container(s) which this container must meet.
	 */
	QString container() const;
	/**
	* @brief Gets or sets the container(s) which this container must meet.
	*/
	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();

	/**
	 * @brief Gets or sets the sub container(s) which this container must meet.
	 */
	QString subContainer() const;
	/**
	* @brief Gets or sets the sub container(s) which this container must meet.
	*/
	void setSubContainer(QString newSubContainer);
	bool subContainerNull() const;
	void setSubContainerNull();


protected:
	DlnaProfileType m_type;
	QList<ProfileCondition> m_conditions;
	QString m_container;
	QString m_subContainer;

private:
	// Private constructor which generates an invalid object, for use withing ContainerProfile::fromJson();
	ContainerProfile();
};


} // NS DTO

namespace Support {

using ContainerProfile = Jellyfin::DTO::ContainerProfile;

template <>
ContainerProfile fromJsonValue(const QJsonValue &source, convertType<ContainerProfile>);

template<>
QJsonValue toJsonValue(const ContainerProfile &source, convertType<ContainerProfile>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_CONTAINERPROFILE_H

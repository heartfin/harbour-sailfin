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

#ifndef JELLYFIN_DTO_BASEITEMPERSON_H
#define JELLYFIN_DTO_BASEITEMPERSON_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class BaseItemPerson {
public:
	BaseItemPerson();
	BaseItemPerson(const BaseItemPerson &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(BaseItemPerson &other);
	
	static BaseItemPerson fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();

	/**
	 * @brief Gets or sets the identifier.
	 */
	QString jellyfinId() const;
	/**
	* @brief Gets or sets the identifier.
	*/
	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();

	/**
	 * @brief Gets or sets the role.
	 */
	QString role() const;
	/**
	* @brief Gets or sets the role.
	*/
	void setRole(QString newRole);
	bool roleNull() const;
	void setRoleNull();

	/**
	 * @brief Gets or sets the type.
	 */
	QString type() const;
	/**
	* @brief Gets or sets the type.
	*/
	void setType(QString newType);
	bool typeNull() const;
	void setTypeNull();

	/**
	 * @brief Gets or sets the primary image tag.
	 */
	QString primaryImageTag() const;
	/**
	* @brief Gets or sets the primary image tag.
	*/
	void setPrimaryImageTag(QString newPrimaryImageTag);
	bool primaryImageTagNull() const;
	void setPrimaryImageTagNull();

	/**
	 * @brief Gets or sets the primary image blurhash.
	 */
	std::optional<QJsonObject> imageBlurHashes() const;
	/**
	* @brief Gets or sets the primary image blurhash.
	*/
	void setImageBlurHashes(std::optional<QJsonObject> newImageBlurHashes);
	bool imageBlurHashesNull() const;
	void setImageBlurHashesNull();


protected:
	QString m_name;
	QString m_jellyfinId;
	QString m_role;
	QString m_type;
	QString m_primaryImageTag;
	std::optional<QJsonObject> m_imageBlurHashes = std::nullopt;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_BASEITEMPERSON_H

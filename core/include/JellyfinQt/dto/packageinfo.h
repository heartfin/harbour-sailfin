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

#ifndef JELLYFIN_DTO_PACKAGEINFO_H
#define JELLYFIN_DTO_PACKAGEINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/versioninfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class PackageInfo {
public:
	PackageInfo();
	PackageInfo(const PackageInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(PackageInfo &other);
	
	static PackageInfo fromJson(QJsonObject source);
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
	 * @brief Gets or sets a long description of the plugin containing features or helpful explanations.
	 */
	QString description() const;
	/**
	* @brief Gets or sets a long description of the plugin containing features or helpful explanations.
	*/
	void setDescription(QString newDescription);
	bool descriptionNull() const;
	void setDescriptionNull();

	/**
	 * @brief Gets or sets a short overview of what the plugin does.
	 */
	QString overview() const;
	/**
	* @brief Gets or sets a short overview of what the plugin does.
	*/
	void setOverview(QString newOverview);
	bool overviewNull() const;
	void setOverviewNull();

	/**
	 * @brief Gets or sets the owner.
	 */
	QString owner() const;
	/**
	* @brief Gets or sets the owner.
	*/
	void setOwner(QString newOwner);
	bool ownerNull() const;
	void setOwnerNull();

	/**
	 * @brief Gets or sets the category.
	 */
	QString category() const;
	/**
	* @brief Gets or sets the category.
	*/
	void setCategory(QString newCategory);
	bool categoryNull() const;
	void setCategoryNull();

	/**
	 * @brief Gets or sets the guid of the assembly associated with this plugin.
This is used to identify the proper item for automatic updates.
	 */
	QString guid() const;
	/**
	* @brief Gets or sets the guid of the assembly associated with this plugin.
This is used to identify the proper item for automatic updates.
	*/
	void setGuid(QString newGuid);
	bool guidNull() const;
	void setGuidNull();

	/**
	 * @brief Gets or sets the versions.
	 */
	QList<VersionInfo> versions() const;
	/**
	* @brief Gets or sets the versions.
	*/
	void setVersions(QList<VersionInfo> newVersions);
	bool versionsNull() const;
	void setVersionsNull();

	/**
	 * @brief Gets or sets the image url for the package.
	 */
	QString imageUrl() const;
	/**
	* @brief Gets or sets the image url for the package.
	*/
	void setImageUrl(QString newImageUrl);
	bool imageUrlNull() const;
	void setImageUrlNull();


protected:
	QString m_name;
	QString m_description;
	QString m_overview;
	QString m_owner;
	QString m_category;
	QString m_guid;
	QList<VersionInfo> m_versions;
	QString m_imageUrl;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_PACKAGEINFO_H

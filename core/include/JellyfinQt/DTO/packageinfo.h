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
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/versioninfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class PackageInfo {
public:
	explicit PackageInfo();
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
	/**
	 * @brief Gets or sets a long description of the plugin containing features or helpful explanations.
	 */
	QString description() const;
	/**
	* @brief Gets or sets a long description of the plugin containing features or helpful explanations.
	*/
	void setDescription(QString newDescription);
	/**
	 * @brief Gets or sets a short overview of what the plugin does.
	 */
	QString overview() const;
	/**
	* @brief Gets or sets a short overview of what the plugin does.
	*/
	void setOverview(QString newOverview);
	/**
	 * @brief Gets or sets the owner.
	 */
	QString owner() const;
	/**
	* @brief Gets or sets the owner.
	*/
	void setOwner(QString newOwner);
	/**
	 * @brief Gets or sets the category.
	 */
	QString category() const;
	/**
	* @brief Gets or sets the category.
	*/
	void setCategory(QString newCategory);
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
	/**
	 * @brief Gets or sets the versions.
	 */
	QList<QSharedPointer<VersionInfo>> versions() const;
	/**
	* @brief Gets or sets the versions.
	*/
	void setVersions(QList<QSharedPointer<VersionInfo>> newVersions);
	/**
	 * @brief Gets or sets the image url for the package.
	 */
	QString imageUrl() const;
	/**
	* @brief Gets or sets the image url for the package.
	*/
	void setImageUrl(QString newImageUrl);

protected:
	QString m_name;
	QString m_description;
	QString m_overview;
	QString m_owner;
	QString m_category;
	QString m_guid;
	QList<QSharedPointer<VersionInfo>> m_versions;
	QString m_imageUrl;
};

} // NS DTO

namespace Support {

using PackageInfo = Jellyfin::DTO::PackageInfo;

template <>
PackageInfo fromJsonValue<PackageInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return PackageInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PACKAGEINFO_H

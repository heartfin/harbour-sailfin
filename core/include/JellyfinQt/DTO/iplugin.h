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

#ifndef JELLYFIN_DTO_IPLUGIN_H
#define JELLYFIN_DTO_IPLUGIN_H

#include <QJsonObject>
#include <QJsonValue>
#include <QSharedPointer>
#include <QString>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/version.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class IPlugin {
public:
	explicit IPlugin();
	static IPlugin fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets the name of the plugin.
	 */
	QString name() const;
	/**
	* @brief Gets the name of the plugin.
	*/
	void setName(QString newName);
	/**
	 * @brief Gets the Description.
	 */
	QString description() const;
	/**
	* @brief Gets the Description.
	*/
	void setDescription(QString newDescription);
	/**
	 * @brief Gets the unique id.
	 */
	QUuid jellyfinId() const;
	/**
	* @brief Gets the unique id.
	*/
	void setJellyfinId(QUuid newJellyfinId);

	QSharedPointer<Version> version() const;

	void setVersion(QSharedPointer<Version> newVersion);
	/**
	 * @brief Gets the path to the assembly file.
	 */
	QString assemblyFilePath() const;
	/**
	* @brief Gets the path to the assembly file.
	*/
	void setAssemblyFilePath(QString newAssemblyFilePath);
	/**
	 * @brief Gets a value indicating whether the plugin can be uninstalled.
	 */
	bool canUninstall() const;
	/**
	* @brief Gets a value indicating whether the plugin can be uninstalled.
	*/
	void setCanUninstall(bool newCanUninstall);
	/**
	 * @brief Gets the full path to the data folder, where the plugin can store any miscellaneous files needed.
	 */
	QString dataFolderPath() const;
	/**
	* @brief Gets the full path to the data folder, where the plugin can store any miscellaneous files needed.
	*/
	void setDataFolderPath(QString newDataFolderPath);

protected:
	QString m_name;
	QString m_description;
	QUuid m_jellyfinId;
	QSharedPointer<Version> m_version = nullptr;
	QString m_assemblyFilePath;
	bool m_canUninstall;
	QString m_dataFolderPath;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_IPLUGIN_H

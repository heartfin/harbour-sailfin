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
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class Version;

class IPlugin : public QObject {
	Q_OBJECT
public:
	explicit IPlugin(QObject *parent = nullptr);
	static IPlugin *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets the name of the plugin.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets the Description.
	 */
	Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
	/**
	 * @brief Gets the unique id.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	Q_PROPERTY(Version * version READ version WRITE setVersion NOTIFY versionChanged)
	/**
	 * @brief Gets the path to the assembly file.
	 */
	Q_PROPERTY(QString assemblyFilePath READ assemblyFilePath WRITE setAssemblyFilePath NOTIFY assemblyFilePathChanged)
	/**
	 * @brief Gets a value indicating whether the plugin can be uninstalled.
	 */
	Q_PROPERTY(bool canUninstall READ canUninstall WRITE setCanUninstall NOTIFY canUninstallChanged)
	/**
	 * @brief Gets the full path to the data folder, where the plugin can store any miscellaneous files needed.
	 */
	Q_PROPERTY(QString dataFolderPath READ dataFolderPath WRITE setDataFolderPath NOTIFY dataFolderPathChanged)

	QString name() const;
	void setName(QString newName);
	
	QString description() const;
	void setDescription(QString newDescription);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	Version * version() const;
	void setVersion(Version * newVersion);
	
	QString assemblyFilePath() const;
	void setAssemblyFilePath(QString newAssemblyFilePath);
	
	bool canUninstall() const;
	void setCanUninstall(bool newCanUninstall);
	
	QString dataFolderPath() const;
	void setDataFolderPath(QString newDataFolderPath);
	
signals:
	void nameChanged(QString newName);
	void descriptionChanged(QString newDescription);
	void jellyfinIdChanged(QString newJellyfinId);
	void versionChanged(Version * newVersion);
	void assemblyFilePathChanged(QString newAssemblyFilePath);
	void canUninstallChanged(bool newCanUninstall);
	void dataFolderPathChanged(QString newDataFolderPath);
protected:
	QString m_name;
	QString m_description;
	QString m_jellyfinId;
	Version * m_version = nullptr;
	QString m_assemblyFilePath;
	bool m_canUninstall;
	QString m_dataFolderPath;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_IPLUGIN_H

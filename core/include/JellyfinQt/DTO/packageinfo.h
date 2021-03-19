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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class VersionInfo;

class PackageInfo : public QObject {
	Q_OBJECT
public:
	explicit PackageInfo(QObject *parent = nullptr);
	static PackageInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets a long description of the plugin containing features or helpful explanations.
	 */
	Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
	/**
	 * @brief Gets or sets a short overview of what the plugin does.
	 */
	Q_PROPERTY(QString overview READ overview WRITE setOverview NOTIFY overviewChanged)
	/**
	 * @brief Gets or sets the owner.
	 */
	Q_PROPERTY(QString owner READ owner WRITE setOwner NOTIFY ownerChanged)
	/**
	 * @brief Gets or sets the category.
	 */
	Q_PROPERTY(QString category READ category WRITE setCategory NOTIFY categoryChanged)
	/**
	 * @brief Gets or sets the guid of the assembly associated with this plugin.
This is used to identify the proper item for automatic updates.
	 */
	Q_PROPERTY(QString guid READ guid WRITE setGuid NOTIFY guidChanged)
	/**
	 * @brief Gets or sets the versions.
	 */
	Q_PROPERTY(QList<VersionInfo *> versions READ versions WRITE setVersions NOTIFY versionsChanged)
	/**
	 * @brief Gets or sets the image url for the package.
	 */
	Q_PROPERTY(QString imageUrl READ imageUrl WRITE setImageUrl NOTIFY imageUrlChanged)

	QString name() const;
	void setName(QString newName);
	
	QString description() const;
	void setDescription(QString newDescription);
	
	QString overview() const;
	void setOverview(QString newOverview);
	
	QString owner() const;
	void setOwner(QString newOwner);
	
	QString category() const;
	void setCategory(QString newCategory);
	
	QString guid() const;
	void setGuid(QString newGuid);
	
	QList<VersionInfo *> versions() const;
	void setVersions(QList<VersionInfo *> newVersions);
	
	QString imageUrl() const;
	void setImageUrl(QString newImageUrl);
	
signals:
	void nameChanged(QString newName);
	void descriptionChanged(QString newDescription);
	void overviewChanged(QString newOverview);
	void ownerChanged(QString newOwner);
	void categoryChanged(QString newCategory);
	void guidChanged(QString newGuid);
	void versionsChanged(QList<VersionInfo *> newVersions);
	void imageUrlChanged(QString newImageUrl);
protected:
	QString m_name;
	QString m_description;
	QString m_overview;
	QString m_owner;
	QString m_category;
	QString m_guid;
	QList<VersionInfo *> m_versions;
	QString m_imageUrl;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PACKAGEINFO_H

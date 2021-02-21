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

#ifndef JELLYFIN_DTO_INSTALLATIONINFO_H
#define JELLYFIN_DTO_INSTALLATIONINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class Version;

class InstallationInfo : public QObject {
	Q_OBJECT
public:
	explicit InstallationInfo(QObject *parent = nullptr);
	static InstallationInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the Id.
	 */
	Q_PROPERTY(QString guid READ guid WRITE setGuid NOTIFY guidChanged)
	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	Q_PROPERTY(Version * version READ version WRITE setVersion NOTIFY versionChanged)
	/**
	 * @brief Gets or sets the changelog for this version.
	 */
	Q_PROPERTY(QString changelog READ changelog WRITE setChangelog NOTIFY changelogChanged)
	/**
	 * @brief Gets or sets the source URL.
	 */
	Q_PROPERTY(QString sourceUrl READ sourceUrl WRITE setSourceUrl NOTIFY sourceUrlChanged)
	/**
	 * @brief Gets or sets a checksum for the binary.
	 */
	Q_PROPERTY(QString checksum READ checksum WRITE setChecksum NOTIFY checksumChanged)

	QString guid() const;
	void setGuid(QString newGuid);
	
	QString name() const;
	void setName(QString newName);
	
	Version * version() const;
	void setVersion(Version * newVersion);
	
	QString changelog() const;
	void setChangelog(QString newChangelog);
	
	QString sourceUrl() const;
	void setSourceUrl(QString newSourceUrl);
	
	QString checksum() const;
	void setChecksum(QString newChecksum);
	
signals:
	void guidChanged(QString newGuid);
	void nameChanged(QString newName);
	void versionChanged(Version * newVersion);
	void changelogChanged(QString newChangelog);
	void sourceUrlChanged(QString newSourceUrl);
	void checksumChanged(QString newChecksum);
protected:
	QString m_guid;
	QString m_name;
	Version * m_version = nullptr;
	QString m_changelog;
	QString m_sourceUrl;
	QString m_checksum;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_INSTALLATIONINFO_H

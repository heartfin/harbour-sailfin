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

#ifndef JELLYFIN_DTO_VERSIONINFO_H
#define JELLYFIN_DTO_VERSIONINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class Version;

class VersionInfo : public QObject {
	Q_OBJECT
public:
	explicit VersionInfo(QObject *parent = nullptr);
	static VersionInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the version.
	 */
	Q_PROPERTY(QString version READ version WRITE setVersion NOTIFY versionChanged)
	Q_PROPERTY(Version * versionNumber READ versionNumber WRITE setVersionNumber NOTIFY versionNumberChanged)
	/**
	 * @brief Gets or sets the changelog for this version.
	 */
	Q_PROPERTY(QString changelog READ changelog WRITE setChangelog NOTIFY changelogChanged)
	/**
	 * @brief Gets or sets the ABI that this version was built against.
	 */
	Q_PROPERTY(QString targetAbi READ targetAbi WRITE setTargetAbi NOTIFY targetAbiChanged)
	/**
	 * @brief Gets or sets the source URL.
	 */
	Q_PROPERTY(QString sourceUrl READ sourceUrl WRITE setSourceUrl NOTIFY sourceUrlChanged)
	/**
	 * @brief Gets or sets a checksum for the binary.
	 */
	Q_PROPERTY(QString checksum READ checksum WRITE setChecksum NOTIFY checksumChanged)
	/**
	 * @brief Gets or sets a timestamp of when the binary was built.
	 */
	Q_PROPERTY(QString timestamp READ timestamp WRITE setTimestamp NOTIFY timestampChanged)
	/**
	 * @brief Gets or sets the repository name.
	 */
	Q_PROPERTY(QString repositoryName READ repositoryName WRITE setRepositoryName NOTIFY repositoryNameChanged)
	/**
	 * @brief Gets or sets the repository url.
	 */
	Q_PROPERTY(QString repositoryUrl READ repositoryUrl WRITE setRepositoryUrl NOTIFY repositoryUrlChanged)

	QString version() const;
	void setVersion(QString newVersion);
	
	Version * versionNumber() const;
	void setVersionNumber(Version * newVersionNumber);
	
	QString changelog() const;
	void setChangelog(QString newChangelog);
	
	QString targetAbi() const;
	void setTargetAbi(QString newTargetAbi);
	
	QString sourceUrl() const;
	void setSourceUrl(QString newSourceUrl);
	
	QString checksum() const;
	void setChecksum(QString newChecksum);
	
	QString timestamp() const;
	void setTimestamp(QString newTimestamp);
	
	QString repositoryName() const;
	void setRepositoryName(QString newRepositoryName);
	
	QString repositoryUrl() const;
	void setRepositoryUrl(QString newRepositoryUrl);
	
signals:
	void versionChanged(QString newVersion);
	void versionNumberChanged(Version * newVersionNumber);
	void changelogChanged(QString newChangelog);
	void targetAbiChanged(QString newTargetAbi);
	void sourceUrlChanged(QString newSourceUrl);
	void checksumChanged(QString newChecksum);
	void timestampChanged(QString newTimestamp);
	void repositoryNameChanged(QString newRepositoryName);
	void repositoryUrlChanged(QString newRepositoryUrl);
protected:
	QString m_version;
	Version * m_versionNumber = nullptr;
	QString m_changelog;
	QString m_targetAbi;
	QString m_sourceUrl;
	QString m_checksum;
	QString m_timestamp;
	QString m_repositoryName;
	QString m_repositoryUrl;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_VERSIONINFO_H

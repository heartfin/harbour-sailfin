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
#include <QJsonValue>
#include <QSharedPointer>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/version.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class VersionInfo {
public:
	VersionInfo();
	VersionInfo(const VersionInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(VersionInfo &other);
	
	static VersionInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the version.
	 */
	QString version() const;
	/**
	* @brief Gets or sets the version.
	*/
	void setVersion(QString newVersion);
	bool versionNull() const;
	void setVersionNull();


	QSharedPointer<Version> versionNumber() const;

	void setVersionNumber(QSharedPointer<Version> newVersionNumber);

	/**
	 * @brief Gets or sets the changelog for this version.
	 */
	QString changelog() const;
	/**
	* @brief Gets or sets the changelog for this version.
	*/
	void setChangelog(QString newChangelog);
	bool changelogNull() const;
	void setChangelogNull();

	/**
	 * @brief Gets or sets the ABI that this version was built against.
	 */
	QString targetAbi() const;
	/**
	* @brief Gets or sets the ABI that this version was built against.
	*/
	void setTargetAbi(QString newTargetAbi);
	bool targetAbiNull() const;
	void setTargetAbiNull();

	/**
	 * @brief Gets or sets the source URL.
	 */
	QString sourceUrl() const;
	/**
	* @brief Gets or sets the source URL.
	*/
	void setSourceUrl(QString newSourceUrl);
	bool sourceUrlNull() const;
	void setSourceUrlNull();

	/**
	 * @brief Gets or sets a checksum for the binary.
	 */
	QString checksum() const;
	/**
	* @brief Gets or sets a checksum for the binary.
	*/
	void setChecksum(QString newChecksum);
	bool checksumNull() const;
	void setChecksumNull();

	/**
	 * @brief Gets or sets a timestamp of when the binary was built.
	 */
	QString timestamp() const;
	/**
	* @brief Gets or sets a timestamp of when the binary was built.
	*/
	void setTimestamp(QString newTimestamp);
	bool timestampNull() const;
	void setTimestampNull();

	/**
	 * @brief Gets or sets the repository name.
	 */
	QString repositoryName() const;
	/**
	* @brief Gets or sets the repository name.
	*/
	void setRepositoryName(QString newRepositoryName);
	bool repositoryNameNull() const;
	void setRepositoryNameNull();

	/**
	 * @brief Gets or sets the repository url.
	 */
	QString repositoryUrl() const;
	/**
	* @brief Gets or sets the repository url.
	*/
	void setRepositoryUrl(QString newRepositoryUrl);
	bool repositoryUrlNull() const;
	void setRepositoryUrlNull();


protected:
	QString m_version;
	QSharedPointer<Version> m_versionNumber = nullptr;
	QString m_changelog;
	QString m_targetAbi;
	QString m_sourceUrl;
	QString m_checksum;
	QString m_timestamp;
	QString m_repositoryName;
	QString m_repositoryUrl;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_VERSIONINFO_H

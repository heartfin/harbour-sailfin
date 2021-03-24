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
#include <QJsonValue>
#include <QSharedPointer>
#include <QString>
#include <QUuid>
#include <optional>

#include "JellyfinQt/DTO/version.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class InstallationInfo {
public:InstallationInfo();InstallationInfo(const InstallationInfo &other);
	
	static InstallationInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the Id.
	 */
	QUuid guid() const;
	/**
	* @brief Gets or sets the Id.
	*/
	void setGuid(QUuid newGuid);
	/**
	 * @brief Gets or sets the name.
	 */
	QString name() const;
	/**
	* @brief Gets or sets the name.
	*/
	void setName(QString newName);

	QSharedPointer<Version> version() const;

	void setVersion(QSharedPointer<Version> newVersion);
	/**
	 * @brief Gets or sets the changelog for this version.
	 */
	QString changelog() const;
	/**
	* @brief Gets or sets the changelog for this version.
	*/
	void setChangelog(QString newChangelog);
	/**
	 * @brief Gets or sets the source URL.
	 */
	QString sourceUrl() const;
	/**
	* @brief Gets or sets the source URL.
	*/
	void setSourceUrl(QString newSourceUrl);
	/**
	 * @brief Gets or sets a checksum for the binary.
	 */
	QString checksum() const;
	/**
	* @brief Gets or sets a checksum for the binary.
	*/
	void setChecksum(QString newChecksum);

protected:
	QUuid m_guid;
	QString m_name;
	QSharedPointer<Version> m_version = nullptr;
	QString m_changelog;
	QString m_sourceUrl;
	QString m_checksum;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_INSTALLATIONINFO_H

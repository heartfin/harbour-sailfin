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

#ifndef JELLYFIN_DTO_STARTUPREMOTEACCESSDTO_H
#define JELLYFIN_DTO_STARTUPREMOTEACCESSDTO_H

#include <QJsonObject>
#include <QObject>

namespace Jellyfin {
namespace DTO {

class StartupRemoteAccessDto : public QObject {
	Q_OBJECT
public:
	explicit StartupRemoteAccessDto(QObject *parent = nullptr);
	static StartupRemoteAccessDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets a value indicating whether enable remote access.
	 */
	Q_PROPERTY(bool enableRemoteAccess READ enableRemoteAccess WRITE setEnableRemoteAccess NOTIFY enableRemoteAccessChanged)
	/**
	 * @brief Gets or sets a value indicating whether enable automatic port mapping.
	 */
	Q_PROPERTY(bool enableAutomaticPortMapping READ enableAutomaticPortMapping WRITE setEnableAutomaticPortMapping NOTIFY enableAutomaticPortMappingChanged)

	bool enableRemoteAccess() const;
	void setEnableRemoteAccess(bool newEnableRemoteAccess);
	
	bool enableAutomaticPortMapping() const;
	void setEnableAutomaticPortMapping(bool newEnableAutomaticPortMapping);
	
signals:
	void enableRemoteAccessChanged(bool newEnableRemoteAccess);
	void enableAutomaticPortMappingChanged(bool newEnableAutomaticPortMapping);
protected:
	bool m_enableRemoteAccess;
	bool m_enableAutomaticPortMapping;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_STARTUPREMOTEACCESSDTO_H

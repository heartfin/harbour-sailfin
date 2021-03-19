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

#ifndef JELLYFIN_DTO_PUBLICSYSTEMINFO_H
#define JELLYFIN_DTO_PUBLICSYSTEMINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class PublicSystemInfo : public QObject {
	Q_OBJECT
public:
	explicit PublicSystemInfo(QObject *parent = nullptr);
	static PublicSystemInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the local address.
	 */
	Q_PROPERTY(QString localAddress READ localAddress WRITE setLocalAddress NOTIFY localAddressChanged)
	/**
	 * @brief Gets or sets the name of the server.
	 */
	Q_PROPERTY(QString serverName READ serverName WRITE setServerName NOTIFY serverNameChanged)
	/**
	 * @brief Gets or sets the server version.
	 */
	Q_PROPERTY(QString version READ version WRITE setVersion NOTIFY versionChanged)
	/**
	 * @brief Gets or sets the product name. This is the AssemblyProduct name.
	 */
	Q_PROPERTY(QString productName READ productName WRITE setProductName NOTIFY productNameChanged)
	/**
	 * @brief Gets or sets the operating system.
	 */
	Q_PROPERTY(QString operatingSystem READ operatingSystem WRITE setOperatingSystem NOTIFY operatingSystemChanged)
	/**
	 * @brief Gets or sets the id.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets a value indicating whether the startup wizard is completed.
	 */
	Q_PROPERTY(bool startupWizardCompleted READ startupWizardCompleted WRITE setStartupWizardCompleted NOTIFY startupWizardCompletedChanged)

	QString localAddress() const;
	void setLocalAddress(QString newLocalAddress);
	
	QString serverName() const;
	void setServerName(QString newServerName);
	
	QString version() const;
	void setVersion(QString newVersion);
	
	QString productName() const;
	void setProductName(QString newProductName);
	
	QString operatingSystem() const;
	void setOperatingSystem(QString newOperatingSystem);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	bool startupWizardCompleted() const;
	void setStartupWizardCompleted(bool newStartupWizardCompleted);
	
signals:
	void localAddressChanged(QString newLocalAddress);
	void serverNameChanged(QString newServerName);
	void versionChanged(QString newVersion);
	void productNameChanged(QString newProductName);
	void operatingSystemChanged(QString newOperatingSystem);
	void jellyfinIdChanged(QString newJellyfinId);
	void startupWizardCompletedChanged(bool newStartupWizardCompleted);
protected:
	QString m_localAddress;
	QString m_serverName;
	QString m_version;
	QString m_productName;
	QString m_operatingSystem;
	QString m_jellyfinId;
	bool m_startupWizardCompleted;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PUBLICSYSTEMINFO_H

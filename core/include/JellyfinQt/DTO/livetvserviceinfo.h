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

#ifndef JELLYFIN_DTO_LIVETVSERVICEINFO_H
#define JELLYFIN_DTO_LIVETVSERVICEINFO_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

#include "JellyfinQt/DTO/livetvservicestatus.h"

namespace Jellyfin {
namespace DTO {

class LiveTvServiceInfo : public QObject {
	Q_OBJECT
public:
	explicit LiveTvServiceInfo(QObject *parent = nullptr);
	static LiveTvServiceInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the home page URL.
	 */
	Q_PROPERTY(QString homePageUrl READ homePageUrl WRITE setHomePageUrl NOTIFY homePageUrlChanged)
	Q_PROPERTY(LiveTvServiceStatus status READ status WRITE setStatus NOTIFY statusChanged)
	/**
	 * @brief Gets or sets the status message.
	 */
	Q_PROPERTY(QString statusMessage READ statusMessage WRITE setStatusMessage NOTIFY statusMessageChanged)
	/**
	 * @brief Gets or sets the version.
	 */
	Q_PROPERTY(QString version READ version WRITE setVersion NOTIFY versionChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance has update available.
	 */
	Q_PROPERTY(bool hasUpdateAvailable READ hasUpdateAvailable WRITE setHasUpdateAvailable NOTIFY hasUpdateAvailableChanged)
	/**
	 * @brief Gets or sets a value indicating whether this instance is visible.
	 */
	Q_PROPERTY(bool isVisible READ isVisible WRITE setIsVisible NOTIFY isVisibleChanged)
	Q_PROPERTY(QStringList tuners READ tuners WRITE setTuners NOTIFY tunersChanged)

	QString name() const;
	void setName(QString newName);
	
	QString homePageUrl() const;
	void setHomePageUrl(QString newHomePageUrl);
	
	LiveTvServiceStatus status() const;
	void setStatus(LiveTvServiceStatus newStatus);
	
	QString statusMessage() const;
	void setStatusMessage(QString newStatusMessage);
	
	QString version() const;
	void setVersion(QString newVersion);
	
	bool hasUpdateAvailable() const;
	void setHasUpdateAvailable(bool newHasUpdateAvailable);
	
	bool isVisible() const;
	void setIsVisible(bool newIsVisible);
	
	QStringList tuners() const;
	void setTuners(QStringList newTuners);
	
signals:
	void nameChanged(QString newName);
	void homePageUrlChanged(QString newHomePageUrl);
	void statusChanged(LiveTvServiceStatus newStatus);
	void statusMessageChanged(QString newStatusMessage);
	void versionChanged(QString newVersion);
	void hasUpdateAvailableChanged(bool newHasUpdateAvailable);
	void isVisibleChanged(bool newIsVisible);
	void tunersChanged(QStringList newTuners);
protected:
	QString m_name;
	QString m_homePageUrl;
	LiveTvServiceStatus m_status;
	QString m_statusMessage;
	QString m_version;
	bool m_hasUpdateAvailable;
	bool m_isVisible;
	QStringList m_tuners;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_LIVETVSERVICEINFO_H

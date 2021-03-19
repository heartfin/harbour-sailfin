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

#ifndef JELLYFIN_DTO_REPOSITORYINFO_H
#define JELLYFIN_DTO_REPOSITORYINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class RepositoryInfo : public QObject {
	Q_OBJECT
public:
	explicit RepositoryInfo(QObject *parent = nullptr);
	static RepositoryInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the URL.
	 */
	Q_PROPERTY(QString url READ url WRITE setUrl NOTIFY urlChanged)
	/**
	 * @brief Gets or sets a value indicating whether the repository is enabled.
	 */
	Q_PROPERTY(bool enabled READ enabled WRITE setEnabled NOTIFY enabledChanged)

	QString name() const;
	void setName(QString newName);
	
	QString url() const;
	void setUrl(QString newUrl);
	
	bool enabled() const;
	void setEnabled(bool newEnabled);
	
signals:
	void nameChanged(QString newName);
	void urlChanged(QString newUrl);
	void enabledChanged(bool newEnabled);
protected:
	QString m_name;
	QString m_url;
	bool m_enabled;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_REPOSITORYINFO_H

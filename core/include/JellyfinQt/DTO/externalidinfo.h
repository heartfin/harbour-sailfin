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

#ifndef JELLYFIN_DTO_EXTERNALIDINFO_H
#define JELLYFIN_DTO_EXTERNALIDINFO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/externalidmediatype.h"

namespace Jellyfin {
namespace DTO {

class ExternalIdInfo : public QObject {
	Q_OBJECT
public:
	explicit ExternalIdInfo(QObject *parent = nullptr);
	static ExternalIdInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the display name of the external id provider (IE: IMDB, MusicBrainz, etc).
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the unique key for this id. This key should be unique across all providers.
	 */
	Q_PROPERTY(QString key READ key WRITE setKey NOTIFY keyChanged)
	Q_PROPERTY(ExternalIdMediaType type READ type WRITE setType NOTIFY typeChanged)
	/**
	 * @brief Gets or sets the URL format string.
	 */
	Q_PROPERTY(QString urlFormatString READ urlFormatString WRITE setUrlFormatString NOTIFY urlFormatStringChanged)

	QString name() const;
	void setName(QString newName);
	
	QString key() const;
	void setKey(QString newKey);
	
	ExternalIdMediaType type() const;
	void setType(ExternalIdMediaType newType);
	
	QString urlFormatString() const;
	void setUrlFormatString(QString newUrlFormatString);
	
signals:
	void nameChanged(QString newName);
	void keyChanged(QString newKey);
	void typeChanged(ExternalIdMediaType newType);
	void urlFormatStringChanged(QString newUrlFormatString);
protected:
	QString m_name;
	QString m_key;
	ExternalIdMediaType m_type;
	QString m_urlFormatString;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_EXTERNALIDINFO_H

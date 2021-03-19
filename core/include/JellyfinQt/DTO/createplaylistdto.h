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

#ifndef JELLYFIN_DTO_CREATEPLAYLISTDTO_H
#define JELLYFIN_DTO_CREATEPLAYLISTDTO_H

#include <QJsonObject>
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class CreatePlaylistDto : public QObject {
	Q_OBJECT
public:
	explicit CreatePlaylistDto(QObject *parent = nullptr);
	static CreatePlaylistDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name of the new playlist.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets item ids to add to the playlist.
	 */
	Q_PROPERTY(QStringList ids READ ids WRITE setIds NOTIFY idsChanged)
	/**
	 * @brief Gets or sets the user id.
	 */
	Q_PROPERTY(QString userId READ userId WRITE setUserId NOTIFY userIdChanged)
	/**
	 * @brief Gets or sets the media type.
	 */
	Q_PROPERTY(QString mediaType READ mediaType WRITE setMediaType NOTIFY mediaTypeChanged)

	QString name() const;
	void setName(QString newName);
	
	QStringList ids() const;
	void setIds(QStringList newIds);
	
	QString userId() const;
	void setUserId(QString newUserId);
	
	QString mediaType() const;
	void setMediaType(QString newMediaType);
	
signals:
	void nameChanged(QString newName);
	void idsChanged(QStringList newIds);
	void userIdChanged(QString newUserId);
	void mediaTypeChanged(QString newMediaType);
protected:
	QString m_name;
	QStringList m_ids;
	QString m_userId;
	QString m_mediaType;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_CREATEPLAYLISTDTO_H

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

#ifndef JELLYFIN_DTO_BASEITEMPERSON_H
#define JELLYFIN_DTO_BASEITEMPERSON_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class BaseItemPerson : public QObject {
	Q_OBJECT
public:
	explicit BaseItemPerson(QObject *parent = nullptr);
	static BaseItemPerson *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name.
	 */
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	/**
	 * @brief Gets or sets the identifier.
	 */
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	/**
	 * @brief Gets or sets the role.
	 */
	Q_PROPERTY(QString role READ role WRITE setRole NOTIFY roleChanged)
	/**
	 * @brief Gets or sets the type.
	 */
	Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
	/**
	 * @brief Gets or sets the primary image tag.
	 */
	Q_PROPERTY(QString primaryImageTag READ primaryImageTag WRITE setPrimaryImageTag NOTIFY primaryImageTagChanged)
	/**
	 * @brief Gets or sets the primary image blurhash.
	 */
	Q_PROPERTY(QJsonObject imageBlurHashes READ imageBlurHashes WRITE setImageBlurHashes NOTIFY imageBlurHashesChanged)

	QString name() const;
	void setName(QString newName);
	
	QString jellyfinId() const;
	void setJellyfinId(QString newJellyfinId);
	
	QString role() const;
	void setRole(QString newRole);
	
	QString type() const;
	void setType(QString newType);
	
	QString primaryImageTag() const;
	void setPrimaryImageTag(QString newPrimaryImageTag);
	
	QJsonObject imageBlurHashes() const;
	void setImageBlurHashes(QJsonObject newImageBlurHashes);
	
signals:
	void nameChanged(QString newName);
	void jellyfinIdChanged(QString newJellyfinId);
	void roleChanged(QString newRole);
	void typeChanged(QString newType);
	void primaryImageTagChanged(QString newPrimaryImageTag);
	void imageBlurHashesChanged(QJsonObject newImageBlurHashes);
protected:
	QString m_name;
	QString m_jellyfinId;
	QString m_role;
	QString m_type;
	QString m_primaryImageTag;
	QJsonObject m_imageBlurHashes;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_BASEITEMPERSON_H

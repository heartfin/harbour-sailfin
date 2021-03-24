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

#ifndef JELLYFIN_DTO_BASEITEM_H
#define JELLYFIN_DTO_BASEITEM_H

#include <QDateTime>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/mediaurl.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class BaseItem {
public:
	BaseItem();
	BaseItem(const BaseItem &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(BaseItem &other);
	
	static BaseItem fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	std::optional<qint64> size() const;

	void setSize(std::optional<qint64> newSize);
	bool sizeNull() const;
	void setSizeNull();


	QString container() const;

	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();


	QDateTime dateLastSaved() const;

	void setDateLastSaved(QDateTime newDateLastSaved);

	/**
	 * @brief Gets or sets the remote trailers.
	 */
	QList<QSharedPointer<MediaUrl>> remoteTrailers() const;
	/**
	* @brief Gets or sets the remote trailers.
	*/
	void setRemoteTrailers(QList<QSharedPointer<MediaUrl>> newRemoteTrailers);
	bool remoteTrailersNull() const;
	void setRemoteTrailersNull();


	bool isHD() const;

	void setIsHD(bool newIsHD);


	bool isShortcut() const;

	void setIsShortcut(bool newIsShortcut);


	QString shortcutPath() const;

	void setShortcutPath(QString newShortcutPath);
	bool shortcutPathNull() const;
	void setShortcutPathNull();


	qint32 width() const;

	void setWidth(qint32 newWidth);


	qint32 height() const;

	void setHeight(qint32 newHeight);


	QStringList extraIds() const;

	void setExtraIds(QStringList newExtraIds);
	bool extraIdsNull() const;
	void setExtraIdsNull();


	bool supportsExternalTransfer() const;

	void setSupportsExternalTransfer(bool newSupportsExternalTransfer);


protected:
	std::optional<qint64> m_size = std::nullopt;
	QString m_container;
	QDateTime m_dateLastSaved;
	QList<QSharedPointer<MediaUrl>> m_remoteTrailers;
	bool m_isHD;
	bool m_isShortcut;
	QString m_shortcutPath;
	qint32 m_width;
	qint32 m_height;
	QStringList m_extraIds;
	bool m_supportsExternalTransfer;
};

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_BASEITEM_H

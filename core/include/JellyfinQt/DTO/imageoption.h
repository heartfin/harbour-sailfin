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

#ifndef JELLYFIN_DTO_IMAGEOPTION_H
#define JELLYFIN_DTO_IMAGEOPTION_H

#include <QJsonObject>
#include <QObject>

#include "JellyfinQt/DTO/imagetype.h"

namespace Jellyfin {
namespace DTO {

class ImageOption : public QObject {
	Q_OBJECT
public:
	explicit ImageOption(QObject *parent = nullptr);
	static ImageOption *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(ImageType type READ type WRITE setType NOTIFY typeChanged)
	/**
	 * @brief Gets or sets the limit.
	 */
	Q_PROPERTY(qint32 limit READ limit WRITE setLimit NOTIFY limitChanged)
	/**
	 * @brief Gets or sets the minimum width.
	 */
	Q_PROPERTY(qint32 minWidth READ minWidth WRITE setMinWidth NOTIFY minWidthChanged)

	ImageType type() const;
	void setType(ImageType newType);
	
	qint32 limit() const;
	void setLimit(qint32 newLimit);
	
	qint32 minWidth() const;
	void setMinWidth(qint32 newMinWidth);
	
signals:
	void typeChanged(ImageType newType);
	void limitChanged(qint32 newLimit);
	void minWidthChanged(qint32 newMinWidth);
protected:
	ImageType m_type;
	qint32 m_limit;
	qint32 m_minWidth;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_IMAGEOPTION_H

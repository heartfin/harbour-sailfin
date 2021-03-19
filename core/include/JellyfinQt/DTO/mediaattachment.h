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

#ifndef JELLYFIN_DTO_MEDIAATTACHMENT_H
#define JELLYFIN_DTO_MEDIAATTACHMENT_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class MediaAttachment : public QObject {
	Q_OBJECT
public:
	explicit MediaAttachment(QObject *parent = nullptr);
	static MediaAttachment *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the codec.
	 */
	Q_PROPERTY(QString codec READ codec WRITE setCodec NOTIFY codecChanged)
	/**
	 * @brief Gets or sets the codec tag.
	 */
	Q_PROPERTY(QString codecTag READ codecTag WRITE setCodecTag NOTIFY codecTagChanged)
	/**
	 * @brief Gets or sets the comment.
	 */
	Q_PROPERTY(QString comment READ comment WRITE setComment NOTIFY commentChanged)
	/**
	 * @brief Gets or sets the index.
	 */
	Q_PROPERTY(qint32 index READ index WRITE setIndex NOTIFY indexChanged)
	/**
	 * @brief Gets or sets the filename.
	 */
	Q_PROPERTY(QString fileName READ fileName WRITE setFileName NOTIFY fileNameChanged)
	/**
	 * @brief Gets or sets the MIME type.
	 */
	Q_PROPERTY(QString mimeType READ mimeType WRITE setMimeType NOTIFY mimeTypeChanged)
	/**
	 * @brief Gets or sets the delivery URL.
	 */
	Q_PROPERTY(QString deliveryUrl READ deliveryUrl WRITE setDeliveryUrl NOTIFY deliveryUrlChanged)

	QString codec() const;
	void setCodec(QString newCodec);
	
	QString codecTag() const;
	void setCodecTag(QString newCodecTag);
	
	QString comment() const;
	void setComment(QString newComment);
	
	qint32 index() const;
	void setIndex(qint32 newIndex);
	
	QString fileName() const;
	void setFileName(QString newFileName);
	
	QString mimeType() const;
	void setMimeType(QString newMimeType);
	
	QString deliveryUrl() const;
	void setDeliveryUrl(QString newDeliveryUrl);
	
signals:
	void codecChanged(QString newCodec);
	void codecTagChanged(QString newCodecTag);
	void commentChanged(QString newComment);
	void indexChanged(qint32 newIndex);
	void fileNameChanged(QString newFileName);
	void mimeTypeChanged(QString newMimeType);
	void deliveryUrlChanged(QString newDeliveryUrl);
protected:
	QString m_codec;
	QString m_codecTag;
	QString m_comment;
	qint32 m_index;
	QString m_fileName;
	QString m_mimeType;
	QString m_deliveryUrl;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_MEDIAATTACHMENT_H

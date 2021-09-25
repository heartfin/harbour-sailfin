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
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class MediaAttachment {
public:
	MediaAttachment(							
		qint32 index								
	);

	MediaAttachment(const MediaAttachment &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(MediaAttachment &other);
	
	static MediaAttachment fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the codec.
	 */
	QString codec() const;
	/**
	* @brief Gets or sets the codec.
	*/
	void setCodec(QString newCodec);
	bool codecNull() const;
	void setCodecNull();

	/**
	 * @brief Gets or sets the codec tag.
	 */
	QString codecTag() const;
	/**
	* @brief Gets or sets the codec tag.
	*/
	void setCodecTag(QString newCodecTag);
	bool codecTagNull() const;
	void setCodecTagNull();

	/**
	 * @brief Gets or sets the comment.
	 */
	QString comment() const;
	/**
	* @brief Gets or sets the comment.
	*/
	void setComment(QString newComment);
	bool commentNull() const;
	void setCommentNull();

	/**
	 * @brief Gets or sets the index.
	 */
	qint32 index() const;
	/**
	* @brief Gets or sets the index.
	*/
	void setIndex(qint32 newIndex);

	/**
	 * @brief Gets or sets the filename.
	 */
	QString fileName() const;
	/**
	* @brief Gets or sets the filename.
	*/
	void setFileName(QString newFileName);
	bool fileNameNull() const;
	void setFileNameNull();

	/**
	 * @brief Gets or sets the MIME type.
	 */
	QString mimeType() const;
	/**
	* @brief Gets or sets the MIME type.
	*/
	void setMimeType(QString newMimeType);
	bool mimeTypeNull() const;
	void setMimeTypeNull();

	/**
	 * @brief Gets or sets the delivery URL.
	 */
	QString deliveryUrl() const;
	/**
	* @brief Gets or sets the delivery URL.
	*/
	void setDeliveryUrl(QString newDeliveryUrl);
	bool deliveryUrlNull() const;
	void setDeliveryUrlNull();


protected:
	QString m_codec;
	QString m_codecTag;
	QString m_comment;
	qint32 m_index;
	QString m_fileName;
	QString m_mimeType;
	QString m_deliveryUrl;

private:
	// Private constructor which generates an invalid object, for use withing MediaAttachment::fromJson();
	MediaAttachment();
};


} // NS DTO

namespace Support {

using MediaAttachment = Jellyfin::DTO::MediaAttachment;

template <>
MediaAttachment fromJsonValue(const QJsonValue &source, convertType<MediaAttachment>);

template<>
QJsonValue toJsonValue(const MediaAttachment &source, convertType<MediaAttachment>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_MEDIAATTACHMENT_H

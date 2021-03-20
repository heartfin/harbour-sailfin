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

#include <JellyfinQt/DTO/mediaattachment.h>

namespace Jellyfin {
namespace DTO {

MediaAttachment::MediaAttachment(QObject *parent) {}

MediaAttachment MediaAttachment::fromJson(QJsonObject source) {MediaAttachment instance;
	instance->setFromJson(source, false);
	return instance;
}


void MediaAttachment::setFromJson(QJsonObject source) {
	m_codec = fromJsonValue<QString>(source["Codec"]);
	m_codecTag = fromJsonValue<QString>(source["CodecTag"]);
	m_comment = fromJsonValue<QString>(source["Comment"]);
	m_index = fromJsonValue<qint32>(source["Index"]);
	m_fileName = fromJsonValue<QString>(source["FileName"]);
	m_mimeType = fromJsonValue<QString>(source["MimeType"]);
	m_deliveryUrl = fromJsonValue<QString>(source["DeliveryUrl"]);

}
	
QJsonObject MediaAttachment::toJson() {
	QJsonObject result;
	result["Codec"] = toJsonValue<QString>(m_codec);
	result["CodecTag"] = toJsonValue<QString>(m_codecTag);
	result["Comment"] = toJsonValue<QString>(m_comment);
	result["Index"] = toJsonValue<qint32>(m_index);
	result["FileName"] = toJsonValue<QString>(m_fileName);
	result["MimeType"] = toJsonValue<QString>(m_mimeType);
	result["DeliveryUrl"] = toJsonValue<QString>(m_deliveryUrl);

	return result;
}

QString MediaAttachment::codec() const { return m_codec; }

void MediaAttachment::setCodec(QString newCodec) {
	m_codec = newCodec;
}
QString MediaAttachment::codecTag() const { return m_codecTag; }

void MediaAttachment::setCodecTag(QString newCodecTag) {
	m_codecTag = newCodecTag;
}
QString MediaAttachment::comment() const { return m_comment; }

void MediaAttachment::setComment(QString newComment) {
	m_comment = newComment;
}
qint32 MediaAttachment::index() const { return m_index; }

void MediaAttachment::setIndex(qint32 newIndex) {
	m_index = newIndex;
}
QString MediaAttachment::fileName() const { return m_fileName; }

void MediaAttachment::setFileName(QString newFileName) {
	m_fileName = newFileName;
}
QString MediaAttachment::mimeType() const { return m_mimeType; }

void MediaAttachment::setMimeType(QString newMimeType) {
	m_mimeType = newMimeType;
}
QString MediaAttachment::deliveryUrl() const { return m_deliveryUrl; }

void MediaAttachment::setDeliveryUrl(QString newDeliveryUrl) {
	m_deliveryUrl = newDeliveryUrl;
}


} // NS Jellyfin
} // NS DTO

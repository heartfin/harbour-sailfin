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

MediaAttachment::MediaAttachment(QObject *parent) : QObject(parent) {}

MediaAttachment *MediaAttachment::fromJSON(QJsonObject source, QObject *parent) {
	MediaAttachment *instance = new MediaAttachment(parent);
	instance->updateFromJSON(source);
	return instance;
}

void MediaAttachment::updateFromJSON(QJsonObject source) {
	Q_UNIMPLEMENTED();
}
QJsonObject MediaAttachment::toJSON() {
	Q_UNIMPLEMENTED();
	QJsonObject result;
	return result;
}
QString MediaAttachment::codec() const { return m_codec; }
void MediaAttachment::setCodec(QString newCodec) {
	m_codec = newCodec;
	emit codecChanged(newCodec);
}

QString MediaAttachment::codecTag() const { return m_codecTag; }
void MediaAttachment::setCodecTag(QString newCodecTag) {
	m_codecTag = newCodecTag;
	emit codecTagChanged(newCodecTag);
}

QString MediaAttachment::comment() const { return m_comment; }
void MediaAttachment::setComment(QString newComment) {
	m_comment = newComment;
	emit commentChanged(newComment);
}

qint32 MediaAttachment::index() const { return m_index; }
void MediaAttachment::setIndex(qint32 newIndex) {
	m_index = newIndex;
	emit indexChanged(newIndex);
}

QString MediaAttachment::fileName() const { return m_fileName; }
void MediaAttachment::setFileName(QString newFileName) {
	m_fileName = newFileName;
	emit fileNameChanged(newFileName);
}

QString MediaAttachment::mimeType() const { return m_mimeType; }
void MediaAttachment::setMimeType(QString newMimeType) {
	m_mimeType = newMimeType;
	emit mimeTypeChanged(newMimeType);
}

QString MediaAttachment::deliveryUrl() const { return m_deliveryUrl; }
void MediaAttachment::setDeliveryUrl(QString newDeliveryUrl) {
	m_deliveryUrl = newDeliveryUrl;
	emit deliveryUrlChanged(newDeliveryUrl);
}


} // NS Jellyfin
} // NS DTO

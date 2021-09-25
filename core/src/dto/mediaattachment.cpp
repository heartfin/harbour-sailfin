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

#include <JellyfinQt/dto/mediaattachment.h>

namespace Jellyfin {
namespace DTO {

MediaAttachment::MediaAttachment() {}
MediaAttachment::MediaAttachment (
		qint32 index 
		) :
	m_index(index) { }



MediaAttachment::MediaAttachment(const MediaAttachment &other) :

	m_codec(other.m_codec),
	m_codecTag(other.m_codecTag),
	m_comment(other.m_comment),
	m_index(other.m_index),
	m_fileName(other.m_fileName),
	m_mimeType(other.m_mimeType),
	m_deliveryUrl(other.m_deliveryUrl){}


void MediaAttachment::replaceData(MediaAttachment &other) {
	m_codec = other.m_codec;
	m_codecTag = other.m_codecTag;
	m_comment = other.m_comment;
	m_index = other.m_index;
	m_fileName = other.m_fileName;
	m_mimeType = other.m_mimeType;
	m_deliveryUrl = other.m_deliveryUrl;
}

MediaAttachment MediaAttachment::fromJson(QJsonObject source) {
	MediaAttachment instance;
	instance.setFromJson(source);
	return instance;
}


void MediaAttachment::setFromJson(QJsonObject source) {
	m_codec = Jellyfin::Support::fromJsonValue<QString>(source["Codec"]);
	m_codecTag = Jellyfin::Support::fromJsonValue<QString>(source["CodecTag"]);
	m_comment = Jellyfin::Support::fromJsonValue<QString>(source["Comment"]);
	m_index = Jellyfin::Support::fromJsonValue<qint32>(source["Index"]);
	m_fileName = Jellyfin::Support::fromJsonValue<QString>(source["FileName"]);
	m_mimeType = Jellyfin::Support::fromJsonValue<QString>(source["MimeType"]);
	m_deliveryUrl = Jellyfin::Support::fromJsonValue<QString>(source["DeliveryUrl"]);

}
	
QJsonObject MediaAttachment::toJson() const {
	QJsonObject result;
	
	
	if (!(m_codec.isNull())) {
		result["Codec"] = Jellyfin::Support::toJsonValue<QString>(m_codec);
	}
			
	
	if (!(m_codecTag.isNull())) {
		result["CodecTag"] = Jellyfin::Support::toJsonValue<QString>(m_codecTag);
	}
			
	
	if (!(m_comment.isNull())) {
		result["Comment"] = Jellyfin::Support::toJsonValue<QString>(m_comment);
	}
			
	result["Index"] = Jellyfin::Support::toJsonValue<qint32>(m_index);		
	
	if (!(m_fileName.isNull())) {
		result["FileName"] = Jellyfin::Support::toJsonValue<QString>(m_fileName);
	}
			
	
	if (!(m_mimeType.isNull())) {
		result["MimeType"] = Jellyfin::Support::toJsonValue<QString>(m_mimeType);
	}
			
	
	if (!(m_deliveryUrl.isNull())) {
		result["DeliveryUrl"] = Jellyfin::Support::toJsonValue<QString>(m_deliveryUrl);
	}
		
	return result;
}

QString MediaAttachment::codec() const { return m_codec; }

void MediaAttachment::setCodec(QString newCodec) {
	m_codec = newCodec;
}
bool MediaAttachment::codecNull() const {
	return m_codec.isNull();
}

void MediaAttachment::setCodecNull() {
	m_codec.clear();

}
QString MediaAttachment::codecTag() const { return m_codecTag; }

void MediaAttachment::setCodecTag(QString newCodecTag) {
	m_codecTag = newCodecTag;
}
bool MediaAttachment::codecTagNull() const {
	return m_codecTag.isNull();
}

void MediaAttachment::setCodecTagNull() {
	m_codecTag.clear();

}
QString MediaAttachment::comment() const { return m_comment; }

void MediaAttachment::setComment(QString newComment) {
	m_comment = newComment;
}
bool MediaAttachment::commentNull() const {
	return m_comment.isNull();
}

void MediaAttachment::setCommentNull() {
	m_comment.clear();

}
qint32 MediaAttachment::index() const { return m_index; }

void MediaAttachment::setIndex(qint32 newIndex) {
	m_index = newIndex;
}

QString MediaAttachment::fileName() const { return m_fileName; }

void MediaAttachment::setFileName(QString newFileName) {
	m_fileName = newFileName;
}
bool MediaAttachment::fileNameNull() const {
	return m_fileName.isNull();
}

void MediaAttachment::setFileNameNull() {
	m_fileName.clear();

}
QString MediaAttachment::mimeType() const { return m_mimeType; }

void MediaAttachment::setMimeType(QString newMimeType) {
	m_mimeType = newMimeType;
}
bool MediaAttachment::mimeTypeNull() const {
	return m_mimeType.isNull();
}

void MediaAttachment::setMimeTypeNull() {
	m_mimeType.clear();

}
QString MediaAttachment::deliveryUrl() const { return m_deliveryUrl; }

void MediaAttachment::setDeliveryUrl(QString newDeliveryUrl) {
	m_deliveryUrl = newDeliveryUrl;
}
bool MediaAttachment::deliveryUrlNull() const {
	return m_deliveryUrl.isNull();
}

void MediaAttachment::setDeliveryUrlNull() {
	m_deliveryUrl.clear();

}

} // NS DTO

namespace Support {

using MediaAttachment = Jellyfin::DTO::MediaAttachment;

template <>
MediaAttachment fromJsonValue(const QJsonValue &source, convertType<MediaAttachment>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return MediaAttachment::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const MediaAttachment &source, convertType<MediaAttachment>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

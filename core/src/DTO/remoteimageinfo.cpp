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

#include <JellyfinQt/DTO/remoteimageinfo.h>

namespace Jellyfin {
namespace DTO {

RemoteImageInfo::RemoteImageInfo(QObject *parent) {}

RemoteImageInfo RemoteImageInfo::fromJson(QJsonObject source) {RemoteImageInfo instance;
	instance->setFromJson(source, false);
	return instance;
}


void RemoteImageInfo::setFromJson(QJsonObject source) {
	m_providerName = fromJsonValue<QString>(source["ProviderName"]);
	m_url = fromJsonValue<QString>(source["Url"]);
	m_thumbnailUrl = fromJsonValue<QString>(source["ThumbnailUrl"]);
	m_height = fromJsonValue<qint32>(source["Height"]);
	m_width = fromJsonValue<qint32>(source["Width"]);
	m_communityRating = fromJsonValue<double>(source["CommunityRating"]);
	m_voteCount = fromJsonValue<qint32>(source["VoteCount"]);
	m_language = fromJsonValue<QString>(source["Language"]);
	m_type = fromJsonValue<ImageType>(source["Type"]);
	m_ratingType = fromJsonValue<RatingType>(source["RatingType"]);

}
	
QJsonObject RemoteImageInfo::toJson() {
	QJsonObject result;
	result["ProviderName"] = toJsonValue<QString>(m_providerName);
	result["Url"] = toJsonValue<QString>(m_url);
	result["ThumbnailUrl"] = toJsonValue<QString>(m_thumbnailUrl);
	result["Height"] = toJsonValue<qint32>(m_height);
	result["Width"] = toJsonValue<qint32>(m_width);
	result["CommunityRating"] = toJsonValue<double>(m_communityRating);
	result["VoteCount"] = toJsonValue<qint32>(m_voteCount);
	result["Language"] = toJsonValue<QString>(m_language);
	result["Type"] = toJsonValue<ImageType>(m_type);
	result["RatingType"] = toJsonValue<RatingType>(m_ratingType);

	return result;
}

QString RemoteImageInfo::providerName() const { return m_providerName; }

void RemoteImageInfo::setProviderName(QString newProviderName) {
	m_providerName = newProviderName;
}
QString RemoteImageInfo::url() const { return m_url; }

void RemoteImageInfo::setUrl(QString newUrl) {
	m_url = newUrl;
}
QString RemoteImageInfo::thumbnailUrl() const { return m_thumbnailUrl; }

void RemoteImageInfo::setThumbnailUrl(QString newThumbnailUrl) {
	m_thumbnailUrl = newThumbnailUrl;
}
qint32 RemoteImageInfo::height() const { return m_height; }

void RemoteImageInfo::setHeight(qint32 newHeight) {
	m_height = newHeight;
}
qint32 RemoteImageInfo::width() const { return m_width; }

void RemoteImageInfo::setWidth(qint32 newWidth) {
	m_width = newWidth;
}
double RemoteImageInfo::communityRating() const { return m_communityRating; }

void RemoteImageInfo::setCommunityRating(double newCommunityRating) {
	m_communityRating = newCommunityRating;
}
qint32 RemoteImageInfo::voteCount() const { return m_voteCount; }

void RemoteImageInfo::setVoteCount(qint32 newVoteCount) {
	m_voteCount = newVoteCount;
}
QString RemoteImageInfo::language() const { return m_language; }

void RemoteImageInfo::setLanguage(QString newLanguage) {
	m_language = newLanguage;
}
ImageType RemoteImageInfo::type() const { return m_type; }

void RemoteImageInfo::setType(ImageType newType) {
	m_type = newType;
}
RatingType RemoteImageInfo::ratingType() const { return m_ratingType; }

void RemoteImageInfo::setRatingType(RatingType newRatingType) {
	m_ratingType = newRatingType;
}


} // NS Jellyfin
} // NS DTO

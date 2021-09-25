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

#include <JellyfinQt/dto/remoteimageinfo.h>

namespace Jellyfin {
namespace DTO {

RemoteImageInfo::RemoteImageInfo() {}
RemoteImageInfo::RemoteImageInfo (
		ImageType type, 
		RatingType ratingType 
		) :
	m_type(type),
	m_ratingType(ratingType) { }



RemoteImageInfo::RemoteImageInfo(const RemoteImageInfo &other) :

	m_providerName(other.m_providerName),
	m_url(other.m_url),
	m_thumbnailUrl(other.m_thumbnailUrl),
	m_height(other.m_height),
	m_width(other.m_width),
	m_communityRating(other.m_communityRating),
	m_voteCount(other.m_voteCount),
	m_language(other.m_language),
	m_type(other.m_type),
	m_ratingType(other.m_ratingType){}


void RemoteImageInfo::replaceData(RemoteImageInfo &other) {
	m_providerName = other.m_providerName;
	m_url = other.m_url;
	m_thumbnailUrl = other.m_thumbnailUrl;
	m_height = other.m_height;
	m_width = other.m_width;
	m_communityRating = other.m_communityRating;
	m_voteCount = other.m_voteCount;
	m_language = other.m_language;
	m_type = other.m_type;
	m_ratingType = other.m_ratingType;
}

RemoteImageInfo RemoteImageInfo::fromJson(QJsonObject source) {
	RemoteImageInfo instance;
	instance.setFromJson(source);
	return instance;
}


void RemoteImageInfo::setFromJson(QJsonObject source) {
	m_providerName = Jellyfin::Support::fromJsonValue<QString>(source["ProviderName"]);
	m_url = Jellyfin::Support::fromJsonValue<QString>(source["Url"]);
	m_thumbnailUrl = Jellyfin::Support::fromJsonValue<QString>(source["ThumbnailUrl"]);
	m_height = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Height"]);
	m_width = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["Width"]);
	m_communityRating = Jellyfin::Support::fromJsonValue<std::optional<double>>(source["CommunityRating"]);
	m_voteCount = Jellyfin::Support::fromJsonValue<std::optional<qint32>>(source["VoteCount"]);
	m_language = Jellyfin::Support::fromJsonValue<QString>(source["Language"]);
	m_type = Jellyfin::Support::fromJsonValue<ImageType>(source["Type"]);
	m_ratingType = Jellyfin::Support::fromJsonValue<RatingType>(source["RatingType"]);

}
	
QJsonObject RemoteImageInfo::toJson() const {
	QJsonObject result;
	
	
	if (!(m_providerName.isNull())) {
		result["ProviderName"] = Jellyfin::Support::toJsonValue<QString>(m_providerName);
	}
			
	
	if (!(m_url.isNull())) {
		result["Url"] = Jellyfin::Support::toJsonValue<QString>(m_url);
	}
			
	
	if (!(m_thumbnailUrl.isNull())) {
		result["ThumbnailUrl"] = Jellyfin::Support::toJsonValue<QString>(m_thumbnailUrl);
	}
			
	
	if (!(!m_height.has_value())) {
		result["Height"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_height);
	}
			
	
	if (!(!m_width.has_value())) {
		result["Width"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_width);
	}
			
	
	if (!(!m_communityRating.has_value())) {
		result["CommunityRating"] = Jellyfin::Support::toJsonValue<std::optional<double>>(m_communityRating);
	}
			
	
	if (!(!m_voteCount.has_value())) {
		result["VoteCount"] = Jellyfin::Support::toJsonValue<std::optional<qint32>>(m_voteCount);
	}
			
	
	if (!(m_language.isNull())) {
		result["Language"] = Jellyfin::Support::toJsonValue<QString>(m_language);
	}
			
	result["Type"] = Jellyfin::Support::toJsonValue<ImageType>(m_type);		
	result["RatingType"] = Jellyfin::Support::toJsonValue<RatingType>(m_ratingType);	
	return result;
}

QString RemoteImageInfo::providerName() const { return m_providerName; }

void RemoteImageInfo::setProviderName(QString newProviderName) {
	m_providerName = newProviderName;
}
bool RemoteImageInfo::providerNameNull() const {
	return m_providerName.isNull();
}

void RemoteImageInfo::setProviderNameNull() {
	m_providerName.clear();

}
QString RemoteImageInfo::url() const { return m_url; }

void RemoteImageInfo::setUrl(QString newUrl) {
	m_url = newUrl;
}
bool RemoteImageInfo::urlNull() const {
	return m_url.isNull();
}

void RemoteImageInfo::setUrlNull() {
	m_url.clear();

}
QString RemoteImageInfo::thumbnailUrl() const { return m_thumbnailUrl; }

void RemoteImageInfo::setThumbnailUrl(QString newThumbnailUrl) {
	m_thumbnailUrl = newThumbnailUrl;
}
bool RemoteImageInfo::thumbnailUrlNull() const {
	return m_thumbnailUrl.isNull();
}

void RemoteImageInfo::setThumbnailUrlNull() {
	m_thumbnailUrl.clear();

}
std::optional<qint32> RemoteImageInfo::height() const { return m_height; }

void RemoteImageInfo::setHeight(std::optional<qint32> newHeight) {
	m_height = newHeight;
}
bool RemoteImageInfo::heightNull() const {
	return !m_height.has_value();
}

void RemoteImageInfo::setHeightNull() {
	m_height = std::nullopt;

}
std::optional<qint32> RemoteImageInfo::width() const { return m_width; }

void RemoteImageInfo::setWidth(std::optional<qint32> newWidth) {
	m_width = newWidth;
}
bool RemoteImageInfo::widthNull() const {
	return !m_width.has_value();
}

void RemoteImageInfo::setWidthNull() {
	m_width = std::nullopt;

}
std::optional<double> RemoteImageInfo::communityRating() const { return m_communityRating; }

void RemoteImageInfo::setCommunityRating(std::optional<double> newCommunityRating) {
	m_communityRating = newCommunityRating;
}
bool RemoteImageInfo::communityRatingNull() const {
	return !m_communityRating.has_value();
}

void RemoteImageInfo::setCommunityRatingNull() {
	m_communityRating = std::nullopt;

}
std::optional<qint32> RemoteImageInfo::voteCount() const { return m_voteCount; }

void RemoteImageInfo::setVoteCount(std::optional<qint32> newVoteCount) {
	m_voteCount = newVoteCount;
}
bool RemoteImageInfo::voteCountNull() const {
	return !m_voteCount.has_value();
}

void RemoteImageInfo::setVoteCountNull() {
	m_voteCount = std::nullopt;

}
QString RemoteImageInfo::language() const { return m_language; }

void RemoteImageInfo::setLanguage(QString newLanguage) {
	m_language = newLanguage;
}
bool RemoteImageInfo::languageNull() const {
	return m_language.isNull();
}

void RemoteImageInfo::setLanguageNull() {
	m_language.clear();

}
ImageType RemoteImageInfo::type() const { return m_type; }

void RemoteImageInfo::setType(ImageType newType) {
	m_type = newType;
}

RatingType RemoteImageInfo::ratingType() const { return m_ratingType; }

void RemoteImageInfo::setRatingType(RatingType newRatingType) {
	m_ratingType = newRatingType;
}


} // NS DTO

namespace Support {

using RemoteImageInfo = Jellyfin::DTO::RemoteImageInfo;

template <>
RemoteImageInfo fromJsonValue(const QJsonValue &source, convertType<RemoteImageInfo>) {
	if (!source.isObject()) throw ParseException("Expected JSON Object");
	return RemoteImageInfo::fromJson(source.toObject());
}

template<>
QJsonValue toJsonValue(const RemoteImageInfo &source, convertType<RemoteImageInfo>) {
	return source.toJson();
}

} // NS DTO
} // NS Jellyfin

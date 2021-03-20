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

#ifndef JELLYFIN_DTO_REMOTEIMAGEINFO_H
#define JELLYFIN_DTO_REMOTEIMAGEINFO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <optional>

#include "JellyfinQt/DTO/imagetype.h"
#include "JellyfinQt/DTO/ratingtype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class RemoteImageInfo {
public:
	explicit RemoteImageInfo();
	static RemoteImageInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets the name of the provider.
	 */
	QString providerName() const;
	/**
	* @brief Gets or sets the name of the provider.
	*/
	void setProviderName(QString newProviderName);
	/**
	 * @brief Gets or sets the URL.
	 */
	QString url() const;
	/**
	* @brief Gets or sets the URL.
	*/
	void setUrl(QString newUrl);
	/**
	 * @brief Gets a url used for previewing a smaller version.
	 */
	QString thumbnailUrl() const;
	/**
	* @brief Gets a url used for previewing a smaller version.
	*/
	void setThumbnailUrl(QString newThumbnailUrl);
	/**
	 * @brief Gets or sets the height.
	 */
	qint32 height() const;
	/**
	* @brief Gets or sets the height.
	*/
	void setHeight(qint32 newHeight);
	/**
	 * @brief Gets or sets the width.
	 */
	qint32 width() const;
	/**
	* @brief Gets or sets the width.
	*/
	void setWidth(qint32 newWidth);
	/**
	 * @brief Gets or sets the community rating.
	 */
	double communityRating() const;
	/**
	* @brief Gets or sets the community rating.
	*/
	void setCommunityRating(double newCommunityRating);
	/**
	 * @brief Gets or sets the vote count.
	 */
	qint32 voteCount() const;
	/**
	* @brief Gets or sets the vote count.
	*/
	void setVoteCount(qint32 newVoteCount);
	/**
	 * @brief Gets or sets the language.
	 */
	QString language() const;
	/**
	* @brief Gets or sets the language.
	*/
	void setLanguage(QString newLanguage);

	ImageType type() const;

	void setType(ImageType newType);

	RatingType ratingType() const;

	void setRatingType(RatingType newRatingType);

protected:
	QString m_providerName;
	QString m_url;
	QString m_thumbnailUrl;
	qint32 m_height;
	qint32 m_width;
	double m_communityRating;
	qint32 m_voteCount;
	QString m_language;
	ImageType m_type;
	RatingType m_ratingType;
};

} // NS DTO

namespace Support {

using RemoteImageInfo = Jellyfin::DTO::RemoteImageInfo;

template <>
RemoteImageInfo fromJsonValue<RemoteImageInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return RemoteImageInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_REMOTEIMAGEINFO_H

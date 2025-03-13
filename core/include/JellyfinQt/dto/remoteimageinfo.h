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

#include "JellyfinQt/dto/imagetype.h"
#include "JellyfinQt/dto/ratingtype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class RemoteImageInfo {
public:
	RemoteImageInfo(																	
		ImageType type,			
		RatingType ratingType		
	);

	RemoteImageInfo(const RemoteImageInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(RemoteImageInfo &other);
	
	static RemoteImageInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties
	/**
	 * @brief Gets or sets the name of the provider.
	 */
	QString providerName() const;
	/**
	* @brief Gets or sets the name of the provider.
	*/
	void setProviderName(QString newProviderName);
	bool providerNameNull() const;
	void setProviderNameNull();

	/**
	 * @brief Gets or sets the URL.
	 */
	QString url() const;
	/**
	* @brief Gets or sets the URL.
	*/
	void setUrl(QString newUrl);
	bool urlNull() const;
	void setUrlNull();

	/**
	 * @brief Gets or sets a url used for previewing a smaller version.
	 */
	QString thumbnailUrl() const;
	/**
	* @brief Gets or sets a url used for previewing a smaller version.
	*/
	void setThumbnailUrl(QString newThumbnailUrl);
	bool thumbnailUrlNull() const;
	void setThumbnailUrlNull();

	/**
	 * @brief Gets or sets the height.
	 */
	std::optional<qint32> height() const;
	/**
	* @brief Gets or sets the height.
	*/
	void setHeight(std::optional<qint32> newHeight);
	bool heightNull() const;
	void setHeightNull();

	/**
	 * @brief Gets or sets the width.
	 */
	std::optional<qint32> width() const;
	/**
	* @brief Gets or sets the width.
	*/
	void setWidth(std::optional<qint32> newWidth);
	bool widthNull() const;
	void setWidthNull();

	/**
	 * @brief Gets or sets the community rating.
	 */
	std::optional<double> communityRating() const;
	/**
	* @brief Gets or sets the community rating.
	*/
	void setCommunityRating(std::optional<double> newCommunityRating);
	bool communityRatingNull() const;
	void setCommunityRatingNull();

	/**
	 * @brief Gets or sets the vote count.
	 */
	std::optional<qint32> voteCount() const;
	/**
	* @brief Gets or sets the vote count.
	*/
	void setVoteCount(std::optional<qint32> newVoteCount);
	bool voteCountNull() const;
	void setVoteCountNull();

	/**
	 * @brief Gets or sets the language.
	 */
	QString language() const;
	/**
	* @brief Gets or sets the language.
	*/
	void setLanguage(QString newLanguage);
	bool languageNull() const;
	void setLanguageNull();


	ImageType type() const;

	void setType(ImageType newType);


	RatingType ratingType() const;

	void setRatingType(RatingType newRatingType);


protected:
	QString m_providerName;
	QString m_url;
	QString m_thumbnailUrl;
	std::optional<qint32> m_height = std::nullopt;
	std::optional<qint32> m_width = std::nullopt;
	std::optional<double> m_communityRating = std::nullopt;
	std::optional<qint32> m_voteCount = std::nullopt;
	QString m_language;
	ImageType m_type;
	RatingType m_ratingType;

private:
	// Private constructor which generates an invalid object, for use withing RemoteImageInfo::fromJson();
	RemoteImageInfo();
};


} // NS DTO

namespace Support {

using RemoteImageInfo = Jellyfin::DTO::RemoteImageInfo;

template <>
RemoteImageInfo fromJsonValue(const QJsonValue &source, convertType<RemoteImageInfo>);

template<>
QJsonValue toJsonValue(const RemoteImageInfo &source, convertType<RemoteImageInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_REMOTEIMAGEINFO_H

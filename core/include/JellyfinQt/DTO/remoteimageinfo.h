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
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/imagetype.h"
#include "JellyfinQt/DTO/ratingtype.h"

namespace Jellyfin {
namespace DTO {

class RemoteImageInfo : public QObject {
	Q_OBJECT
public:
	explicit RemoteImageInfo(QObject *parent = nullptr);
	static RemoteImageInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the name of the provider.
	 */
	Q_PROPERTY(QString providerName READ providerName WRITE setProviderName NOTIFY providerNameChanged)
	/**
	 * @brief Gets or sets the URL.
	 */
	Q_PROPERTY(QString url READ url WRITE setUrl NOTIFY urlChanged)
	/**
	 * @brief Gets a url used for previewing a smaller version.
	 */
	Q_PROPERTY(QString thumbnailUrl READ thumbnailUrl WRITE setThumbnailUrl NOTIFY thumbnailUrlChanged)
	/**
	 * @brief Gets or sets the height.
	 */
	Q_PROPERTY(qint32 height READ height WRITE setHeight NOTIFY heightChanged)
	/**
	 * @brief Gets or sets the width.
	 */
	Q_PROPERTY(qint32 width READ width WRITE setWidth NOTIFY widthChanged)
	/**
	 * @brief Gets or sets the community rating.
	 */
	Q_PROPERTY(double communityRating READ communityRating WRITE setCommunityRating NOTIFY communityRatingChanged)
	/**
	 * @brief Gets or sets the vote count.
	 */
	Q_PROPERTY(qint32 voteCount READ voteCount WRITE setVoteCount NOTIFY voteCountChanged)
	/**
	 * @brief Gets or sets the language.
	 */
	Q_PROPERTY(QString language READ language WRITE setLanguage NOTIFY languageChanged)
	Q_PROPERTY(ImageType type READ type WRITE setType NOTIFY typeChanged)
	Q_PROPERTY(RatingType ratingType READ ratingType WRITE setRatingType NOTIFY ratingTypeChanged)

	QString providerName() const;
	void setProviderName(QString newProviderName);
	
	QString url() const;
	void setUrl(QString newUrl);
	
	QString thumbnailUrl() const;
	void setThumbnailUrl(QString newThumbnailUrl);
	
	qint32 height() const;
	void setHeight(qint32 newHeight);
	
	qint32 width() const;
	void setWidth(qint32 newWidth);
	
	double communityRating() const;
	void setCommunityRating(double newCommunityRating);
	
	qint32 voteCount() const;
	void setVoteCount(qint32 newVoteCount);
	
	QString language() const;
	void setLanguage(QString newLanguage);
	
	ImageType type() const;
	void setType(ImageType newType);
	
	RatingType ratingType() const;
	void setRatingType(RatingType newRatingType);
	
signals:
	void providerNameChanged(QString newProviderName);
	void urlChanged(QString newUrl);
	void thumbnailUrlChanged(QString newThumbnailUrl);
	void heightChanged(qint32 newHeight);
	void widthChanged(qint32 newWidth);
	void communityRatingChanged(double newCommunityRating);
	void voteCountChanged(qint32 newVoteCount);
	void languageChanged(QString newLanguage);
	void typeChanged(ImageType newType);
	void ratingTypeChanged(RatingType newRatingType);
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

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_REMOTEIMAGEINFO_H

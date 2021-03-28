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

#ifndef JELLYFIN_DTO_REMOTESUBTITLEINFO_H
#define JELLYFIN_DTO_REMOTESUBTITLEINFO_H

#include <QDateTime>
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


class RemoteSubtitleInfo {
public:
	RemoteSubtitleInfo();
	RemoteSubtitleInfo(const RemoteSubtitleInfo &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(RemoteSubtitleInfo &other);
	
	static RemoteSubtitleInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QString threeLetterISOLanguageName() const;

	void setThreeLetterISOLanguageName(QString newThreeLetterISOLanguageName);
	bool threeLetterISOLanguageNameNull() const;
	void setThreeLetterISOLanguageNameNull();


	QString jellyfinId() const;

	void setJellyfinId(QString newJellyfinId);
	bool jellyfinIdNull() const;
	void setJellyfinIdNull();


	QString providerName() const;

	void setProviderName(QString newProviderName);
	bool providerNameNull() const;
	void setProviderNameNull();


	QString name() const;

	void setName(QString newName);
	bool nameNull() const;
	void setNameNull();


	QString format() const;

	void setFormat(QString newFormat);
	bool formatNull() const;
	void setFormatNull();


	QString author() const;

	void setAuthor(QString newAuthor);
	bool authorNull() const;
	void setAuthorNull();


	QString comment() const;

	void setComment(QString newComment);
	bool commentNull() const;
	void setCommentNull();


	QDateTime dateCreated() const;

	void setDateCreated(QDateTime newDateCreated);
	bool dateCreatedNull() const;
	void setDateCreatedNull();


	std::optional<float> communityRating() const;

	void setCommunityRating(std::optional<float> newCommunityRating);
	bool communityRatingNull() const;
	void setCommunityRatingNull();


	std::optional<qint32> downloadCount() const;

	void setDownloadCount(std::optional<qint32> newDownloadCount);
	bool downloadCountNull() const;
	void setDownloadCountNull();


	std::optional<bool> isHashMatch() const;

	void setIsHashMatch(std::optional<bool> newIsHashMatch);
	bool isHashMatchNull() const;
	void setIsHashMatchNull();


protected:
	QString m_threeLetterISOLanguageName;
	QString m_jellyfinId;
	QString m_providerName;
	QString m_name;
	QString m_format;
	QString m_author;
	QString m_comment;
	QDateTime m_dateCreated;
	std::optional<float> m_communityRating = std::nullopt;
	std::optional<qint32> m_downloadCount = std::nullopt;
	std::optional<bool> m_isHashMatch = std::nullopt;
};

} // NS DTO

namespace Support {

using RemoteSubtitleInfo = Jellyfin::DTO::RemoteSubtitleInfo;

template <>
RemoteSubtitleInfo fromJsonValue(const QJsonValue &source, convertType<RemoteSubtitleInfo>);

template<>
QJsonValue toJsonValue(const RemoteSubtitleInfo &source, convertType<RemoteSubtitleInfo>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_REMOTESUBTITLEINFO_H

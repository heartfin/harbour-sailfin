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
namespace DTO {


class RemoteSubtitleInfo {
public:
	explicit RemoteSubtitleInfo();
	static RemoteSubtitleInfo fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	QString threeLetterISOLanguageName() const;

	void setThreeLetterISOLanguageName(QString newThreeLetterISOLanguageName);

	QString jellyfinId() const;

	void setJellyfinId(QString newJellyfinId);

	QString providerName() const;

	void setProviderName(QString newProviderName);

	QString name() const;

	void setName(QString newName);

	QString format() const;

	void setFormat(QString newFormat);

	QString author() const;

	void setAuthor(QString newAuthor);

	QString comment() const;

	void setComment(QString newComment);

	QDateTime dateCreated() const;

	void setDateCreated(QDateTime newDateCreated);

	float communityRating() const;

	void setCommunityRating(float newCommunityRating);

	qint32 downloadCount() const;

	void setDownloadCount(qint32 newDownloadCount);

	bool isHashMatch() const;

	void setIsHashMatch(bool newIsHashMatch);

protected:
	QString m_threeLetterISOLanguageName;
	QString m_jellyfinId;
	QString m_providerName;
	QString m_name;
	QString m_format;
	QString m_author;
	QString m_comment;
	QDateTime m_dateCreated;
	float m_communityRating;
	qint32 m_downloadCount;
	bool m_isHashMatch;
};

} // NS DTO

namespace Support {

using RemoteSubtitleInfo = Jellyfin::DTO::RemoteSubtitleInfo;

template <>
RemoteSubtitleInfo fromJsonValue<RemoteSubtitleInfo>(const QJsonValue &source) {
	if (!source.isObject()) throw new ParseException("Expected JSON Object");
	return RemoteSubtitleInfo::fromJson(source.toObject());
}

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_REMOTESUBTITLEINFO_H

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
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class RemoteSubtitleInfo : public QObject {
	Q_OBJECT
public:
	explicit RemoteSubtitleInfo(QObject *parent = nullptr);
	static RemoteSubtitleInfo *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(QString threeLetterISOLanguageName READ threeLetterISOLanguageName WRITE setThreeLetterISOLanguageName NOTIFY threeLetterISOLanguageNameChanged)
	Q_PROPERTY(QString jellyfinId READ jellyfinId WRITE setJellyfinId NOTIFY jellyfinIdChanged)
	Q_PROPERTY(QString providerName READ providerName WRITE setProviderName NOTIFY providerNameChanged)
	Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
	Q_PROPERTY(QString format READ format WRITE setFormat NOTIFY formatChanged)
	Q_PROPERTY(QString author READ author WRITE setAuthor NOTIFY authorChanged)
	Q_PROPERTY(QString comment READ comment WRITE setComment NOTIFY commentChanged)
	Q_PROPERTY(QDateTime dateCreated READ dateCreated WRITE setDateCreated NOTIFY dateCreatedChanged)
	Q_PROPERTY(float communityRating READ communityRating WRITE setCommunityRating NOTIFY communityRatingChanged)
	Q_PROPERTY(qint32 downloadCount READ downloadCount WRITE setDownloadCount NOTIFY downloadCountChanged)
	Q_PROPERTY(bool isHashMatch READ isHashMatch WRITE setIsHashMatch NOTIFY isHashMatchChanged)

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
	
signals:
	void threeLetterISOLanguageNameChanged(QString newThreeLetterISOLanguageName);
	void jellyfinIdChanged(QString newJellyfinId);
	void providerNameChanged(QString newProviderName);
	void nameChanged(QString newName);
	void formatChanged(QString newFormat);
	void authorChanged(QString newAuthor);
	void commentChanged(QString newComment);
	void dateCreatedChanged(QDateTime newDateCreated);
	void communityRatingChanged(float newCommunityRating);
	void downloadCountChanged(qint32 newDownloadCount);
	void isHashMatchChanged(bool newIsHashMatch);
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

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_REMOTESUBTITLEINFO_H

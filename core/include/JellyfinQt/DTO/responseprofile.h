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

#ifndef JELLYFIN_DTO_RESPONSEPROFILE_H
#define JELLYFIN_DTO_RESPONSEPROFILE_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/dlnaprofiletype.h"
#include "JellyfinQt/DTO/profilecondition.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class ResponseProfile {
public:ResponseProfile();ResponseProfile(const ResponseProfile &other);
	
	static ResponseProfile fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties

	QString container() const;

	void setContainer(QString newContainer);

	QString audioCodec() const;

	void setAudioCodec(QString newAudioCodec);

	QString videoCodec() const;

	void setVideoCodec(QString newVideoCodec);

	DlnaProfileType type() const;

	void setType(DlnaProfileType newType);

	QString orgPn() const;

	void setOrgPn(QString newOrgPn);

	QString mimeType() const;

	void setMimeType(QString newMimeType);

	QList<QSharedPointer<ProfileCondition>> conditions() const;

	void setConditions(QList<QSharedPointer<ProfileCondition>> newConditions);

protected:
	QString m_container;
	QString m_audioCodec;
	QString m_videoCodec;
	DlnaProfileType m_type;
	QString m_orgPn;
	QString m_mimeType;
	QList<QSharedPointer<ProfileCondition>> m_conditions;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_RESPONSEPROFILE_H

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

#ifndef JELLYFIN_DTO_CODECPROFILE_H
#define JELLYFIN_DTO_CODECPROFILE_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/dto/codectype.h"
#include "JellyfinQt/dto/profilecondition.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class CodecProfile {
public:
	CodecProfile(	
		CodecType type										
	);

	CodecProfile(const CodecProfile &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(CodecProfile &other);
	
	static CodecProfile fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	CodecType type() const;

	void setType(CodecType newType);


	QList<ProfileCondition> conditions() const;

	void setConditions(QList<ProfileCondition> newConditions);
	bool conditionsNull() const;
	void setConditionsNull();


	QList<ProfileCondition> applyConditions() const;

	void setApplyConditions(QList<ProfileCondition> newApplyConditions);
	bool applyConditionsNull() const;
	void setApplyConditionsNull();


	QString codec() const;

	void setCodec(QString newCodec);
	bool codecNull() const;
	void setCodecNull();


	QString container() const;

	void setContainer(QString newContainer);
	bool containerNull() const;
	void setContainerNull();


protected:
	CodecType m_type;
	QList<ProfileCondition> m_conditions;
	QList<ProfileCondition> m_applyConditions;
	QString m_codec;
	QString m_container;

private:
	// Private constructor which generates an invalid object, for use withing CodecProfile::fromJson();
	CodecProfile();
};


} // NS DTO

namespace Support {

using CodecProfile = Jellyfin::DTO::CodecProfile;

template <>
CodecProfile fromJsonValue(const QJsonValue &source, convertType<CodecProfile>);

template<>
QJsonValue toJsonValue(const CodecProfile &source, convertType<CodecProfile>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_CODECPROFILE_H

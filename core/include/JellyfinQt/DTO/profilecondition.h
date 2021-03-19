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

#ifndef JELLYFIN_DTO_PROFILECONDITION_H
#define JELLYFIN_DTO_PROFILECONDITION_H

#include <QJsonObject>
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/profileconditiontype.h"
#include "JellyfinQt/DTO/profileconditionvalue.h"

namespace Jellyfin {
namespace DTO {

class ProfileCondition : public QObject {
	Q_OBJECT
public:
	explicit ProfileCondition(QObject *parent = nullptr);
	static ProfileCondition *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(ProfileConditionType condition READ condition WRITE setCondition NOTIFY conditionChanged)
	Q_PROPERTY(ProfileConditionValue property READ property WRITE setProperty NOTIFY propertyChanged)
	Q_PROPERTY(QString value READ value WRITE setValue NOTIFY valueChanged)
	Q_PROPERTY(bool isRequired READ isRequired WRITE setIsRequired NOTIFY isRequiredChanged)

	ProfileConditionType condition() const;
	void setCondition(ProfileConditionType newCondition);
	
	ProfileConditionValue property() const;
	void setProperty(ProfileConditionValue newProperty);
	
	QString value() const;
	void setValue(QString newValue);
	
	bool isRequired() const;
	void setIsRequired(bool newIsRequired);
	
signals:
	void conditionChanged(ProfileConditionType newCondition);
	void propertyChanged(ProfileConditionValue newProperty);
	void valueChanged(QString newValue);
	void isRequiredChanged(bool newIsRequired);
protected:
	ProfileConditionType m_condition;
	ProfileConditionValue m_property;
	QString m_value;
	bool m_isRequired;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_PROFILECONDITION_H

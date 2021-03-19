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

#ifndef JELLYFIN_DTO_FORGOTPASSWORDRESULT_H
#define JELLYFIN_DTO_FORGOTPASSWORDRESULT_H

#include <QDateTime>
#include <QJsonObject>
#include <QObject>
#include <QString>

#include "JellyfinQt/DTO/forgotpasswordaction.h"

namespace Jellyfin {
namespace DTO {

class ForgotPasswordResult : public QObject {
	Q_OBJECT
public:
	explicit ForgotPasswordResult(QObject *parent = nullptr);
	static ForgotPasswordResult *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	Q_PROPERTY(ForgotPasswordAction action READ action WRITE setAction NOTIFY actionChanged)
	/**
	 * @brief Gets or sets the pin file.
	 */
	Q_PROPERTY(QString pinFile READ pinFile WRITE setPinFile NOTIFY pinFileChanged)
	/**
	 * @brief Gets or sets the pin expiration date.
	 */
	Q_PROPERTY(QDateTime pinExpirationDate READ pinExpirationDate WRITE setPinExpirationDate NOTIFY pinExpirationDateChanged)

	ForgotPasswordAction action() const;
	void setAction(ForgotPasswordAction newAction);
	
	QString pinFile() const;
	void setPinFile(QString newPinFile);
	
	QDateTime pinExpirationDate() const;
	void setPinExpirationDate(QDateTime newPinExpirationDate);
	
signals:
	void actionChanged(ForgotPasswordAction newAction);
	void pinFileChanged(QString newPinFile);
	void pinExpirationDateChanged(QDateTime newPinExpirationDate);
protected:
	ForgotPasswordAction m_action;
	QString m_pinFile;
	QDateTime m_pinExpirationDate;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_FORGOTPASSWORDRESULT_H

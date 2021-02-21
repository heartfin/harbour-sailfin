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

#ifndef JELLYFIN_DTO_UTCTIMERESPONSE_H
#define JELLYFIN_DTO_UTCTIMERESPONSE_H

#include <QDateTime>
#include <QJsonObject>
#include <QObject>

namespace Jellyfin {
namespace DTO {

class UtcTimeResponse : public QObject {
	Q_OBJECT
public:
	explicit UtcTimeResponse(QObject *parent = nullptr);
	static UtcTimeResponse *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets the UTC time when request has been received.
	 */
	Q_PROPERTY(QDateTime requestReceptionTime READ requestReceptionTime WRITE setRequestReceptionTime NOTIFY requestReceptionTimeChanged)
	/**
	 * @brief Gets the UTC time when response has been sent.
	 */
	Q_PROPERTY(QDateTime responseTransmissionTime READ responseTransmissionTime WRITE setResponseTransmissionTime NOTIFY responseTransmissionTimeChanged)

	QDateTime requestReceptionTime() const;
	void setRequestReceptionTime(QDateTime newRequestReceptionTime);
	
	QDateTime responseTransmissionTime() const;
	void setResponseTransmissionTime(QDateTime newResponseTransmissionTime);
	
signals:
	void requestReceptionTimeChanged(QDateTime newRequestReceptionTime);
	void responseTransmissionTimeChanged(QDateTime newResponseTransmissionTime);
protected:
	QDateTime m_requestReceptionTime;
	QDateTime m_responseTransmissionTime;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_UTCTIMERESPONSE_H

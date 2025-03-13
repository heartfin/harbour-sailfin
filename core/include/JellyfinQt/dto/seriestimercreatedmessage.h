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

#ifndef JELLYFIN_DTO_SERIESTIMERCREATEDMESSAGE_H
#define JELLYFIN_DTO_SERIESTIMERCREATEDMESSAGE_H

#include <QJsonObject>
#include <QJsonValue>
#include <QSharedPointer>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/sessionmessagetype.h"
#include "JellyfinQt/dto/timereventinfo.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class SeriesTimerCreatedMessage {
public:
	SeriesTimerCreatedMessage(	
		QSharedPointer<TimerEventInfo> data,			
		QString messageId,			
		SessionMessageType messageType		
	);

	SeriesTimerCreatedMessage(const SeriesTimerCreatedMessage &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(SeriesTimerCreatedMessage &other);
	
	static SeriesTimerCreatedMessage fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QSharedPointer<TimerEventInfo> data() const;

	void setData(QSharedPointer<TimerEventInfo> newData);

	/**
	 * @brief Gets or sets the message id.
	 */
	QString messageId() const;
	/**
	* @brief Gets or sets the message id.
	*/
	void setMessageId(QString newMessageId);


	SessionMessageType messageType() const;

	void setMessageType(SessionMessageType newMessageType);


protected:
	QSharedPointer<TimerEventInfo> m_data = QSharedPointer<TimerEventInfo>();
	QString m_messageId;
	SessionMessageType m_messageType;

private:
	// Private constructor which generates an invalid object, for use withing SeriesTimerCreatedMessage::fromJson();
	SeriesTimerCreatedMessage();
};


} // NS DTO

namespace Support {

using SeriesTimerCreatedMessage = Jellyfin::DTO::SeriesTimerCreatedMessage;

template <>
SeriesTimerCreatedMessage fromJsonValue(const QJsonValue &source, convertType<SeriesTimerCreatedMessage>);

template<>
QJsonValue toJsonValue(const SeriesTimerCreatedMessage &source, convertType<SeriesTimerCreatedMessage>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_SERIESTIMERCREATEDMESSAGE_H

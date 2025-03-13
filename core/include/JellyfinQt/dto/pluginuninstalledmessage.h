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

#ifndef JELLYFIN_DTO_PLUGINUNINSTALLEDMESSAGE_H
#define JELLYFIN_DTO_PLUGINUNINSTALLEDMESSAGE_H

#include <QJsonObject>
#include <QJsonValue>
#include <QSharedPointer>
#include <QString>
#include <optional>

#include "JellyfinQt/dto/plugininfo.h"
#include "JellyfinQt/dto/sessionmessagetype.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
// Forward declaration
class ApiClient;
}
namespace Jellyfin {
namespace DTO {


class PluginUninstalledMessage {
public:
	PluginUninstalledMessage(	
		QSharedPointer<PluginInfo> data,			
		QString messageId,			
		SessionMessageType messageType		
	);

	PluginUninstalledMessage(const PluginUninstalledMessage &other);
	
	/**
	 * Replaces the data being hold by this class with that of the other.
	 */
	void replaceData(PluginUninstalledMessage &other);
	
	static PluginUninstalledMessage fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson() const;
	
	// Properties

	QSharedPointer<PluginInfo> data() const;

	void setData(QSharedPointer<PluginInfo> newData);

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
	QSharedPointer<PluginInfo> m_data = QSharedPointer<PluginInfo>();
	QString m_messageId;
	SessionMessageType m_messageType;

private:
	// Private constructor which generates an invalid object, for use withing PluginUninstalledMessage::fromJson();
	PluginUninstalledMessage();
};


} // NS DTO

namespace Support {

using PluginUninstalledMessage = Jellyfin::DTO::PluginUninstalledMessage;

template <>
PluginUninstalledMessage fromJsonValue(const QJsonValue &source, convertType<PluginUninstalledMessage>);

template<>
QJsonValue toJsonValue(const PluginUninstalledMessage &source, convertType<PluginUninstalledMessage>);

} // NS DTO
} // NS Jellyfin

#endif // JELLYFIN_DTO_PLUGINUNINSTALLEDMESSAGE_H

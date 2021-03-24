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

#ifndef JELLYFIN_DTO_CHANNELMAPPINGOPTIONSDTO_H
#define JELLYFIN_DTO_CHANNELMAPPINGOPTIONSDTO_H

#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QSharedPointer>
#include <QString>
#include <QStringList>
#include <optional>

#include "JellyfinQt/DTO/nameidpair.h"
#include "JellyfinQt/DTO/namevaluepair.h"
#include "JellyfinQt/DTO/tunerchannelmapping.h"
#include "JellyfinQt/support/jsonconv.h"

namespace Jellyfin {
namespace DTO {


class ChannelMappingOptionsDto {
public:ChannelMappingOptionsDto();ChannelMappingOptionsDto(const ChannelMappingOptionsDto &other);
	
	static ChannelMappingOptionsDto fromJson(QJsonObject source);
	void setFromJson(QJsonObject source);
	QJsonObject toJson();
	
	// Properties
	/**
	 * @brief Gets or sets list of tuner channels.
	 */
	QList<QSharedPointer<TunerChannelMapping>> tunerChannels() const;
	/**
	* @brief Gets or sets list of tuner channels.
	*/
	void setTunerChannels(QList<QSharedPointer<TunerChannelMapping>> newTunerChannels);
	/**
	 * @brief Gets or sets list of provider channels.
	 */
	QList<QSharedPointer<NameIdPair>> providerChannels() const;
	/**
	* @brief Gets or sets list of provider channels.
	*/
	void setProviderChannels(QList<QSharedPointer<NameIdPair>> newProviderChannels);
	/**
	 * @brief Gets or sets list of mappings.
	 */
	QList<QSharedPointer<NameValuePair>> mappings() const;
	/**
	* @brief Gets or sets list of mappings.
	*/
	void setMappings(QList<QSharedPointer<NameValuePair>> newMappings);
	/**
	 * @brief Gets or sets provider name.
	 */
	QString providerName() const;
	/**
	* @brief Gets or sets provider name.
	*/
	void setProviderName(QString newProviderName);

protected:
	QList<QSharedPointer<TunerChannelMapping>> m_tunerChannels;
	QList<QSharedPointer<NameIdPair>> m_providerChannels;
	QList<QSharedPointer<NameValuePair>> m_mappings;
	QString m_providerName;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_CHANNELMAPPINGOPTIONSDTO_H

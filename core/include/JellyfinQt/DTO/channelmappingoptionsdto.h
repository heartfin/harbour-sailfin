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
#include <QList>
#include <QObject>
#include <QString>
#include <QStringList>

namespace Jellyfin {
namespace DTO {

class NameIdPair;
class NameValuePair;
class TunerChannelMapping;

class ChannelMappingOptionsDto : public QObject {
	Q_OBJECT
public:
	explicit ChannelMappingOptionsDto(QObject *parent = nullptr);
	static ChannelMappingOptionsDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets list of tuner channels.
	 */
	Q_PROPERTY(QList<TunerChannelMapping *> tunerChannels READ tunerChannels WRITE setTunerChannels NOTIFY tunerChannelsChanged)
	/**
	 * @brief Gets or sets list of provider channels.
	 */
	Q_PROPERTY(QList<NameIdPair *> providerChannels READ providerChannels WRITE setProviderChannels NOTIFY providerChannelsChanged)
	/**
	 * @brief Gets or sets list of mappings.
	 */
	Q_PROPERTY(QList<NameValuePair *> mappings READ mappings WRITE setMappings NOTIFY mappingsChanged)
	/**
	 * @brief Gets or sets provider name.
	 */
	Q_PROPERTY(QString providerName READ providerName WRITE setProviderName NOTIFY providerNameChanged)

	QList<TunerChannelMapping *> tunerChannels() const;
	void setTunerChannels(QList<TunerChannelMapping *> newTunerChannels);
	
	QList<NameIdPair *> providerChannels() const;
	void setProviderChannels(QList<NameIdPair *> newProviderChannels);
	
	QList<NameValuePair *> mappings() const;
	void setMappings(QList<NameValuePair *> newMappings);
	
	QString providerName() const;
	void setProviderName(QString newProviderName);
	
signals:
	void tunerChannelsChanged(QList<TunerChannelMapping *> newTunerChannels);
	void providerChannelsChanged(QList<NameIdPair *> newProviderChannels);
	void mappingsChanged(QList<NameValuePair *> newMappings);
	void providerNameChanged(QString newProviderName);
protected:
	QList<TunerChannelMapping *> m_tunerChannels;
	QList<NameIdPair *> m_providerChannels;
	QList<NameValuePair *> m_mappings;
	QString m_providerName;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_CHANNELMAPPINGOPTIONSDTO_H

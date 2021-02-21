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

#ifndef JELLYFIN_DTO_SETCHANNELMAPPINGDTO_H
#define JELLYFIN_DTO_SETCHANNELMAPPINGDTO_H

#include <QJsonObject>
#include <QObject>
#include <QString>

namespace Jellyfin {
namespace DTO {

class SetChannelMappingDto : public QObject {
	Q_OBJECT
public:
	explicit SetChannelMappingDto(QObject *parent = nullptr);
	static SetChannelMappingDto *fromJSON(QJsonObject source, QObject *parent = nullptr);
	void updateFromJSON(QJsonObject source);
	QJsonObject toJSON();

	/**
	 * @brief Gets or sets the provider id.
	 */
	Q_PROPERTY(QString providerId READ providerId WRITE setProviderId NOTIFY providerIdChanged)
	/**
	 * @brief Gets or sets the tuner channel id.
	 */
	Q_PROPERTY(QString tunerChannelId READ tunerChannelId WRITE setTunerChannelId NOTIFY tunerChannelIdChanged)
	/**
	 * @brief Gets or sets the provider channel id.
	 */
	Q_PROPERTY(QString providerChannelId READ providerChannelId WRITE setProviderChannelId NOTIFY providerChannelIdChanged)

	QString providerId() const;
	void setProviderId(QString newProviderId);
	
	QString tunerChannelId() const;
	void setTunerChannelId(QString newTunerChannelId);
	
	QString providerChannelId() const;
	void setProviderChannelId(QString newProviderChannelId);
	
signals:
	void providerIdChanged(QString newProviderId);
	void tunerChannelIdChanged(QString newTunerChannelId);
	void providerChannelIdChanged(QString newProviderChannelId);
protected:
	QString m_providerId;
	QString m_tunerChannelId;
	QString m_providerChannelId;
};

} // NS Jellyfin
} // NS DTO

#endif // JELLYFIN_DTO_SETCHANNELMAPPINGDTO_H
